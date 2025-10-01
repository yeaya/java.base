#ifndef _IntegralDivisionTests_h_
#define _IntegralDivisionTests_h_
//$ class IntegralDivisionTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigDecimal;
		class MathContext;
	}
}

class $export IntegralDivisionTests : public ::java::lang::Object {
	$class(IntegralDivisionTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IntegralDivisionTests();
	void init$();
	static int32_t divideContextTest(::java::math::BigDecimal* dividend, ::java::math::BigDecimal* divisor, ::java::math::BigDecimal* expected, ::java::math::MathContext* mc);
	static int32_t divideContextTestPrecs(::java::math::BigDecimal* dividend, ::java::math::BigDecimal* divisor, $Array<::java::math::BigDecimal>* quotients);
	static int32_t divideContextTests(::java::math::BigDecimal* dividend, ::java::math::BigDecimal* divisor, ::java::math::BigDecimal* expected, ::java::math::MathContext* mc);
	static int32_t dividetoIntegralValueRoundedTests();
	static int32_t dividetoIntegralValueScalingTests();
	static int32_t dividetoIntegralValueTests();
	static void main($StringArray* argv);
};

#endif // _IntegralDivisionTests_h_