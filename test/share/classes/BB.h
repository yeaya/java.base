#ifndef _BB_h_
#define _BB_h_
//$ class BB
//$ extends AB

#include <AB.h>

class BB : public ::AB {
	$class(BB, $NO_CLASS_INIT, ::AB)
public:
	BB();
	void init$();
	virtual void bar() override {}
};

#endif // _BB_h_