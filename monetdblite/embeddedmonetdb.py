# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0.  If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.
#
# Copyright 1997 - July 2008 CWI, August 2008 - 2016 MonetDB B.V.

import ctypes
import os
import sys

from monetdblite import monetize
from monetdblite import exceptions

python_version = sys.version_info.major

basedir = os.path.dirname(os.path.abspath(__file__))
libs = [x for x in os.listdir(basedir) if 
        x.startswith('libmonetdb5') and (x.endswith('.so') or x.endswith('.dylib') or x.endswith('.dll'))]

if len(libs) == 0:
    raise Exception('Could not locate library file "libmonetdb5.[dll|so|dylib] in folder %s' % basedir)

try:
    import numpy
except:
    raise Exception('MonetDBLite requires numpy but import of numpy failed')

if os.name == 'nt':
    os.environ["PATH"] += os.pathsep + os.path.dirname(os.path.abspath(__file__))

dll = ctypes.PyDLL(os.path.join(os.path.dirname(os.path.abspath(__file__)), 
    libs[0]), mode=ctypes.RTLD_GLOBAL)
dll.python_monetdblite_init.argtypes = []
dll.python_monetdblite_init.restype = None
dll.python_monetdblite_init()

dll.python_monetdb_init.argtypes = [ctypes.c_char_p, ctypes.c_int]
dll.python_monetdb_init.restype = ctypes.py_object

dll.python_monetdb_sql.argtypes = [ctypes.py_object, ctypes.c_char_p]
dll.python_monetdb_sql.restype = ctypes.py_object

dll.python_monetdb_insert.argtypes = [ctypes.py_object, ctypes.c_char_p, ctypes.c_char_p, ctypes.py_object]
dll.python_monetdb_insert.restype = ctypes.py_object

dll.python_monetdb_client.argtypes = []
dll.python_monetdb_client.restype = ctypes.py_object

dll.python_monetdb_disconnect.argtypes = [ctypes.py_object]
dll.python_monetdb_disconnect.restype = None

dll.python_monetdb_shutdown.argtypes = []
dll.python_monetdb_shutdown.restype = None

if sys.version_info.major >= 3:
    def utf8_encode(str):
        if str == None:
            return None
        if type(str) == type(""):
            return str.encode('utf-8')
        return str
else:
    def utf8_encode(str):
        return str

def __throw_exception(str):
    raise exceptions.DatabaseError(str.replace('MALException:', ''))

def init(directory):
    """Initializes the MonetDBLite database in the specified directory."""
    retval = dll.python_monetdb_init(utf8_encode(directory), 0)
    if retval != None:
        raise __throw_exception(str(retval))

def sql(query, client=None):
    """Executes a SQL statement on the database if the database 
       has been initialized. If no client context is provided,
       the default client context is used. Otherwise the specified
       client context is used to execute the query."""
    retval = dll.python_monetdb_sql(client, utf8_encode(query))
    if type(retval) == type(''):
        raise __throw_exception(str(retval))
    else:
        return retval

def __convert_pandas_to_numpy_dict__(df):
    import pandas, numpy
    if type(df) == pandas.DataFrame:
        return {x: numpy.array(y.values()) for x,y in df.to_dict().items()}
    return df

def insert(table, values, schema=None, client=None):
    """Inserts a set of values into the specified table. The values must
       be either a pandas dataframe or a dictionary of values. If no schema
       is specified, the "sys" schema is used. If no client context is 
       provided, the default client context is used. """
    if type(values) != type({}):
        values = __convert_pandas_to_numpy_dict__(values)
    else:
        values = {x: numpy.array(y) for x,y in values.items()}
    retval = dll.python_monetdb_insert(client, utf8_encode(schema), utf8_encode(table), values)
    if type(retval) == type(''):
        raise __throw_exception(str(retval))
    else:
        return retval

def create(table, values, schema=None, client=None):
    """Creates a table from a set of values or a pandas DataFrame."""
    column_types = []

    if type(values) != type({}):
        values = __convert_pandas_to_numpy_dict__(values)
    else:
        values = {x: numpy.array(y) for x,y in values.items()}
    if schema == None:
        schema = "sys"
    for key,value in values.items():
        arr = numpy.array(value)
        if arr.dtype == numpy.bool:
            column_type = "BOOLEAN"
        elif arr.dtype == numpy.int8:
            column_type = 'TINYINT'
        elif arr.dtype == numpy.int16 or arr.dtype == numpy.uint8:
            column_type = 'SMALLINT'
        elif arr.dtype == numpy.int32  or arr.dtype == numpy.uint16:
            column_type = 'INT'
        elif arr.dtype == numpy.int64  or arr.dtype == numpy.uint32 or arr.dtype == numpy.uint64:
            column_type = 'BIGINT'
        elif arr.dtype == numpy.float32:
            column_type = 'REAL'
        elif arr.dtype == numpy.float64:
            column_type = 'DOUBLE'
        elif numpy.issubdtype(arr.dtype, numpy.str_) or numpy.issubdtype(arr.dtype, numpy.unicode_):
            column_type = 'STRING'
        else:
            raise Exception('Unsupported dtype: %s' %  (str(arr.dtype)))
        column_types.append(column_type)
    query = 'CREATE TABLE %s.%s (' % (monetize.monet_identifier_escape(schema), monetize.monet_identifier_escape(table))
    index = 0
    for key in values.keys():
        query += '%s %s, ' % (monetize.monet_identifier_escape(key), column_types[index])
        index += 1
    query = query[:-2] + ");"
    # create the table
    sql(query, client=client);
    # insert the data into the table
    insert(table, values, schema=schema, client=client)

def connect():
    retval = dll.python_monetdb_client()
    if type(retval) == type(''):
        raise __throw_exception(str(retval))
    else:
        return retval

def disconnect(client):
    dll.python_monetdb_disconnect(client)

def shutdown():
    retval = dll.python_monetdb_shutdown()
    if type(retval) == type(''):
        raise __throw_exception(str(retval))
    else:
        return retval

