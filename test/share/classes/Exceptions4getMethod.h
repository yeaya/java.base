#ifndef _Exceptions4getMethod_h_
#define _Exceptions4getMethod_h_
//$ class Exceptions4getMethod
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Exceptions4getMethod : public ::java::lang::Object {
	$class(Exceptions4getMethod, 0, ::java::lang::Object)
public:
	Exceptions4getMethod();
	void init$();
	virtual void m0();
	virtual void m1();
	void m2();
	virtual void m4();
	static void main($StringArray* args);
	void test($String* s, $Class* ex);
	static $StringArray* npe;
	static $StringArray* nsme;
	static $StringArray* pass;
};

#endif // _Exceptions4getMethod_h_