FROM debian:stretch
# FROM buildpack-deps:stretch # You can use this one if you have other images based on it.

# Binutils and GCC are dependencies for DMD.
# The D OpenSSL bindings have some deprecated functions bound, so force installing SSL 1.0.
RUN set -eux;                                                          \
    apt-get update;                                                    \
    apt-get install -y                                                 \
        binutils gcc libevent-dev libssl1.0-dev supervisor zlib1g-dev; \
    rm -rf /var/lib/apt/lists/*

ENV DMD_VERSION 2.077.0
RUN set -eux;                                                                       \
    apt-get update;                                                                 \
    apt-get install -y curl;                                                        \
    cd /usr/src;                                                                    \
    readonly FILENAME=dmd_"$DMD_VERSION"-0_amd64.deb;                               \
    curl -fsSLO http://downloads.dlang.org/releases/2.x/"$DMD_VERSION"/"$FILENAME"; \
    dpkg -i "$FILENAME";                                                            \
    apt-get purge --auto-remove -y curl;                                            \
    rm -rf "$FILENAME" /var/lib/apt/lists/*

WORKDIR /gvrepsrv
CMD ["docker/main.sh"]
