#ifndef _Exceptions4getDeclaredMethod_h_
#define _Exceptions4getDeclaredMethod_h_
//$ class Exceptions4getDeclaredMethod
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Exceptions4getDeclaredMethod : public ::java::lang::Object {
	$class(Exceptions4getDeclaredMethod, 0, ::java::lang::Object)
public:
	Exceptions4getDeclaredMethod();
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

#endif // _Exceptions4getDeclaredMethod_h_