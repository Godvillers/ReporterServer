#!/usr/bin/env bash

# This is a Docker container's entry point.

set -euo pipefail
[ $# = 0 ] || exit 2
cd "`dirname "$0"`/.."

docker/compile.sh --no-restart
echo Done.
exec supervisord --nodaemon -c"$PWD/supervisord.conf" >/dev/null
