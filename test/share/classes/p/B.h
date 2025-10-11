#ifndef _p_B_h_
#define _p_B_h_
//$ class p.B
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("B")
#undef B

namespace p {

class $export B : public ::java::lang::Object {
	$class(B, $NO_CLASS_INIT, ::java::lang::Object)
public:
	B();
	void init$();
	static void hello();
};

} // p

#pragma pop_macro("B")

#endif // _p_B_h_