#ifndef _B4_h_
#define _B4_h_
//$ interface B4
//$ extends D4

#include <D4.h>

class B4 : public ::D4 {
	$interface(B4, $NO_CLASS_INIT, ::D4)
public:
	virtual void m() override {}
};

#endif // _B4_h_