/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.env;

import nl.cwi.monetdb.embedded.mapping.MonetDBToJavaMapping;
import nl.cwi.monetdb.embedded.utils.Randomizer;

import java.io.Closeable;
import java.lang.reflect.Array;

/**
 * The base class for a pending statement to a connection.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public abstract class AbstractConnectionResult implements Closeable {

    /** The corresponding connection of this result. */
    private final MonetDBEmbeddedConnection connection;

    /** A long value used to identify this result set. */
    private final long randomIdentifier;

    protected AbstractConnectionResult(MonetDBEmbeddedConnection connection) {
        this.connection = connection;
        this.randomIdentifier = Randomizer.GenerateNextLong();
    }

    /**
     * Gets the corresponding connection to this statement result.
     *
     * @return A MonetDBEmbeddedConnection instance
     */
    public MonetDBEmbeddedConnection getConnection() { return connection; }

    /**
     * Returns the number of columns in the result set.
     *
     * @return Number of columns
     */
    public abstract int getNumberOfColumns();

    /**
     * Returns the number of rows in the result set.
     *
     * @return Number of rows
     */
    public abstract int getNumberOfRows();

    /**
     * Gets a long number randomly generated, used to identify the result set.
     *
     * @return A random long identifier
     */
    protected long getRandomIdentifier() { return randomIdentifier; }

    /**
     * Checks the length of an input array for metadata retrieval
     *
     * @param input - An array to check its bounds
     */
    protected void checkMetadataArrayLength(Object input) {
        int arrayLength = Array.getLength(input);
        if (arrayLength != this.getNumberOfColumns()) {
            throw new ArrayIndexOutOfBoundsException("The array length is different from the number of columns! "
                    + this.getNumberOfColumns() + " != " + arrayLength);
        }
    }

    /**
     * Gets the columns names as a string array.
     *
     * @param input The columns names array to fill
     */
    public abstract void getColumnNames(String[] input);

    /**
     * Gets the columns types as a string array.
     *
     * @param input The columns types array to fill
     */
    public abstract void getColumnTypes(String[] input);

    /**
     * Gets the Java mappings as a MonetDBToJavaMapping array.
     *
     * @param input The columns mappings array to fill
     */
    public abstract void getMappings(MonetDBToJavaMapping[] input);

    /**
     * Gets the column digits as an integer array.
     *
     * @param input The columns digits array to fill
     */
    public abstract void getColumnDigits(int[] input);

    /**
     * Gets the column scales as an integer array.
     *
     * @param input The columns scales array to fill
     */
    public abstract void getColumnScales(int[] input);

    @Override
    public void close() {
        this.connection.removeQueryResult(this);
    }

    /**
     * Close the result set internally.
     */
    protected abstract void closeResultImplementation();

    /**
     * Overriding the finalize method to clean the result set.
     */
    @Override
    protected void finalize() throws Throwable {
        this.close();
        super.finalize();
    }
}
