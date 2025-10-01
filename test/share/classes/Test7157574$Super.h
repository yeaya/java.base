#ifndef _Test7157574$Super_h_
#define _Test7157574$Super_h_
//$ class Test7157574$Super
//$ extends Test7157574$Intf

#include <Test7157574$Intf.h>

class $export Test7157574$Super : public ::Test7157574$Intf {
	$class(Test7157574$Super, $NO_CLASS_INIT, ::Test7157574$Intf)
public:
	Test7157574$Super();
	void init$();
	virtual void m2() {}
	int32_t f2 = 0;
};

#endif // _Test7157574$Super_h_