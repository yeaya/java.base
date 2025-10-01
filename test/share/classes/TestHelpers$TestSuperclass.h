#ifndef _TestHelpers$TestSuperclass_h_
#define _TestHelpers$TestSuperclass_h_
//$ class TestHelpers$TestSuperclass
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestHelpers$TestSuperclass : public ::java::lang::Object {
	$class(TestHelpers$TestSuperclass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestHelpers$TestSuperclass();
	void init$();
	virtual int32_t m(int32_t x);
};

#endif // _TestHelpers$TestSuperclass_h_