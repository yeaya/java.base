#ifndef _AB_h_
#define _AB_h_
//$ class AB
//$ extends SuperIwithDefault

#include <SuperIwithDefault.h>

#pragma push_macro("AB")
#undef AB

class AB : public ::SuperIwithDefault {
	$class(AB, $NO_CLASS_INIT, ::SuperIwithDefault)
public:
	AB();
	void init$();
	virtual void foo() override;
};

#pragma pop_macro("AB")

#endif // _AB_h_