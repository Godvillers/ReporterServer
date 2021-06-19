#!/usr/bin/env bash

set -euo pipefail
[ $# -le 1 ] || exit 2
cd "`dirname "$0"`/.."

./waf configure build
DFLAGS=-mcpu=native dub build -brelease-nobounds
[ "${1-}" = --no-restart ] || exec supervisorctl -c supervisord.conf restart gvrepsrv
