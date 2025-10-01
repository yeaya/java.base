#ifndef _DivideTests_h_
#define _DivideTests_h_
//$ class DivideTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigDecimal;
	}
}

class $export DivideTests : public ::java::lang::Object {
	$class(DivideTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DivideTests();
	void init$();
	virtual ::java::math::BigDecimal* anotherDivide(::java::math::BigDecimal* dividend, ::java::math::BigDecimal* divisor);
	static int32_t divideByOneTests();
	static void main($StringArray* argv);
	static int32_t nonTerminating();
	static int32_t powersOf2and5();
	static int32_t properScaleTests();
	static int32_t scaledRoundedDivideTests();
	static int32_t trailingZeroTests();
};

#endif // _DivideTests_h_