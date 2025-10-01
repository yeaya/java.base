#ifndef _TestType5_h_
#define _TestType5_h_
//$ interface TestType5
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestType5 : public ::java::lang::Object {
	$interface(TestType5, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void aFoo() {}
	virtual void pBar();
	virtual $String* sBar();
	static void sFoo();
};

#endif // _TestType5_h_