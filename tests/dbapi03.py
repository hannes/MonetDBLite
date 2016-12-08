
# test database shutdown/startup

import monetdblitetest
import monetdblite
import numpy
import unittest

identifier_escape = monetdblite.monetize.monet_identifier_escape

class ShutdownTests(unittest.TestCase):
    def setUp(self):
        global conn, c, dbfarm
        dbfarm = monetdblitetest.tempdir()
        conn = monetdblite.connect(dbfarm)
        c = conn.cursor()

    def tearDown(self):
        conn.close()
        monetdblitetest.cleantempdir()

    def test_commited_on_restart(self):
        global conn, c, dbfarm
        c.transaction()
        c.execute('CREATE TABLE integers (i INTEGER)')
        c.executemany('INSERT INTO integers VALUES (%s)', [[x] for x in range(3)])
        c.execute('SELECT * FROM integers')
        result = c.fetchall()
        self.assertEqual(result, [[0],[1],[2]], 
            "Incorrect result returned")
        c.commit()
        conn.close()

        conn = monetdblite.connect(dbfarm)
        c = conn.cursor()
        c.execute('SELECT * FROM integers')
        self.assertEqual(result, [[0],[1],[2]], 
            "Incorrect result returned")

    def test_transaction_aborted_on_shutdown(self):
        global conn, c, dbfarm
        c.transaction()
        c.execute('CREATE TABLE integers (i INTEGER)')
        c.executemany('INSERT INTO integers VALUES (%s)', [[x] for x in range(3)])
        c.execute('SELECT * FROM integers')
        result = c.fetchall()
        self.assertEqual(result, [[0],[1],[2]], 
            "Incorrect result returned")
        conn.close()

        conn = monetdblite.connect(dbfarm)
        c = conn.cursor()
        with self.assertRaises(monetdblite.DatabaseError):
            c.execute('SELECT * FROM integers')


    def test_many_shutdowns(self):
        global conn, c, dbfarm
        for i in range(10):
            c.transaction()
            c.execute('CREATE TABLE integers (i INTEGER)')
            c.executemany('INSERT INTO integers VALUES (%s)', [[x] for x in range(10)])
            c.execute('SELECT MIN(i * 3 + 5) FROM integers')
            result = c.fetchall()
            self.assertEqual(result, [[5]], 
                "Incorrect result returned")
            conn.close()

            conn = monetdblite.connect(dbfarm)
            c = conn.cursor()

    def test_use_old_cursor(self):
        global conn, c, dbfarm
        conn.close()

        conn = monetdblite.connect(dbfarm)
        with self.assertRaises(monetdblite.ProgrammingError):
            c.execute('SELECT * FROM integers')



if __name__ == '__main__':
    unittest.main()



