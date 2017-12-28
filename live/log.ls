"use strict"


$id = -> document.getElementById it
$q  = -> document.querySelector  it


contains = (haystack, needle) ->
    !!~haystack.indexOf needle


format02d = (n) ->
    "0#{n}".slice -2


formatTime = (minutes) ->
    "#{format02d Math.floor minutes / 60}:#{format02d minutes % 60}"


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

    $id \map_wrap
        scrollValue = ..scrollLeft / ..scrollWidth
    $id \s_map .outerHTML = map
    $id \map_wrap
        ..scrollLeft = scrollValue * ..scrollWidth

    $id \m_fight_log .outerHTML = chronicle


checksumCache = { }

calcSymbolChecksum = (c) ->
    return that if checksumCache[c]?

    canvas = document.createElement \canvas
    return 0 unless canvas.getContext? && (context = canvas.getContext \2d)? && context.fillText?
    context
        ..textBaseline = \top
        ..font = "32px Arial"
        ..fillText c, 0, 0
        img = ..getImageData 0, 0, 32, 32

    return 0 unless img?
    result = 0; [result += .. for img.data]
    checksumCache[c] = result


shouldUseCustomFont =
    if !window.MSStream? && /iP[ao]d|iPhone/.test navigator.userAgent
        -> no
    else if \
        (navigator.userAgent `contains` \Firefox && ! navigator.userAgent `contains` \Macintosh) ||
        !(undrawableChecksum = calcSymbolChecksum '\uFFFF')
        -> yes
    else
        -> it && ("↖↗←→↙↘↑↓" `contains` it || calcSymbolChecksum(it) == undrawableChecksum)


postprocessPage = !->
    # Localize the time.
    offset = new Date!getTimezoneOffset!
    for node in document.getElementsByClassName \d_time
    when (//(\d*) \s* : \s* (\d*)//.exec node.textContent)?
        node.textContent = formatTime (+that.1 * 60 + +that.2 - offset) %% (24 * 60)

    # Change font on the map where needed.
    for tile in document.getElementsByClassName \tile
    when (text = tile.getElementsByTagName \text .0)? && shouldUseCustomFont text.textContent.trim!
        tile.classList.add \em_font


socket = null
retryEvery = 3
retryCount = 0


disconnect = !->
    if socket?
        socket.onclose = null
        socket.close!
        socket := null


connect = !->
    if socket?
        console.warn "An old socket still existed"
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
            retryCount := 0 # Reset the counter.
            updatePage response
            postprocessPage!
            runProgressTimer justConnected && response.ago, response.stepDuration

        justConnected := 0 # false


# Chrome does not support closing a WebSocket connection with a code other than 1000 or 3000...4999,
# so we can't use 1001 Going Away.
addEventListener \unload, disconnect

<-! addEventListener \DOMContentLoaded

postprocessPage!
runProgressTimer gUpdatedAgo, gStepDuration
connect!
