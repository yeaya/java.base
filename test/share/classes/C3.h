#ifndef _C3_h_
#define _C3_h_
//$ interface C3
//$ extends D3

#include <D3.h>

class C3 : public ::D3 {
	$interface(C3, $NO_CLASS_INIT, ::D3)
public:
	virtual void m() override {}
};

#endif // _C3_h_