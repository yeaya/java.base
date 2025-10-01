#ifndef _A1B_h_
#define _A1B_h_
//$ class A1B
//$ extends SonSuperIwithDefault

#include <SonSuperIwithDefault.h>

class A1B : public ::SonSuperIwithDefault {
	$class(A1B, $NO_CLASS_INIT, ::SonSuperIwithDefault)
public:
	A1B();
	virtual void baz() override {}
	virtual void foo() override {}
	void init$();
};

#endif // _A1B_h_