#ifndef _SquareRootTests$BigSquareRoot_h_
#define _SquareRootTests$BigSquareRoot_h_
//$ class SquareRootTests$BigSquareRoot
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ONE_HALF")
#undef ONE_HALF

namespace java {
	namespace math {
		class BigDecimal;
		class MathContext;
	}
}

class SquareRootTests$BigSquareRoot : public ::java::lang::Object {
	$class(SquareRootTests$BigSquareRoot, 0, ::java::lang::Object)
public:
	SquareRootTests$BigSquareRoot();
	void init$();
	static bool isPowerOfTen(::java::math::BigDecimal* bd);
	static ::java::math::BigDecimal* sqrt(::java::math::BigDecimal* bd, ::java::math::MathContext* mc);
	static ::java::math::BigDecimal* square(::java::math::BigDecimal* bd);
	static bool squareRootResultAssertions(::java::math::BigDecimal* input, ::java::math::BigDecimal* result, ::java::math::MathContext* mc);
	static bool squareRootZeroResultAssertions(::java::math::BigDecimal* input, ::java::math::BigDecimal* result, ::java::math::MathContext* mc);
	static bool $assertionsDisabled;
	static ::java::math::BigDecimal* ONE_HALF;
};

#pragma pop_macro("ONE_HALF")

#endif // _SquareRootTests$BigSquareRoot_h_