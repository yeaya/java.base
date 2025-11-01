#ifndef _TestASIF2_h_
#define _TestASIF2_h_
//$ interface TestASIF2
//$ extends TestASIF3,TestASIF4

#include <TestASIF3.h>
#include <TestASIF4.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

class TestASIF2 : public ::TestASIF3, public ::TestASIF4 {
	$interface(TestASIF2, $NO_CLASS_INIT, ::TestASIF3, ::TestASIF4)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* get() {return nullptr;}
	virtual ::java::lang::CharSequence* get2() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

#endif // _TestASIF2_h_