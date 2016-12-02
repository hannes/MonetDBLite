import numpy
from distutils import sysconfig

pyver = sysconfig.get_config_var('VERSION')
getvar = sysconfig.get_config_var
flags = ['-I' + sysconfig.get_python_inc(),'-I' + sysconfig.get_python_inc(plat_specific=True)]
flags.append('-I' + numpy.get_include())

print(' '.join(flags).replace('\\', '/'))
