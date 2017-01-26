/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.env;

import nl.cwi.monetdb.embedded.utils.Randomizer;

import java.io.Closeable;

/**
 * The base class for a pending statement to a connection.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public abstract class AbstractConnectionResult implements Closeable {

    /** The table C pointer. */
    private long tablePointer;

    /** The corresponding connection of this result. */
    private final MonetDBEmbeddedConnection connection;

    /** A long value used to identify this result set. */
    private final long randomIdentifier;

    protected AbstractConnectionResult(MonetDBEmbeddedConnection connection, long tablePointer) {
        this.connection = connection;
        this.tablePointer = tablePointer;
        this.randomIdentifier = Randomizer.GenerateNextLong() + tablePointer;
    }

    /**
     * Gets the corresponding connection to this statement result.
     *
     * @return A MonetDBEmbeddedConnection instance
     */
    public MonetDBEmbeddedConnection getConnection() { return connection; }

    /**
     * Gets a long number randomly generated, used to identify the result set.
     *
     * @return A random long identifier
     */
    public long getRandomIdentifier() { return randomIdentifier; }

    /**
     * Tells if the connection of this statement result has been closed or not.
     *
     * @return A boolean indicating if the statement result has been cleaned or not
     */
    public boolean isResultClosed() { return this.tablePointer == 0; }

    @Override
    public void close() {
        if(!this.isResultClosed()) {
            this.closeResultImplementation();
            this.connection.removeQueryResult(this);
        }
    }

    /**
     * Overriding the finalize method to close the connection
     */
    @Override
    protected void finalize() throws Throwable {
        this.close();
        super.finalize();
    }

    /**
     * Closes the result set.
     */
    protected native void closeResultImplementation();
}
