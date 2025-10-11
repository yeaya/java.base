#ifndef _Z_h_
#define _Z_h_
//$ class Z
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("Z")
#undef Z

class $export Z : public ::java::lang::Object {
	$class(Z, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Z();
	void init$();
	static void main($StringArray* argv);
};

#pragma pop_macro("Z")

#endif // _Z_h_