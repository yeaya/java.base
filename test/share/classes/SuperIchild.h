#ifndef _SuperIchild_h_
#define _SuperIchild_h_
//$ class SuperIchild
//$ extends SuperI

#include <SuperI.h>

class SuperIchild : public ::SuperI {
	$class(SuperIchild, $NO_CLASS_INIT, ::SuperI)
public:
	SuperIchild();
	void init$();
	virtual void bar() override;
	virtual void foo() override;
};

#endif // _SuperIchild_h_