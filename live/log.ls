"use strict"


$id = -> document.getElementById it
$q  = -> document.querySelector  it


after = (seconds, action) ->
    setTimeout action, seconds * 1000


every = (seconds, action) ->
    setInterval action, seconds * 1000


timeIt = (title, action) ->
    console.time title
    try
        action!
    finally
        console.timeEnd title


decompress =
    if window.TextDecoder?
        # Faster.
        (data) -> new TextDecoder!decode pako.inflate data
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
    basePoint = Date.now!
    clearInterval progressTimer if progressTimer?
    setProgress Math.min ago *= percentsPerMillisecond * 1000, 100
    progressTimer := every 0.25, !->
        if (progress = ago + (Date.now! - basePoint) * percentsPerMillisecond) < 100 - 1e-5
            setProgress progress
        else
            setProgress 100
            clearInterval progressTimer
            progressTimer := null


updatePage = ({allies, map, chronicle}) !->
    $id \alls .outerHTML = allies

    wrapper = $id \map_wrap
    scrollValue = wrapper.scrollLeft / wrapper.scrollWidth
    $id \s_map .outerHTML = map
    wrapper = $id \map_wrap
    wrapper.scrollLeft = scrollValue * wrapper.scrollWidth

    $id \m_fight_log .outerHTML = chronicle


format02d = (n) ->
    "0#{n}".slice -2


formatTime = (minutes) ->
    "#{format02d Math.floor minutes / 60}:#{format02d minutes % 60}"


postprocessPage = !->
    offset = new Date!getTimezoneOffset!
    for node in document.getElementsByClassName \d_time
        if (//(\d*) \s* : \s* (\d*)//.exec node.textContent)?
            node.textContent = formatTime (+that.1 * 60 + +that.2 - offset) %% (24 * 60)


socket = null
retryEvery = 3
retryCount = 0


disconnect = (code) !->
    if socket?
        socket.onclose = null
        socket.close code
        socket := null


connect = !->
    if socket?
        console.log "An old socket still existed"
        disconnect!

    socket := new WebSocket do
        "
        #{if location.protocol == "https:" then "wss" else "ws"}://
        #{location.host}#{location.pathname}/ws#{location.search}
        "
    socket.onclose = !->
        socket := null
        after 3, connect
    justConnected = 1 # true
    socket.binaryType = \arraybuffer
    socket.onmessage = (msg) !->
        response = timeIt "Decompression", -> JSON.parse decompress msg.data
        if response.stayHere
            # The log is being deleted from the server, and we are asked to try fetching it later.
            disconnect!
            {retryEvery, retryCount} := response
            after response.retryAfter, connect
        else if (url = response.redirect)?
            if --retryCount > 0
                # We were asked to ignore redirections for a while.
                disconnect!
                after retryEvery, connect
            else
                location.replace url # `disconnect` is called from the `unload` handler.
        else if response.step > getStep!
            console.timeEnd "New step"
            retryCount := 0 # Reset the counter.
            updatePage response
            postprocessPage!
            runProgressTimer justConnected && response.ago, response.stepDuration
            console.time "New step"

        justConnected := 0 # false


addEventListener \unload, !-> disconnect 1001 # Going Away

<-! addEventListener \DOMContentLoaded

postprocessPage!
runProgressTimer gUpdatedAgo, gStepDuration
console.time "New step"
connect!
