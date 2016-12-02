#!/usr/bin/env python
# -*- coding: utf-8 -*-

from setuptools import setup, find_packages
from distutils import sysconfig
import ntpath
import os
import sys
from shutil import copyfile

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
basedir = os.path.dirname(os.path.realpath(__file__))
if os.name == 'nt':
    print("FIXME: link to shipped .dll file depending on 32-bit/64-bit windows and python 2/python 3")
    monetdb_shared_lib_base = "libmonetdb5.dll"
    monetdb_shared_lib = os.path.join(basedir, monetdb_shared_lib_base)
    so_extension = '.dll'
    exit(1)
else:
    try:
        import numpy
    except:
        print('Building MonetDBLite from source requires NumPy to be installed.')
        exit(1)

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

final_shared_library = os.path.join('monetdblite', monetdb_shared_lib_base)

copyfile(monetdb_shared_lib, final_shared_library)
if os.name == 'nt':
    copyfile(os.path.join(basedir, 'msvcr100.dll'), os.path.join('monetdblite', 'msvcr100.dll'))
    copyfile(os.path.join(basedir, 'pcre.dll'), os.path.join('monetdblite', 'pcre.dll'))

# now actually create the package
# the package is a single C file that only dynamically
# loads functions from libmonetdb5.[so|dylib|dll]
setup(
    name = "monetdblite",
    version = '0.1',
    description = 'Embedded MonetDB Python Database.',
    author = 'Mark Raasveldt, Hannes Mühleisen',
    author_email = 'm.raasveldt@cwi.nl',
    keywords = 'MonetDB, MonetDBLite, Database',
    packages = find_packages(),
    package_data={
        'monetdblite': ['*.%s' % so_extension],
    },
    url="https://github.com/hannesmuehleisen/MonetDBLite/tree/Dec2016Lite-Python"
    )

