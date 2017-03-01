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
    @DisplayName("Test a simple result set in JDBC")
    void testSimpleTable() throws SQLException {
        Connection jdbcConnection = createJDBCEmbeddedConnection();
        Statement st = jdbcConnection.createStatement();
        st.executeUpdate("CREATE TABLE test1 (a smallint, b varchar(32), c real, d int, e boolean);");
        st.executeUpdate("INSERT INTO test1 VALUES (1, 'one', 3.223, 100, 'true');");
        st.executeUpdate("INSERT INTO test1 VALUES (2, NULL, NULL, -2032, 'false');");
        st.executeUpdate("INSERT INTO test1 VALUES (-3545, 'test', -7.858, 423423, NULL);");

        short[] column1 = new short[]{1, 2, -3545};
        String[] column2 = new String[]{"one", null, "test"};
        float[] column3 = new float[]{3.223f, 0.0f, -7.858f};
        int[] column4 = new int[]{100, -2032, 423423};
        boolean[] column5 = new boolean[]{true, false, false};

        ResultSet rs = st.executeQuery("SELECT * from test1;");
        for(int i = 0 ; i < 3; i++) {
            rs.next();
            Assertions.assertEquals(column1[i], rs.getShort(1), "Problems in the JDBC result set!");
            Assertions.assertEquals(column2[i], rs.getString(2), "Problems in the JDBC result set!");
            Assertions.assertEquals(column3[i], rs.getFloat(3), 0.01f, "Problems in the JDBC result set!");
            Assertions.assertEquals(column4[i], rs.getInt(4), "Problems in the JDBC result set!");
            Assertions.assertEquals(column5[i], rs.getBoolean(5), "Problems in the JDBC result set!");
        }
        rs.close();
        st.executeUpdate("DROP TABLE test1;");
        st.close();
        jdbcConnection.close();
    }

    @Test
    @DisplayName("Create some concurrent JDBC connections")
    void timeToStress() throws SQLException, InterruptedException {
        List<Thread> stressers = new ArrayList<>();

        for (int i = 0; i < 16; i++) {
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
        List<Connection> cons = new ArrayList<>(50); //Create many simultaneous connections
        for (int i = 0; i < 50; i++) {
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

        stmt1.executeUpdate("CREATE TABLE testAutoCommit (id int)");
        stmt2.executeQuery("SELECT * FROM testAutoCommit");

        // turn off auto commit
        con1.setAutoCommit(false);
        con2.setAutoCommit(false);

        Assertions.assertFalse(con1.getAutoCommit(), "Auto-commit not working?");
        Assertions.assertFalse(con2.getAutoCommit(), "Auto-commit not working?");

        stmt2.executeUpdate("DROP TABLE testAutoCommit");
        rs = stmt1.executeQuery("SELECT * FROM testAutoCommit");
        rs.close();
        con2.commit();
        rs = stmt1.executeQuery("SELECT * FROM testAutoCommit");
        rs.close();
        con1.commit();

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
        Statement stmt1 = conn.createStatement();

        Assertions.assertTrue(conn.getAutoCommit(), "Auto-commit not working?");
        Assertions.assertThrows(SQLException.class, conn::commit);

        conn.setAutoCommit(false);
        Assertions.assertFalse(conn.getAutoCommit(), "Auto-commit not working?");

        conn.commit();
        conn.rollback();

        conn.setAutoCommit(true);
        Assertions.assertTrue(conn.getAutoCommit(), "Auto-commit not working?");

        stmt1.executeUpdate("START TRANSACTION");
        conn.commit();
        Assertions.assertTrue(conn.getAutoCommit(), "Auto-commit not working?");

        stmt1.executeUpdate("START TRANSACTION");
        conn.rollback();
        Assertions.assertTrue(conn.getAutoCommit(), "Auto-commit not working?");
        Assertions.assertThrows(SQLException.class, conn::commit);

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
        stmt.executeUpdate("CREATE TABLE testSavePoints (id int)");
        Savepoint sp1 = con.setSavepoint("empty table");
        rs = stmt.executeQuery("SELECT id FROM testSavePoints");
        while (rs.next()) {
            i++;
        }
        Assertions.assertEquals(0, i, "Savepoints not working?");
        rs.close();

        //now add three values
        stmt.executeUpdate("INSERT INTO testSavePoints VALUES (1), (2), (3)");
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

        con.close();
    }
}
