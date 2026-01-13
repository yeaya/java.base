#ifndef _jcpp_test_TestAS_h_
#define _jcpp_test_TestAS_h_
//$ class jcpp.test.TestAS
//$ extends jcpp.test.TestASBase
//$ implements jcpp.test.TestASIF2

#include <java/lang/Array.h>
#include <jcpp/test/TestASBase.h>
#include <jcpp/test/TestASIF2.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace jcpp {
	namespace test {

class $export TestAS : public ::jcpp::test::TestASBase {
	$class(TestAS, $NO_CLASS_INIT, ::jcpp::test::TestASBase, ::jcpp::test::TestASIF2)
public:
	TestAS();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::lang::CharSequence* get() override;
	virtual ::java::lang::CharSequence* get2();
	virtual $String* get3();
	virtual $String* get4();
	static void main($StringArray* args);
	virtual $String* toString() override;
	class $export MemberClass0$ : public ::jcpp::test::TestASIF2 {
	public:
		MemberClass0$();
		virtual $String* get() override;
		virtual ::java::lang::CharSequence* get2() override;
		virtual $String* get3() override;
		virtual int32_t hashCode() override;
		virtual bool equals(Object$* arg0) override;
		virtual $Object* clone() override;
		virtual $String* toString() override;
		virtual void finalize() override;
		virtual $String* get4() override;
	};
	MemberClass0$ memberClass0$;
	::jcpp::test::TestASIF2* as$(::jcpp::test::TestASIF2**) {
		return &memberClass0$;
	}
};

	} // test
} // jcpp

#endif // _jcpp_test_TestAS_h_