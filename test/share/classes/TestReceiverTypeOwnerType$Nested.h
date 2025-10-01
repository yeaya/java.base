#ifndef _TestReceiverTypeOwnerType$Nested_h_
#define _TestReceiverTypeOwnerType$Nested_h_
//$ class TestReceiverTypeOwnerType$Nested
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestReceiverTypeOwnerType;

class $export TestReceiverTypeOwnerType$Nested : public ::java::lang::Object {
	$class(TestReceiverTypeOwnerType$Nested, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestReceiverTypeOwnerType$Nested();
	void init$(::TestReceiverTypeOwnerType* this$0);
	virtual void method();
	::TestReceiverTypeOwnerType* this$0 = nullptr;
};

#endif // _TestReceiverTypeOwnerType$Nested_h_