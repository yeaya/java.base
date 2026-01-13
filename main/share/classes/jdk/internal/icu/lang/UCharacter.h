#ifndef _jdk_internal_icu_lang_UCharacter_h_
#define _jdk_internal_icu_lang_UCharacter_h_
//$ class jdk.internal.icu.lang.UCharacter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CHAR_CATEGORY_COUNT")
#undef CHAR_CATEGORY_COUNT
#pragma push_macro("COMBINING_SPACING_MARK")
#undef COMBINING_SPACING_MARK
#pragma push_macro("ENCLOSING_MARK")
#undef ENCLOSING_MARK
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
#pragma push_macro("NON_SPACING_MARK")
#undef NON_SPACING_MARK
#pragma push_macro("RIGHT_TO_LEFT")
#undef RIGHT_TO_LEFT
#pragma push_macro("RIGHT_TO_LEFT_ARABIC")
#undef RIGHT_TO_LEFT_ARABIC

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class VersionInfo;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

class UCharacter : public ::java::lang::Object {
	$class(UCharacter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UCharacter();
	void init$();
	static int32_t digit(int32_t ch, int32_t radix);
	static int32_t digit(int32_t ch);
	static ::jdk::internal::icu::util::VersionInfo* getAge(int32_t ch);
	static int32_t getBidiPairedBracket(int32_t c);
	static int32_t getCodePoint(char16_t lead, char16_t trail);
	static int32_t getCombiningClass(int32_t ch);
	static int32_t getDirection(int32_t ch);
	static int32_t getIntPropertyValue(int32_t ch, int32_t type);
	static int32_t getMirror(int32_t ch);
	static int32_t getType(int32_t ch);
	static ::jdk::internal::icu::util::VersionInfo* getUnicodeVersion();
	static const int32_t MIN_VALUE = 0; // UTF16.CODEPOINT_MIN_VALUE
	static const int32_t MAX_VALUE = 1114111; // UTF16.CODEPOINT_MAX_VALUE
	static const int8_t NON_SPACING_MARK = 6;
	static const int8_t ENCLOSING_MARK = 7;
	static const int8_t COMBINING_SPACING_MARK = 8;
	static const int8_t CHAR_CATEGORY_COUNT = 30;
	static const int32_t RIGHT_TO_LEFT = 1;
	static const int32_t RIGHT_TO_LEFT_ARABIC = 13;
};

			} // lang
		} // icu
	} // internal
} // jdk

#pragma pop_macro("CHAR_CATEGORY_COUNT")
#pragma pop_macro("COMBINING_SPACING_MARK")
#pragma pop_macro("ENCLOSING_MARK")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("NON_SPACING_MARK")
#pragma pop_macro("RIGHT_TO_LEFT")
#pragma pop_macro("RIGHT_TO_LEFT_ARABIC")

#endif // _jdk_internal_icu_lang_UCharacter_h_