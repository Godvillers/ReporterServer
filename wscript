APPNAME = "gvrepsrv"


def options(opt):
    opt.add_option(
        "-d", "--dev", action="store_true", default=False,
        help="Configure developer's environment")


def configure(cnf):
    cnf.env.DEV = cnf.options.dev
    if cnf.env.DEV:
        cnf.find_program("lsc", var="LSC")
        cnf.find_program("sass", var="SASS")

        cnf.env.append_value("SASSFLAGS", ["--style=compressed", "--sourcemap=none", "--no-cache"])


def build(bld):
    if bld.env.DEV:
        bld(
            name="livescript",
            rule="${LSC} -co ../static ../live",
            source=bld.path.ant_glob("live/**/*.ls"),
        )
        bld(
            name="sass",
            rule="${SASS} ${SASSFLAGS} ${SRC} ${TGT}",
            # TODO: Generalize.
            source="style/log.sass",
            target=bld.path.make_node("static/log.css"),
        )


def dist(dst):
    dst.files = dst.path.ant_glob("""
        docker/
        mgmt/
        src/
        static/
        views/**/[^_]*
        dub.sdl
        gvrepsrv.conf
        LICENSE
        README.md
        supervisord.conf
        waf
        wscript
    """)
