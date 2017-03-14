package nl.cwi.monetdb.embedded.mapping;

/**
 * Helper Class to find the null values mapping between MonetDB and Java.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class NullMappings {

    private NullMappings() {}

    /**
     * Gets MonetDB's boolean null constant
     *
     * @return MonetDB's boolean null constant
     */
    public static native byte GetBooleanNullConstant();

    /**
     * Gets MonetDB's byte null constant
     *
     * @return MonetDB's byte null constant
     */
    public static native byte GetByteNullConstant();

    /**
     * Tests if a byte is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean CheckByteIsNull(byte value) { return value == GetByteNullConstant(); }

    /**
     * Gets MonetDB's short null constant
     *
     * @return MonetDB's short null constant
     */
    public static native short GetShortNullConstant();

    /**
     * Tests if a short is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean CheckShortIsNull(short value) { return value == GetShortNullConstant(); }

    /**
     * Gets MonetDB's int null constant
     *
     * @return MonetDB's int null constant
     */
    public static native int GetIntNullConstant();

    /**
     * Tests if an integer is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean CheckIntIsNull(int value) { return value == GetIntNullConstant(); }

    /**
     * Gets MonetDB's long null constant
     *
     * @return MonetDB's long null constant
     */
    public static native long GetLongNullConstant();

    /**
     * Tests if a long is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean CheckLongIsNull(long value) { return value == GetLongNullConstant(); }

    /**
     * Gets MonetDB's float null constant
     *
     * @return MonetDB's float null constant
     */
    public static native float GetFloatNullConstant();

    /**
     * Tests if a float is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean CheckFloatIsNull(float value) { return value == GetFloatNullConstant(); }

    /**
     * Gets MonetDB's double null constant
     *
     * @return MonetDB's double null constant
     */
    public static native double GetDoubleNullConstant();

    /**
     * Tests if a double is a null value.
     *
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static boolean CheckDoubleIsNull(double value) { return value == GetDoubleNullConstant(); }

    /**
     * A null pointer returning method.
     *
     * @param <T> The Java class of the mapped MonetDB column
     * @return A null pointer
     */
    public static <T> T GetObjectNullConstant() { return null; }

    /**
     * Tests if an object is a null value.
     *
     * @param <T> The Java class of the mapped MonetDB column
     * @param value The value to test
     * @return A boolean indicating if the value is null
     */
    public static <T> boolean CheckObjectIsNull(T value) { return value == null; }
}
