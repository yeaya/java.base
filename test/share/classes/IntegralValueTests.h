#ifndef _IntegralValueTests_h_
#define _IntegralValueTests_h_
//$ class IntegralValueTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LONG_VALUES")
#undef LONG_VALUES
#pragma push_macro("INT_VALUES")
#undef INT_VALUES

namespace java {
	namespace lang {
		class Number;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

class $export IntegralValueTests : public ::java::lang::Object {
	$class(IntegralValueTests, 0, ::java::lang::Object)
public:
	IntegralValueTests();
	void init$();
	static int32_t integralValuesTest(::java::util::Map* v, bool isInt);
	static void main($StringArray* args);
	static int32_t reportError(::java::math::BigDecimal* bd, ::java::lang::Number* expected, int64_t longValue, bool isInt);
	static int32_t simpleIntValue(::java::math::BigDecimal* bd);
	static int64_t simpleLongValue(::java::math::BigDecimal* bd);
	static ::java::util::Map* INT_VALUES;
	static ::java::util::Map* LONG_VALUES;
};

#pragma pop_macro("LONG_VALUES")
#pragma pop_macro("INT_VALUES")

#endif // _IntegralValueTests_h_