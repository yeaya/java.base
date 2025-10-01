#ifndef _PrecisionTests_h_
#define _PrecisionTests_h_
//$ class PrecisionTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NINE")
#undef NINE

namespace java {
	namespace math {
		class BigDecimal;
	}
}

class $export PrecisionTests : public ::java::lang::Object {
	$class(PrecisionTests, 0, ::java::lang::Object)
public:
	PrecisionTests();
	void init$();
	static void main($StringArray* argv);
	static int32_t testPrecision(::java::math::BigDecimal* bd, int32_t expected);
	static ::java::math::BigDecimal* NINE;
};

#pragma pop_macro("NINE")

#endif // _PrecisionTests_h_