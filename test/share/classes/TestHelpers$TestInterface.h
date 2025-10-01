#ifndef _TestHelpers$TestInterface_h_
#define _TestHelpers$TestInterface_h_
//$ interface TestHelpers$TestInterface
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOOKUP")
#undef LOOKUP

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

class TestHelpers$TestInterface : public ::java::lang::Object {
	$interface(TestHelpers$TestInterface, 0, ::java::lang::Object)
public:
	virtual int32_t m(int32_t x);
	int32_t pm(int32_t x);
	static int32_t psm(int32_t x);
	static int32_t sm(int32_t x);
	static ::java::lang::invoke::MethodHandles$Lookup* LOOKUP;
	static const int32_t sf = 3;
};

#pragma pop_macro("LOOKUP")

#endif // _TestHelpers$TestInterface_h_