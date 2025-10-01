#ifndef _TestClass1B_h_
#define _TestClass1B_h_
//$ class TestClass1B
//$ extends TestClass1SuperB

#include <TestClass1SuperB.h>

class TestClass1B : public ::TestClass1SuperB {
	$class(TestClass1B, $NO_CLASS_INIT, ::TestClass1SuperB)
public:
	TestClass1B();
	void init$();
	virtual void bar();
	virtual void foo();
};

#endif // _TestClass1B_h_