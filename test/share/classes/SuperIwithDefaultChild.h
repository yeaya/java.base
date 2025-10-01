#ifndef _SuperIwithDefaultChild_h_
#define _SuperIwithDefaultChild_h_
//$ class SuperIwithDefaultChild
//$ extends SuperIwithDefault

#include <SuperIwithDefault.h>

class SuperIwithDefaultChild : public ::SuperIwithDefault {
	$class(SuperIwithDefaultChild, $NO_CLASS_INIT, ::SuperIwithDefault)
public:
	SuperIwithDefaultChild();
	void init$();
	virtual void foo() override;
};

#endif // _SuperIwithDefaultChild_h_