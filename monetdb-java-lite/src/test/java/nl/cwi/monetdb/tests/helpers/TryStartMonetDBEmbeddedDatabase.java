/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.tests.helpers;

import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedDatabase;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedException;

/**
 * A helper class to be used in the tests. Another process will attempt to access the embedded database already loaded
 * in other process and fail.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class TryStartMonetDBEmbeddedDatabase {

    private TryStartMonetDBEmbeddedDatabase() {}

    /**
     * An environment variable used to store the embedded database directory.
     */
    public static final String DATABASE_ENV = "MONETDBJAVALITE_DATABASE_DIRECTORY";

    /**
     * The main method of the process.
     *
     * @param args The process parameters (Not used).
     */
    public static void main(String[] args) {
        String databasePath = System.getenv(DATABASE_ENV);
        try {
            MonetDBEmbeddedDatabase.startDatabase(databasePath, true, false);
            System.exit(1);
        } catch (MonetDBEmbeddedException e) {
            System.exit(0);
        }
    }
}
