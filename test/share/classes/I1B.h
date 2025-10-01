#ifndef _I1B_h_
#define _I1B_h_
//$ interface I1B
//$ extends I3B

#include <I3B.h>

class I1B : public ::I3B {
	$interface(I1B, $NO_CLASS_INIT, ::I3B)
public:
	virtual $Object* foo(Object$* x2) {return nullptr;}
};

#endif // _I1B_h_