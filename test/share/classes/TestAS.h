#ifndef _TestAS_h_
#define _TestAS_h_
//$ class TestAS
//$ extends TestASBase
//$ implements TestASIF2

#include <TestASBase.h>
#include <TestASIF2.h>
#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

class $export TestAS : public ::TestASBase {
	$class(TestAS, $NO_CLASS_INIT, ::TestASBase, ::TestASIF2)
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
	class $export MemberClass0$ : public ::TestASIF2 {
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
	::TestASIF2* as$(::TestASIF2**) {
		return &memberClass0$;
	}
};

#endif // _TestAS_h_