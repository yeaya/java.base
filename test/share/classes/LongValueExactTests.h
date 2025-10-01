#ifndef _LongValueExactTests_h_
#define _LongValueExactTests_h_
//$ class LongValueExactTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigDecimal;
	}
}

class $export LongValueExactTests : public ::java::lang::Object {
	$class(LongValueExactTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LongValueExactTests();
	void init$();
	static int32_t longValueExactExceptional();
	static int32_t longValueExactSuccessful();
	static void main($StringArray* args);
	static int64_t simpleLongValueExact(::java::math::BigDecimal* bd);
};

#endif // _LongValueExactTests_h_