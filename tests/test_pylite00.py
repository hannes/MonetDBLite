
# Test basic monetdblite statements

import monetdblitetest
import monetdblite
import numpy
import unittest

class MonetDBLiteBaseTests(unittest.TestCase):
    def setUp(self):
        global dbfarm
        dbfarm = monetdblitetest.tempdir()
        monetdblite.init(dbfarm)

    def tearDown(self):
        monetdblite.shutdown()
        monetdblitetest.cleantempdir()

    def test_regular_selection(self):
        monetdblite.sql('CREATE TABLE pylite00 (i INTEGER)')
        monetdblite.sql('INSERT INTO pylite00 VALUES (1), (2), (3), (4), (5)')
        result = monetdblite.sql('SELECT * FROM pylite00')
        self.assertEquals(len(result['i']), 5, "Incorrect result")

    def test_monetdblite_create(self):
        monetdblite.create('pylite01', {'i': numpy.arange(100000) })
        result = monetdblite.sql('select * from pylite01')
        self.assertEquals(len(result['i']), 100000, "Incorrect result")

    def test_monetdblite_insert(self):
        monetdblite.create('pylite02', {'i': numpy.arange(100000)})
        try:
            import pandas
            monetdblite.insert('pylite02', numpy.arange(100000))
            result = monetdblite.sql('select * from pylite02')
            self.assertEquals(len(result['i']), 200000, "Incorrect result")
        except:
            #no pandas
            result = monetdblite.sql('select * from pylite02')
            self.assertEquals(len(result['i']), 100000, "Incorrect result")
            return

    def test_monetdblite_create_multiple_columns(self):
        arrays = numpy.arange(100000).reshape((5,20000))
        monetdblite.create('pylite03', {'i': arrays[0], 'j': arrays[1], 'k': arrays[2], 'l': arrays[3], 'm': arrays[4]})
        result = monetdblite.sql('select * from pylite03')
        self.assertEquals(len(result), 5, "Incorrect amount of columns")
        self.assertEquals(len(result['i']), 20000, "Incorrect amount of rows")

    def test_sql_types(self):
        monetdblite.sql('CREATE TABLE pylite04_decimal(d DECIMAL(18,3))')
        monetdblite.insert('pylite04_decimal', {'d': numpy.arange(100000)})
        result = monetdblite.sql('SELECT * FROM pylite04_decimal')
        self.assertEquals(result['d'][0], 0, "Incorrect result")

        monetdblite.sql('CREATE TABLE pylite04_date(d DATE)')
        monetdblite.sql("INSERT INTO pylite04_date VALUES ('2000-01-01')")
        result = monetdblite.sql('SELECT d FROM pylite04_date')
        self.assertEquals(result['d'][0], '2000-01-01', "Incorrect result")

    def test_connections(self):
        # create two clients
        conn = monetdblite.connectclient()
        conn2 = monetdblite.connectclient()
        # create a table within a transaction in one client
        monetdblite.sql('START TRANSACTION', client=conn)
        monetdblite.create('pylite05', {'i': numpy.arange(100000)}, client=conn)

        # check that table was successfully created
        result = monetdblite.sql('SELECT MIN(i) AS minimum FROM pylite05', client=conn)
        self.assertEquals(result['minimum'][0], 0, "Incorrect result")
        # attempt to query the table from another client
        with self.assertRaises(monetdblite.DatabaseError):
            monetdblite.sql('SELECT * FROM pylite05', client=conn2)

        # now commit the table
        monetdblite.sql('COMMIT', client=conn)
        # query the table again from the other client, this time it should be there        
        result = monetdblite.sql('SELECT MIN(i) AS minimum FROM pylite05', client=conn2)
        self.assertEquals(result['minimum'][0], 0, "Incorrect result")

    def test_errors(self):
        global dbfarm
        monetdblite.shutdown()

        # select before init
        with self.assertRaises(monetdblite.DatabaseError):
            monetdblite.sql('select * from tables')

        # init with weird argument
        with self.assertRaises(Exception):
            monetdblite.init(33)

        # init in unwritable directory
        with self.assertRaises(monetdblite.DatabaseError):
            monetdblite.init('/unwritabledir')

        # proper init
        monetdblite.init(dbfarm)

        # select from non-existent table
        with self.assertRaises(monetdblite.DatabaseError):
            monetdblite.sql('select * from nonexistenttable')

        # invalid connection object
        with self.assertRaises(monetdblite.DatabaseError):
            monetdblite.sql('select * from tables', client=33)

        # invalid colnames
        with self.assertRaises(monetdblite.DatabaseError):
            monetdblite.create('pylite08', {33: []})

        # empty colnames
        with self.assertRaises(monetdblite.DatabaseError):
            monetdblite.create('pylite08', {'': []})

        # dictionary with invalid keys
        d = dict()
        d[33] = 44
        with self.assertRaises(monetdblite.DatabaseError):
            monetdblite.create('pylite08', d)

        monetdblite.sql('DROP TABLE pylite08')
        monetdblite.create('pylite08', dict(a=[],b=[],c=[]))

        # FIXME: segfault
        # missing dict key in insert
        #with self.assertRaises(monetdblite.DatabaseError):
        #   monetdblite.insert('pylite08', dict(a=33,b=44))

        # too few columns in insert
        with self.assertRaises(monetdblite.DatabaseError):
            monetdblite.insert('pylite08', [[33],[44]])

    def test_many_sql_statements(self):
        for i in range(5): # FIXME 1000
            conn = monetdblite.connectclient()
            monetdblite.sql('START TRANSACTION', client=conn)
            monetdblite.sql('CREATE TABLE pylite09 (i INTEGER)', client=conn)
            monetdblite.insert('pylite09', {'i': numpy.arange(10)}, client=conn)
            result = monetdblite.sql('SELECT * FROM pylite09', client=conn)
            self.assertEquals(result['i'][0], 0, "Invalid result")
            monetdblite.sql('DROP TABLE pylite09', client=conn)
            monetdblite.sql('ROLLBACK', client=conn)
            del conn

if __name__ == '__main__':
    unittest.main()
