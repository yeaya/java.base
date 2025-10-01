#ifndef _TestType3_h_
#define _TestType3_h_
//$ class TestType3
//$ extends TestType1

#include <TestType1.h>

class TestType3 : public ::TestType1 {
	$class(TestType3, $NO_CLASS_INIT, ::TestType1)
public:
	TestType3();
	using ::TestType1::bar;
	void init$();
	virtual void bar() override;
	virtual void bar(int32_t i) override;
	virtual void foo() override;
};

#endif // _TestType3_h_