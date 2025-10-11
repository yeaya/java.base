#ifndef _A_h_
#define _A_h_
//$ class A
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("A")
#undef A

class A : public ::java::lang::Object {
	$class(A, $NO_CLASS_INIT, ::java::lang::Object)
public:
	A();
	void init$();
};

#pragma pop_macro("A")

#endif // _A_h_