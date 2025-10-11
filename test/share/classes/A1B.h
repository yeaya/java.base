#ifndef _A1B_h_
#define _A1B_h_
//$ class A1B
//$ extends SonSuperIwithDefault

#include <SonSuperIwithDefault.h>

#pragma push_macro("A1B")
#undef A1B

class A1B : public ::SonSuperIwithDefault {
	$class(A1B, $NO_CLASS_INIT, ::SonSuperIwithDefault)
public:
	A1B();
	virtual void baz() override {}
	virtual void foo() override {}
	void init$();
};

#pragma pop_macro("A1B")

#endif // _A1B_h_