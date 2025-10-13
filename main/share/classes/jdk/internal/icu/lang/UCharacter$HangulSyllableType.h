#ifndef _jdk_internal_icu_lang_UCharacter$HangulSyllableType_h_
#define _jdk_internal_icu_lang_UCharacter$HangulSyllableType_h_
//$ interface jdk.internal.icu.lang.UCharacter$HangulSyllableType
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("COUNT")
#undef COUNT
#pragma push_macro("LEADING_JAMO")
#undef LEADING_JAMO
#pragma push_macro("LVT_SYLLABLE")
#undef LVT_SYLLABLE
#pragma push_macro("LV_SYLLABLE")
#undef LV_SYLLABLE
#pragma push_macro("NOT_APPLICABLE")
#undef NOT_APPLICABLE
#pragma push_macro("TRAILING_JAMO")
#undef TRAILING_JAMO
#pragma push_macro("VOWEL_JAMO")
#undef VOWEL_JAMO

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

class UCharacter$HangulSyllableType : public ::java::lang::Object {
	$interface(UCharacter$HangulSyllableType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t NOT_APPLICABLE = 0;
	static const int32_t LEADING_JAMO = 1;
	static const int32_t VOWEL_JAMO = 2;
	static const int32_t TRAILING_JAMO = 3;
	static const int32_t LV_SYLLABLE = 4;
	static const int32_t LVT_SYLLABLE = 5;
	static const int32_t COUNT = 6;
};

			} // lang
		} // icu
	} // internal
} // jdk

#pragma pop_macro("COUNT")
#pragma pop_macro("LEADING_JAMO")
#pragma pop_macro("LVT_SYLLABLE")
#pragma pop_macro("LV_SYLLABLE")
#pragma pop_macro("NOT_APPLICABLE")
#pragma pop_macro("TRAILING_JAMO")
#pragma pop_macro("VOWEL_JAMO")

#endif // _jdk_internal_icu_lang_UCharacter$HangulSyllableType_h_