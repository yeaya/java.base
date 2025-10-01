#ifndef _BasicTest_h_
#define _BasicTest_h_
//$ class BasicTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_PARAM_SLOTS")
#undef MAX_PARAM_SLOTS

namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}

class $export BasicTest : public ::java::lang::Object {
	$class(BasicTest, 0, ::java::lang::Object)
public:
	BasicTest();
	void init$();
	static void main($StringArray* args);
	static void test(::java::lang::invoke::MethodType* concatType);
	static const int32_t MAX_PARAM_SLOTS = 200;
	static int32_t exceedMaxParamSlots;
};

#pragma pop_macro("MAX_PARAM_SLOTS")

#endif // _BasicTest_h_