#ifndef _PrimitiveConversionTests_h_
#define _PrimitiveConversionTests_h_
//$ class PrimitiveConversionTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALL_BIGINTEGER_CANDIDATES")
#undef ALL_BIGINTEGER_CANDIDATES

namespace java {
	namespace util {
		class List;
	}
}

class $export PrimitiveConversionTests : public ::java::lang::Object {
	$class(PrimitiveConversionTests, 0, ::java::lang::Object)
public:
	PrimitiveConversionTests();
	void init$();
	static void main($StringArray* args);
	static int32_t testDoubleValue();
	static int32_t testFloatValue();
	static ::java::util::List* ALL_BIGINTEGER_CANDIDATES;
};

#pragma pop_macro("ALL_BIGINTEGER_CANDIDATES")

#endif // _PrimitiveConversionTests_h_