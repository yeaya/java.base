#ifndef _I2B_h_
#define _I2B_h_
//$ interface I2B
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("I2B")
#undef I2B

class I2B : public ::java::lang::Object {
	$interface(I2B, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* bar(Object$* e3) {return nullptr;}
};

#pragma pop_macro("I2B")

#endif // _I2B_h_