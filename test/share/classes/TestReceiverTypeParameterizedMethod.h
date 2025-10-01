#ifndef _TestReceiverTypeParameterizedMethod_h_
#define _TestReceiverTypeParameterizedMethod_h_
//$ class TestReceiverTypeParameterizedMethod
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestReceiverTypeParameterizedMethod : public ::java::lang::Object {
	$class(TestReceiverTypeParameterizedMethod, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestReceiverTypeParameterizedMethod();
	void init$();
	static void doAssert($Class* c);
	virtual void m();
	static void main($StringArray* args);
};

#endif // _TestReceiverTypeParameterizedMethod_h_