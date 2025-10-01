#ifndef _jdk_test_ProxyTest$Data_h_
#define _jdk_test_ProxyTest$Data_h_
//$ class jdk.test.ProxyTest$Data
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class Module;
	}
}

namespace jdk {
	namespace test {

class $export ProxyTest$Data : public ::java::lang::Object {
	$class(ProxyTest$Data, 0, ::java::lang::Object)
public:
	ProxyTest$Data();
	void init$(::java::lang::Module* m, ::java::lang::ClassLoader* loader, $ClassArray* interfaces);
	void init$(::java::lang::ClassLoader* loader, $ClassArray* interfaces);
	virtual $String* toString() override;
	static int32_t count;
	int32_t testcase = 0;
	::java::lang::ClassLoader* loader = nullptr;
	::java::lang::Module* module = nullptr;
	$ClassArray* interfaces = nullptr;
};

	} // test
} // jdk

#endif // _jdk_test_ProxyTest$Data_h_