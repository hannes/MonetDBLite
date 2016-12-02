# monetdblite.create statement with multiple columns

import monetdblite, shutil, os
dbfarm = '/tmp/pylite_dbfarm'
if os.path.isdir(dbfarm): shutil.rmtree(dbfarm)
monetdblite.init(dbfarm)

import numpy
arrays = numpy.arange(100000).reshape((5,20000))
monetdblite.create('pylite03', {'i': arrays[0], 'j': arrays[1], 'k': arrays[2], 'l': arrays[3], 'm': arrays[4]})
res = monetdblite.sql('select * from pylite03')
print(res)
print('Count', len(res['i']))

shutil.rmtree(dbfarm)

