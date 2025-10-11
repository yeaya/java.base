#ifndef _CB_h_
#define _CB_h_
//$ class CB
//$ extends BB

#include <BB.h>

#pragma push_macro("CB")
#undef CB

class CB : public ::BB {
	$class(CB, $NO_CLASS_INIT, ::BB)
public:
	CB();
	void init$();
	virtual void bar() override;
};

#pragma pop_macro("CB")

#endif // _CB_h_