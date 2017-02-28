package nl.cwi.monetdb.regularapitests;

import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedConnection;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedDatabase;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedException;
import nl.cwi.monetdb.embedded.resultset.QueryResultSet;
import org.junit.jupiter.api.*;

import java.io.IOException;
import java.math.BigDecimal;
import java.nio.file.Files;
import java.nio.file.Path;
import java.sql.Date;
import java.sql.Time;
import java.sql.Timestamp;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Locale;

/**
 * Test query result sets.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public class QueryResultSetTests {

    private static MonetDBEmbeddedConnection connection;

    @BeforeAll
    static void startupDatabase() throws IOException, MonetDBEmbeddedException {
        Path directoryPath = Files.createTempDirectory("monetdbtest");
        MonetDBEmbeddedDatabase.StartDatabase(directoryPath.toString(), true, false);
        connection = MonetDBEmbeddedDatabase.CreateConnection();
    }

    @Test
    void testBasicTypes() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE testbasics (a boolean, b text, c tinyint, d smallint, e int, f bigint, h real, i double);");
        connection.sendUpdate("INSERT INTO testbasics VALUES ('true', 'a1212#da ', 1, 1, 1, 1, 1, 1);");
        connection.sendUpdate("INSERT INTO testbasics VALUES ('false', 'another with spaces', -2, -2, -2, -2, -1.59, -1.69);");
        connection.sendUpdate("INSERT INTO testbasics VALUES ('true', '0', 0, 0, 0, 0, 0, 0);");

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM testbasics;");

        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(numberOfRows, 3, () -> "The number of rows should be 3, got " + numberOfRows + " instead!");
        Assertions.assertEquals(numberOfColumns, 8, () -> "The number of columns should be 8, got " + numberOfColumns + " instead!");

        boolean[] array1 = new boolean[3];
        qrs.getBooleanColumnByIndex(1, array1);
        Assertions.assertArrayEquals(new boolean[]{true, false, true}, array1, () -> "Booleans not correctly retrieved!");

        String[] array2 = new String[3];
        qrs.getStringColumnByIndex(2, array2);
        Assertions.assertArrayEquals(new String[]{"a1212#da ", "another with spaces", "0"}, array2, () -> "Strings not correctly retrieved!");

        byte[] array3 = new byte[3];
        qrs.getByteColumnByIndex(3, array3);
        Assertions.assertArrayEquals(new byte[]{1, -2, 0}, array3, () -> "Tinyints not correctly retrieved!");

        short[] array4 = new short[3];
        qrs.getShortColumnByIndex(4, array4);
        Assertions.assertArrayEquals(new short[]{1, -2, 0}, array4, () -> "Smallints not correctly retrieved!");

        int[] array5 = new int[3];
        qrs.getIntColumnByIndex(5, array5);
        Assertions.assertArrayEquals(new int[]{1, -2, 0}, array5, () -> "Integers not correctly retrieved!");

        long[] array6 = new long[3];
        qrs.getLongColumnByIndex(6, array6);
        Assertions.assertArrayEquals(new long[]{1, -2, 0}, array6, () -> "Integers not correctly retrieved!");

        float[] array7 = new float[3];
        qrs.getFloatColumnByIndex(7, array7);
        Assertions.assertArrayEquals(new float[]{1, -1.59f, 0}, array7, 0.1f, () -> "Floats not correctly retrieved!");

        double[] array8 = new double[3];
        qrs.getDoubleColumnByIndex(8, array8);
        Assertions.assertArrayEquals(new double[]{1, -1.69d, 0}, array8, 0.1d, () -> "Doubles not correctly retrieved!");

        qrs.close();
        connection.sendUpdate("DROP TABLE testbasics;");
    }

    @Test
    void testTimeAndDatesTypes() throws MonetDBEmbeddedException, ParseException {
        connection.sendUpdate("CREATE TABLE testdates (a date, b time, c time with time zone, d timestamp, e timestamp with time zone, f INTERVAL year to month, g INTERVAL minute to second);");
        connection.sendUpdate("INSERT INTO testdates VALUES ('2016-01-01', '23:10:47', '20:10:47', '2016-01-31T00:01:44', '1986-12-31T12:10:12', 1, 1);");
        connection.sendUpdate("INSERT INTO testdates VALUES ('1998-10-27', '0:10:47', '21:10:47', '1950-11-15T22:10:45', '1951-02-11T00:59:59', -10, -3000);");
        connection.sendUpdate("INSERT INTO testdates VALUES ('2014-02-02', '10:10:47', '11:10:47', '2016-03-04T08:30:30', '2016-03-04T09:00:01', 1023, 12);");
        connection.sendUpdate("INSERT INTO testdates VALUES ('1950-12-12', '20:10:47', '2:10:47', '1970-02-19T00:00:00', '1978-12-07T10:42:31', 0, 0);");

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM testdates;");

        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(numberOfRows, 4, () -> "The number of rows should be 4, got " + numberOfRows + " instead!");
        Assertions.assertEquals(numberOfColumns, 7, () -> "The number of columns should be 7, got " + numberOfColumns + " instead!");

        SimpleDateFormat dateFormater = new SimpleDateFormat("yyyy-MM-dd", Locale.ENGLISH);
        SimpleDateFormat timeFormater = new SimpleDateFormat("HH:mm:ss", Locale.ENGLISH);
        SimpleDateFormat timestampFormater = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.ENGLISH);

        //TODO check dates in the summer time...

        Date[] array1 = new Date[4];
        qrs.getDateColumnByIndex(1, array1);
        Assertions.assertArrayEquals(new Date[]{
                new Date(dateFormater.parse("2016-01-01").getTime()),
                new Date(dateFormater.parse("1998-10-27").getTime()),
                new Date(dateFormater.parse("2014-02-02").getTime()),
                new Date(dateFormater.parse("1950-12-12").getTime())
        }, array1, () -> "Dates not correctly retrieved!");

        Time[] array2 = new Time[4];
        qrs.getTimeColumnByIndex(2, array2);
        Assertions.assertArrayEquals(new Time[]{
                new Time(timeFormater.parse("23:10:47").getTime()),
                new Time(timeFormater.parse("0:10:47").getTime()),
                new Time(timeFormater.parse("10:10:47").getTime()),
                new Time(timeFormater.parse("20:10:47").getTime())
        }, array2, () -> "Times not correctly retrieved!");

        Time[] array3 = new Time[4];
        qrs.getTimeColumnByIndex(3, array3);
        Assertions.assertArrayEquals(new Time[]{
                new Time(timeFormater.parse("20:10:47").getTime()),
                new Time(timeFormater.parse("21:10:47").getTime()),
                new Time(timeFormater.parse("11:10:47").getTime()),
                new Time(timeFormater.parse("2:10:47").getTime())
        }, array3, () -> "Times with timezones not correctly retrieved!");

        Timestamp[] array4 = new Timestamp[4];
        qrs.getTimestampColumnByIndex(4, array4);
        Assertions.assertArrayEquals(new Timestamp[]{
                new Timestamp(timestampFormater.parse("2016-01-31 00:01:44").getTime()),
                new Timestamp(timestampFormater.parse("1950-11-15 22:10:45").getTime()),
                new Timestamp(timestampFormater.parse("2016-03-04 08:30:30").getTime()),
                new Timestamp(timestampFormater.parse("1970-02-19 00:00:00").getTime())
        }, array4, () -> "Timestamps not correctly retrieved!");

        Timestamp[] array5 = new Timestamp[4];
        qrs.getTimestampColumnByIndex(5, array5);
        Assertions.assertArrayEquals(new Timestamp[]{
                new Timestamp(timestampFormater.parse("1986-12-31 12:10:12").getTime()),
                new Timestamp(timestampFormater.parse("1951-02-11 00:59:59").getTime()),
                new Timestamp(timestampFormater.parse("2016-03-04 09:00:01").getTime()),
                new Timestamp(timestampFormater.parse("1978-12-07 10:42:31").getTime())
        }, array5, () -> "Timestamps with timezone not correctly retrieved!");

        int[] array6 = new int[4];
        qrs.getIntColumnByIndex(6, array6);
        Assertions.assertArrayEquals(new int[]{1, -10, 1023, 0}, array6, () -> "Month intervals not correctly retrieved!");

        long[] array7 = new long[4];
        qrs.getLongColumnByIndex(7, array7);
        Assertions.assertArrayEquals(new long[]{1000, -3000000, 12000, 0}, array7, () -> "Second intervals not correctly retrieved!");

        qrs.close();
        connection.sendUpdate("DROP TABLE testdates;");
    }

    @Test
    void testDecimals() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE testDecimals (a decimal);");
        connection.sendUpdate("INSERT INTO testDecimals VALUES (1.6), (12), (-1.42), (525636.777), (-41242.32), (0);");

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM testDecimals;");

        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(numberOfRows, 6, () -> "The number of rows should be 6, got " + numberOfRows + " instead!");
        Assertions.assertEquals(numberOfColumns, 1, () -> "The number of columns should be 1, got " + numberOfColumns + " instead!");

        //Having default precision of 3
        BigDecimal[] array1 = new BigDecimal[6];
                qrs.getDecimalColumnByIndex(1, array1);
        Assertions.assertArrayEquals(new BigDecimal[]{
                new BigDecimal("1.600"), new BigDecimal("12.000"), new BigDecimal("-1.420"),
                new BigDecimal("525636.777"), new BigDecimal("-41242.320"), new BigDecimal("0.000")
        }, array1, () -> "BigDecimals not correctly retrieved!");

        qrs.close();
        connection.sendUpdate("DROP TABLE testDecimals;");
    }

    @Test
    void testBlobs() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE testblobs (a blob);");
        connection.sendUpdate("INSERT INTO testblobs VALUES ('aabbcc');");

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM testblobs;");

        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(numberOfRows, 1, () -> "The number of rows should be 1, got " + numberOfRows + " instead!");
        Assertions.assertEquals(numberOfColumns, 1, () -> "The number of columns should be 1, got " + numberOfColumns + " instead!");

        byte[][] array1 = new byte[1][];
        qrs.getBlobColumnByIndex(1, array1);
        Assertions.assertArrayEquals(new byte[][]{
                new byte[]{-86, -69, -52}
        }, array1, () -> "Blobs not correctly retrieved!");

        qrs.close();
        connection.sendUpdate("DROP TABLE testblobs;");
    }

    @Test
    @Disabled //TODO still returning -1 in updates
    void testUpdates() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE testupdates (val int);");
        connection.sendUpdate("INSERT INTO testupdates VALUES (1), (2), (3), (4);");
        int rows = connection.sendUpdate("UPDATE testupdates SET val=2 WHERE val<3;");
        Assertions.assertEquals(rows, 2, () -> "It should have affected 2 rows!");
        connection.sendUpdate("DROP TABLE testupdates;");
    }

    @AfterAll
    static void tearDownAll() throws MonetDBEmbeddedException {
        connection.close();
        MonetDBEmbeddedDatabase.StopDatabase();
    }
}
