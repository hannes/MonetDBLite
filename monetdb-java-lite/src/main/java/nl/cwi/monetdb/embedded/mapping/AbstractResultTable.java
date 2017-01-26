/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.mapping;

/**
 * Base class for statement results with data
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public interface AbstractResultTable {

    /**
     * Returns the number of columns in the result set.
     *
     * @return Number of columns
     */
    int getNumberOfColumns();

    /**
     * Returns the number of rows in the result set.
     *
     * @return Number of rows
     */
    int getNumberOfRows();

    /**
     * Gets the columns names as a string array.
     *
     * @return The columns names array
     */
    String[] getColumnNames();

    /**
     * Gets the columns types as a string array.
     *
     * @return The columns types array
     */
    String[] getColumnTypes();

    /**
     * Gets the Java mappings as a MonetDBToJavaMapping array.
     *
     * @return The columns MonetDBToJavaMapping array
     */
    MonetDBToJavaMapping[] getMappings();

    /**
     * Gets the columns digits as an integer array.
     *
     * @return The columns digits array
     */
    int[] getColumnDigits();

    /**
     * Gets the columns scales as an integer array.
     *
     * @return The columns scales array
     */
    int[] getColumnScales();

}
