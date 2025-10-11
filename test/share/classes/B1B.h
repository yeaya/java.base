#ifndef _B1B_h_
#define _B1B_h_
//$ class B1B
//$ extends A1B

#include <A1B.h>

#pragma push_macro("B1B")
#undef B1B

class B1B : public ::A1B {
	$class(B1B, $NO_CLASS_INIT, ::A1B)
public:
	B1B();
	void init$();
	virtual void baz() override;
	virtual void foo() override;
};

#pragma pop_macro("B1B")

#endif // _B1B_h_