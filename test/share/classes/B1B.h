#ifndef _B1B_h_
#define _B1B_h_
//$ class B1B
//$ extends A1B

#include <A1B.h>

class B1B : public ::A1B {
	$class(B1B, $NO_CLASS_INIT, ::A1B)
public:
	B1B();
	void init$();
	virtual void baz() override;
	virtual void foo() override;
};

#endif // _B1B_h_