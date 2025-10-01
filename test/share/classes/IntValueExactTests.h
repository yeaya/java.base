#ifndef _IntValueExactTests_h_
#define _IntValueExactTests_h_
//$ class IntValueExactTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigDecimal;
	}
}

class $export IntValueExactTests : public ::java::lang::Object {
	$class(IntValueExactTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IntValueExactTests();
	void init$();
	static int32_t intValueExactExceptional();
	static int32_t intValueExactSuccessful();
	static void main($StringArray* args);
	static int32_t simpleIntValueExact(::java::math::BigDecimal* bd);
};

#endif // _IntValueExactTests_h_