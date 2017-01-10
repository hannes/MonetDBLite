
import shutil, os
import tempfile

dbfarm = os.path.join(tempfile.gettempdir(), '.{0}'.format(hash(os.times())))

def tempdir():
	if os.path.isdir(dbfarm): shutil.rmtree(dbfarm)
	return dbfarm

def cleantempdir():
	shutil.rmtree(dbfarm)



