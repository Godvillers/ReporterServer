"use strict"


$id = -> document.getElementById it
$q  = -> document.querySelector  it


after = (ms, action) ->
    setTimeout action, ms


every = (ms, action) ->
    setInterval action, ms


timeIt = (title, action) ->
    console.time title
    try
        action()
    finally
        console.timeEnd title


decompress =
    if window.TextDecoder?
        # Faster.
        (data) -> new TextDecoder \utf-8 .decode pako.inflate data
    else
        (data) -> pako.inflate data, to: \string


getStep = ->
    try +/\d+/.exec($q '#m_fight_log .block_h .block_title' .textContent).0
    catch => 0


setProgress = (value) !->
    try $q '#turn_pbar .p_bar div' .style.width = "#{value}%"


progressTimer = null


runProgressTimer = (ago, stepDuration) !->
    percentsPerMillisecond = 0.1 / stepDuration
    basePoint = Date.now()
    clearInterval progressTimer if progressTimer?
    setProgress Math.min ago *= percentsPerMillisecond * 1000, 100
    progressTimer := every 250, !->
        if (progress = ago + (Date.now() - basePoint) * percentsPerMillisecond) < 100 - 1e-5
            setProgress progress
        else
            setProgress 100
            clearInterval progressTimer
            progressTimer := null


socket = null
retryEvery = 3
retryCount = 0


connect = !->
    socket := new WebSocket do
        "
        #{if location.protocol == "https:" then "wss" else "ws"}://
        #{location.host}#{location.pathname}/ws#{location.search}
        "
    socket.onclose = !-> after 3000, connect
    justConnected = 1 # true
    socket.binaryType = \arraybuffer
    socket.onmessage = (msg) !->
        response = timeIt "Decompression", -> JSON.parse decompress msg.data
        if response.stayHere
            # The log is being deleted from the server, and we are asked to try fetching it later.
            {retryEvery, retryCount} := response
            socket.onclose = null
            socket.close()
            after response.retryAfter, connect
        else if (url = response.redirect)?
            if --retryCount > 0
                # We were asked to ignore redirections for a while.
                socket.onclose = null
                socket.close()
                after retryEvery, connect
            else
                location.replace url
        else if response.step > getStep()
            console.timeEnd "New step"
            retryCount := 0 # Reset the counter.

            $id \alls .outerHTML = response.allies

            map = $id \map_wrap
            scrollValue = map.scrollLeft / map.scrollWidth
            $id \s_map .outerHTML = response.map
            map = $id \map_wrap
            map.scrollLeft = scrollValue * map.scrollWidth

            $id \m_fight_log .outerHTML = response.chronicle

            runProgressTimer justConnected && response.ago, response.stepDuration
            console.time "New step"

        justConnected := 0 # false


<-! addEventListener \DOMContentLoaded

runProgressTimer gUpdatedAgo, gStepDuration
console.time "New step"
connect()
