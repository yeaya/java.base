#ifndef _TestType1_h_
#define _TestType1_h_
//$ interface TestType1
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestType1 : public ::java::lang::Object {
	$interface(TestType1, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void bar();
	virtual void bar(int32_t i);
	virtual void bar($String* i);
	virtual void foo() {}
};

#endif // _TestType1_h_