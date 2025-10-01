#ifndef _TestC1_C1_h_
#define _TestC1_C1_h_
//$ class TestC1.C1
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace TestC1 {

class C1 : public ::java::lang::Object {
	$class(C1, $NO_CLASS_INIT, ::java::lang::Object)
public:
	C1();
	void init$(Object$* t);
	virtual ::TestC1::C1* mc1() {return nullptr;}
	virtual ::TestC1::C1* mc1t(Object$* t, ::TestC1::C1* c1t, ::TestC1::C1* c1) {return nullptr;}
	virtual $Object* mt(Object$* t) {return nullptr;}
	$Object* ft = nullptr;
	::TestC1::C1* fc1t = nullptr;
	::TestC1::C1* fc1 = nullptr;
};

} // TestC1

#endif // _TestC1_C1_h_