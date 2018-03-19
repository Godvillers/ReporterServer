API specification
=================

This document was written to aid Reporter client developers.

You need to perform a `POST /send` HTTP request to upload a single step of a chronicle. Recommended
encoding is (obviously) `multipart/form-data`. A set of required fields is called a "protocol" here.
There are multiple protocol versions, described below.

If a version is unknown or unsupported, the server responds with *501 Not Implemented*. If some
fields are missing or have invalid values, the server responds with *400 Bad Request*. You can
determine which versions are supported by querying [`/api.json`][api.json].

[api.json]: https://github.com/Godvillers/ReporterServer/blob/master/static/api.json
[v1]: #v1
[v2]: #v2
[v3]: #v3


## v1 ##

+ __protocolVersion__ *(int)*: `1`.
+ __agent__ *(string)*: A line identifying the user agent, typically, of the form
  `ClientName/ClientVersion`.
+ __link__ *(string)*: An absolute link to the log (e.g., `https://godville.net/duels/log/xxxxxxx`).
+ __stepDuration__ *(float)*: Number of seconds a single step lasts.
+ __scale__ *(float)*: The map scale. It is the radius of a circle, circumscribed around a tile's
  hexagon.
+ __step__ *(int)*: The step number, starting from 1.
+ __playerIndex__ *(int)*: The number of a player that streams the log, starting from 1. `0` can be
  passed here to indicate that player is unknown.
+ __cargo__ *(string)*: Contents of the streamer's ship's hold (e.g., \[♂][♀]).
+ __data__ *(string)*: `outerHTML` of allies, map, and chronicle blocks (in that order) joined
  together with `<&>`, then compressed with *deflate* or *gzip* algorithm, then Base64-encoded.
  *Higher compression rates are achieved when concatenating everything together. `<&>` was chosen as
  a delimiter because it cannot occur in HTMLs.*


## v2 ##

+ __protocolVersion__ *(int)*: `2`.
+ __agent__ *(string)*: See [v1][].
+ __link__ *(string)*: See [v1][].
+ __stepDuration__ *(float)*: See [v1][].
+ <strike>__scale__ *(float)*</strike>
+ __timezone__ *(int)*: Streamer's local time's offset from UTC, in minutes. E.g., MSK (which is
  UTC+3) should have a *timezone* equal to `180`.
+ __step__ *(int)*: See [v1][].
+ __playerNumber__ *(int)*: Renamed __playerIndex__ from [v1][].
+ __cargo__ *(string)*: See [v1][].
+ __data__ *(string)*: See [v1][].


## v3 ##

+ __protocolVersion__ *(int)*: `3`.
+ __agent__ *(string)*: See [v1][].
+ __link__ *(string)*: See [v1][].
+ __stepDuration__ *(float)*: See [v1][].
+ __timezone__ *(int)*: See [v2][].
+ __step__ *(int)*: See [v1][].
+ __playerNumber__ *(int)*: See [v2][].
+ __cargo__ *(string)*: See [v1][].
+ __data__ *(string)*: See [v1][].
+ __clientData__ *(string)*: Arbitrary JSON-encoded data. The Reporter does not use it in any way,
  except for propagating to a stream page. It's available there as `window.gReporterClientData` and
  updates on each step. If you don't need this functionality, pass `null`.
