every = (ms, action) ->
    setInterval action, ms


getTurn = ->
    try +document.querySelector("#m_fight_log .block_h .block_title").innerText.match(/\d+/)[0]
    catch then 0


setProgress = (value) ->
    div = document.querySelector "#turn_pbar .p_bar"
    div.title = "прогресс хода — #{Math.round value}%"
    div.getElementsByTagName("div")[0].style.width = "#{value}%"


progressTimer = null


runProgressTimer = ->
    setProgress progress = 0
    clearInterval progressTimer if progressTimer?
    progressTimer = every 500, ->
        setProgress progress += 2.5
        if progress > 100 - 1e-5
            clearInterval progressTimer
            progressTimer = null


socket = null


connect = ->
    socket = new WebSocket "ws://#{location.host}#{location.pathname}/ws"
    socket.onmessage = (msg) ->
        response = JSON.parse msg.data
        if (url = response.redirect)?
            location.replace url
        else if +response.turn > getTurn()
            document.getElementById("alls").outerHTML = response.allies

            map = document.getElementById "map_wrap"
            scrollValue = map.scrollLeft / map.scrollWidth
            document.getElementById("s_map").outerHTML = response.map
            map.scrollLeft = scrollValue * map.scrollWidth

            document.getElementById("m_fight_log").outerHTML = response.log

            runProgressTimer()

    socket.onclose = -> setTimeout connect, 3000


addEventListener "DOMContentLoaded", ->
    runProgressTimer()
    connect()
