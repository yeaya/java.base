#ifndef _BB_h_
#define _BB_h_
//$ class BB
//$ extends AB

#include <AB.h>

#pragma push_macro("BB")
#undef BB

class BB : public ::AB {
	$class(BB, $NO_CLASS_INIT, ::AB)
public:
	BB();
	void init$();
	virtual void bar() override {}
};

#pragma pop_macro("BB")

#endif // _BB_h_