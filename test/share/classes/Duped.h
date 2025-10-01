#ifndef _Duped_h_
#define _Duped_h_
//$ class Duped
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HELLO")
#undef HELLO

class $export Duped : public ::java::lang::Object {
	$class(Duped, 0, ::java::lang::Object)
public:
	Duped();
	void init$();
	static void main($StringArray* args);
	static $String* HELLO;
};

#pragma pop_macro("HELLO")

#endif // _Duped_h_