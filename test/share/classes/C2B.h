#ifndef _C2B_h_
#define _C2B_h_
//$ class C2B
//$ extends C0B
//$ implements I1B,I2B

#include <C0B.h>
#include <I1B.h>
#include <I2B.h>

#pragma push_macro("C2B")
#undef C2B

namespace java {
	namespace lang {
		class Throwable;
	}
}

class C2B : public ::C0B, public ::I1B, public ::I2B {
	$class(C2B, $NO_CLASS_INIT, ::C0B, ::I1B, ::I2B)
public:
	C2B();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::C0B* t2);
	void init$(Object$* t);
	void init$(Object$* t1, Object$* t2, Object$* t4);
	void init$();
	using ::C0B::mc1;
	virtual ::C0B* mc1(Object$* e) {return nullptr;}
	using ::C0B::mc1t;
	virtual ::C0B* mc1t($Throwable* t3, ::C0B* c1t, ::C0B* c1) {return nullptr;}
	using ::C0B::mt;
	virtual ::C2B* mt(::C0B* t) {return nullptr;}
	virtual $String* toString() override;
	::C2B* ft = nullptr;
	::C0B* fc1t = nullptr;
	::C0B* fc1 = nullptr;
	int32_t fi = 0;
};

#pragma pop_macro("C2B")

#endif // _C2B_h_