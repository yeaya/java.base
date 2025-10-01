#ifndef _AB_h_
#define _AB_h_
//$ class AB
//$ extends SuperIwithDefault

#include <SuperIwithDefault.h>

class AB : public ::SuperIwithDefault {
	$class(AB, $NO_CLASS_INIT, ::SuperIwithDefault)
public:
	AB();
	void init$();
	virtual void foo() override;
};

#endif // _AB_h_