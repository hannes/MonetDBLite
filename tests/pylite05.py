# Test connections in monetdblite

import monetdblite, shutil, os
dbfarm = '/tmp/pylite_dbfarm'
if os.path.isdir(dbfarm): shutil.rmtree(dbfarm)
monetdblite.init(dbfarm)

import numpy

conn = monetdblite.connect() # create the client
monetdblite.create('pylite05', {'i': numpy.arange(100000)}, client=conn)
print (len(monetdblite.sql('select * from pylite05', client=conn)['i']))
monetdblite.insert('pylite05', values=numpy.arange(100000), client=conn)
print (len(monetdblite.sql('select * from pylite05', client=conn)['i']))
del conn # client is automatically disconnected when connection object is deleted


