#ifndef _TestType7_h_
#define _TestType7_h_
//$ class TestType7
//$ extends TestType6$nestedTestType6

#include <TestType6$nestedTestType6.h>

class TestType7 : public ::TestType6$nestedTestType6 {
	$class(TestType7, $NO_CLASS_INIT, ::TestType6$nestedTestType6)
public:
	TestType7();
	void init$();
	virtual void nestedBar() override;
	virtual void nestedFoo() override;
};

#endif // _TestType7_h_