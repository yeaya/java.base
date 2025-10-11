#ifndef _p1_A_h_
#define _p1_A_h_
//$ class p1.A
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("A")
#undef A

namespace p1 {

class $export A : public ::java::lang::Object {
	$class(A, 0, ::java::lang::Object)
public:
	A();
	void init$();
	static $Object* lock;
};

} // p1

#pragma pop_macro("A")

#endif // _p1_A_h_