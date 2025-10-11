#ifndef _pkg_A_h_
#define _pkg_A_h_
//$ class pkg.A
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("A")
#undef A

namespace pkg {

class $export A : public ::java::lang::Object {
	$class(A, $NO_CLASS_INIT, ::java::lang::Object)
public:
	A();
	void init$();
	virtual $String* m1();
	virtual $String* m2();
	virtual $String* m3($StringArray* args);
};

} // pkg

#pragma pop_macro("A")

#endif // _pkg_A_h_