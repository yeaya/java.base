#ifndef _java_util_regex_CharPredicates_h_
#define _java_util_regex_CharPredicates_h_
//$ class java.util.regex.CharPredicates
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Character$UnicodeBlock;
		class Character$UnicodeScript;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern$BmpCharPredicate;
			class Pattern$CharPredicate;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class CharPredicates : public ::java::lang::Object {
	$class(CharPredicates, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CharPredicates();
	void init$();
	static ::java::util::regex::Pattern$CharPredicate* ALNUM();
	static ::java::util::regex::Pattern$CharPredicate* ALPHABETIC();
	static ::java::util::regex::Pattern$BmpCharPredicate* ASCII_DIGIT();
	static ::java::util::regex::Pattern$BmpCharPredicate* ASCII_SPACE();
	static ::java::util::regex::Pattern$BmpCharPredicate* ASCII_WORD();
	static ::java::util::regex::Pattern$CharPredicate* ASSIGNED();
	static ::java::util::regex::Pattern$CharPredicate* BLANK();
	static ::java::util::regex::Pattern$CharPredicate* CONTROL();
	static ::java::util::regex::Pattern$CharPredicate* DIGIT();
	static ::java::util::regex::Pattern$CharPredicate* GRAPH();
	static ::java::util::regex::Pattern$CharPredicate* HEX_DIGIT();
	static ::java::util::regex::Pattern$CharPredicate* IDEOGRAPHIC();
	static ::java::util::regex::Pattern$CharPredicate* JOIN_CONTROL();
	static ::java::util::regex::Pattern$CharPredicate* LETTER();
	static ::java::util::regex::Pattern$CharPredicate* LOWERCASE();
	static ::java::util::regex::Pattern$CharPredicate* NONCHARACTER_CODE_POINT();
	static ::java::util::regex::Pattern$CharPredicate* PRINT();
	static ::java::util::regex::Pattern$CharPredicate* PUNCTUATION();
	static ::java::util::regex::Pattern$CharPredicate* TITLECASE();
	static ::java::util::regex::Pattern$CharPredicate* UPPERCASE();
	static ::java::util::regex::Pattern$CharPredicate* WHITE_SPACE();
	static ::java::util::regex::Pattern$CharPredicate* WORD();
	static ::java::util::regex::Pattern$CharPredicate* category(int32_t typeMask);
	static ::java::util::regex::Pattern$CharPredicate* ctype(int32_t ctype);
	static ::java::util::regex::Pattern$CharPredicate* forPOSIXName($String* propName, bool caseIns);
	static ::java::util::regex::Pattern$CharPredicate* forProperty($String* name, bool caseIns);
	static ::java::util::regex::Pattern$CharPredicate* forUnicodeBlock($String* name);
	static ::java::util::regex::Pattern$CharPredicate* forUnicodeProperty($String* propName, bool caseIns);
	static ::java::util::regex::Pattern$CharPredicate* forUnicodeScript($String* name);
	static ::java::util::regex::Pattern$CharPredicate* getPosixPredicate($String* name, bool caseIns);
	static ::java::util::regex::Pattern$CharPredicate* getUnicodePredicate($String* name, bool caseIns);
	static bool lambda$ASCII_DIGIT$18(int32_t ch);
	static bool lambda$ASCII_SPACE$20(int32_t ch);
	static bool lambda$ASCII_WORD$19(int32_t ch);
	static bool lambda$ASSIGNED$4(int32_t ch);
	static bool lambda$BLANK$6(int32_t ch);
	static bool lambda$CONTROL$1(int32_t ch);
	static bool lambda$GRAPH$7(int32_t ch);
	static bool lambda$HEX_DIGIT$3(int32_t ch);
	static bool lambda$JOIN_CONTROL$8(int32_t ch);
	static bool lambda$NONCHARACTER_CODE_POINT$5(int32_t ch);
	static bool lambda$PUNCTUATION$2(int32_t ch);
	static bool lambda$WHITE_SPACE$0(int32_t ch);
	static bool lambda$WORD$9(int32_t ch);
	static bool lambda$category$15(int32_t typeMask, int32_t ch);
	static bool lambda$ctype$17(int32_t ctype, int32_t ch);
	static bool lambda$forProperty$12(int32_t c);
	static bool lambda$forProperty$13(int32_t c);
	static bool lambda$forProperty$14(int32_t c);
	static bool lambda$forUnicodeBlock$11(::java::lang::Character$UnicodeBlock* block, int32_t ch);
	static bool lambda$forUnicodeScript$10(::java::lang::Character$UnicodeScript* script, int32_t ch);
	static bool lambda$range$16(int32_t lower, int32_t upper, int32_t ch);
	static ::java::util::regex::Pattern$CharPredicate* range(int32_t lower, int32_t upper);
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_CharPredicates_h_