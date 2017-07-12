package nl.cwi.monetdb.embedded.resultset;

import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedConnection;

/**
 * Embedded MonetDB query result extension for prepared statements.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final strictfp class PreparedQueryResultSet extends QueryResultSet {

    /** The prepared statement ID */
    private final long preparedID;

    private PreparedQueryResultSet(MonetDBEmbeddedConnection connection, long structPointer, int numberOfColumns,
                                   int numberOfRows, int[] typesIDs, long preparedID) {
        super(connection, structPointer, numberOfColumns, numberOfRows, typesIDs);
        this.preparedID = preparedID;
    }

    /**
     * Get the prepared statement ID.
     *
     * @return The prepared statement ID
     */
    public long getPreparedID() {
        return preparedID;
    }
}
