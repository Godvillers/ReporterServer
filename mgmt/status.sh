#!/usr/bin/env bash

set -euo pipefail
cd "`dirname "$0"`/.."

docker-compose ps "$@"
echo
exec docker-compose exec gvrepsrv supervisorctl -c supervisord.conf status
