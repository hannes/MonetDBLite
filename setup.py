#!/usr/bin/env python
# -*- coding: utf-8 -*-

from distutils.core import setup, Extension
from distutils import sysconfig
import ntpath
import os
import sys
from shutil import copyfile

try:
    import numpy
except:
    print('MonetDBLite requires NumPy to be installed.')
    exit(1)

def get_python_include_flags():
    pyver = sysconfig.get_config_var('VERSION')
    getvar = sysconfig.get_config_var
    flags = ['-I' + sysconfig.get_python_inc(),
             '-I' + sysconfig.get_python_inc(plat_specific=True)]
    flags.extend(getvar('CFLAGS').split())
    flags.append('-I' + numpy.get_include())
    return ' '.join(flags)

def get_python_link_flags():
    pyver = sysconfig.get_config_var('VERSION')
    getvar = sysconfig.get_config_var
    libs = ['-lpython' + pyver]
    libs += getvar('LIBS').split()
    libs += getvar('SYSLIBS').split()
    if not getvar('Py_ENABLE_SHARED'):
        libs.insert(0, '-L' + getvar('LIBPL'))
    if not getvar('PYTHONFRAMEWORK'):
        libs.extend(getvar('LINKFORSHARED').split())
    return ' '.join(libs)

# if you change this you also need to change the init function in monetdblite_module.c
package_name = "monetdblite" 

basedir = os.path.dirname(os.path.realpath(__file__))
if os.name == 'nt':
    print("FIXME: link to shipped .dll file depending on 32-bit/64-bit windows and python 2/python 3")
    monetdb_shared_lib_base = "libmonetdb5.dll"
    monetdb_shared_lib = os.path.join(basedir, monetdb_shared_lib_base)
    exit(1)
else:
    # build the dynamic library (.so/.dylib) on linux/osx
    os.environ['MONETDBLITE_PYTHON_INCLUDE_FLAGS'] = get_python_include_flags();
    os.environ['MONETDBLITE_PYTHON_LINK_FLAGS'] = get_python_link_flags();
    current_directory = os.getcwd()
    os.chdir(basedir)
    os.system('./build-unix.sh')
    so_extension = os.popen('grep "SOEXT =" ./src/Makefile | head -n 1 | sed "s/SOEXT *= //"').read().strip()
    os.chdir(current_directory)
    monetdb_shared_lib_base = "libmonetdb5" + so_extension
    monetdb_shared_lib = os.path.join(basedir, monetdb_shared_lib_base)


# to get the path where the python library is build we build a temporary package (FIXME: maybe there's a better way to do this)
dist = setup(name="temporary_package")

# look through the output files of the temporary package to find the directory
output_directory = None
for file in dist.get_command_obj('install').get_outputs():
    if file.endswith('.egg-info'):
        output_directory = ntpath.dirname(file)
        break

if output_directory == None:
    print("Could not find output directory")
    exit(1)

# remove all files made by the temporary package
for file in dist.get_command_obj('install').get_outputs():
    os.remove(file)

copyfile(monetdb_shared_lib, os.path.join(output_directory, monetdb_shared_lib_base))

# now actually create the package
# the package is a single C file that only dynamically
# loads functions from libmonetdb5.[so|dylib|dll]
setup(
    name=package_name,
    version='0.1',
    description='Embedded MonetDB Python client.',
    author='Mark Raasveldt, Hannes Mühleisen',
    ext_modules=[Extension(
        name=package_name,
        sources=[os.path.join(basedir, 'monetdblite.c')],
        define_macros=[('MONETDBLITE_LIBRARY_PATH', '"' + os.path.join(output_directory, monetdb_shared_lib) + '"')],
        include_dirs=[numpy.get_include()],
        language='c'
        )
        ]
    )

