/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.tests;

import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedConnection;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedDatabase;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedException;
import nl.cwi.monetdb.embedded.resultset.QueryResultSet;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.List;

/**
 * Testing the MonetDBJavaLite environment
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public class MonetDBLiteTests extends MonetDBJavaLiteTesting {

    @Test
    @DisplayName("General assertions from the Database environment")
    void databaseEnv() throws MonetDBEmbeddedException {
        //Cannot have two MonetDBEmbeddedDatabase instances
        try {
            MonetDBEmbeddedDatabase.startDatabase("/", true, false);
            Assertions.fail("The MonetDBEmbeddedException should be thrown!");
        } catch (MonetDBEmbeddedException ignored) {
            //I was getting unexpected results with this inside of a Assertions.assertThrows, so I made this...
        }

        MonetDBEmbeddedConnection con1 = MonetDBEmbeddedDatabase.createConnection();

        QueryResultSet rs = con1.executeQuery("SELECT 1;");
        //A query result set cannot do any further statements after is closed
        rs.close();
        Assertions.assertThrows(MonetDBEmbeddedException.class, () -> rs.getIntegerByColumnIndexAndRow(1, 1));
        Assertions.assertTrue(rs::isQueryResultSetClosed);

        //The same happens for the connection
        con1.close();
        Assertions.assertThrows(MonetDBEmbeddedException.class, () -> con1.executeQuery("SELECT 1;"));
        Assertions.assertTrue(con1::isClosed);
    }

    @Test
    @DisplayName("Just another race of MonetDBEmbeddedConnections")
    void oneMoreRace() throws InterruptedException {
        int stress = 50;
        List<Thread> otherStressers = new ArrayList<>(stress);

        for (int i = 0; i < stress; i++) {
            Thread t = new Thread(() -> {
                try {
                    MonetDBEmbeddedConnection con = MonetDBEmbeddedDatabase.createConnection();
                    QueryResultSet rs = con.executeQuery("SELECT * from tables;");
                    rs.close();
                    con.close();
                } catch (MonetDBEmbeddedException e) {
                    Assertions.fail(e.getMessage());
                }
            });
            t.start();
            otherStressers.add(t);
        }

        for (Thread t : otherStressers) {
            t.join();
        }
    }

    @Test
    @DisplayName("Empty result sets")
    void stringsWithExoticCharacters() throws MonetDBEmbeddedException {
        MonetDBEmbeddedConnection con = MonetDBEmbeddedDatabase.createConnection();
        QueryResultSet qrs = con.executeQuery("SELECT id from types WHERE 1=0;");
        Assertions.assertThrows(ArrayIndexOutOfBoundsException.class, () -> qrs.getIntegerByColumnIndexAndRow(1, 1));
        int numberOfRows = qrs.getNumberOfRows();
        Assertions.assertEquals(0, numberOfRows, "The number of rows should be 0, got " + numberOfRows + " instead!");
        qrs.close();
        con.close();
    }

    @Test
    @DisplayName("SELECT NULL")
    void selectNull() throws MonetDBEmbeddedException {
        MonetDBEmbeddedConnection con = MonetDBEmbeddedDatabase.createConnection();
        QueryResultSet qrs = con.executeQuery("SELECT NULL AS stresser;");
        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(1, numberOfRows, "The number of rows should be 1, got " + numberOfRows + " instead!");
        Assertions.assertEquals(1, numberOfColumns, "The number of columns should be 1, got " + numberOfColumns + " instead!");
        qrs.close();
        con.close();
    }
}
