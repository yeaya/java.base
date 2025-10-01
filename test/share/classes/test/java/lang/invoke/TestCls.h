#ifndef _test_java_lang_invoke_TestCls_h_
#define _test_java_lang_invoke_TestCls_h_
//$ class test.java.lang.invoke.TestCls
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

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

class $export TestCls : public ::java::lang::Object {
	$class(TestCls, 0, ::java::lang::Object)
public:
	TestCls();
	void init$();
	static ::java::lang::invoke::MethodHandles$Lookup* getLookupForPrivateSIC();
	static $Class* getPrivateSIC();
	static ::java::lang::invoke::MethodHandles$Lookup* LOOKUP;
};

			} // invoke
		} // lang
	} // java
} // test

#pragma pop_macro("LOOKUP")

#endif // _test_java_lang_invoke_TestCls_h_