#ifndef _java_math_BigDecimal$LongOverflow_h_
#define _java_math_BigDecimal$LongOverflow_h_
//$ class java.math.BigDecimal$LongOverflow
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LONGMIN")
#undef LONGMIN
#pragma push_macro("LONGMAX")
#undef LONGMAX

namespace java {
	namespace math {
		class BigDecimal;
		class BigInteger;
	}
}

namespace java {
	namespace math {

class BigDecimal$LongOverflow : public ::java::lang::Object {
	$class(BigDecimal$LongOverflow, 0, ::java::lang::Object)
public:
	BigDecimal$LongOverflow();
	void init$();
	static void check(::java::math::BigDecimal* num);
	static ::java::math::BigInteger* LONGMIN;
	static ::java::math::BigInteger* LONGMAX;
};

	} // math
} // java

#pragma pop_macro("LONGMIN")
#pragma pop_macro("LONGMAX")

#endif // _java_math_BigDecimal$LongOverflow_h_