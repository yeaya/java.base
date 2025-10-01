#ifndef _B3_h_
#define _B3_h_
//$ interface B3
//$ extends D3

#include <D3.h>

class B3 : public ::D3 {
	$interface(B3, $NO_CLASS_INIT, ::D3)
public:
	virtual void m() override {}
};

#endif // _B3_h_