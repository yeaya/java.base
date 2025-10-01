#ifndef _java_util_regex_Grapheme_h_
#define _java_util_regex_Grapheme_h_
//$ class java.util.regex.Grapheme
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EXTENDED_PICTOGRAPHIC")
#undef EXTENDED_PICTOGRAPHIC
#pragma push_macro("SPACINGMARK")
#undef SPACINGMARK
#pragma push_macro("LCOUNT")
#undef LCOUNT
#pragma push_macro("EXTEND")
#undef EXTEND
#pragma push_macro("LV")
#undef LV
#pragma push_macro("LVT")
#undef LVT
#pragma push_macro("SCOUNT")
#undef SCOUNT
#pragma push_macro("ZWJ")
#undef ZWJ
#pragma push_macro("L")
#undef L
#pragma push_macro("NCOUNT")
#undef NCOUNT
#pragma push_macro("CR")
#undef CR
#pragma push_macro("VCOUNT")
#undef VCOUNT
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("T")
#undef T
#pragma push_macro("V")
#undef V
#pragma push_macro("RI")
#undef RI
#pragma push_macro("TCOUNT")
#undef TCOUNT
#pragma push_macro("LAST_TYPE")
#undef LAST_TYPE
#pragma push_macro("LF")
#undef LF
#pragma push_macro("FIRST_TYPE")
#undef FIRST_TYPE
#pragma push_macro("CONTROL")
#undef CONTROL
#pragma push_macro("PREPEND")
#undef PREPEND
#pragma push_macro("SYLLABLE_BASE")
#undef SYLLABLE_BASE

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace java {
	namespace util {
		namespace regex {

class Grapheme : public ::java::lang::Object {
	$class(Grapheme, 0, ::java::lang::Object)
public:
	Grapheme();
	void init$();
	static int32_t getType(int32_t cp);
	static bool isExcludedSpacingMark(int32_t cp);
	static int32_t nextBoundary(::java::lang::CharSequence* src, int32_t off, int32_t limit);
	static const int32_t OTHER = 0;
	static const int32_t CR = 1;
	static const int32_t LF = 2;
	static const int32_t CONTROL = 3;
	static const int32_t EXTEND = 4;
	static const int32_t ZWJ = 5;
	static const int32_t RI = 6;
	static const int32_t PREPEND = 7;
	static const int32_t SPACINGMARK = 8;
	static const int32_t L = 9;
	static const int32_t V = 10;
	static const int32_t T = 11;
	static const int32_t LV = 12;
	static const int32_t LVT = 13;
	static const int32_t EXTENDED_PICTOGRAPHIC = 14;
	static const int32_t FIRST_TYPE = 0;
	static const int32_t LAST_TYPE = 14;
	static $Array<bool, 2>* rules;
	static const int32_t SYLLABLE_BASE = 0x0000AC00;
	static const int32_t LCOUNT = 19;
	static const int32_t VCOUNT = 21;
	static const int32_t TCOUNT = 28;
	static const int32_t NCOUNT = 588; // VCOUNT * TCOUNT
	static const int32_t SCOUNT = 11172; // LCOUNT * NCOUNT
};

		} // regex
	} // util
} // java

#pragma pop_macro("EXTENDED_PICTOGRAPHIC")
#pragma pop_macro("SPACINGMARK")
#pragma pop_macro("LCOUNT")
#pragma pop_macro("EXTEND")
#pragma pop_macro("LV")
#pragma pop_macro("LVT")
#pragma pop_macro("SCOUNT")
#pragma pop_macro("ZWJ")
#pragma pop_macro("L")
#pragma pop_macro("NCOUNT")
#pragma pop_macro("CR")
#pragma pop_macro("VCOUNT")
#pragma pop_macro("OTHER")
#pragma pop_macro("T")
#pragma pop_macro("V")
#pragma pop_macro("RI")
#pragma pop_macro("TCOUNT")
#pragma pop_macro("LAST_TYPE")
#pragma pop_macro("LF")
#pragma pop_macro("FIRST_TYPE")
#pragma pop_macro("CONTROL")
#pragma pop_macro("PREPEND")
#pragma pop_macro("SYLLABLE_BASE")

#endif // _java_util_regex_Grapheme_h_