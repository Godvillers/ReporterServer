Godville Reporter Server
========================

This is a server-side daemon for supporting [Godville Reporter][gvrep].

[gvrep]: https://github.com/Godvillers/Reporter


Building
--------

This project is implemented in the [D Programming Language][dlang], so you'll need a
[D Compiler][dmd-download] to build it. DMD is the easiest one to install.

To get a release version, run from the project root:

```sh
dub upgrade
./waf configure build
dub build -brelease-nobounds
```

[dlang]:        https://dlang.org
[dmd-download]: https://dlang.org/download


Running
-------

`./gvrepsrv [-p8000]`

However, the server is recommended to be run under [Supervisor][supervisor] so that it will
auto-restart if/when crashing. If you install Supervisor with your distribution's package manager,
it will most likely run on system startup. However, when installing via `pip`, it will not.
[Look here][supervisord-startup] if you experience any troubles.

Look for its config file — something like `/etc/supervisord.conf` or
`/etc/supervisor/supervisord.conf`. If you can't find any, generate one:
`echo_supervisord_conf | sudo tee /etc/supervisord.conf >/dev/null`. Then either append the contents
of `gvrepsrv.conf` to it, or [include][supervisord-include] it — in the latter case it is highly
recommended to place it in a write-protected place, e.g. `/etc/supervisor/conf.d/`.

Check if the daemon is already running. If it is not, run it (`supervisord`). If it is, tell it to
reread the config file and reload managed programs (`supervisorctl update`).

And learn about [`supervisorctl` commands][supervisorctl]. They are simple and handy.

[supervisor]:          https://supervisord.readthedocs.io/en/latest
[supervisord-startup]: https://supervisord.readthedocs.io/en/latest/running.html#running-supervisord-automatically-on-startup
[supervisord-include]: https://supervisord.readthedocs.io/en/latest/configuration.html#include-section-settings
[supervisorctl]:       https://supervisord.readthedocs.io/en/latest/running.html#running-supervisorctl
