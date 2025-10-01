#ifndef _TestReceiverTypeParameterizedMethod$Inner_h_
#define _TestReceiverTypeParameterizedMethod$Inner_h_
//$ class TestReceiverTypeParameterizedMethod$Inner
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestReceiverTypeParameterizedMethod;

class $export TestReceiverTypeParameterizedMethod$Inner : public ::java::lang::Object {
	$class(TestReceiverTypeParameterizedMethod$Inner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestReceiverTypeParameterizedMethod$Inner();
	void init$(::TestReceiverTypeParameterizedMethod* this$0);
	virtual void m();
	::TestReceiverTypeParameterizedMethod* this$0 = nullptr;
};

#endif // _TestReceiverTypeParameterizedMethod$Inner_h_