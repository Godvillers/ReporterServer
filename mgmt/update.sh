#!/usr/bin/env bash

set -euo pipefail
[ $# -le 1 ] || exit 2
cd "`dirname "$0"`/.."

get_image_ids() {
    docker images | awk "/^$1/ { print \$3 }"
}

# Can fail when trying to remove an image used by a container; ignore that.
get_image_ids '<none>' | { xargs --no-run-if-empty docker rmi >/dev/null || :; }

[ "${1-}" = -P -o "${1-}" = --no-pull ] || git pull

old_id=`get_image_ids 'gvrep\/srv'`
docker-compose build
new_id=`get_image_ids 'gvrep\/srv'`

# First try to do smooth update if possible.
[ "$new_id" = "$old_id" ] \
&& docker-compose exec gvrepsrv /gvrepsrv/docker/compile.sh \
|| exec docker-compose up -d
