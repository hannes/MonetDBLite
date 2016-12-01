from distutils import sysconfig
print(sysconfig.get_config_var('BINDIR').replace('\\', '/') + '/libs/libpython%s.a' % sysconfig.get_config_var('VERSION'))
