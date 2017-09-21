from waflib           import Utils
from waflib.Configure import conf


@conf
def select_flags(cnf, param, values):
    for flags in Utils.to_list(values):
        if cnf.check(**{ param: flags, "mandatory": False }):
            return Utils.to_list(flags)
    return [ ]
