#ifndef _C0B_h_
#define _C0B_h_
//$ class C0B
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("C0B")
#undef C0B

class C0B : public ::java::lang::Object {
	$class(C0B, $NO_CLASS_INIT, ::java::lang::Object)
public:
	C0B();
	void init$();
	void init$(Object$* t);
	virtual ::C0B* mc1() {return nullptr;}
	virtual ::C0B* mc1t(Object$* t, ::C0B* c1t, ::C0B* c1) {return nullptr;}
	virtual $Object* mt(Object$* t) {return nullptr;}
	$Object* ft = nullptr;
	::C0B* fc1t = nullptr;
	::C0B* fc1 = nullptr;
};

#pragma pop_macro("C0B")

#endif // _C0B_h_