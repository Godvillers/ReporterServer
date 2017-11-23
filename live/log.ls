"use strict"


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


getTurn = ->
    try +/\d+/.exec(document.querySelector '#m_fight_log .block_h .block_title' .textContent).0
    catch => 0


setProgress = (value) !->
    try document.querySelector '#turn_pbar .p_bar div' .style.width = "#{value}%"


progressTimer = null


runProgressTimer = (ago) !->
    basePoint = Date.now()
    clearInterval that if progressTimer?
    setProgress Math.min ago *= 5, 100
    progressTimer := every 250, !->
        if (progress = ago + (Date.now() - basePoint) * 5e-3) < 100 - 1e-5
            setProgress progress
        else
            setProgress 100
            clearInterval progressTimer
            progressTimer := null


socket = null


connect = !->
    socket := new WebSocket "ws://#{location.host}#{location.pathname}/ws"
    justConnected = true
    socket.binaryType = \arraybuffer
    socket.onmessage = (msg) !->
        response = timeIt "Decompression", -> decompress msg.data
        response = timeIt "JSON decoding", -> JSON.parse response
        if response.redirect?
            location.replace that
        else if response.turn > getTurn()
            document.getElementById \alls .outerHTML = response.allies

            map = document.getElementById \map_wrap
            scrollValue = map.scrollLeft / map.scrollWidth
            document.getElementById \s_map .outerHTML = response.map
            map = document.getElementById \map_wrap
            map.scrollLeft = scrollValue * map.scrollWidth

            document.getElementById \m_fight_log .outerHTML = response.log

            runProgressTimer if justConnected then response.ago else 0

        justConnected := false

    socket.onclose = !-> setTimeout connect, 3000


<-! addEventListener \DOMContentLoaded

runProgressTimer updatedAgo
connect()
