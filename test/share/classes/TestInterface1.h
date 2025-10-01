#ifndef _TestInterface1_h_
#define _TestInterface1_h_
//$ interface TestInterface1
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestInterface1 : public ::java::lang::Object {
	$interface(TestInterface1, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* bar();
	virtual void foo();
	virtual double quux();
};

#endif // _TestInterface1_h_