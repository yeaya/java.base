#ifndef _FloatDoubleValueTests_h_
#define _FloatDoubleValueTests_h_
//$ class FloatDoubleValueTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigDecimal;
	}
}

class $export FloatDoubleValueTests : public ::java::lang::Object {
	$class(FloatDoubleValueTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FloatDoubleValueTests();
	void init$();
	static void checkDouble(::java::math::BigDecimal* bd, double d);
	static void checkFloat(::java::math::BigDecimal* bd, float f);
	static void main($StringArray* args);
	static void testDoubleValue();
	static void testDoubleValue0(int64_t i, ::java::math::BigDecimal* bd);
	static void testDoubleValue1();
	static void testFloatDoubleValue();
	static void testFloatValue();
	static void testFloatValue0(int64_t i, ::java::math::BigDecimal* bd);
	static void testFloatValue1();
	static const int64_t two2the24 = 8388608; // 1L << 23
	static const int64_t two2the53 = 4503599627370496; // 1L << 52
	static const int64_t maxFltLong = 2147483392; // (long)(Integer.MAX_VALUE & ~(255))
	static const int64_t maxDblLong = 0x7FFFFFFFFFFFF800; // Long.MAX_VALUE & ~(2047L)
};

#endif // _FloatDoubleValueTests_h_