#ifndef _TestReceiverTypeParameterizedConstructor_h_
#define _TestReceiverTypeParameterizedConstructor_h_
//$ class TestReceiverTypeParameterizedConstructor
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestReceiverTypeParameterizedConstructor : public ::java::lang::Object {
	$class(TestReceiverTypeParameterizedConstructor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestReceiverTypeParameterizedConstructor();
	void init$();
	static void doAssert($Class* c);
	static void main($StringArray* args);
};

#endif // _TestReceiverTypeParameterizedConstructor_h_