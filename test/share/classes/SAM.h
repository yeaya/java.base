#ifndef _SAM_h_
#define _SAM_h_
//$ interface SAM
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SAM")
#undef SAM

class SAM : public ::java::lang::Object {
	$interface(SAM, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* m() {return nullptr;}
};

#pragma pop_macro("SAM")

#endif // _SAM_h_