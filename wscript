from waflib.Tools.compiler_c import c_compiler


APPNAME = "gvrepsrv"
VERSION = "0.1.0"


c_compiler["win32"].remove("msvc")


def options(opt):
    opt.load("compiler_c")
    opt.load("select_flags", tooldir="waftools")

    opt.add_option(
        "-d", "--dev", action="store_true", default=False,
        help="Configure developer's environment")


def configure(cnf):
    cnf.load("compiler_c")
    cnf.load("select_flags", tooldir="waftools")

    c_flags = """
        -std=c99 -O2
        -Wall -Wextra -pedantic -Wformat=2 -Wfloat-equal -Wredundant-decls
        -Wconversion -Wcast-qual -Wcast-align -Wshadow
    """.split()

    if cnf.env.COMPILER_CC == "clang":
        c_flags.append("-Wno-unused-const-variable")
    else:
        c_flags += cnf.select_flags("cflags", "-Wlogical-op")
    # Clang supports -fdiagnostics-color but ignores it, so try its -fcolor-diagnostics first.
    c_flags += cnf.select_flags("cflags", "-fcolor-diagnostics -fdiagnostics-color")

    cnf.env.prepend_value("CFLAGS", c_flags)
    cnf.env.append_value("INCLUDES", "src")

    cnf.env.DEV = cnf.options.dev
    if cnf.env.DEV:
        cnf.load("ragel_c", tooldir="waftools")
        cnf.find_program("lsc", var="LSC")
        cnf.find_program("sass", var="SASS")

        cnf.env.append_value("RAGELFLAGS", "-G2")
        cnf.env.append_value("SASSFLAGS", ["--style=compressed", "--sourcemap=none"])


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
            target="static/log.css",
        )
        bld(
            name="ragel",
            source=bld.path.ant_glob("src/**/*.rl"),
            in_source_tree=True,
        )

    bld.stlib(
        source=bld.path.ant_glob("src/parsers/**/*.c"),
        target="parsers",
    )


def dist(dst):
    dst.files = dst.path.ant_glob("""
        src/dy/
        src/**/*.[cdh]
        static/
        views/**/[^_]*
        waftools/select_flags.py
        dub.sdl
        gvrepsrv.conf
        LICENSE
        README.md
        waf
        wscript
    """)
