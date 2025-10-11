#ifndef _p1_internal_C_h_
#define _p1_internal_C_h_
//$ class p1.internal.C
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("C")
#undef C

namespace p1 {
	namespace internal {

class $export C : public ::java::lang::Object {
	$class(C, $NO_CLASS_INIT, ::java::lang::Object)
public:
	C();
	void init$();
};

	} // internal
} // p1

#pragma pop_macro("C")

#endif // _p1_internal_C_h_