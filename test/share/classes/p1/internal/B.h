#ifndef _p1_internal_B_h_
#define _p1_internal_B_h_
//$ class p1.internal.B
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("B")
#undef B

namespace p1 {
	namespace internal {

class $export B : public ::java::lang::Object {
	$class(B, $NO_CLASS_INIT, ::java::lang::Object)
public:
	B();
	void init$();
};

	} // internal
} // p1

#pragma pop_macro("B")

#endif // _p1_internal_B_h_