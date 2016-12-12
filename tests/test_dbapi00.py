
#simple DB API testcase

import monetdblitetest
import monetdblite
import numpy
import unittest

class SimpleDBAPITest(unittest.TestCase):
    def setUp(self):
        global conn, c
        dbfarm = monetdblitetest.tempdir()
        conn = monetdblite.connect(dbfarm)
        c = conn.cursor()
        c.create('integers', {'i': numpy.arange(10)})
        c.execute('INSERT INTO integers VALUES (NULL)')

    def tearDown(self):
        conn.close()
        monetdblitetest.cleantempdir()

    def test_regular_selection(self):
        c.execute('SELECT * FROM integers')
        result = c.fetchall()
        self.assertEqual(result, [[0],[1],[2],[3],[4],[5],[6],[7],[8],[9], [None]], 
            "Incorrect result returned")

    def test_numpy_selection(self):
        c.execute('SELECT * FROM integers')
        result = c.fetchnumpy()
        arr = numpy.ma.masked_array(numpy.arange(11))
        arr.mask = [False] * 10 + [True]
        arr = {'i': arr}
        self.assertEqual(str(result), str(arr),
            "Incorrect result returned")

    def test_pandas_selection(self):
        try:
            import pandas
        except:
            # no pandas, skip this test
            return
        c.execute('SELECT * FROM integers')
        result = c.fetchdf()
        arr = numpy.ma.masked_array(numpy.arange(11))
        arr.mask = [False] * 10 + [True]
        arr = {'i': arr}
        arr = pandas.DataFrame.from_dict(arr)
        self.assertEqual(str(result), str(arr),
            "Incorrect result returned")

if __name__ == '__main__':
    unittest.main()
