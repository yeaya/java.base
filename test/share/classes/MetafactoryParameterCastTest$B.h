#ifndef _MetafactoryParameterCastTest$B_h_
#define _MetafactoryParameterCastTest$B_h_
//$ class MetafactoryParameterCastTest$B
//$ extends MetafactoryParameterCastTest$A

#include <MetafactoryParameterCastTest$A.h>

class $export MetafactoryParameterCastTest$B : public ::MetafactoryParameterCastTest$A {
	$class(MetafactoryParameterCastTest$B, $NO_CLASS_INIT, ::MetafactoryParameterCastTest$A)
public:
	MetafactoryParameterCastTest$B();
	void init$();
	virtual void instance0();
	virtual void instance1(::MetafactoryParameterCastTest$B* arg);
	static void static1(::MetafactoryParameterCastTest$B* arg);
	static void static2(::MetafactoryParameterCastTest$B* arg1, ::MetafactoryParameterCastTest$B* arg2);
};

#endif // _MetafactoryParameterCastTest$B_h_