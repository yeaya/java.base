#ifndef _jcpp_test_TestASIF3_h_
#define _jcpp_test_TestASIF3_h_
//$ interface jcpp.test.TestASIF3
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jcpp {
	namespace test {

class TestASIF3 : public ::java::lang::Object {
	$interface(TestASIF3, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* get3() {return nullptr;}
};

	} // test
} // jcpp

#endif // _jcpp_test_TestASIF3_h_