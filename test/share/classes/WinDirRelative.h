#ifndef _WinDirRelative_h_
#define _WinDirRelative_h_
//$ class WinDirRelative
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BASENAME")
#undef BASENAME
#pragma push_macro("COLON")
#undef COLON
#pragma push_macro("EXTENSION")
#undef EXTENSION
#pragma push_macro("NUM_FILES")
#undef NUM_FILES

class $export WinDirRelative : public ::java::lang::Object {
	$class(WinDirRelative, 0, ::java::lang::Object)
public:
	WinDirRelative();
	void init$();
	static bool isLetter(char16_t c);
	static void main($StringArray* args);
	static const char16_t COLON = ((char16_t)58);
	static $String* BASENAME;
	static $String* EXTENSION;
	static const int32_t NUM_FILES = 10;
};

#pragma pop_macro("BASENAME")
#pragma pop_macro("COLON")
#pragma pop_macro("EXTENSION")
#pragma pop_macro("NUM_FILES")

#endif // _WinDirRelative_h_