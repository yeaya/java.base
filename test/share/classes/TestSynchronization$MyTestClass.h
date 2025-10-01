#ifndef _TestSynchronization$MyTestClass_h_
#define _TestSynchronization$MyTestClass_h_
//$ class TestSynchronization$MyTestClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestSynchronization$MyTestClass : public ::java::lang::Object {
	$class(TestSynchronization$MyTestClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestSynchronization$MyTestClass();
	void init$($String* s);
	virtual void should_fail();
	virtual void should_pass();
	virtual void sync_shouldnt_be_tested();
};

#endif // _TestSynchronization$MyTestClass_h_