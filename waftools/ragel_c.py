from waflib.Task    import Task
from waflib.TaskGen import extension


def configure(cnf):
    cnf.find_program("ragel", var="RAGEL")

    cnf.env.append_value("RAGELFLAGS", "-C")

    if "version 6." not in cnf.cmd_and_log(cnf.env.RAGEL + ["--version"]):
        from waflib import Logs

        Logs.warn("You should be using Ragel 6. Compilability under Ragel 7 is not guaranteed.")


@extension(".c.rl")
def compile_ragel(tgen, source):
    target = source.change_ext("") # Strip ".rl".
    if getattr(tgen, "in_source_tree", False):
        target = target.get_src()
    tgen.create_task("ragel", source, target)


class ragel(Task):
    run_str = "${RAGEL} ${RAGELFLAGS} ${SRC} -o ${TGT}"
    color = "BLUE"
