

# multiple result sets

import monetdblitetest
import monetdblite
import numpy
import unittest

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

    def test_regular_selection(self):
        c.execute('SELECT * FROM integers')
        c.execute('SELECT * FROM integers')
        result = c.fetchall()
        self.assertEqual(result, [[0],[1],[2],[3],[4],[5],[6],[7],[8],[9]], 
            "Incorrect result returned")

    def test_numpy_selection(self):
        c.execute('SELECT * FROM integers')
        c.execute('SELECT * FROM integers')
        result = c.fetchnumpy()
        self.assertEqual(str(result), str({'i': numpy.ma.masked_array(numpy.arange(10))}), 
            "Incorrect result returned")


if __name__ == '__main__':
    unittest.main()
