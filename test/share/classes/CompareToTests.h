#ifndef _CompareToTests_h_
#define _CompareToTests_h_
//$ class CompareToTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

class $export CompareToTests : public ::java::lang::Object {
	$class(CompareToTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CompareToTests();
	void init$();
	static int32_t compareToTest(::java::math::BigInteger* a, ::java::math::BigInteger* b, int32_t expected);
	static int32_t compareToTests();
	static void main($StringArray* argv);
};

#endif // _CompareToTests_h_