#ifndef _SquareRootTests_h_
#define _SquareRootTests_h_
//$ class SquareRootTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ONE_TENTH")
#undef ONE_TENTH
#pragma push_macro("TWO")
#undef TWO

namespace java {
	namespace math {
		class BigDecimal;
		class MathContext;
	}
}

class $export SquareRootTests : public ::java::lang::Object {
	$class(SquareRootTests, 0, ::java::lang::Object)
public:
	SquareRootTests();
	void init$();
	static int32_t almostFourRoundingDown();
	static int32_t almostFourRoundingUp();
	static int32_t compare(::java::math::BigDecimal* a, ::java::math::BigDecimal* b, bool expected, $String* prefix);
	static int32_t compareNumerically(::java::math::BigDecimal* a, ::java::math::BigDecimal* b, int32_t expected, $String* prefix);
	static int32_t compareSqrtImplementations(::java::math::BigDecimal* bd, ::java::math::MathContext* mc);
	static int32_t equalNumerically(::java::math::BigDecimal* a, ::java::math::BigDecimal* b, $String* prefix);
	static int32_t evenPowersOfTenTests();
	static int32_t halfWay();
	static int32_t lowPrecisionPerfectSquares();
	static void main($StringArray* args);
	static int32_t nearOne();
	static int32_t nearTen();
	static int32_t negativeTests();
	static int32_t oneDigitTests();
	static int32_t squareRootTwoTests();
	static int32_t twoDigitTests();
	static int32_t zeroTests();
	static ::java::math::BigDecimal* TWO;
	static ::java::math::BigDecimal* ONE_TENTH;
};

#pragma pop_macro("ONE_TENTH")
#pragma pop_macro("TWO")

#endif // _SquareRootTests_h_