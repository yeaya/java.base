#ifndef _jcpp_test_TestASIF4_h_
#define _jcpp_test_TestASIF4_h_
//$ interface jcpp.test.TestASIF4
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jcpp {
	namespace test {

class TestASIF4 : public ::java::lang::Object {
	$interface(TestASIF4, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* get4() {return nullptr;}
};

	} // test
} // jcpp

#endif // _jcpp_test_TestASIF4_h_