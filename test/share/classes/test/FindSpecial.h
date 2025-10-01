#ifndef _test_FindSpecial_h_
#define _test_FindSpecial_h_
//$ class test.FindSpecial
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOOKUP")
#undef LOOKUP

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

namespace test {

class $export FindSpecial : public ::java::lang::Object {
	$class(FindSpecial, 0, ::java::lang::Object)
public:
	FindSpecial();
	void init$();
	static void findSpecialTest();
	static void main($StringArray* args);
	static void reflectMethodInvoke();
	static void unreflectSpecialTest();
	static ::java::lang::invoke::MethodHandles$Lookup* LOOKUP;
};

} // test

#pragma pop_macro("LOOKUP")

#endif // _test_FindSpecial_h_