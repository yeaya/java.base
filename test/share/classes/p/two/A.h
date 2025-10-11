#ifndef _p_two_A_h_
#define _p_two_A_h_
//$ interface p.two.A
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("A")
#undef A

namespace p {
	namespace two {

class $export A : public ::java::lang::Object {
	$interface(A, $NO_CLASS_INIT, ::java::lang::Object)
};

	} // two
} // p

#pragma pop_macro("A")

#endif // _p_two_A_h_