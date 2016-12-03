# Test many SQL statements

import monetdblite, shutil, os
import numpy
dbfarm = '/tmp/pylite_dbfarm'
if os.path.isdir(dbfarm): shutil.rmtree(dbfarm)
monetdblite.init(dbfarm)

for i in range(1000):
	conn = monetdblite.connect()
	monetdblite.sql('START TRANSACTION', client=conn)
	monetdblite.sql('CREATE TABLE pylite09 (i INTEGER)', client=conn)
	monetdblite.insert('pylite09', {'i': numpy.arange(10)}, client=conn)
	print(monetdblite.sql('SELECT * FROM pylite09', client=conn))
	monetdblite.sql('DROP TABLE pylite09', client=conn)
	monetdblite.sql('ROLLBACK', client=conn)
	del conn

monetdblite.shutdown()
shutil.rmtree(dbfarm)

