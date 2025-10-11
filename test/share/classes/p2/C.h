#ifndef _p2_C_h_
#define _p2_C_h_
//$ class p2.C
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("C")
#undef C

namespace p2 {

class $export C : public ::java::lang::Object {
	$class(C, $NO_CLASS_INIT, ::java::lang::Object)
public:
	C();
	void init$();
};

} // p2

#pragma pop_macro("C")

#endif // _p2_C_h_