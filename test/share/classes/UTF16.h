#ifndef _UTF16_h_
#define _UTF16_h_
//$ class UTF16
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("UTF16")
#undef UTF16

class $export UTF16 : public ::java::lang::Object {
	$class(UTF16, 0, ::java::lang::Object)
public:
	UTF16();
	void init$();
	static void go($String* cs);
	static void main($StringArray* args);
	static $bytes* array;
};

#pragma pop_macro("UTF16")

#endif // _UTF16_h_