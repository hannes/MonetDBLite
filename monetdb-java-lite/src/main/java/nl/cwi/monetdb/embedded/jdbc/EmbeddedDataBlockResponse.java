package nl.cwi.monetdb.embedded.jdbc;

import nl.cwi.monetdb.embedded.mapping.NullMappings;
import nl.cwi.monetdb.mcl.protocol.AbstractProtocol;
import nl.cwi.monetdb.mcl.protocol.ProtocolException;
import nl.cwi.monetdb.mcl.responses.AbstractDataBlockResponse;

import java.math.BigDecimal;
import java.sql.*;
import java.util.Arrays;
import java.util.Calendar;

/**
 * DataBlockResponse for an Embedded connection.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public strictfp final class EmbeddedDataBlockResponse extends AbstractDataBlockResponse {

    /* The underlying structPointer */
    private long structPointer;

    /** If the underlying C struct has been initialized */
    private boolean isInitialized;

    EmbeddedDataBlockResponse(int rowcount, AbstractProtocol protocol, int[] JdbcSQLTypes) {
        super(rowcount, protocol, JdbcSQLTypes);
    }

    @Override
    public boolean wantsMore() {
        return !this.isInitialized;
    }

    @Override
    public void addLines(AbstractProtocol protocol) throws ProtocolException {
        ((EmbeddedProtocol)this.protocol).initializePointers(this);
        this.isInitialized = true;
    }

    private native byte getByteValueInternal(long structPointer, int column, int row);

    private native short getShortValueInternal(long structPointer, int column, int row);

    private native int getIntValueInternal(long structPointer, int column, int row);

    private native long getLongValueInternal(long structPointer, int column, int row);

    private native float getFloatValueInternal(long structPointer, int column, int row);

    private native double getDoubleValueInternal(long structPointer, int column, int row);

    private native String getStringValueInternal(long structPointer, int column, int row);

    private native Date getDateValueInternal(long structPointer, int column, int row);

    private native Timestamp getTimestampValueInternal(long structPointer, int column, int row);

    private native Time getTimeValueInternal(long structPointer, int column, int row);

    private native BigDecimal getDecimalValueInternal(long structPointer, int column, int row);

    private native byte[] getBlobValueInternal(long structPointer, int column, int row);

    private native Calendar getDateAsCalendarValueInternal(long structPointer, int column, int row);

    private native Calendar getTimestampAsCalendarValueInternal(long structPointer, int column, int row);

    private native Calendar getTimeAsCalendarValueInternal(long structPointer, int column, int row);

    @Override
    public boolean getBooleanValue(int column) {
        byte b = this.getByteValueInternal(this.structPointer, column, this.blockLine);
        if(b == NullMappings.GetByteNullConstant()) {
            this.lastReadWasNull = true;
            return false;
        } else {
            this.lastReadWasNull = false;
            return b == 1;
        }
    }

    @Override
    public byte getByteValue(int column) {
        byte b = this.getByteValueInternal(this.structPointer, column, this.blockLine);
        this.lastReadWasNull = b == NullMappings.GetByteNullConstant();
        return b;
    }

    @Override
    public short getShortValue(int column) {
        short s = this.getShortValueInternal(this.structPointer, column, this.blockLine);
        this.lastReadWasNull = s == NullMappings.GetShortNullConstant();
        return s;
    }

    @Override
    public int getIntValue(int column) {
        int i = this.getIntValueInternal(this.structPointer, column, this.blockLine);
        this.lastReadWasNull = i == NullMappings.GetIntNullConstant();
        return i;
    }

    @Override
    public long getLongValue(int column) {
        long j = this.getLongValueInternal(this.structPointer, column, this.blockLine);
        this.lastReadWasNull = j == NullMappings.GetLongNullConstant();
        return j;
    }

    @Override
    public float getFloatValue(int column) {
        float f = this.getFloatValueInternal(this.structPointer, column, this.blockLine);
        this.lastReadWasNull = f == NullMappings.GetFloatNullConstant();
        return f;
    }

    @Override
    public double getDoubleValue(int column) {
        double d = this.getDoubleValueInternal(this.structPointer, column, this.blockLine);
        this.lastReadWasNull = d == NullMappings.GetDoubleNullConstant();
        return d;
    }

    @Override
    public Object getValueAsObject(int column) {
        switch (this.jdbcSQLTypes[column]) {
            case Types.CHAR:
            case Types.VARCHAR:
            case Types.LONGVARCHAR:
            case Types.OTHER:
                String res = this.getStringValueInternal(this.structPointer, column, this.blockLine);
                this.lastReadWasNull = res == null;
                return res;
            case Types.LONGVARBINARY:
                byte[] bytes = this.getBlobValueInternal(this.structPointer, column, this.blockLine);
                this.lastReadWasNull = bytes == null;
                return bytes;
            case Types.DATE:
                Calendar d = this.getDateAsCalendarValueInternal(this.structPointer, column, this.blockLine);
                this.lastReadWasNull = d == null;
                return d;
            case Types.TIME:
            case Types.TIME_WITH_TIMEZONE:
                Calendar t = this.getTimeAsCalendarValueInternal(this.structPointer, column, this.blockLine);
                this.lastReadWasNull = t == null;
                return t;
            case Types.TIMESTAMP:
            case Types.TIMESTAMP_WITH_TIMEZONE:
                Calendar tt = this.getTimestampAsCalendarValueInternal(this.structPointer, column, this.blockLine);
                this.lastReadWasNull = tt == null;
                return tt;
            case Types.DECIMAL:
                BigDecimal bb = this.getDecimalValueInternal(this.structPointer, column, this.blockLine);;
                this.lastReadWasNull = bb == null;
                return bb;
            default:
                return null;
        }
    }

    @Override
    public Object getObjectValue(int column) {
        switch (this.jdbcSQLTypes[column]) {
            case Types.CHAR:
            case Types.VARCHAR:
            case Types.LONGVARCHAR:
            case Types.OTHER:
                String res = this.getStringValueInternal(this.structPointer, column, this.blockLine);
                this.lastReadWasNull = res == null;
                return res;
            case Types.LONGVARBINARY:
                byte[] blob = this.getBlobValueInternal(this.structPointer, column, this.blockLine);
                this.lastReadWasNull = blob == null;
                return blob;
            case Types.DATE:
                Date ddd = this.getDateValueInternal(this.structPointer, column, this.blockLine);
                this.lastReadWasNull = ddd == null;
                return ddd;
            case Types.TIME:
            case Types.TIME_WITH_TIMEZONE:
                Time ty = this.getTimeValueInternal(this.structPointer, column, this.blockLine);
                this.lastReadWasNull = ty == null;
                return ty;
            case Types.TIMESTAMP:
            case Types.TIMESTAMP_WITH_TIMEZONE:
                Timestamp tt = this.getTimestampValueInternal(this.structPointer, column, this.blockLine);
                this.lastReadWasNull = tt == null;
                return tt;
            case Types.DECIMAL:
                BigDecimal bb = this.getDecimalValueInternal(this.structPointer, column, this.blockLine);;
                this.lastReadWasNull = bb == null;
                return bb;
            case Types.BOOLEAN:
                byte b = this.getByteValueInternal(this.structPointer, column, this.blockLine);
                if(b == NullMappings.GetByteNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return b == 1;
                }
            case Types.TINYINT:
                byte bbb = this.getByteValueInternal(this.structPointer, column, this.blockLine);
                if(bbb == NullMappings.GetByteNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return bbb;
                }
            case Types.SMALLINT:
                short sss = this.getShortValueInternal(this.structPointer, column, this.blockLine);
                if(sss == NullMappings.GetShortNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return sss;
                }
            case Types.INTEGER:
                int in = this.getIntValueInternal(this.structPointer, column, this.blockLine);
                if(in == NullMappings.GetIntNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return in;
                }
            case Types.BIGINT:
                long lon = this.getLongValueInternal(this.structPointer, column, this.blockLine);
                if(lon == NullMappings.GetLongNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return lon;
                }
            case Types.REAL:
                float floa = this.getFloatValueInternal(this.structPointer, column, this.blockLine);
                if(floa == NullMappings.GetFloatNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return floa;
                }
            case Types.DOUBLE:
                double doa = this.getDoubleValueInternal(this.structPointer, column, this.blockLine);
                if(doa == NullMappings.GetDoubleNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return doa;
                }
            default:
                return null;
        }
    }

    @Override
    public String getValueAsString(int column) {
        switch (this.jdbcSQLTypes[column]) {
            case Types.CHAR:
            case Types.VARCHAR:
            case Types.LONGVARCHAR:
            case Types.OTHER:
                String res = this.getStringValueInternal(this.structPointer, column, this.blockLine);
                this.lastReadWasNull = res == null;
                return res;
            case Types.LONGVARBINARY:
                byte[] blob = this.getBlobValueInternal(this.structPointer, column, this.blockLine);
                if(blob == null) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return Arrays.toString(blob);
                }
            case Types.DATE:
                Date dd = this.getDateValueInternal(this.structPointer, column, this.blockLine);
                if(dd == null) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return protocol.getMonetDate().format(dd);
                }
            case Types.TIME:
                Time tt = this.getTimeValueInternal(this.structPointer, column, this.blockLine);
                if(tt == null) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return protocol.getMonetTimePrinter().format(tt);
                }
            case Types.TIME_WITH_TIMEZONE:
                Time ty = this.getTimeValueInternal(this.structPointer, column, this.blockLine);
                if(ty == null) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return protocol.getMonetTimeTzPrinter().format(ty);
                }
            case Types.TIMESTAMP:
                Timestamp tim = this.getTimestampValueInternal(this.structPointer, column, this.blockLine);
                if(tim == null) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return protocol.getMonetTimestampPrinter().format(tim);
                }
            case Types.TIMESTAMP_WITH_TIMEZONE:
                Timestamp timy = this.getTimestampValueInternal(this.structPointer, column, this.blockLine);
                if(timy == null) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return protocol.getMonetTimestampTzPrinter().format(timy);
                }
            case Types.DECIMAL:
                BigDecimal bd = this.getDecimalValueInternal(this.structPointer, column, this.blockLine);
                if(bd == null) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return bd.toString();
                }
            case Types.BOOLEAN:
                byte b = this.getByteValueInternal(this.structPointer, column, this.blockLine);
                if(b == NullMappings.GetByteNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return b == 1 ? "true" : "false";
                }
            case Types.TINYINT:
                byte bbb = this.getByteValueInternal(this.structPointer, column, this.blockLine);
                if(bbb == NullMappings.GetByteNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return Byte.toString(bbb);
                }
            case Types.SMALLINT:
                short sss = this.getShortValueInternal(this.structPointer, column, this.blockLine);
                if(sss == NullMappings.GetShortNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return Short.toString(sss);
                }
            case Types.INTEGER:
                int in = this.getIntValueInternal(this.structPointer, column, this.blockLine);
                if(in == NullMappings.GetIntNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return Integer.toString(in);
                }
            case Types.BIGINT:
                long lon = this.getLongValueInternal(this.structPointer, column, this.blockLine);
                if(lon == NullMappings.GetLongNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return Long.toString(lon);
                }
            case Types.REAL:
                float floa = this.getFloatValueInternal(this.structPointer, column, this.blockLine);
                if(floa == NullMappings.GetFloatNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return Float.toString(floa);
                }
            case Types.DOUBLE:
                double doa = this.getDoubleValueInternal(this.structPointer, column, this.blockLine);
                if(doa == NullMappings.GetDoubleNullConstant()) {
                    this.lastReadWasNull = true;
                    return null;
                } else {
                    this.lastReadWasNull = false;
                    return Double.toString(doa);
                }
            default:
                return null;
        }
    }

    @Override
    public int getLastNanos() {
        return 0;
    }

    /**
     * Release the result set and BATs probably...
     */
    private native void freeResultSet(long structPointer);

    @Override
    public void close() {
        if(this.structPointer != 0) {
            this.freeResultSet(this.structPointer);
            this.structPointer = 0;
        }
    }

    /**
     * Overriding the finalize method to clean the result set.
     */
    @Override
    protected void finalize() throws Throwable {
        if(this.structPointer != 0) {
            this.close();
        }
        super.finalize();
    }
}
