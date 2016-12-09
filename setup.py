#!/usr/bin/env python
# -*- coding: utf-8 -*-

from setuptools import setup, find_packages
from distutils import sysconfig
import ntpath
import os
import sys
from shutil import copyfile
import subprocess

pypi_upload = 'MONETDBLITE_PIP_UPLOAD' in os.environ

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
    libs = ['-L' + sysconfig.get_config_var('LIBDIR') + ' -l' + sysconfig.get_config_var('LIBDEST').split(os.sep)[-1]]
    libs += getvar('LIBS').split()
    libs += getvar('SYSLIBS').split()
    if not getvar('Py_ENABLE_SHARED'):
        libs.insert(0, '-L' + getvar('LIBPL'))
    if not getvar('PYTHONFRAMEWORK'):
        libs.extend(getvar('LINKFORSHARED').split())
    return ' '.join(libs)

import os
libdir = sysconfig.get_config_var('LIBDIR')
print('PYTHON LIBDIR: %s' % libdir)
print(os.popen('ls "%s"' % (libdir)).read())
print('PYTHON LINKFLAGS')
print(get_python_link_flags())


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
    if not pypi_upload:
        # don't build the package if we are uploading to pip
        proc = subprocess.Popen(['./build-unix.sh'], stderr=subprocess.PIPE)
        if proc.wait() != 0:
            error = proc.stderr.read()
            raise Exception('Failed to compile MonetDBLite sources: ' + 
                ("No error specified" if error == None else 
                (error.decode('utf8') if sys.version_info.major >= 3 else error)))
    so_extension = os.popen('grep "SOEXT =" ./src/Makefile | head -n 1 | sed "s/SOEXT *= //"').read().strip()
    os.chdir(current_directory)
    monetdb_shared_lib_base = "libmonetdb5" + so_extension
    monetdb_shared_lib = os.path.join(basedir, monetdb_shared_lib_base)

final_shared_library = os.path.join('monetdblite', monetdb_shared_lib_base)

long_description = ""
if not pypi_upload:
    # don't include the [so|dylib|dll] in the packaged version uploaded to pip
    copyfile(monetdb_shared_lib, final_shared_library)
    if os.name == 'nt':
        copyfile(os.path.join(basedir, 'msvcr100.dll'), os.path.join('monetdblite', 'msvcr100.dll'))
        copyfile(os.path.join(basedir, 'pcre.dll'), os.path.join('monetdblite', 'pcre.dll'))
else:
    os.chdir(os.path.join(basedir, 'src'))
    os.system('make clean')
    os.system('rm ../monetdblite/*.so ../monetdblite/*.dylib ../monetdblite/*.dll')
    os.chdir(current_directory)
    try:
        import pypandoc
        long_description = pypandoc.convert('README.md', 'rst')
    except(IOError, ImportError):
        long_description = open('README.md').read()

# now actually create the package
# the package is a single C file that only dynamically
# loads functions from libmonetdb5.[so|dylib|dll]
setup(
    name = "monetdblite",
    version = '0.1.8',
    description = 'Embedded MonetDB Python Database.',
    author = 'Mark Raasveldt, Hannes Mühleisen',
    author_email = 'm.raasveldt@cwi.nl',
    keywords = 'MonetDB, MonetDBLite, Database',
    packages = ['monetdblite'],
    package_data={
        'monetdblite': ['*.so', '*.dylib', '*.dll'],
    },
    url="https://github.com/hannesmuehleisen/MonetDBLite/tree/Dec2016Lite-Python",
    long_description = long_description
    )

