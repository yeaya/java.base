#ifndef _jdk_test_NP_h_
#define _jdk_test_NP_h_
//$ interface jdk.test.NP
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace test {

class NP : public ::java::lang::Object {
	$interface(NP, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t m();
	virtual void test() {}
};

	} // test
} // jdk

#endif // _jdk_test_NP_h_