#ifndef _p_A_h_
#define _p_A_h_
//$ class p.A
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("A")
#undef A

namespace p {

class $export A : public ::java::lang::Object {
	$class(A, $NO_CLASS_INIT, ::java::lang::Object)
public:
	A();
	void init$();
	static void hello();
};

} // p

#pragma pop_macro("A")

#endif // _p_A_h_