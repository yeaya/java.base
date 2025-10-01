#ifndef _NegateTests_h_
#define _NegateTests_h_
//$ class NegateTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigDecimal;
		class MathContext;
	}
}

class $export NegateTests : public ::java::lang::Object {
	$class(NegateTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NegateTests();
	void init$();
	static ::java::math::BigDecimal* absThenRound(::java::math::BigDecimal* bd, ::java::math::MathContext* mc);
	static void main($StringArray* argv);
	static int32_t negateTest($Array<::java::math::BigDecimal, 2>* testCases, ::java::math::MathContext* mc);
	static int32_t negateTests();
	static ::java::math::BigDecimal* negateThenRound(::java::math::BigDecimal* bd, ::java::math::MathContext* mc);
};

#endif // _NegateTests_h_