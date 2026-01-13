#ifndef _jcpp_test_TestASIF2_h_
#define _jcpp_test_TestASIF2_h_
//$ interface jcpp.test.TestASIF2
//$ extends jcpp.test.TestASIF3,jcpp.test.TestASIF4

#include <jcpp/test/TestASIF3.h>
#include <jcpp/test/TestASIF4.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace jcpp {
	namespace test {

class TestASIF2 : public ::jcpp::test::TestASIF3, public ::jcpp::test::TestASIF4 {
	$interface(TestASIF2, $NO_CLASS_INIT, ::jcpp::test::TestASIF3, ::jcpp::test::TestASIF4)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* get() {return nullptr;}
	virtual ::java::lang::CharSequence* get2() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

	} // test
} // jcpp

#endif // _jcpp_test_TestASIF2_h_