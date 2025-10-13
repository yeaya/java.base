#ifndef _jdk_internal_icu_lang_UCharacterEnums$ECharacterCategory_h_
#define _jdk_internal_icu_lang_UCharacterEnums$ECharacterCategory_h_
//$ interface jdk.internal.icu.lang.UCharacterEnums$ECharacterCategory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CHAR_CATEGORY_COUNT")
#undef CHAR_CATEGORY_COUNT
#pragma push_macro("COMBINING_SPACING_MARK")
#undef COMBINING_SPACING_MARK
#pragma push_macro("CONNECTOR_PUNCTUATION")
#undef CONNECTOR_PUNCTUATION
#pragma push_macro("CONTROL")
#undef CONTROL
#pragma push_macro("CURRENCY_SYMBOL")
#undef CURRENCY_SYMBOL
#pragma push_macro("DASH_PUNCTUATION")
#undef DASH_PUNCTUATION
#pragma push_macro("DECIMAL_DIGIT_NUMBER")
#undef DECIMAL_DIGIT_NUMBER
#pragma push_macro("ENCLOSING_MARK")
#undef ENCLOSING_MARK
#pragma push_macro("END_PUNCTUATION")
#undef END_PUNCTUATION
#pragma push_macro("FINAL_PUNCTUATION")
#undef FINAL_PUNCTUATION
#pragma push_macro("FINAL_QUOTE_PUNCTUATION")
#undef FINAL_QUOTE_PUNCTUATION
#pragma push_macro("FORMAT")
#undef FORMAT
#pragma push_macro("GENERAL_OTHER_TYPES")
#undef GENERAL_OTHER_TYPES
#pragma push_macro("INITIAL_PUNCTUATION")
#undef INITIAL_PUNCTUATION
#pragma push_macro("INITIAL_QUOTE_PUNCTUATION")
#undef INITIAL_QUOTE_PUNCTUATION
#pragma push_macro("LETTER_NUMBER")
#undef LETTER_NUMBER
#pragma push_macro("LINE_SEPARATOR")
#undef LINE_SEPARATOR
#pragma push_macro("LOWERCASE_LETTER")
#undef LOWERCASE_LETTER
#pragma push_macro("MATH_SYMBOL")
#undef MATH_SYMBOL
#pragma push_macro("MODIFIER_LETTER")
#undef MODIFIER_LETTER
#pragma push_macro("MODIFIER_SYMBOL")
#undef MODIFIER_SYMBOL
#pragma push_macro("NON_SPACING_MARK")
#undef NON_SPACING_MARK
#pragma push_macro("OTHER_LETTER")
#undef OTHER_LETTER
#pragma push_macro("OTHER_NUMBER")
#undef OTHER_NUMBER
#pragma push_macro("OTHER_PUNCTUATION")
#undef OTHER_PUNCTUATION
#pragma push_macro("OTHER_SYMBOL")
#undef OTHER_SYMBOL
#pragma push_macro("PARAGRAPH_SEPARATOR")
#undef PARAGRAPH_SEPARATOR
#pragma push_macro("PRIVATE_USE")
#undef PRIVATE_USE
#pragma push_macro("SPACE_SEPARATOR")
#undef SPACE_SEPARATOR
#pragma push_macro("START_PUNCTUATION")
#undef START_PUNCTUATION
#pragma push_macro("SURROGATE")
#undef SURROGATE
#pragma push_macro("TITLECASE_LETTER")
#undef TITLECASE_LETTER
#pragma push_macro("UNASSIGNED")
#undef UNASSIGNED
#pragma push_macro("UPPERCASE_LETTER")
#undef UPPERCASE_LETTER

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

