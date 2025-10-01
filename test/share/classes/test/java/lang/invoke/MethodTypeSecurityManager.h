#ifndef _test_java_lang_invoke_MethodTypeSecurityManager_h_
#define _test_java_lang_invoke_MethodTypeSecurityManager_h_
//$ class test.java.lang.invoke.MethodTypeSecurityManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

class $export MethodTypeSecurityManager : public ::java::lang::Object {
	$class(MethodTypeSecurityManager, 0, ::java::lang::Object)
public:
	MethodTypeSecurityManager();
	void init$();
	static void main($StringArray* args);
	static void throwACC($String* desc, ::java::lang::ClassLoader* loader);
	static bool $assertionsDisabled;
	static bool hasClassLoaderAccess;
};

			} // invoke
		} // lang
	} // java
} // test

#endif // _test_java_lang_invoke_MethodTypeSecurityManager_h_