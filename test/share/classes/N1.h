#ifndef _N1_h_
#define _N1_h_
//$ class N1
//$ extends java.lang.Object

#include <java/lang/Object.h>

class N1$Inner1;
class N1$Inner2;

class N1 : public ::java::lang::Object {
	$class(N1, $NO_CLASS_INIT, ::java::lang::Object)
public:
	N1();
	void init$();
	::N1$Inner1* i1 = nullptr;
	::N1$Inner2* i2 = nullptr;
	::N1$Inner2* i2sc = nullptr;
};

#endif // _N1_h_