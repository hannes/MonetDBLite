/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.tests;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import java.sql.*;
import java.util.ArrayList;
import java.util.List;

/**
 * Test JDBC stuff in MonetDBJavaLite :)
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public class JDBCTests extends MonetDBJavaLiteTesting {

    private static Connection createJDBCEmbeddedConnection() throws SQLException {
        return DriverManager.getConnection("jdbc:monetdb:embedded:" + MonetDBJavaLiteTesting.directoryPath.toAbsolutePath());
    }

    @Test
    @DisplayName("Test updates in JDBC")
    void testJDBCUpdates() throws SQLException {
        Connection conn = createJDBCEmbeddedConnection();
        Statement stmt = conn.createStatement();
        int rows1 = stmt.executeUpdate("CREATE TABLE testjdbcupdates (val int);");
        Assertions.assertEquals(-2, rows1, "The creation should have affected no rows!");

        int rows2 = stmt.executeUpdate("INSERT INTO testjdbcupdates VALUES (1), (2), (3), (4), (5), (6), (7), (8), (9);");
        Assertions.assertEquals(9, rows2, "It should have affected 9 rows!");

        int rows3 = stmt.executeUpdate("UPDATE testjdbcupdates SET val=2 WHERE val<3;");
        Assertions.assertEquals(2, rows3, "It should have affected 2 rows!");

        int rows4 = stmt.executeUpdate("UPDATE testjdbcupdates SET val=10 WHERE val>5;");
        Assertions.assertEquals(4, rows4, "It should have affected 4 rows!");

        int rows5 = stmt.executeUpdate("UPDATE testjdbcupdates SET val=2;");
        Assertions.assertEquals(9, rows5, "It should have affected 9 rows!");

        int rows6 = stmt.executeUpdate("DROP TABLE testjdbcupdates;");
        Assertions.assertEquals(-2, rows6, "The deletion should have affected no rows!");

        stmt.close();
        conn.close();
    }

    @Test
    @DisplayName("Test a simple result set in JDBC")
    void testSimpleTable() throws SQLException {
        Connection conn = createJDBCEmbeddedConnection();
        Statement stmt = conn.createStatement();
        int rows1 = stmt.executeUpdate("CREATE TABLE test1 (a smallint, b varchar(32), c real, d int, e boolean);");
        Assertions.assertEquals(-2, rows1, "The creation should have affected no rows!");
        int rows2 = stmt.executeUpdate("INSERT INTO test1 VALUES (1, 'one', 3.223, 100, 'true');");
        Assertions.assertEquals(1, rows2, "The creation should have affected 1 row!");
        int rows3 = stmt.executeUpdate("INSERT INTO test1 VALUES (2, NULL, NULL, -2032, 'false');");
        Assertions.assertEquals(1, rows3, "The creation should have affected 1 row!");
        int rows4 = stmt.executeUpdate("INSERT INTO test1 VALUES (-3545, 'test', -7.858, 423423, NULL);");
        Assertions.assertEquals(1, rows4, "The creation should have affected 1 row!");

        short[] column1 = new short[]{1, 2, -3545};
        String[] column2 = new String[]{"one", null, "test"};
        float[] column3 = new float[]{3.223f, 0.0f, -7.858f};
        int[] column4 = new int[]{100, -2032, 423423};
        boolean[] column5 = new boolean[]{true, false, false};

        ResultSet rs = stmt.executeQuery("SELECT * from test1;");
        for(int i = 0 ; i < 3; i++) {
            rs.next();
            Assertions.assertEquals(column1[i], rs.getShort(1), "Problems in the JDBC result set!");
            Assertions.assertEquals(column2[i], rs.getString(2), "Problems in the JDBC result set!");
            Assertions.assertEquals(column3[i], rs.getFloat(3), 0.01f, "Problems in the JDBC result set!");
            Assertions.assertEquals(column4[i], rs.getInt(4), "Problems in the JDBC result set!");
            Assertions.assertEquals(column5[i], rs.getBoolean(5), "Problems in the JDBC result set!");
        }
        rs.close();
        int rows5 = stmt.executeUpdate("DROP TABLE test1;");
        Assertions.assertEquals(-2, rows5, "The deletion should have affected no rows!");
        stmt.close();
        conn.close();
    }

    @Test
    @DisplayName("Test objects retrieval in the result set")
    void testObjectResultSet() throws SQLException {
        Connection conn = createJDBCEmbeddedConnection();
        Statement stmt = conn.createStatement();
        int rows1 = stmt.executeUpdate("CREATE TABLE test2 (a int, b boolean, c real, d text)");
        Assertions.assertEquals(-2, rows1, "The creation should have affected no rows!");
        int rows2 = stmt.executeUpdate("INSERT INTO test2 VALUES (1, 'false', 3.2, 'hola');");
        Assertions.assertEquals(1, rows2, "The creation should have affected 1 row!");

        ResultSet rs = stmt.executeQuery("SELECT * from test2;");
        rs.next();
        Assertions.assertEquals(1, rs.getObject(1), "Problems in the JDBC result set!");
        Assertions.assertEquals(false, rs.getObject(2), "Problems in the JDBC result set!");
        Assertions.assertEquals(3.2f, rs.getObject(3), "Problems in the JDBC result set!");
        Assertions.assertEquals("hola", rs.getObject(4), "Problems in the JDBC result set!");
        rs.close();

        int rows5 = stmt.executeUpdate("DROP TABLE test2;");
        Assertions.assertEquals(-2, rows5, "The deletion should have affected no rows!");
        stmt.close();
        conn.close();
    }

    @Test
    @DisplayName("Create some concurrent JDBC connections")
    void timeToStress() throws SQLException, InterruptedException {
        int stress = 50;
        List<Thread> stressers = new ArrayList<>(stress);

        for (int i = 0; i < stress; i++) {
            final int threadID = i;
            Thread t = new Thread(() -> {
                try {
                    Connection con = createJDBCEmbeddedConnection();
                    Statement stmt = con.createStatement();
                    ResultSet rs = stmt.executeQuery("SELECT " + threadID);
                    if (!rs.next()) {
                        Assertions.fail("No response from the server in one of the Threads!");
                    } else {
                        Assertions.assertEquals(threadID, rs.getInt(1), "No response from the server in one of the Threads!");
                    }
                    rs.close();
                    stmt.close();
                    con.close();
                } catch (SQLException e) {
                    Assertions.fail(e.getMessage());
                }
            });
            t.start();
            stressers.add(t);
        }

        for (Thread t : stressers) {
            t.join();
        }
    }

    @Test
    @DisplayName("Test more JDBC concurrent connections")
    void otherStressTest() throws SQLException {
        int stress = 50;
        List<Connection> cons = new ArrayList<>(stress); //Create many simultaneous connections
        for (int i = 0; i < stress; i++) {
            Connection con = createJDBCEmbeddedConnection();
            con.setAutoCommit(false);
            cons.add(con);
        }
        for (Connection con : cons) {
            con.setAutoCommit(true);
            con.close();
        }
    }

    @Test
    @DisplayName("Test autocommit feature between two connections")
    void testAutocommit() throws SQLException {
        Connection con1 = createJDBCEmbeddedConnection();
        Connection con2 = createJDBCEmbeddedConnection();
        Statement stmt1 = con1.createStatement();
        Statement stmt2 = con2.createStatement();
        ResultSet rs;

        Assertions.assertTrue(con1.getAutoCommit(), "Auto-commit not working?");
        Assertions.assertTrue(con2.getAutoCommit(), "Auto-commit not working?");

        int rows1 = stmt1.executeUpdate("CREATE TABLE testAutoCommit (id int)");
        Assertions.assertEquals(-2, rows1, "The creation should have affected no rows!");

        stmt2.executeQuery("SELECT * FROM testAutoCommit");

        // turn off auto commit
        con1.setAutoCommit(false);
        con2.setAutoCommit(false);

        Assertions.assertFalse(con1.getAutoCommit(), "Auto-commit not working?");
        Assertions.assertFalse(con2.getAutoCommit(), "Auto-commit not working?");

        int rows2 = stmt2.executeUpdate("DROP TABLE testAutoCommit");
        Assertions.assertEquals(-2, rows2, "The deletion should have affected no rows!");
        rs = stmt1.executeQuery("SELECT * FROM testAutoCommit");
        rs.close();
        con2.commit();
        rs = stmt1.executeQuery("SELECT * FROM testAutoCommit");
        rs.close();
        con1.commit();

        stmt1.close();
        stmt2.close();
        con1.close();
        con2.close();
    }

    @Test
    @DisplayName("Test that a SQL exception is thrown")
    void testSQLException() throws SQLException {
        Connection conn = createJDBCEmbeddedConnection();
        Statement stmt = conn.createStatement();
        conn.setAutoCommit(false);
        Assertions.assertThrows(SQLException.class, () -> stmt.execute("SELECT COUNT(*) FROM YouAreGoingToFail;"));
        Assertions.assertFalse(conn.isValid(30), "Auto-commit not working?");

        conn.rollback(); //we can rollback still
        stmt.close();
        conn.close();
    }

    @Test
    @DisplayName("Test transactions management in JDBC")
    void testTransaction() throws SQLException {
        Connection conn = createJDBCEmbeddedConnection();
        Statement stmt = conn.createStatement();

        Assertions.assertTrue(conn.getAutoCommit(), "Auto-commit not working?");
        Assertions.assertThrows(SQLException.class, conn::commit);

        conn.setAutoCommit(false);
        Assertions.assertFalse(conn.getAutoCommit(), "Auto-commit not working?");

        conn.commit();
        conn.rollback();

        conn.setAutoCommit(true);
        Assertions.assertTrue(conn.getAutoCommit(), "Auto-commit not working?");

        int rows1 = stmt.executeUpdate("START TRANSACTION");
        Assertions.assertEquals(-2, rows1, "The value returned by a transaction query is -2!");
        conn.commit();
        Assertions.assertTrue(conn.getAutoCommit(), "Auto-commit not working?");

        int rows2 = stmt.executeUpdate("START TRANSACTION");
        Assertions.assertEquals(-2, rows2, "The value returned by a transaction query is -2!");
        conn.rollback();
        Assertions.assertTrue(conn.getAutoCommit(), "Auto-commit not working?");
        Assertions.assertThrows(SQLException.class, conn::commit);

        stmt.close();
        conn.close();
    }

    @Test
    @DisplayName("Test savepoints in JDBC")
    void testSavePoints() throws SQLException {
        Connection con = createJDBCEmbeddedConnection();
        Statement stmt = con.createStatement();
        ResultSet rs;
        int i = 0;

        Assertions.assertTrue(con.getAutoCommit(), "Auto-commit not working?");
        Assertions.assertThrows(SQLException.class, con::setSavepoint);

        con.setAutoCommit(false);
        Assertions.assertFalse(con.getAutoCommit(), "Auto-commit not working?");

        //start with an empty table
        con.setSavepoint();

        int rows1 = stmt.executeUpdate("CREATE TABLE testSavePoints (id int)");
        Assertions.assertEquals(-2, rows1, "The creation should have affected no rows!");
        Savepoint sp1 = con.setSavepoint("empty table");
        rs = stmt.executeQuery("SELECT id FROM testSavePoints");
        while (rs.next()) {
            i++;
        }
        Assertions.assertEquals(0, i, "Savepoints not working?");
        rs.close();

        //now add three values
        int rows2 = stmt.executeUpdate("INSERT INTO testSavePoints VALUES (1), (2), (3)");
        Assertions.assertEquals(3, rows2, "The number of rows affected should be 3!");
        Savepoint sp2 = con.setSavepoint("three values");
        rs = stmt.executeQuery("SELECT id FROM testSavePoints");
        i = 0;
        while (rs.next()) {
            i++;
        }
        Assertions.assertEquals(3, i, "Savepoints not working?");
        rs.close();

        //set the savepoint and test again
        con.releaseSavepoint(sp2);
        rs = stmt.executeQuery("SELECT id FROM testSavePoints");
        i = 0;
        while (rs.next()) {
            i++;
        }
        Assertions.assertEquals(3, i, "Savepoints not working?");
        rs.close();

        //release the save point and check that the table is empty
        con.rollback(sp1);
        rs = stmt.executeQuery("SELECT id FROM testSavePoints");
        i = 0;
        while (rs.next()) {
            i++;
        }
        Assertions.assertEquals(0, i, "Savepoints not working?");
        rs.close();

        stmt.close();
        con.rollback();
        con.close();
    }

    @Test
    @DisplayName("Test positions in the JDBC resultset")
    void testPositions() throws SQLException {
        Connection con = createJDBCEmbeddedConnection();
        Statement stmt = con.createStatement();
        DatabaseMetaData dbmd = con.getMetaData();
        ResultSet rs = stmt.executeQuery("SELECT 1");

        Assertions.assertTrue(rs.isBeforeFirst(), "Row positions not working?");
        Assertions.assertFalse(rs.isFirst(), "Row positions not working?");
        Assertions.assertTrue(rs.next(), "Row positions not working?");
        Assertions.assertFalse(rs.isBeforeFirst(), "Row positions not working?");
        Assertions.assertTrue(rs.isFirst(), "Row positions not working?");
        Assertions.assertFalse(rs.isAfterLast(), "Row positions not working?");
        Assertions.assertTrue(rs.isLast(), "Row positions not working?");
        Assertions.assertFalse(rs.next(), "Row positions not working?");
        Assertions.assertTrue(rs.isAfterLast(), "Row positions not working?");
        Assertions.assertFalse(rs.isLast(), "Row positions not working?");
        Assertions.assertFalse(rs.next(), "Row positions not working?");
        Assertions.assertTrue(rs.isAfterLast(), "Row positions not working?");
        rs.close();

        rs = dbmd.getTableTypes(); // try the same with a 'virtual' result set

        Assertions.assertTrue(rs.isBeforeFirst(), "Row positions not working?");
        Assertions.assertFalse(rs.isFirst(), "Row positions not working?");
        Assertions.assertTrue(rs.next(), "Row positions not working?");
        Assertions.assertFalse(rs.isBeforeFirst(), "Row positions not working?");
        Assertions.assertTrue(rs.isFirst(), "Row positions not working?");

        rs.last(); // move to last row

        Assertions.assertFalse(rs.isAfterLast(), "Row positions not working?");
        Assertions.assertTrue(rs.isLast(), "Row positions not working?");
        Assertions.assertFalse(rs.next(), "Row positions not working?");
        Assertions.assertTrue(rs.isAfterLast(), "Row positions not working?");
        Assertions.assertFalse(rs.isLast(), "Row positions not working?");
        Assertions.assertFalse(rs.next(), "Row positions not working?");
        Assertions.assertTrue(rs.isAfterLast(), "Row positions not working?");
        rs.close();

        stmt.close();
        con.close();
    }

    @Test
    @DisplayName("Test prepared statements - Just inserting")
    void testPreparedStatements() throws SQLException {
        Connection con = createJDBCEmbeddedConnection();
        con.setAutoCommit(false);
        Assertions.assertFalse(con.getAutoCommit(), "Auto-commit not working?");

        Statement stmt = con.createStatement();
        int rows1 = stmt.executeUpdate("CREATE TABLE htmtest (htmid bigint NOT NULL, ra double, decl double," +
                        " dra double, ddecl double, flux double, dflux double, freq double, bw double, " +
                        " type decimal(1,0), imageurl varchar(100), comment varchar(100)," +
                        " CONSTRAINT htmtest_htmid_pkey PRIMARY KEY (htmid))");
        Assertions.assertEquals(-2, rows1, "The creation should have affected no rows!");
        int rows2 = stmt.executeUpdate("CREATE INDEX htmid ON htmtest (htmid)");
        Assertions.assertEquals(-2, rows2, "The index creation should have affected no rows!");
        stmt.close();

        PreparedStatement pstmt = con.prepareStatement("INSERT INTO HTMTEST (HTMID,RA,DECL,FLUX,COMMENT) VALUES (?,?,?,?,?)");
        pstmt.setLong(1, 1L);
        pstmt.setFloat(2, (float)1.2);
        pstmt.setDouble(3, 2.4);
        pstmt.setDouble(4, 3.2);
        pstmt.setString(5, "vlavbla");
        int nrows1 = pstmt.executeUpdate();
        pstmt.close();
        Assertions.assertEquals(1, nrows1, "It should have affected 1 row!");

        pstmt = con.prepareStatement("UPDATE HTMTEST set COMMENT=?, TYPE=? WHERE HTMID=?");
        pstmt.setString(1, "some update");
        pstmt.setObject(2, (float)3.2);
        pstmt.setLong(3, 1L);
        int nrows2 = pstmt.executeUpdate();
        pstmt.close();
        Assertions.assertEquals(1, nrows2, "It should have affected 1 row!");

        con.rollback();
        con.close();
    }

    @Test
    @DisplayName("Test prepared statements - Checking the result set")
    void testPreparedStatementsAndResultSets() throws SQLException {
        Connection con = createJDBCEmbeddedConnection();
        con.setAutoCommit(false);
        Assertions.assertFalse(con.getAutoCommit(), "Auto-commit not working?");

        Statement stmt = con.createStatement();
        int rows1 = stmt.executeUpdate("CREATE TABLE table_Test_PSgetObject (ti tinyint, si smallint, i int, bi bigint, vvc varchar(32), bbol boolean, fpp real)");
        stmt.close();
        Assertions.assertEquals(-2, rows1, "The creation should have affected no rows!");

        byte[] column1 = new byte[]{-35};
        short[] column2 = new short[]{2};
        int[] column3 = new int[]{323123123};
        long[] column4 = new long[]{44534534354L};
        String[] column5 = new String[]{"testing"};
        boolean[] column6 = new boolean[]{true};
        float[] column7 = new float[]{12.345f};

        PreparedStatement pstmt = con.prepareStatement("INSERT INTO table_Test_PSgetObject (ti,si,i,bi,vvc,bbol,fpp) VALUES (?,?,?,?,?,?,?)");
        pstmt.setByte(1, column1[0]);
        pstmt.setShort(2, column2[0]);
        pstmt.setInt(3, column3[0]);
        pstmt.setLong(4, column4[0]);
        pstmt.setString(5, column5[0]);
        pstmt.setBoolean(6, column6[0]);
        pstmt.setFloat(7, column7[0]);
        Assertions.assertFalse(pstmt.execute(), "The value returned should be false in a update query!");
        pstmt.close();

        pstmt = con.prepareStatement("SELECT ti,si,i,bi,vvc,bbol,fpp FROM table_Test_PSgetObject ORDER BY ti,si,i,bi,vvc,bbol,fpp");
        ResultSet rs = pstmt.executeQuery();

        rs.next();
        Assertions.assertEquals(column1[0], rs.getByte(1), "Problems in the JDBC prepared statements!");
        Assertions.assertEquals(column2[0], rs.getShort(2), "Problems in the JDBC prepared statements!");
        Assertions.assertEquals(column3[0], rs.getInt(3), "Problems in the JDBC prepared statements!");
        Assertions.assertEquals(column4[0], rs.getLong(4), "Problems in the JDBC prepared statements!");
        Assertions.assertEquals(column5[0], rs.getString(5), "Problems in the JDBC prepared statements!");
        Assertions.assertEquals(column6[0], rs.getBoolean(6), "Problems in the JDBC prepared statements!");
        Assertions.assertEquals(column7[0], rs.getFloat(7), 0.01f, "Problems in the JDBC prepared statements!");
        rs.close();
        pstmt.close();

        pstmt = con.prepareStatement("SELECT ti,si,i,bi,vvc,bbol,fpp FROM table_Test_PSgetObject ORDER BY ti,si,i,bi,vvc,bbol,fpp");
        Assertions.assertTrue(pstmt.execute(), "The value returned should be true in a result set query!");
        pstmt.close();

        con.rollback();
        con.close();
    }
}
