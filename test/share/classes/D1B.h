#ifndef _D1B_h_
#define _D1B_h_
//$ class D1B
//$ extends SonSuperIwithDefault
//$ implements DaughterSuperIwithDefault

#include <DaughterSuperIwithDefault.h>
#include <SonSuperIwithDefault.h>

class D1B : public ::SonSuperIwithDefault, public ::DaughterSuperIwithDefault {
	$class(D1B, $NO_CLASS_INIT, ::SonSuperIwithDefault, ::DaughterSuperIwithDefault)
public:
	D1B();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void bar() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void baz() override;
	virtual void foo() override;
	virtual void quux() override;
	virtual $String* toString() override;
};

#endif // _D1B_h_