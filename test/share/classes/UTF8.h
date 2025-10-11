#ifndef _UTF8_h_
#define _UTF8_h_
//$ class UTF8
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("UTF8")
#undef UTF8

class $export UTF8 : public ::java::lang::Object {
	$class(UTF8, 0, ::java::lang::Object)
public:
	UTF8();
	void init$();
	static void main($StringArray* args);
	static $String* test;
};

#pragma pop_macro("UTF8")

#endif // _UTF8_h_