package nl.cwi.monetdb.embedded.resultset;

/**
 * The result of a execute query.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class ExecResultSet {

    /** True for a result set query, false for an update */
    private final boolean status;

    /** The query result set if exists */
    private final QueryResultSet resultSet;

    /** The number of rows if exists */
    private final int numberOfRows;

    public ExecResultSet(boolean status, QueryResultSet resultSet, int numberOfRows) {
        this.status = status;
        this.resultSet = resultSet;
        this.numberOfRows = numberOfRows;
    }

    /**
     * Get the status response.
     *
     * @return The status response
     */
    public boolean getStatus() {
        return status;
    }

    /**
     * Get the result set if available.
     *
     * @return The result set if available
     */
    public QueryResultSet getResultSet() {
        return resultSet;
    }

    /**
     * Get the number of rows if available.
     *
     * @return The number of rows if available
     */
    public int getNumberOfRows() {
        return numberOfRows;
    }
}
