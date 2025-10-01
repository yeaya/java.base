#ifndef _jdk_internal_util_ArraysSupport_h_
#define _jdk_internal_util_ArraysSupport_h_
//$ class jdk.internal.util.ArraysSupport
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/Integer.h>

#pragma push_macro("LOG2_ARRAY_CHAR_INDEX_SCALE")
#undef LOG2_ARRAY_CHAR_INDEX_SCALE
#pragma push_macro("BIG_ENDIAN")
#undef BIG_ENDIAN
#pragma push_macro("LOG2_ARRAY_BYTE_INDEX_SCALE")
#undef LOG2_ARRAY_BYTE_INDEX_SCALE
#pragma push_macro("LOG2_ARRAY_DOUBLE_INDEX_SCALE")
#undef LOG2_ARRAY_DOUBLE_INDEX_SCALE
#pragma push_macro("LOG2_ARRAY_SHORT_INDEX_SCALE")
#undef LOG2_ARRAY_SHORT_INDEX_SCALE
#pragma push_macro("SOFT_MAX_ARRAY_LENGTH")
#undef SOFT_MAX_ARRAY_LENGTH
#pragma push_macro("LOG2_ARRAY_INT_INDEX_SCALE")
#undef LOG2_ARRAY_INT_INDEX_SCALE
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("LOG2_BYTE_BIT_SIZE")
#undef LOG2_BYTE_BIT_SIZE
#pragma push_macro("LOG2_ARRAY_FLOAT_INDEX_SCALE")
#undef LOG2_ARRAY_FLOAT_INDEX_SCALE
#pragma push_macro("U")
#undef U
#pragma push_macro("LOG2_ARRAY_BOOLEAN_INDEX_SCALE")
#undef LOG2_ARRAY_BOOLEAN_INDEX_SCALE
#pragma push_macro("LOG2_ARRAY_LONG_INDEX_SCALE")
#undef LOG2_ARRAY_LONG_INDEX_SCALE

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {

class $import ArraysSupport : public ::java::lang::Object {
	$class(ArraysSupport, 0, ::java::lang::Object)
public:
	ArraysSupport();
	void init$();
	static int32_t exactLog2(int32_t scale);
	static int32_t hugeLength(int32_t oldLength, int32_t minGrowth);
	static int32_t mismatch($booleans* a, $booleans* b, int32_t length);
	static int32_t mismatch($booleans* a, int32_t aFromIndex, $booleans* b, int32_t bFromIndex, int32_t length);
	static int32_t mismatch($bytes* a, $bytes* b, int32_t length);
	static int32_t mismatch($bytes* a, int32_t aFromIndex, $bytes* b, int32_t bFromIndex, int32_t length);
	static int32_t mismatch($chars* a, $chars* b, int32_t length);
	static int32_t mismatch($chars* a, int32_t aFromIndex, $chars* b, int32_t bFromIndex, int32_t length);
	static int32_t mismatch($shorts* a, $shorts* b, int32_t length);
	static int32_t mismatch($shorts* a, int32_t aFromIndex, $shorts* b, int32_t bFromIndex, int32_t length);
	static int32_t mismatch($ints* a, $ints* b, int32_t length);
	static int32_t mismatch($ints* a, int32_t aFromIndex, $ints* b, int32_t bFromIndex, int32_t length);
	static int32_t mismatch($floats* a, $floats* b, int32_t length);
	static int32_t mismatch($floats* a, int32_t aFromIndex, $floats* b, int32_t bFromIndex, int32_t length);
	static int32_t mismatch($longs* a, $longs* b, int32_t length);
	static int32_t mismatch($longs* a, int32_t aFromIndex, $longs* b, int32_t bFromIndex, int32_t length);
	static int32_t mismatch($doubles* a, $doubles* b, int32_t length);
	static int32_t mismatch($doubles* a, int32_t aFromIndex, $doubles* b, int32_t bFromIndex, int32_t length);
	static int32_t newLength(int32_t oldLength, int32_t minGrowth, int32_t prefGrowth);
	static int32_t vectorizedMismatch(Object$* a, int64_t aOffset, Object$* b, int64_t bOffset, int32_t length, int32_t log2ArrayIndexScale);
	static ::jdk::internal::misc::Unsafe* U;
	static bool BIG_ENDIAN;
	static int32_t LOG2_ARRAY_BOOLEAN_INDEX_SCALE;
	static int32_t LOG2_ARRAY_BYTE_INDEX_SCALE;
	static int32_t LOG2_ARRAY_CHAR_INDEX_SCALE;
	static int32_t LOG2_ARRAY_SHORT_INDEX_SCALE;
	static int32_t LOG2_ARRAY_INT_INDEX_SCALE;
	static int32_t LOG2_ARRAY_LONG_INDEX_SCALE;
	static int32_t LOG2_ARRAY_FLOAT_INDEX_SCALE;
	static int32_t LOG2_ARRAY_DOUBLE_INDEX_SCALE;
	static int32_t LOG2_BYTE_BIT_SIZE;
	static const int32_t SOFT_MAX_ARRAY_LENGTH = 0x7FFFFFF7; // ::java::lang::Integer::MAX_VALUE - 8
};

		} // util
	} // internal
} // jdk

#pragma pop_macro("LOG2_ARRAY_CHAR_INDEX_SCALE")
#pragma pop_macro("BIG_ENDIAN")
#pragma pop_macro("LOG2_ARRAY_BYTE_INDEX_SCALE")
#pragma pop_macro("LOG2_ARRAY_DOUBLE_INDEX_SCALE")
#pragma pop_macro("LOG2_ARRAY_SHORT_INDEX_SCALE")
#pragma pop_macro("SOFT_MAX_ARRAY_LENGTH")
#pragma pop_macro("LOG2_ARRAY_INT_INDEX_SCALE")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("LOG2_BYTE_BIT_SIZE")
#pragma pop_macro("LOG2_ARRAY_FLOAT_INDEX_SCALE")
#pragma pop_macro("U")
#pragma pop_macro("LOG2_ARRAY_BOOLEAN_INDEX_SCALE")
#pragma pop_macro("LOG2_ARRAY_LONG_INDEX_SCALE")

#endif // _jdk_internal_util_ArraysSupport_h_