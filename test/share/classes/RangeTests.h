#ifndef _RangeTests_h_
#define _RangeTests_h_
//$ class RangeTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigDecimal;
		class BigInteger;
		class MathContext;
	}
}

class $export RangeTests : public ::java::lang::Object {
	$class(RangeTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RangeTests();
	void init$();
	static int32_t addBoundaryTest();
	static int32_t addTest(::java::math::BigDecimal* arg1, ::java::math::BigDecimal* arg2, ::java::math::BigDecimal* expectedResult);
	static void main($StringArray* argv);
	static int32_t minLongConstructorTest(::java::math::MathContext* mc);
	static int32_t minLongConstructorTest();
	static int32_t roundingConstructorTest();
	static int32_t testRoundingFromBigInteger(::java::math::BigInteger* bi, int32_t scale, ::java::math::MathContext* mc);
};

#endif // _RangeTests_h_