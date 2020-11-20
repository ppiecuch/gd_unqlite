def can_build(env, platform):
    return env["os_family"] in ["os_windows", "os_unix"]


def configure(env):
    pass
