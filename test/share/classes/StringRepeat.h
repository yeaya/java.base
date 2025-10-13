#ifndef _StringRepeat_h_
#define _StringRepeat_h_
//$ class StringRepeat
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("REPEATS")
#undef REPEATS
#pragma push_macro("STRINGS")
#undef STRINGS

class $export StringRepeat : public ::java::lang::Object {
	$class(StringRepeat, 0, ::java::lang::Object)
public:
	StringRepeat();
	void init$();
	static void main($StringArray* args);
	static void test1();
	static void test2();
	static $String* truncate($String* string);
	static void verify($String* result, $String* string, int32_t repeat);
	static $ints* REPEATS;
	static $StringArray* STRINGS;
};

#pragma pop_macro("REPEATS")
#pragma pop_macro("STRINGS")

#endif // _StringRepeat_h_