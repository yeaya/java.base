#ifndef _java_util_regex_ASCII_h_
#define _java_util_regex_ASCII_h_
//$ class java.util.regex.ASCII
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALNUM")
#undef ALNUM
#pragma push_macro("ALPHA")
#undef ALPHA
#pragma push_macro("ASCII")
#undef ASCII
#pragma push_macro("BLANK")
#undef BLANK
#pragma push_macro("CNTRL")
#undef CNTRL
#pragma push_macro("DIGIT")
#undef DIGIT
#pragma push_macro("GRAPH")
#undef GRAPH
#pragma push_macro("HEX")
#undef HEX
#pragma push_macro("LOWER")
#undef LOWER
#pragma push_macro("PUNCT")
#undef PUNCT
#pragma push_macro("SPACE")
#undef SPACE
#pragma push_macro("UNDER")
#undef UNDER
#pragma push_macro("UPPER")
#undef UPPER
#pragma push_macro("WORD")
#undef WORD
#pragma push_macro("XDIGIT")
#undef XDIGIT

namespace java {
	namespace util {
		namespace regex {

class ASCII : public ::java::lang::Object {
	$class(ASCII, 0, ::java::lang::Object)
public:
	ASCII();
	void init$();
	static int32_t getType(int32_t ch);
	static bool isAlnum(int32_t ch);
	static bool isAlpha(int32_t ch);
	static bool isAscii(int32_t ch);
	static bool isCntrl(int32_t ch);
	static bool isDigit(int32_t ch);
	static bool isGraph(int32_t ch);
	static bool isHexDigit(int32_t ch);
	static bool isLower(int32_t ch);
	static bool isOctDigit(int32_t ch);
	static bool isPrint(int32_t ch);
	static bool isPunct(int32_t ch);
	static bool isSpace(int32_t ch);
	static bool isType(int32_t ch, int32_t type);
	static bool isUpper(int32_t ch);
	static bool isWord(int32_t ch);
	static int32_t toDigit(int32_t ch);
	static int32_t toLower(int32_t ch);
	static int32_t toUpper(int32_t ch);
	static const int32_t UPPER = 256;
	static const int32_t LOWER = 512;
	static const int32_t DIGIT = 1024;
	static const int32_t SPACE = 2048;
	static const int32_t PUNCT = 4096;
	static const int32_t CNTRL = 8192;
	static const int32_t BLANK = 16384;
	static const int32_t HEX = 32768;
	static const int32_t UNDER = 0x00010000;
	static const int32_t ASCII$ = 0x0000FF00;
	static const int32_t ALPHA = (UPPER | LOWER);
	static const int32_t ALNUM = (UPPER | LOWER | DIGIT);
	static const int32_t GRAPH = (PUNCT | UPPER | LOWER | DIGIT);
	static const int32_t WORD = (UPPER | LOWER | UNDER | DIGIT);
	static const int32_t XDIGIT = (HEX);
	static $ints* ctype;
};

		} // regex
	} // util
} // java

#pragma pop_macro("ALNUM")
#pragma pop_macro("ALPHA")
#pragma pop_macro("ASCII")
#pragma pop_macro("BLANK")
#pragma pop_macro("CNTRL")
#pragma pop_macro("DIGIT")
#pragma pop_macro("GRAPH")
#pragma pop_macro("HEX")
#pragma pop_macro("LOWER")
#pragma pop_macro("PUNCT")
#pragma pop_macro("SPACE")
#pragma pop_macro("UNDER")
#pragma pop_macro("UPPER")
#pragma pop_macro("WORD")
#pragma pop_macro("XDIGIT")

#endif // _java_util_regex_ASCII_h_