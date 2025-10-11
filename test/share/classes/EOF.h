#ifndef _EOF_h_
#define _EOF_h_
//$ class EOF
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EOF")
#undef EOF

class $export EOF : public ::java::lang::Object {
	$class(EOF, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EOF();
	void init$();
	static void main($StringArray* args);
};

#pragma pop_macro("EOF")

#endif // _EOF_h_