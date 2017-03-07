/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.tests;

import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedException;
import nl.cwi.monetdb.embedded.mapping.NullMappings;
import nl.cwi.monetdb.embedded.resultset.QueryResultSet;
import nl.cwi.monetdb.embedded.tables.IMonetDBTableCursor;
import nl.cwi.monetdb.embedded.tables.MonetDBTable;
import nl.cwi.monetdb.embedded.tables.RowIterator;
import org.junit.jupiter.api.*;

import java.math.BigDecimal;
import java.sql.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Locale;

/**
 * Test the regular API. Just that :)
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public class RegularAPITests extends MonetDBJavaLiteTesting {

    @Test
    @DisplayName("Testing single values retrieved from a query")
    void testSingleValues() throws MonetDBEmbeddedException {
        QueryResultSet qrs = connection.sendQuery("SELECT 1+1 AS a1, 'monetdb' AS a2, AVG(2.3) as a3;");
        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(1, numberOfRows, "The number of rows should be 1, got " + numberOfRows + " instead!");
        Assertions.assertEquals(3, numberOfColumns, "The number of columns should be 3, got " + numberOfColumns + " instead!");

        String[] columnNames = new String[numberOfColumns];
        qrs.getColumnNames(columnNames);
        Assertions.assertArrayEquals(new String[]{"a1", "a2", "a3"}, columnNames, "Column names not correctly retrieved!");

        byte sum = qrs.getByteByColumnIndexAndRow(1,1);
        String monetDB = qrs.getStringByColumnNameAndRow("a2",1);
        double avg = qrs.getDoubleByColumnIndexAndRow(3, 1);

        Assertions.assertEquals(2, sum, "The sum is not 2?");
        Assertions.assertEquals("monetdb", monetDB, "The sum is not 2?");
        Assertions.assertEquals(2.3, avg, 0.01, "The avg is not right?");
        qrs.close();
    }

    @Test
    @DisplayName("Retrieve the most common types from a query into arrays (Also testing foreign characters)")
    void testBasicTypes() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE testbasics (a boolean, b text, c tinyint, d smallint, e int, f bigint, h real, i double);");
        connection.sendUpdate("INSERT INTO testbasics VALUES ('true', 'a1ñ212#da ', 1, 1, 1, 1, 1.22, 1.33);");
        connection.sendUpdate("INSERT INTO testbasics VALUES ('false', 'another with spaces', -2, -2, -2, -2, -1.59, -1.69);");
        connection.sendUpdate("INSERT INTO testbasics VALUES ('true', '0', 0, 0, 0, 0, 0, 0);");

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM testbasics;");
        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(3, numberOfRows, "The number of rows should be 3, got " + numberOfRows + " instead!");
        Assertions.assertEquals(8, numberOfColumns, "The number of columns should be 8, got " + numberOfColumns + " instead!");

        boolean[] array1 = new boolean[3];
        qrs.getBooleanColumnByIndex(1, array1);
        Assertions.assertArrayEquals(new boolean[]{true, false, true}, array1, "Booleans not correctly retrieved!");

        String[] array2 = new String[3];
        qrs.getStringColumnByIndex(2, array2);
        Assertions.assertArrayEquals(new String[]{"a1ñ212#da ", "another with spaces", "0"}, array2, "Strings not correctly retrieved!");

        byte[] array3 = new byte[3];
        qrs.getByteColumnByIndex(3, array3);
        Assertions.assertArrayEquals(new byte[]{1, -2, 0}, array3, "Tinyints not correctly retrieved!");

        short[] array4 = new short[3];
        qrs.getShortColumnByIndex(4, array4);
        Assertions.assertArrayEquals(new short[]{1, -2, 0}, array4, "Smallints not correctly retrieved!");

        int[] array5 = new int[3];
        qrs.getIntColumnByIndex(5, array5);
        Assertions.assertArrayEquals(new int[]{1, -2, 0}, array5, "Integers not correctly retrieved!");

        long[] array6 = new long[3];
        qrs.getLongColumnByIndex(6, array6);
        Assertions.assertArrayEquals(new long[]{1, -2, 0}, array6, "Integers not correctly retrieved!");

        float[] array7 = new float[3];
        qrs.getFloatColumnByIndex(7, array7);
        Assertions.assertArrayEquals(new float[]{1.22f, -1.59f, 0}, array7, 0.1f, "Floats not correctly retrieved!");

        double[] array8 = new double[3];
        qrs.getDoubleColumnByIndex(8, array8);
        Assertions.assertArrayEquals(new double[]{1.33d, -1.69d, 0}, array8, 0.1d, "Doubles not correctly retrieved!");

        qrs.close();
        connection.sendUpdate("DROP TABLE testbasics;");
    }

    @Test
    @Disabled("Who is brave enough to deal with timezones?")
    @DisplayName("Retrieve dates from a query into arrays")
    void testTimeAndDatesTypes() throws MonetDBEmbeddedException, ParseException {

        SimpleDateFormat dateFormater = new SimpleDateFormat("yyyy-MM-dd", Locale.ENGLISH);
        SimpleDateFormat timeFormater = new SimpleDateFormat("HH:mm:ss", Locale.ENGLISH);
        SimpleDateFormat timestampFormater = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.ENGLISH);

        connection.sendUpdate("CREATE TABLE testdates (a date, b time, c time with time zone, d timestamp, e timestamp with time zone, f INTERVAL year to month, g INTERVAL minute to second);");
        connection.sendUpdate("INSERT INTO testdates VALUES ('2016-01-01', '23:10:47', '20:10:47', '2016-01-31T00:01:44', '1986-12-31T12:10:12', 1, 1);");
        connection.sendUpdate("INSERT INTO testdates VALUES ('1998-10-27', '0:10:47', '21:10:47', '1971-11-15T22:10:45', '1972-02-11T00:59:59', -10, -3000);");
        connection.sendUpdate("INSERT INTO testdates VALUES ('2014-12-02', '10:10:47', '11:10:47', '2016-03-04T08:30:30', '2016-03-04T09:00:01', 1023, 12);");
        connection.sendUpdate("INSERT INTO testdates VALUES ('1950-02-12', '20:10:47', '2:10:47', '1992-02-19T00:00:00', '1978-12-07T10:42:31', 0, 0);");

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM testdates;");
        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(4, numberOfRows, "The number of rows should be 4, got " + numberOfRows + " instead!");
        Assertions.assertEquals(7, numberOfColumns, "The number of columns should be 7, got " + numberOfColumns + " instead!");

        Date[] array1 = new Date[4];
        qrs.getDateColumnByIndex(1, array1);
        Assertions.assertArrayEquals(new Date[]{
                new Date(dateFormater.parse("2016-01-01").getTime()),
                new Date(dateFormater.parse("1998-10-27").getTime()),
                new Date(dateFormater.parse("2014-12-02").getTime()),
                new Date(dateFormater.parse("1950-02-12").getTime())
        }, array1, "Dates not correctly retrieved!");

        Time[] array2 = new Time[4];
        qrs.getTimeColumnByIndex(2, array2);
        Assertions.assertArrayEquals(new Time[]{
                new Time(timeFormater.parse("23:10:47").getTime()),
                new Time(timeFormater.parse("0:10:47").getTime()),
                new Time(timeFormater.parse("10:10:47").getTime()),
                new Time(timeFormater.parse("20:10:47").getTime())
        }, array2, "Times not correctly retrieved!");

        Time[] array3 = new Time[4];
        qrs.getTimeColumnByIndex(3, array3);
        Assertions.assertArrayEquals(new Time[]{
                new Time(timeFormater.parse("20:10:47").getTime()),
                new Time(timeFormater.parse("21:10:47").getTime()),
                new Time(timeFormater.parse("11:10:47").getTime()),
                new Time(timeFormater.parse("2:10:47").getTime())
        }, array3, "Times with timezones not correctly retrieved!");

        Timestamp[] array4 = new Timestamp[4];
        qrs.getTimestampColumnByIndex(4, array4);
        Assertions.assertArrayEquals(new Timestamp[]{
                new Timestamp(timestampFormater.parse("2016-01-31 00:01:44").getTime()),
                new Timestamp(timestampFormater.parse("1971-11-15 22:10:45").getTime()),
                new Timestamp(timestampFormater.parse("2016-03-04 08:30:30").getTime()),
                new Timestamp(timestampFormater.parse("1992-02-19 00:00:00").getTime())
        }, array4, "Timestamps not correctly retrieved!");

        Timestamp[] array5 = new Timestamp[4];
        qrs.getTimestampColumnByIndex(5, array5);
        Assertions.assertArrayEquals(new Timestamp[]{
                new Timestamp(timestampFormater.parse("1986-12-31 12:10:12").getTime()),
                new Timestamp(timestampFormater.parse("1972-02-11 00:59:59").getTime()),
                new Timestamp(timestampFormater.parse("2016-03-04 09:00:01").getTime()),
                new Timestamp(timestampFormater.parse("1978-12-07 10:42:31").getTime())
        }, array5, "Timestamps with timezone not correctly retrieved!");

        int[] array6 = new int[4];
        qrs.getIntColumnByIndex(6, array6);
        Assertions.assertArrayEquals(new int[]{1, -10, 1023, 0}, array6, "Month intervals not correctly retrieved!");

        long[] array7 = new long[4];
        qrs.getLongColumnByIndex(7, array7);
        Assertions.assertArrayEquals(new long[]{1000, -3000000, 12000, 0}, array7, "Second intervals not correctly retrieved!");

        qrs.close();
        connection.sendUpdate("DROP TABLE testdates;");
    }

    @Test
    @DisplayName("Retrieve decimals from a query into arrays")
    void testDecimals() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE testDecimals (a decimal);");
        connection.sendUpdate("INSERT INTO testDecimals VALUES (1.6), (12), (-1.42), (525636.777), (-41242.32), (0);");

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM testDecimals;");
        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(6, numberOfRows, "The number of rows should be 6, got " + numberOfRows + " instead!");
        Assertions.assertEquals(1, numberOfColumns, "The number of columns should be 1, got " + numberOfColumns + " instead!");

        //Having default precision of 3
        BigDecimal[] array1 = new BigDecimal[6];
                qrs.getDecimalColumnByIndex(1, array1);
        Assertions.assertArrayEquals(new BigDecimal[]{
                new BigDecimal("1.600"), new BigDecimal("12.000"), new BigDecimal("-1.420"),
                new BigDecimal("525636.777"), new BigDecimal("-41242.320"), new BigDecimal("0.000")
        }, array1, "BigDecimals not correctly retrieved!");

        qrs.close();
        connection.sendUpdate("DROP TABLE testDecimals;");
    }

    @Test
    @DisplayName("Retrieve blobs from a query into arrays")
    void testBlobs() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE testblobs (a blob);");
        connection.sendUpdate("INSERT INTO testblobs VALUES ('aabbcc');");

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM testblobs;");
        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(1, numberOfRows, "The number of rows should be 1, got " + numberOfRows + " instead!");
        Assertions.assertEquals(1, numberOfColumns, "The number of columns should be 1, got " + numberOfColumns + " instead!");

        byte[][] array1 = new byte[1][];
        qrs.getBlobColumnByIndex(1, array1);
        Assertions.assertArrayEquals(new byte[][]{
                new byte[]{-86, -69, -52}
        }, array1, "Blobs not correctly retrieved!");

        qrs.close();
        connection.sendUpdate("DROP TABLE testblobs;");
    }

    @Test
    @DisplayName("Test if the null values are correctly retrieved")
    void testNulls() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE testnullsa (a boolean, b text, c tinyint, d smallint, e int, f bigint, h real, i double);");
        connection.sendUpdate("INSERT INTO testnullsa VALUES (null, null, null, null, null, null, null, null);");

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM testnullsa;");

        boolean first = qrs.checkBooleanIsNull(1,1);
        Assertions.assertEquals(true, first, "Boolean nulls not working!");

        String second = qrs.getStringByColumnIndexAndRow(2,1);
        Assertions.assertEquals(null, second, "String nulls not working!");

        byte third = qrs.getByteByColumnIndexAndRow(3,1);
        Assertions.assertEquals(NullMappings.GetByteNullConstant(), third, "Byte nulls not working!");

        short fourth = qrs.getShortByColumnIndexAndRow(4, 1);
        Assertions.assertEquals(NullMappings.GetShortNullConstant(), fourth, "Short nulls not working!");

        int fifth = qrs.getIntegerByColumnIndexAndRow(5, 1);
        Assertions.assertEquals(NullMappings.GetIntNullConstant(), fifth, "Integer nulls not working!");

        long sixth = qrs.getLongByColumnIndexAndRow(6, 1);
        Assertions.assertEquals(NullMappings.GetLongNullConstant(), sixth, "Long nulls not working!");

        float seventh = qrs.getFloatByColumnIndexAndRow(7, 1);
        Assertions.assertEquals(NullMappings.GetFloatNullConstant(), seventh, "Float nulls not working!");

        double eighth = qrs.getDoubleByColumnIndexAndRow(8, 1);
        Assertions.assertEquals(NullMappings.GetDoubleNullConstant(), eighth, "Double nulls not working!");

        qrs.close();
        connection.sendUpdate("DROP TABLE testnullsa;");

        connection.sendUpdate("CREATE TABLE testnullsb (a date, b time, c time with time zone, d timestamp, e timestamp with time zone, f INTERVAL year to month, g INTERVAL minute to second);");
        connection.sendUpdate("INSERT INTO testnullsb VALUES (null, null, null, null, null, null, null);");

        QueryResultSet qrs2 = connection.sendQuery("SELECT * FROM testnullsb;");

        Date nineth = qrs2.getDateByColumnIndexAndRow(1, 1);
        Assertions.assertEquals(null, nineth, "Date nulls not working!");

        Time tenth = qrs2.getTimeByColumnIndexAndRow(2, 1);
        Assertions.assertEquals(null, tenth, "Time nulls not working!");

        Time eleventh = qrs2.getTimeByColumnIndexAndRow(3, 1);
        Assertions.assertEquals(null, eleventh, "Time nulls not working!");

        Timestamp twelfth = qrs2.getTimestampByColumnIndexAndRow(4, 1);
        Assertions.assertEquals(null, twelfth, "Timestamp nulls not working!");

        Timestamp thirteenth = qrs2.getTimestampByColumnIndexAndRow(5, 1);
        Assertions.assertEquals(null, thirteenth, "Timestamp nulls not working!");

        int fourteenth = qrs2.getIntegerByColumnIndexAndRow(6, 1);
        Assertions.assertEquals(NullMappings.GetIntNullConstant(), fourteenth, "Month interval nulls not working!");

        long fifteenth = qrs2.getLongByColumnIndexAndRow(7, 1);
        Assertions.assertEquals(NullMappings.GetLongNullConstant(), fifteenth, "Second interval nulls not working!");

        qrs2.close();
        connection.sendUpdate("DROP TABLE testnullsb;");

        connection.sendUpdate("CREATE TABLE testnullsc (a blob, b decimal);");
        connection.sendUpdate("INSERT INTO testnullsc VALUES (null, null), (null, 1), ('aa', null), ('bb', 3.0);");

        QueryResultSet qrs3 = connection.sendQuery("SELECT * FROM testnullsc;");

        byte[] sixteenth = qrs3.getBlobByColumnIndexAndRow(1, 1);
        Assertions.assertEquals(null, sixteenth, "Blob nulls not working!");

        BigDecimal seventeenth = qrs3.getDecimalByColumnIndexAndRow(2, 1);
        Assertions.assertEquals(null, seventeenth, "Decimal nulls not working!");

        int numberOfRows = qrs3.getNumberOfRows();
        Assertions.assertEquals(4, numberOfRows, "The number of rows should be 4, got " + numberOfRows + " instead!");

        boolean[] eighteenth = new boolean[numberOfRows];
        qrs3.getColumnNullMappingsByIndex(1, eighteenth);
        Assertions.assertArrayEquals(new boolean[]{true, true, false, false}, eighteenth, "Null mapping problem!");
        qrs3.getColumnNullMappingsByIndex(2, eighteenth);
        Assertions.assertArrayEquals(new boolean[]{true, false, true, false}, eighteenth, "Null mapping problem!");

        qrs3.close();
        connection.sendUpdate("DROP TABLE testnullsc;");
    }

    @Test
    @DisplayName("Test the table iteration")
    void testIterateTable() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE test4 (a text, b int);");
        connection.sendUpdate("INSERT INTO test4 VALUES ('one', -40);");
        connection.sendUpdate("INSERT INTO test4 VALUES ('more', 5);");
        connection.sendUpdate("INSERT INTO test4 VALUES ('test', 37);");

        MonetDBTable test4 = connection.getMonetDBTable("sys", "test4");

        test4.iterateTable(new IMonetDBTableCursor() {
            @Override
            public void processNextRow(RowIterator rowIterator) {
                String test1 = rowIterator.getColumnByIndex(1, String.class);
                Integer test2 = rowIterator.getColumnByIndex(2, Integer.class);
                switch (rowIterator.getCurrentIterationNumber()) {
                    case 1:
                        Assertions.assertEquals("one", test1, "Table iteration not working!");
                        Assertions.assertEquals(new Integer(-40), test2, "Table iteration not working!");
                        break;
                    case 2:
                        Assertions.assertEquals("more", test1, "Table iteration not working!");
                        Assertions.assertEquals(new Integer(5), test2, "Table iteration not working!");
                        break;
                    default:
                        Assertions.assertEquals("test", test1, "Table iteration not working!");
                        Assertions.assertEquals(new Integer(37), test2, "Table iteration not working!");
                }
           }

           @Override
           public int getFirstRowToIterate() {
                return 1;
            }

           @Override
           public int getLastRowToIterate() {
                return 3;
            }
        });

        connection.sendUpdate("DROP TABLE test4;");
    }

    @Test
    @DisplayName("Test appending basic types into a table (Also testing foreign characters)")
    void testAppendBasic() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE test5 (a boolean, b text, c tinyint, d smallint, e int, f bigint, h real, i double);");
        MonetDBTable test5 = connection.getMonetDBTable("sys", "test5");

        byte[] append1 = new byte[]{1, 1, 0, 0, NullMappings.GetBooleanNullConstant()};
        String[] append2 = new String[]{"eerlijk", "lekker", "smullen", "ñsmañakñ", NullMappings.GetObjectNullConstant()};
        byte[] append3 = new byte[]{-1, 54, -65, 1 , NullMappings.GetByteNullConstant() };
        short[] append4 = new short[]{-9808, 54, 99, 5233, NullMappings.GetShortNullConstant() };
        int[] append5 = new int[]{2, 3, -1122100, -23123, NullMappings.GetIntNullConstant()};
        long[] append6 = new long[]{635L, 123L, -1122343100L, -2312433L, NullMappings.GetLongNullConstant()};
        float[] append7 = new float[]{635.2f, 123.1f, -1.4f, -2.33f, NullMappings.GetFloatNullConstant()};
        double[] append8 = new double[]{635.2d, 123.1d, -1.4d, -2.23d, NullMappings.GetDoubleNullConstant()};
        Object[] appends = new Object[]{append1, append2, append3, append4, append5, append6, append7, append8};
        test5.appendColumns(appends);

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM test5;");
        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(5, numberOfRows, "The number of rows should be 5, got " + numberOfRows + " instead!");
        Assertions.assertEquals(8, numberOfColumns, "The number of columns should be 8, got " + numberOfColumns + " instead!");

        boolean[] array1 = new boolean[4];
        qrs.getBooleanColumnByIndex(1, array1, 0, 4);
        Assertions.assertArrayEquals(new boolean[]{true, true, false, false}, array1, "Booleans not correctly appended!");
        //The boolean null value cannot be tested directly because in Java side you can only see true or false values
        Assertions.assertTrue(qrs.checkBooleanIsNull(1,5), "Booleans nulls not working!");

        String[] array2 = new String[5];
        qrs.getStringColumnByIndex(2, array2);
        Assertions.assertArrayEquals(append2, array2, "Strings not correctly appended!");

        byte[] array3 = new byte[5];
        qrs.getByteColumnByIndex(3, array3);
        Assertions.assertArrayEquals(append3, array3, "Tinyints not correctly appended!");

        short[] array4 = new short[5];
        qrs.getShortColumnByIndex(4, array4);
        Assertions.assertArrayEquals(append4, array4, "Smallints not correctly appended!");

        int[] array5 = new int[5];
        qrs.getIntColumnByIndex(5, array5);
        Assertions.assertArrayEquals(append5, array5, "Integers not correctly appended!");

        long[] array6 = new long[5];
        qrs.getLongColumnByIndex(6, array6);
        Assertions.assertArrayEquals(append6, array6, "Integers not correctly appended!");

        float[] array7 = new float[5];
        qrs.getFloatColumnByIndex(7, array7);
        Assertions.assertArrayEquals(append7, array7, 0.01f, "Floats not correctly appended!");

        double[] array8 = new double[5];
        qrs.getDoubleColumnByIndex(8, array8);
        Assertions.assertArrayEquals(append8, array8, 0.01d, "Doubles not correctly appended!");

        qrs.close();
        connection.sendUpdate("DROP TABLE test5;");
    }

    @Test
    @DisplayName("Test appending decimals into a table")
    void testAppendDecimals() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE test5 (a decimal);");
        MonetDBTable test5 = connection.getMonetDBTable("sys", "test5");

        BigDecimal[] append1 = new BigDecimal[]{new BigDecimal("1.600"), new BigDecimal("12.000"),
                NullMappings.GetObjectNullConstant(), new BigDecimal("900.000"), new BigDecimal("-1.232") };
        Object[] appends = new Object[]{append1};
        test5.appendColumns(appends);

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM test5;");
        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(5, numberOfRows, "The number of rows should be 5, got " + numberOfRows + " instead!");
        Assertions.assertEquals(1, numberOfColumns, "The number of columns should be 1, got " + numberOfColumns + " instead!");

        BigDecimal[] array1 = new BigDecimal[numberOfRows];
        qrs.getDecimalColumnByIndex(1, array1);
        Assertions.assertArrayEquals(append1, array1, "Decimals not correctly appended!");

        qrs.close();
        connection.sendUpdate("DROP TABLE test5;");
    }

    @Test
    @Disabled("Who is brave enough to deal with timezones?")
    @DisplayName("Test appending dates into a table")
    void testAppendDates() throws MonetDBEmbeddedException, ParseException {
        SimpleDateFormat dateFormater = new SimpleDateFormat("yyyy-MM-dd", Locale.ENGLISH);
        SimpleDateFormat timeFormater = new SimpleDateFormat("HH:mm:ss", Locale.ENGLISH);
        SimpleDateFormat timestampFormater = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.ENGLISH);

        connection.sendUpdate("CREATE TABLE test6 (a date, b time, c time with time zone, d timestamp, e timestamp with time zone, f INTERVAL year to month, g INTERVAL minute to second);");
        MonetDBTable test6 = connection.getMonetDBTable("sys", "test6");

        Date[] append1 = new Date[]{new Date(dateFormater.parse("2016-01-01").getTime()),
                new Date(dateFormater.parse("1998-10-27").getTime()),
                new Date(dateFormater.parse("2014-02-02").getTime()),
                new Date(dateFormater.parse("1971-12-12").getTime()),
                NullMappings.GetObjectNullConstant()};

        Time[] append2 = new Time[]{new Time(timeFormater.parse("23:10:47").getTime()),
                new Time(timeFormater.parse("00:10:47").getTime()),
                new Time(timeFormater.parse("10:10:47").getTime()),
                new Time(timeFormater.parse("20:10:47").getTime()),
                NullMappings.GetObjectNullConstant()};

        Time[] append3 = new Time[]{new Time(timeFormater.parse("20:10:47").getTime()),
                new Time(timeFormater.parse("21:10:47").getTime()),
                new Time(timeFormater.parse("11:10:47").getTime()),
                new Time(timeFormater.parse("02:10:47").getTime()),
                NullMappings.GetObjectNullConstant()};

        Timestamp[] append4 = new Timestamp[]{
                new Timestamp(timestampFormater.parse("2016-11-04 08:59:44").getTime()),
                new Timestamp(timestampFormater.parse("2016-11-04 08:59:44").getTime()),
                new Timestamp(timestampFormater.parse("2016-11-04 08:59:44Z").getTime()),
                new Timestamp(timestampFormater.parse("2016-11-04 08:59:44").getTime()),
                NullMappings.GetObjectNullConstant()};

        Timestamp[] append5 = new Timestamp[]{
                new Timestamp(timestampFormater.parse("2016-11-04 08:59:44").getTime()),
                new Timestamp(timestampFormater.parse("2016-11-04 08:59:44").getTime()),
                new Timestamp(timestampFormater.parse("2016-11-04 08:59:44").getTime()),
                new Timestamp(timestampFormater.parse("2016-11-04 08:59:44").getTime()),
                NullMappings.GetObjectNullConstant()};

        int[] append6 = new int[]{2, 3, -1122100, -23123, NullMappings.GetIntNullConstant()};
        long[] append7 = new long[]{635L, 123L, -11400L, -23133L, NullMappings.GetLongNullConstant()};
        Object[] appends = new Object[]{append1, append2, append3, append4, append5, append6, append7};
        test6.appendColumns(appends);

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM test6;");
        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(5, numberOfRows, "The number of rows should be 5, got " + numberOfRows + " instead!");
        Assertions.assertEquals(7, numberOfColumns, "The number of columns should be 7, got " + numberOfColumns + " instead!");

        Date[] array1 = new Date[5];
        qrs.getDateColumnByIndex(1, array1);
        Assertions.assertArrayEquals(append1, array1, "Dates not correctly appended!");

        Time[] array2 = new Time[5];
        qrs.getTimeColumnByIndex(2, array2);
        Assertions.assertArrayEquals(append2, array2, "Times not correctly appended!");

        Time[] array3 = new Time[5];
        qrs.getTimeColumnByIndex(3, array3);
        Assertions.assertArrayEquals(append3, array3, "Times with timezones not correctly appended!");

        Timestamp[] array4 = new Timestamp[5];
        qrs.getTimestampColumnByIndex(4, array4);
        Assertions.assertArrayEquals(append4, array4, "Timestamps not correctly appended!");

        Timestamp[] array5 = new Timestamp[5];
        qrs.getTimestampColumnByIndex(5, array5);
        Assertions.assertArrayEquals(append5, array5, "Timestamps with timezone not correctly appended!");

        int[] array6 = new int[5];
        qrs.getIntColumnByIndex(6, array6);
        Assertions.assertArrayEquals(append6, array6, "Month intervals not correctly appended!");

        long[] array7 = new long[5];
        qrs.getLongColumnByIndex(7, array7);
        Assertions.assertArrayEquals(append7, array7, "Second intervals not correctly appended!");

        qrs.close();
        connection.sendUpdate("DROP TABLE test6;");
    }

    @Test
    @DisplayName("Test appending BLOBs into a table")
    void testAppendBlobs() throws Exception {
        connection.sendUpdate("CREATE TABLE test7 (a blob);");
        MonetDBTable test7 = connection.getMonetDBTable("sys", "test7");

        byte[][] append1 = new byte[][]{new byte[]{1,2,-3,4,5,6,7,8,-90,10,13,14,15,16}, new byte[]{-1,-2,-3,-4,-5,-6},
                new byte[]{127}, new byte[]{0,0,0,0,0,34,66,0,0,0,0}, NullMappings.GetObjectNullConstant()};
        Object[] appends = new Object[]{append1};
        test7.appendColumns(appends);

        QueryResultSet qrs = connection.sendQuery("SELECT * FROM test7;");
        int numberOfRows = qrs.getNumberOfRows(), numberOfColumns = qrs.getNumberOfColumns();
        Assertions.assertEquals(5, numberOfRows, "The number of rows should be 5, got " + numberOfRows + " instead!");
        Assertions.assertEquals(1, numberOfColumns, "The number of columns should be 1, got " + numberOfColumns + " instead!");

        byte[][] array1 = new byte[numberOfRows][];
        qrs.getBlobColumnByIndex(1, array1);
        Assertions.assertArrayEquals(append1, array1, "Blobs not correctly appended!");

        qrs.close();
        connection.sendUpdate("DROP TABLE test7;");
    }

    @Test
    @Disabled("Still returning -1 in updates") //TODO still returning -1 in updates
    void testUpdates() throws MonetDBEmbeddedException {
        connection.sendUpdate("CREATE TABLE testupdates (val int);");
        connection.sendUpdate("INSERT INTO testupdates VALUES (1), (2), (3), (4);");
        int rows = connection.sendUpdate("UPDATE testupdates SET val=2 WHERE val<3;");
        Assertions.assertEquals(2, rows, "It should have affected 2 rows!");
        connection.sendUpdate("DROP TABLE testupdates;");
    }

    @Test
    void testRegexes() throws MonetDBEmbeddedException {
        QueryResultSet qrs = connection.sendQuery("SELECT name from tables where name LIKE '%chemas'");
        String schemas = qrs.getStringByColumnIndexAndRow(1,1);
        Assertions.assertEquals("schemas", schemas, "The regex is not working properly?!");
        qrs.close();
    }
}
