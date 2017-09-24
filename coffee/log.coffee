"use strict"


after = (ms, action) ->
    setTimeout action, ms


getTurn = ->
    try +document.querySelector("#m_fight_log .block_h .block_title").data.match(/\d+/)[0]
    catch then 0


progressTimer = null


animateProgressBar = (elapsed) ->
    try style = document.querySelector("#turn_pbar .p_bar div").style
    catch then return

    style.transition = "none"
    clearTimeout progressTimer if progressTimer?
    progressTimer =
        if elapsed >= 20
            style.width = "100%"
            null
        else
            style.width = "#{elapsed * 5}%"
            after 250, ->
                style.transition = "width #{19.75 - elapsed}s steps(#{79 - elapsed * 4}, start)"
                style.width = "100%"
                progressTimer = null


socket = null


connect = ->
    socket = new WebSocket "ws://#{location.host}#{location.pathname}/ws"
    justConnected = true
    socket.onmessage = (msg) ->
        response = JSON.parse msg.data
        if (url = response.redirect)?
            location.replace url
        else if response.turn > getTurn()
            document.getElementById("alls").outerHTML = response.allies

            map = document.getElementById "map_wrap"
            scrollValue = map.scrollLeft / map.scrollWidth
            document.getElementById("s_map").outerHTML = response.map
            map = document.getElementById "map_wrap"
            map.scrollLeft = scrollValue * map.scrollWidth

            document.getElementById("m_fight_log").outerHTML = response.log

            animateProgressBar if justConnected then response.ago else 0

        justConnected = false

    socket.onclose = -> setTimeout connect, 3000


addEventListener "DOMContentLoaded", ->
    animateProgressBar updatedAgo
    connect()
