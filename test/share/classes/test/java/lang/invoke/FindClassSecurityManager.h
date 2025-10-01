#ifndef _test_java_lang_invoke_FindClassSecurityManager_h_
#define _test_java_lang_invoke_FindClassSecurityManager_h_
//$ class test.java.lang.invoke.FindClassSecurityManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

class $export FindClassSecurityManager : public ::java::lang::Object {
	$class(FindClassSecurityManager, 0, ::java::lang::Object)
public:
	FindClassSecurityManager();
	void init$();
	static void main($StringArray* args);
	static bool $assertionsDisabled;
};

			} // invoke
		} // lang
	} // java
} // test

#endif // _test_java_lang_invoke_FindClassSecurityManager_h_