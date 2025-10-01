#ifndef _jdk_test_ProxyTest_h_
#define _jdk_test_ProxyTest_h_
//$ class jdk.test.ProxyTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class Module;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class InvocationHandler;
			class Method;
		}
	}
}
namespace jdk {
	namespace test {
		class ProxyTest$Data;
	}
}

namespace jdk {
	namespace test {

class $export ProxyTest : public ::java::lang::Object {
	$class(ProxyTest, 0, ::java::lang::Object)
public:
	ProxyTest();
	void init$();
	static void assertDynamicModule(::java::lang::Module* m, ::java::lang::ClassLoader* ld, $Class* proxyClass);
	static void assertEquals(Object$* o1, Object$* o2);
	static $Object* lambda$static$0(Object$* proxy, ::java::lang::reflect::Method* m, $ObjectArray* params);
	virtual void test(::jdk::test::ProxyTest$Data* d);
	void testDynamicModule(::jdk::test::ProxyTest$Data* d);
	static void testProxyClass(::java::lang::Module* module, ::java::lang::ClassLoader* ld, $ClassArray* interfaces);
	static ::java::lang::reflect::InvocationHandler* handler;
};

	} // test
} // jdk

#endif // _jdk_test_ProxyTest_h_