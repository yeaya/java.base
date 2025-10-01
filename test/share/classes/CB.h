#ifndef _CB_h_
#define _CB_h_
//$ class CB
//$ extends BB

#include <BB.h>

class CB : public ::BB {
	$class(CB, $NO_CLASS_INIT, ::BB)
public:
	CB();
	void init$();
	virtual void bar() override;
};

#endif // _CB_h_