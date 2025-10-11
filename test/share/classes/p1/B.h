#ifndef _p1_B_h_
#define _p1_B_h_
//$ class p1.B
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("B")
#undef B
#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace p1 {

class B : public ::java::lang::Object {
	$class(B, 0, ::java::lang::Object)
public:
	B();
	void init$();
	static ::p1::B* INSTANCE;
};

} // p1

#pragma pop_macro("B")
#pragma pop_macro("INSTANCE")

#endif // _p1_B_h_