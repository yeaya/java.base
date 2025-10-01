#ifndef _LastErrorString_h_
#define _LastErrorString_h_
//$ class LastErrorString
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("UNWRITEABLE_DIR")
#undef UNWRITEABLE_DIR
#pragma push_macro("INVALID_PATH")
#undef INVALID_PATH
#pragma push_macro("READABLE_FILE")
#undef READABLE_FILE
#pragma push_macro("WRITEABLE_FILE")
#undef WRITEABLE_FILE
#pragma push_macro("UNREADABLE_FILE")
#undef UNREADABLE_FILE

class $export LastErrorString : public ::java::lang::Object {
	$class(LastErrorString, 0, ::java::lang::Object)
public:
	LastErrorString();
	void init$();
	static void go();
	static void main($StringArray* args);
	static $String* UNWRITEABLE_DIR;
	static $String* UNREADABLE_FILE;
	static $String* READABLE_FILE;
	static $String* WRITEABLE_FILE;
	static $String* INVALID_PATH;
};

#pragma pop_macro("UNWRITEABLE_DIR")
#pragma pop_macro("INVALID_PATH")
#pragma pop_macro("READABLE_FILE")
#pragma pop_macro("WRITEABLE_FILE")
#pragma pop_macro("UNREADABLE_FILE")

#endif // _LastErrorString_h_