class UCharacterEnums$ECharacterCategory : public ::java::lang::Object {
	$interface(UCharacterEnums$ECharacterCategory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t UNASSIGNED = 0;
	static const int32_t GENERAL_OTHER_TYPES = 0;
	static const int32_t UPPERCASE_LETTER = 1;
	static const int32_t LOWERCASE_LETTER = 2;
	static const int32_t TITLECASE_LETTER = 3;
	static const int32_t MODIFIER_LETTER = 4;
	static const int32_t OTHER_LETTER = 5;
	static const int32_t NON_SPACING_MARK = 6;
	static const int32_t ENCLOSING_MARK = 7;
	static const int32_t COMBINING_SPACING_MARK = 8;
	static const int32_t DECIMAL_DIGIT_NUMBER = 9;
	static const int32_t LETTER_NUMBER = 10;
	static const int32_t OTHER_NUMBER = 11;
	static const int32_t SPACE_SEPARATOR = 12;
	static const int32_t LINE_SEPARATOR = 13;
	static const int32_t PARAGRAPH_SEPARATOR = 14;
	static const int32_t CONTROL = 15;
	static const int32_t FORMAT = 16;
	static const int32_t PRIVATE_USE = 17;
	static const int32_t SURROGATE = 18;
	static const int32_t DASH_PUNCTUATION = 19;
	static const int32_t START_PUNCTUATION = 20;
	static const int32_t END_PUNCTUATION = 21;
	static const int32_t CONNECTOR_PUNCTUATION = 22;
	static const int32_t OTHER_PUNCTUATION = 23;
	static const int32_t MATH_SYMBOL = 24;
	static const int32_t CURRENCY_SYMBOL = 25;
	static const int32_t MODIFIER_SYMBOL = 26;
	static const int32_t OTHER_SYMBOL = 27;
	static const int32_t INITIAL_PUNCTUATION = 28;
	static const int32_t INITIAL_QUOTE_PUNCTUATION = 28;
	static const int32_t FINAL_PUNCTUATION = 29;
	static const int32_t FINAL_QUOTE_PUNCTUATION = 29;
	static const int32_t CHAR_CATEGORY_COUNT = 30;
};

			} // lang
		} // icu
	} // internal
} // jdk

#pragma pop_macro("CHAR_CATEGORY_COUNT")
#pragma pop_macro("COMBINING_SPACING_MARK")
#pragma pop_macro("CONNECTOR_PUNCTUATION")
#pragma pop_macro("CONTROL")
#pragma pop_macro("CURRENCY_SYMBOL")
#pragma pop_macro("DASH_PUNCTUATION")
#pragma pop_macro("DECIMAL_DIGIT_NUMBER")
#pragma pop_macro("ENCLOSING_MARK")
#pragma pop_macro("END_PUNCTUATION")
#pragma pop_macro("FINAL_PUNCTUATION")
#pragma pop_macro("FINAL_QUOTE_PUNCTUATION")
#pragma pop_macro("FORMAT")
#pragma pop_macro("GENERAL_OTHER_TYPES")
#pragma pop_macro("INITIAL_PUNCTUATION")
#pragma pop_macro("INITIAL_QUOTE_PUNCTUATION")
#pragma pop_macro("LETTER_NUMBER")
#pragma pop_macro("LINE_SEPARATOR")
#pragma pop_macro("LOWERCASE_LETTER")
#pragma pop_macro("MATH_SYMBOL")
#pragma pop_macro("MODIFIER_LETTER")
#pragma pop_macro("MODIFIER_SYMBOL")
#pragma pop_macro("NON_SPACING_MARK")
#pragma pop_macro("OTHER_LETTER")
#pragma pop_macro("OTHER_NUMBER")
#pragma pop_macro("OTHER_PUNCTUATION")
#pragma pop_macro("OTHER_SYMBOL")
#pragma pop_macro("PARAGRAPH_SEPARATOR")
#pragma pop_macro("PRIVATE_USE")
#pragma pop_macro("SPACE_SEPARATOR")
#pragma pop_macro("START_PUNCTUATION")
#pragma pop_macro("SURROGATE")
#pragma pop_macro("TITLECASE_LETTER")
#pragma pop_macro("UNASSIGNED")
#pragma pop_macro("UPPERCASE_LETTER")

#endif // _jdk_internal_icu_lang_UCharacterEnums$ECharacterCategory_h_