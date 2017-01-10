from distutils import sysconfig
import sys
sys.stdout.write(sysconfig.get_config_var('BINDIR').replace('\\', '/') + '/libs/libpython%s.a' % sysconfig.get_config_var('VERSION'))
