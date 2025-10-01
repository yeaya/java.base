#ifndef _SignatureTest_h_
#define _SignatureTest_h_
//$ class SignatureTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class SignatureTest$Inner1;
class SignatureTest$Inner1$Inner11;

class $export SignatureTest : public ::java::lang::Object {
	$class(SignatureTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SignatureTest();
	void init$();
	virtual void f(::SignatureTest$Inner1$Inner11* x);
	virtual void g(::SignatureTest$Inner1* x);
	static void main($StringArray* args);
};

#endif // _SignatureTest_h_