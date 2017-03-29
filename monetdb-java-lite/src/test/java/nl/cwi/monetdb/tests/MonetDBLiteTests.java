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

        QueryResultSet rs = con1.sendQuery("SELECT 1;");
        //A query result set cannot do any further statements after is closed
        rs.close();
        Assertions.assertThrows(MonetDBEmbeddedException.class, () -> rs.getIntegerByColumnIndexAndRow(1, 1));
        Assertions.assertTrue(rs::isQueryResultSetClosed);

        //The same happens for the connection
        con1.close();
        Assertions.assertThrows(MonetDBEmbeddedException.class, () -> con1.sendQuery("SELECT 1;"));
        Assertions.assertTrue(con1::isConnectionClosed);
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
                    QueryResultSet rs = con.sendQuery("SELECT * from tables;");
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
        MonetDBEmbeddedConnection con1 = MonetDBEmbeddedDatabase.createConnection();
        QueryResultSet rs = con1.sendQuery("SELECT * from types WHERE 1=0;");
        Assertions.assertThrows(ArrayIndexOutOfBoundsException.class, () -> rs.getIntegerByColumnIndexAndRow(1, 1));
        rs.close();
        con1.close();
    }

    @Test
    @DisplayName("SELECT NULL")
    void selectNull() throws MonetDBEmbeddedException {
        MonetDBEmbeddedConnection con1 = MonetDBEmbeddedDatabase.createConnection();
        QueryResultSet rs = con1.sendQuery("SELECT NULL AS stresser;");
        rs.close();
        con1.close();
    }
}
