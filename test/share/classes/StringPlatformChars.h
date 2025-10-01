#ifndef _StringPlatformChars_h_
#define _StringPlatformChars_h_
//$ class StringPlatformChars
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JNU_ENCODING")
#undef JNU_ENCODING

class $export StringPlatformChars : public ::java::lang::Object {
	$class(StringPlatformChars, 0, ::java::lang::Object)
public:
	StringPlatformChars();
	void init$();
	static $bytes* getBytes($String* string);
	static void main($StringArray* args);
	static $String* newString($bytes* bytes);
	static void testString($String* s);
	static $String* JNU_ENCODING;
};

#pragma pop_macro("JNU_ENCODING")

#endif // _StringPlatformChars_h_