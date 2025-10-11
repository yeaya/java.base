#ifndef _EOL_h_
#define _EOL_h_
//$ class EOL
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EOL")
#undef EOL

class $export EOL : public ::java::lang::Object {
	$class(EOL, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EOL();
	void init$();
	static void main($StringArray* args);
};

#pragma pop_macro("EOL")

#endif // _EOL_h_