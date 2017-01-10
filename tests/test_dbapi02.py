
# test proper escaping

import monetdblitetest
import monetdblite
import numpy
import unittest

identifier_escape = monetdblite.monetize.monet_identifier_escape

class MultipleResultSets(unittest.TestCase):
    def setUp(self):
        global conn, c
        dbfarm = monetdblitetest.tempdir()
        conn = monetdblite.connect(dbfarm)
        c = conn.cursor()
        c.create('integers', {'i': numpy.arange(10)})

    def tearDown(self):
        conn.close()
        monetdblitetest.cleantempdir()

    def test_string_insertion(self):
        c.execute('CREATE TABLE strings(s STRING)')
        c.executemany('INSERT INTO strings VALUES (%s)', ["'hello\" world\"'"])
        c.execute('SELECT * FROM strings')
        result = c.fetchall()
        self.assertEqual(result, [["'hello\" world\"'"]], 
            "Incorrect result returned")

    def test_table_name(self):
        sname = "table"
        tname = 'integer'
        c.execute('CREATE SCHEMA %s' % identifier_escape(sname))
        c.create(tname, {'i': numpy.arange(3)}, schema=sname)
        c.execute('SELECT * FROM %s.%s' % (identifier_escape(sname), identifier_escape(tname)))
        result = c.fetchall()
        self.assertEqual(result, [[0],[1],[2]], 
            "Incorrect result returned")

if __name__ == '__main__':
    unittest.main()


