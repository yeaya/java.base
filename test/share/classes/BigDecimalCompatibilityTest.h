#ifndef _BigDecimalCompatibilityTest_h_
#define _BigDecimalCompatibilityTest_h_
//$ class BigDecimalCompatibilityTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Number;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
	}
}
namespace java {
	namespace text {
		class DecimalFormat;
	}
}

class $export BigDecimalCompatibilityTest : public ::java::lang::Object {
	$class(BigDecimalCompatibilityTest, 0, ::java::lang::Object)
public:
	BigDecimalCompatibilityTest();
	void init$();
	static void check(::java::lang::Number* got, ::java::math::BigDecimal* expected, int32_t multiplier);
	static void main($StringArray* args);
	static void test(::java::text::DecimalFormat* df, $String* s, int32_t multiplier);
	static void testBigDecimal();
	static void testBigInteger();
	static bool err;
	static $StringArray* input_data;
	static $StringArray* exponents;
	static $ints* multipliers;
};

#endif // _BigDecimalCompatibilityTest_h_