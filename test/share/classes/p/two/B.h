#ifndef _p_two_B_h_
#define _p_two_B_h_
//$ interface p.two.B
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("B")
#undef B

namespace p {
	namespace two {

class B : public ::java::lang::Object {
	$interface(B, $NO_CLASS_INIT, ::java::lang::Object)
};

	} // two
} // p

#pragma pop_macro("B")

#endif // _p_two_B_h_