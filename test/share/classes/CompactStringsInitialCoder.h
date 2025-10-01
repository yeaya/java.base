#ifndef _CompactStringsInitialCoder_h_
#define _CompactStringsInitialCoder_h_
//$ class CompactStringsInitialCoder
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export CompactStringsInitialCoder : public ::java::lang::Object {
	$class(CompactStringsInitialCoder, 0, ::java::lang::Object)
public:
	CompactStringsInitialCoder();
	void init$();
	static void main($StringArray* args);
	static void test($String* expected, $String* actual);
	static $String* strEmpty;
	static $String* strLatin1;
	static $String* strUTF16;
	static char16_t charLatin1;
	static char16_t charUTF16;
};

#endif // _CompactStringsInitialCoder_h_