#ifndef _TestReceiverTypeOwner$Inner_h_
#define _TestReceiverTypeOwner$Inner_h_
//$ class TestReceiverTypeOwner$Inner
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestReceiverTypeOwner;

class $export TestReceiverTypeOwner$Inner : public ::java::lang::Object {
	$class(TestReceiverTypeOwner$Inner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestReceiverTypeOwner$Inner();
	void init$(::TestReceiverTypeOwner* this$0);
	virtual void m();
	::TestReceiverTypeOwner* this$0 = nullptr;
};

#endif // _TestReceiverTypeOwner$Inner_h_