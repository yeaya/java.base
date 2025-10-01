#ifndef _p_A_h_
#define _p_A_h_
//$ class p.A
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace p {

class $export A : public ::java::lang::Object {
	$class(A, $NO_CLASS_INIT, ::java::lang::Object)
public:
	A();
	void init$();
	static void hello();
};

} // p

#endif // _p_A_h_