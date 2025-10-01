#ifndef _AddTests_h_
#define _AddTests_h_
//$ class AddTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigDecimal;
		class MathContext;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

class $export AddTests : public ::java::lang::Object {
	$class(AddTests, 0, ::java::lang::Object)
public:
	AddTests();
	void init$();
	static int32_t addWithoutException(::java::math::BigDecimal* b1, ::java::math::BigDecimal* b2, ::java::math::MathContext* mc);
	static int32_t arithmeticExceptionTest();
	static int32_t extremaTests();
	static void main($StringArray* argv);
	static int32_t precisionConsistencyTest();
	static void printAddition(::java::math::BigDecimal* b1, ::java::math::BigDecimal* b2, $String* s);
	static int32_t roundAway(::java::math::BigDecimal* b1, ::java::math::BigDecimal* b2);
	static int32_t roundAway0(::java::math::BigDecimal* b1, ::java::math::BigDecimal* b2);
	static int32_t roundAway1(::java::math::BigDecimal* b1, ::java::math::BigDecimal* b2);
	static int32_t roundingGradationTests();
	static int32_t simpleTests();
	static ::java::util::Set* nonExactRoundingModes;
};

#endif // _AddTests_h_