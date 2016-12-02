
import ctypes
import os
import sys

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

dll.python_monetdb_shutdown.argtypes = []
dll.python_monetdb_shutdown.restype = None

if sys.version_info.major >= 3:
	def utf8_encode(str):
		if str == None:
			return None
		return str.encode('utf-8')
else:
	def utf8_encode(str):
		return str


def init(directory):
	retval = dll.python_monetdb_init(utf8_encode(directory), 0)
	if retval != None:
		raise Exception(str(retval))

def sql(query, client=None):
	retval = dll.python_monetdb_sql(client, utf8_encode(query))
	if type(retval) == type(''):
		raise Exception(str(retval))
	else:
		return retval

def insert(table, values, schema=None, client=None):
	retval = dll.python_monetdb_insert(client, utf8_encode(schema), utf8_encode(table), values)
	if type(retval) == type(''):
		raise Exception(str(retval))
	else:
		return retval

def create(table, values, schema=None, client=None):
	column_types = []
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
	query = 'CREATE TABLE "%s"."%s" (' % (schema, table)
	index = 0
	for key in values.keys():
		query += '"%s" %s, ' % (key, column_types[index])
		index += 1
	query = query[:-2] + ");"
	# create the table
	sql(query, client=client);
	# insert the data into the table
	insert(table, values, schema, client)

def connect():
	retval = dll.python_monetdb_client()
	if type(retval) == type(''):
		raise Exception(str(retval))
	else:
		return retval

def shutdown():
	retval = dll.python_monetdb_shutdown()
	if type(retval) == type(''):
		raise Exception(str(retval))
	else:
		return retval

