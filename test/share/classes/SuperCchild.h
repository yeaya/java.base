#ifndef _SuperCchild_h_
#define _SuperCchild_h_
//$ class SuperCchild
//$ extends SuperC

#include <SuperC.h>

class SuperCchild : public ::SuperC {
	$class(SuperCchild, $NO_CLASS_INIT, ::SuperC)
public:
	SuperCchild();
	void init$();
	virtual void foo() override;
};

#endif // _SuperCchild_h_