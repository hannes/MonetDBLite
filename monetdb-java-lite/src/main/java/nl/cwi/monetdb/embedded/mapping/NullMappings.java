package nl.cwi.monetdb.embedded.mapping;

/**
 * Helper Class to find the null values mapping between MonetDB and Java.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class NullMappings {

    private NullMappings() {}

    /**
     * Gets MonetDB's boolean null constant.
     *
     * @return MonetDB's boolean null constant
     */
    public static native byte getBooleanNullConstant();

    /**
     * Gets MonetDB's byte null constant.
     *
     * @return MonetDB's byte null constant
     */
    public static native byte getByteNullConstant();

    /**
     * Tests if a byte is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean checkByteIsNull(byte value) { return value == getByteNullConstant(); }

    /**
     * Gets MonetDB's short null constant.
     *
     * @return MonetDB's short null constant
     */
    public static native short getShortNullConstant();

    /**
     * Tests if a short is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean checkShortIsNull(short value) { return value == getShortNullConstant(); }

    /**
     * Gets MonetDB's int null constant.
     *
     * @return MonetDB's int null constant
     */
    public static native int getIntNullConstant();

    /**
     * Tests if an integer is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean checkIntIsNull(int value) { return value == getIntNullConstant(); }

    /**
     * Gets MonetDB's long null constant.
     *
     * @return MonetDB's long null constant
     */
    public static native long getLongNullConstant();

    /**
     * Tests if a long is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean checkLongIsNull(long value) { return value == getLongNullConstant(); }

    /**
     * Gets MonetDB's float null constant.
     *
     * @return MonetDB's float null constant
     */
    public static native float getFloatNullConstant();

    /**
     * Tests if a float is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean checkFloatIsNull(float value) { return value == getFloatNullConstant(); }

    /**
     * Gets MonetDB's double null constant.
     *
     * @return MonetDB's double null constant
     */
    public static native double getDoubleNullConstant();

    /**
     * Tests if a double is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean checkDoubleIsNull(double value) { return value == getDoubleNullConstant(); }

    /**
     * A null pointer returning method.
     *
     * @param <T> The Java class of the mapped MonetDB column
     * @return A null pointer
     */
    public static <T> T getObjectNullConstant() { return null; }

    /**
     * Tests if an object is a null value.
     *
     * @param <T> The Java class of the mapped MonetDB column
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static <T> boolean checkObjectIsNull(T value) { return value == null; }
}
