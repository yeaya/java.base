#ifndef _jcpp_test_TestASIF_h_
#define _jcpp_test_TestASIF_h_
//$ interface jcpp.test.TestASIF
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace jcpp {
	namespace test {

class TestASIF : public ::java::lang::Object {
	$interface(TestASIF, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::CharSequence* get() {return nullptr;}
};

	} // test
} // jcpp

#endif // _jcpp_test_TestASIF_h_