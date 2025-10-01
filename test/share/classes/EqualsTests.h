#ifndef _EqualsTests_h_
#define _EqualsTests_h_
//$ class EqualsTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigDecimal;
	}
}

class $export EqualsTests : public ::java::lang::Object {
	$class(EqualsTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EqualsTests();
	void init$();
	static int32_t equalsTest(::java::math::BigDecimal* l, ::java::math::BigDecimal* r, bool expected);
	static void main($StringArray* argv);
};

#endif // _EqualsTests_h_