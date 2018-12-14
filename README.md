Godville Reporter Server
========================

This is a server-side daemon for supporting [Godville Reporter][gvrep].

[gvrep]: https://github.com/Godvillers/Reporter


The Easy Way
------------

The server can be used inside a Docker container. The image is 500 MB in size, plus 80 MB for the
Docker itself.

[Read this][mgmt], then `git submodule update --init`. Install `docker.io` and `docker-compose`
(in Debian-based distributions), add yourself to `docker` group.

* `mgmt/update.sh [-P | --no-pull]` takes care of everything: downloads the latest source
  (optionally), builds the image, compiles and restarts the server. It might fail, though, if you
  have a dirty working tree.
* `mgmt/status.sh` checks whether the container and the server inside it are running.
* `mgmt/stop.sh` shuts down the container.
* `mgmt/log.sh [-F] [--tail <n>]` displays *build-time* logs (all other logs go to `logs/`). If `-F`
  is given, it will exit immediately instead of "following". If `--tail` is given, `<n>` last lines
  are shown (10 by default).

[mgmt]: https://github.com/Godvillers/ReporterServerManagement


The Hard Way
------------

### Prerequisites ###

`gcc libevent-dev libssl1.0-dev python zlib1g-dev`

This project is implemented in the [D Programming Language][dlang], so you'll need a
[D Compiler][dmd-download] to build it. DMD is the easiest one to install.


### Building ###

To get a release version, run from the project root:

```sh
dub upgrade
./waf configure build
dub build -brelease-nobounds
# Or, to tweak for your CPU:
DFLAGS=-mcpu=native dub build -brelease-nobounds
```

[dlang]:        https://dlang.org
[dmd-download]: https://dlang.org/download


### Running ###

`./gvrepsrv [-p8000] [--prefix=/] [--max-memory=128M]`

However, the server is recommended to be run under [Supervisor][supervisor] so that it will
auto-restart if/when crashing.

Edit [supervisord.conf][] and [gvrepsrv.conf][] (or, even better, make a copy of them). If you are
not going to run `supervisord` as root, you'll likely need to change some paths. Then, ensure there
is exactly one instance of `supervisord -c/abspath/supervisord.conf` (a Cron task would suffice):

```sh
#!/usr/bin/env bash

set -euo pipefail

readonly CONFIG_FILE=/abspath/supervisord.conf
readonly PID_FILE=/var/run/supervisord.pid

set +e
pid=`cat -- "$PID_FILE" 2>/dev/null`
status=$?
set -e

[ "$status" = 0 ] && kill -0 -- "$pid" 2>/dev/null || exec supervisord -c"$CONFIG_FILE"
```

The daemon is controlled by [`supervisorctl` commands][supervisorctl]. For example,
`supervisorctl -c"$CONFIG_FILE" update` or `supervisorctl -c"$CONFIG_FILE" restart gvrepsrv`.

[supervisor]:       https://supervisord.readthedocs.io/en/latest
[supervisord.conf]: https://github.com/Godvillers/ReporterServer/blob/master/supervisord.conf
[gvrepsrv.conf]:    https://github.com/Godvillers/ReporterServer/blob/master/gvrepsrv.conf
[supervisorctl]:    https://supervisord.readthedocs.io/en/latest/running.html#running-supervisorctl
