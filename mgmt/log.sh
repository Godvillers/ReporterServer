#!/usr/bin/env bash

set -euo pipefail

follow=-f
tail=10

opts=`getopt -o F -l tail: -n "$0" -- "$@"`
[ $? = 0 ] || exit 2
eval set -- "$opts"
until [ "$1" = -- ]; do
    case $1 in
        -F)
            follow=
            ;;

        --tail)
            tail="$2"
            shift
            ;;
    esac
    shift
done
shift

exec docker logs $follow --tail="$tail" "$@" gvrepsrv
