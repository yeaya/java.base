#ifndef _jcpp_test_TestASBase_h_
#define _jcpp_test_TestASBase_h_
//$ class jcpp.test.TestASBase
//$ extends jcpp.test.TestASIF

#include <jcpp/test/TestASIF.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace jcpp {
	namespace test {

class TestASBase : public ::jcpp::test::TestASIF {
	$class(TestASBase, $NO_CLASS_INIT, ::jcpp::test::TestASIF)
public:
	TestASBase();
	void init$();
	virtual ::java::lang::CharSequence* get() override;
};

	} // test
} // jcpp

#endif // _jcpp_test_TestASBase_h_