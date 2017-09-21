APPNAME = "gvrepsrv"
VERSION = "0.1.0"


def options(opt):
    opt.add_option(
        "-d", "--dev", action="store_true", default=False,
        help="Configure developer's environment")


def configure(cnf):
    cnf.env.DEV = cnf.options.dev
    if cnf.env.DEV:
        cnf.find_program("coffee", var="COFFEE")
        cnf.find_program("sass", var="SASS")

        cnf.env.append_value("SASSFLAGS", ["--style=compressed", "--sourcemap=none"])


def build(bld):
    if bld.env.DEV:
        bld(
            name="coffee",
            rule="${COFFEE} -co ../static ../coffee",
            source=bld.path.ant_glob("coffee/**/*.coffee"),
        )
        bld(
            name="sass",
            rule="${SASS} ${SASSFLAGS} ${SRC} ${TGT}",
            # TODO: Generalize.
            source="style/log.sass",
            target="static/log.css",
        )


def dist(dst):
    dst.files = dst.path.ant_glob("""
        src/**/*.[cdh]
        static/
        views/**/[^_]*
        dub.sdl
        gvrepsrv.conf
        LICENSE
        README.md
        waf
        wscript
    """)
