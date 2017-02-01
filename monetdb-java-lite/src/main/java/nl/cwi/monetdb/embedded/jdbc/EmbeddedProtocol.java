/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.jdbc;

import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedException;
import nl.cwi.monetdb.jdbc.MonetConnection;
import nl.cwi.monetdb.mcl.protocol.*;
import nl.cwi.monetdb.mcl.responses.AutoCommitResponse;
import nl.cwi.monetdb.mcl.responses.DataBlockResponse;
import nl.cwi.monetdb.mcl.responses.ResultSetResponse;
import nl.cwi.monetdb.mcl.responses.UpdateResponse;

import java.io.IOException;
import java.util.Map;

/**
 * The JDBC abstract protocol implementation on an embedded connection. This Class is just a Proxy Class to access the
 * JNI mapped methods on the {@link JDBCEmbeddedConnection} instance.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public class EmbeddedProtocol extends AbstractProtocol {

    /**
     * The underlying embedded connection.
     */
    private final JDBCEmbeddedConnection connection;

    public EmbeddedProtocol(JDBCEmbeddedConnection con) {
        this.connection = con;
    }

    /**
     * Gets the underlying embedded connection.
     *
     * @return The underlying embedded connection
     */
    public JDBCEmbeddedConnection getEmbeddedConnection() {
        return this.connection;
    }

    /**
     * Gets the current server response, obtained immediately after a query is performed.
     *
     * @return The integer representation of {@link ServerResponses}
     */
    @Override
    public int getCurrentServerResponse() {
        return connection.getNextServerResponse();
    }

    /**
     * On an embedded connection, there is no need to wait for prompt, so this method does nothing :)
     *
     * @throws IOException Never thrown :)
     */
    @Override
    public void waitUntilPrompt() throws IOException {}

    /**
     * On an embedded connection, the server response is immediately set, so this method does nothing :)
     *
     * @throws IOException Never thrown :)
     */
    @Override
    public void fetchNextResponseData() throws IOException {}

    /**
     * Gets the next starter header of a server response.
     *
     * @return The integer representation of {@link StarterHeaders}
     */
    @Override
    public int getNextStarterHeader() {
        return connection.getServerHeaderResponse();
    }

    /**
     * Gets the next ResultSet response from the server, belonging to a ResponseList.
     *
     * @param con The current MonetDB's JDBC connection
     * @param list The Response List this result set will belong to
     * @param seqnr The sequence number of this result set on the Response List
     * @param maxrows A maxrows to set if so (not used)
     * @return The ResultSet instance
     * @throws ProtocolException If an error in the underlying connection happened.
     */
    @Override
    public ResultSetResponse getNextResultSetResponse(MonetConnection con, MonetConnection.ResponseList list, int seqnr,
                                                      int maxrows) throws ProtocolException {
        int[] array = connection.getLastServerResponseParameters();
        int id = array[0]; //The order cannot be switched!!
        int rowcount = array[1];
        int columncount = array[2];
        return new ResultSetResponse(con, list, id, seqnr, rowcount, rowcount, columncount);
    }

    /**
     * Gets the next UpdateResponse response from the server.
     *
     * @return The UpdateResponse instance
     * @throws ProtocolException If an error in the underlying connection happened.
     */
    @Override
    public UpdateResponse getNextUpdateResponse() throws ProtocolException {
        return (UpdateResponse) connection.getLastServerResponse();
    }

    /**
     * Gets the next AutoCommitResponse response from the server.
     *
     * @return The AutoCommitResponse instance
     * @throws ProtocolException If an error in the underlying connection happened.
     */
    @Override
    public AutoCommitResponse getNextAutoCommitResponse() throws ProtocolException {
        return (AutoCommitResponse) connection.getLastServerResponse();
    }

    /**
     * Gets the next DataBlockResponse response from the server, belonging to a ResultSetResponse
     *
     * @param rsresponses A map of ResultSetResponse, in which this Block will belong to one of them, by checking its id
     *                    against the keys of the Map.
     * @return The DataBlockResponse instance
     * @throws ProtocolException If an error in the underlying connection happened.
     */
    @Override
    public DataBlockResponse getNextDatablockResponse(Map<Integer, ResultSetResponse> rsresponses)
            throws ProtocolException {
        int[] array = connection.getLastServerResponseParameters();
        int id = array[0]; //The order cannot be switched!!
        int rowcount = array[1];

        ResultSetResponse rs = rsresponses.get(id);
        if (rs == null) {
            return null;
        }
        return rs.addDataBlockResponse(rowcount, rowcount);
    }

    /**
     * Gets the next Table Header for a ResultSetResponse. More than one of the parameter arrays can be filled at once.
     *
     * @param columnNames The column names array
     * @param columnLengths The column lengths array
     * @param types The columns SQL names array
     * @param tableNames The columns schemas and names in format schema.table
     * @return Always TableResultHeaders.ALL
     * @throws ProtocolException If an error in the underlying connection happened.
     */
    @Override
    public int getNextTableHeader(String[] columnNames, int[] columnLengths, String[] types, String[] tableNames)
            throws ProtocolException {
        return connection.fillTableHeaders(columnNames, columnLengths, types, tableNames);
    }

    /**
     * Retrieves the next values in a DataBlockResponse from the underlying connection, starting at a specific line
     * number. On an embedded connection, always all the lines are retrieved.
     *
     * @param firstLineNumber The first line number in the response to retrieve (ignored)
     * @param typesMap The JDBC types mapping array for every column in the ResultSetResponse of the DataBlock
     * @param values An array of columns to fill the values
     * @return The number of lines parsed from the underlying connection
     * @throws ProtocolException If an error in the underlying connection happened.
     */
    @Override
    public int parseTupleLines(int firstLineNumber, int[] typesMap, Object[] values) throws ProtocolException {
        try {
            return connection.parseTupleLines(typesMap, values);
        } catch (MonetDBEmbeddedException ex) {
            throw new ProtocolException(ex.getMessage(), 0);
        }
    }

    /**
     * Gets the remaining response line from the underlying connection as a Java String. This method is mostly used to
     * retrieve error Strings, when they are detected while parsing a response line.
     *
     * @param startIndex The first index in the response line to retrieve the String (ignored)
     * @return The String representation of the line starting at the provided index
     */
    @Override
    public String getRemainingStringLine(int startIndex) {
        return connection.getLastError();
    }

    /**
     * Writes a user query to the server, while providing the respective prefixes and suffixes depending on the current
     * language and connection used. On an embedded connection, the prefix and the suffix are ignored.
     *
     * @param prefix The prefix to append at the beginning of the query string (ignored)
     * @param query The user query to submit to the server
     * @param suffix The suffix to append at the end of the query string (ignored)
     * @throws IOException If an error in the underlying connection happened.
     */
    @Override
    public void writeNextQuery(String prefix, String query, String suffix) throws IOException {
        connection.processNextQuery(query);
    }
}
