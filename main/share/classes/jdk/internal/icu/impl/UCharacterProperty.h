#ifndef _jdk_internal_icu_impl_UCharacterProperty_h_
#define _jdk_internal_icu_impl_UCharacterProperty_h_
//$ class jdk.internal.icu.impl.UCharacterProperty
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AGE_SHIFT_")
#undef AGE_SHIFT_
#pragma push_macro("ALPHABETIC_PROPERTY_")
#undef ALPHABETIC_PROPERTY_
#pragma push_macro("ASCII_HEX_DIGIT_PROPERTY_")
#undef ASCII_HEX_DIGIT_PROPERTY_
#pragma push_macro("BIDI_PAIRED_BRACKET_TYPE")
#undef BIDI_PAIRED_BRACKET_TYPE
#pragma push_macro("BLOCK_MASK_")
#undef BLOCK_MASK_
#pragma push_macro("BLOCK_SHIFT_")
#undef BLOCK_SHIFT_
#pragma push_macro("DASH_PROPERTY_")
#undef DASH_PROPERTY_
#pragma push_macro("DATA_FILE_NAME_")
#undef DATA_FILE_NAME_
#pragma push_macro("DATA_FORMAT")
#undef DATA_FORMAT
#pragma push_macro("DECOMPOSITION_TYPE_MASK_")
#undef DECOMPOSITION_TYPE_MASK_
#pragma push_macro("DEFAULT_IGNORABLE_CODE_POINT_PROPERTY_")
#undef DEFAULT_IGNORABLE_CODE_POINT_PROPERTY_
#pragma push_macro("DEPRECATED_PROPERTY_")
#undef DEPRECATED_PROPERTY_
#pragma push_macro("DIACRITIC_PROPERTY_")
#undef DIACRITIC_PROPERTY_
#pragma push_macro("EAST_ASIAN_MASK_")
#undef EAST_ASIAN_MASK_
#pragma push_macro("EAST_ASIAN_SHIFT_")
#undef EAST_ASIAN_SHIFT_
#pragma push_macro("EXTENDER_PROPERTY_")
#undef EXTENDER_PROPERTY_
#pragma push_macro("FIRST_NIBBLE_SHIFT_")
#undef FIRST_NIBBLE_SHIFT_
#pragma push_macro("GCB_MASK")
#undef GCB_MASK
#pragma push_macro("GCB_SHIFT")
#undef GCB_SHIFT
#pragma push_macro("GRAPHEME_BASE_PROPERTY_")
#undef GRAPHEME_BASE_PROPERTY_
#pragma push_macro("GRAPHEME_EXTEND_PROPERTY_")
#undef GRAPHEME_EXTEND_PROPERTY_
#pragma push_macro("GRAPHEME_LINK_PROPERTY_")
#undef GRAPHEME_LINK_PROPERTY_
#pragma push_macro("HEX_DIGIT_PROPERTY_")
#undef HEX_DIGIT_PROPERTY_
#pragma push_macro("HYPHEN_PROPERTY_")
#undef HYPHEN_PROPERTY_
#pragma push_macro("IDEOGRAPHIC_PROPERTY_")
#undef IDEOGRAPHIC_PROPERTY_
#pragma push_macro("IDS_BINARY_OPERATOR_PROPERTY_")
#undef IDS_BINARY_OPERATOR_PROPERTY_
#pragma push_macro("IDS_TRINARY_OPERATOR_PROPERTY_")
#undef IDS_TRINARY_OPERATOR_PROPERTY_
#pragma push_macro("ID_CONTINUE_PROPERTY_")
#undef ID_CONTINUE_PROPERTY_
#pragma push_macro("ID_START_PROPERTY_")
#undef ID_START_PROPERTY_
#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("LAST_NIBBLE_MASK_")
#undef LAST_NIBBLE_MASK_
#pragma push_macro("LB_MASK")
#undef LB_MASK
#pragma push_macro("LB_SHIFT")
#undef LB_SHIFT
#pragma push_macro("LEAD_SURROGATE_SHIFT_")
#undef LEAD_SURROGATE_SHIFT_
#pragma push_macro("LOGICAL_ORDER_EXCEPTION_PROPERTY_")
#undef LOGICAL_ORDER_EXCEPTION_PROPERTY_
#pragma push_macro("MATH_PROPERTY_")
#undef MATH_PROPERTY_
#pragma push_macro("MAX_SCRIPT")
#undef MAX_SCRIPT
#pragma push_macro("NONCHARACTER_CODE_POINT_PROPERTY_")
#undef NONCHARACTER_CODE_POINT_PROPERTY_
#pragma push_macro("NTV_DECIMAL_START_")
#undef NTV_DECIMAL_START_
#pragma push_macro("NTV_DIGIT_START_")
#undef NTV_DIGIT_START_
#pragma push_macro("NTV_NONE_")
#undef NTV_NONE_
#pragma push_macro("NTV_NUMERIC_START_")
#undef NTV_NUMERIC_START_
#pragma push_macro("NUMERIC_TYPE_VALUE_SHIFT_")
#undef NUMERIC_TYPE_VALUE_SHIFT_
#pragma push_macro("PATTERN_SYNTAX")
#undef PATTERN_SYNTAX
#pragma push_macro("PATTERN_WHITE_SPACE")
#undef PATTERN_WHITE_SPACE
#pragma push_macro("QUOTATION_MARK_PROPERTY_")
#undef QUOTATION_MARK_PROPERTY_
#pragma push_macro("RADICAL_PROPERTY_")
#undef RADICAL_PROPERTY_
#pragma push_macro("SB_MASK")
#undef SB_MASK
#pragma push_macro("SB_SHIFT")
#undef SB_SHIFT
#pragma push_macro("SCRIPT_HIGH_MASK")
#undef SCRIPT_HIGH_MASK
#pragma push_macro("SCRIPT_HIGH_SHIFT")
#undef SCRIPT_HIGH_SHIFT
#pragma push_macro("SCRIPT_LOW_MASK")
#undef SCRIPT_LOW_MASK
#pragma push_macro("SCRIPT_X_MASK")
#undef SCRIPT_X_MASK
#pragma push_macro("SRC_BIDI")
#undef SRC_BIDI
#pragma push_macro("SRC_CHAR")
#undef SRC_CHAR
#pragma push_macro("SRC_NFC")
#undef SRC_NFC
#pragma push_macro("SRC_NFKC")
#undef SRC_NFKC
#pragma push_macro("SRC_PROPSVEC")
#undef SRC_PROPSVEC
#pragma push_macro("SURROGATE_OFFSET_")
#undef SURROGATE_OFFSET_
#pragma push_macro("S_TERM_PROPERTY_")
#undef S_TERM_PROPERTY_
#pragma push_macro("TERMINAL_PUNCTUATION_PROPERTY_")
#undef TERMINAL_PUNCTUATION_PROPERTY_
#pragma push_macro("TYPE_MASK")
#undef TYPE_MASK
#pragma push_macro("UNIFIED_IDEOGRAPH_PROPERTY_")
#undef UNIFIED_IDEOGRAPH_PROPERTY_
#pragma push_macro("VARIATION_SELECTOR_PROPERTY_")
#undef VARIATION_SELECTOR_PROPERTY_
#pragma push_macro("WB_MASK")
#undef WB_MASK
#pragma push_macro("WB_SHIFT")
#undef WB_SHIFT
#pragma push_macro("WHITE_SPACE_PROPERTY_")
#undef WHITE_SPACE_PROPERTY_
#pragma push_macro("XID_CONTINUE_PROPERTY_")
#undef XID_CONTINUE_PROPERTY_
#pragma push_macro("XID_START_PROPERTY_")
#undef XID_START_PROPERTY_

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class Trie2_16;
				class UCharacterProperty$IntProperty;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class UnicodeSet;
			}
		}
	}
}
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
			namespace impl {

class UCharacterProperty : public ::java::lang::Object {
	$class(UCharacterProperty, 0, ::java::lang::Object)
public:
	UCharacterProperty();
	void init$();
	int32_t digit(int32_t c);
	int32_t getAdditional(int32_t codepoint, int32_t column);
	::jdk::internal::icu::util::VersionInfo* getAge(int32_t codepoint);
	static int32_t getEuropeanDigit(int32_t ch);
	int32_t getIntPropertyValue(int32_t c, int32_t which);
	static int32_t getMask(int32_t type);
	static int32_t getNumericTypeValue(int32_t props);
	int32_t getProperty(int32_t ch);
	static int32_t getRawSupplementary(char16_t lead, char16_t trail);
	int32_t getType(int32_t c);
	static int32_t mergeScriptCodeOrIndex(int32_t scriptX);
	static int32_t ntvGetType(int32_t ntv);
	void upropsvec_addPropertyStarts(::jdk::internal::icu::text::UnicodeSet* set);
	static bool $assertionsDisabled;
	static ::jdk::internal::icu::impl::UCharacterProperty* INSTANCE;
	::jdk::internal::icu::impl::Trie2_16* m_trie_ = nullptr;
	::jdk::internal::icu::util::VersionInfo* m_unicodeVersion_ = nullptr;
	static const int32_t TYPE_MASK = 31;
	static const int32_t SRC_CHAR = 1;
	static const int32_t SRC_PROPSVEC = 2;
	static const int32_t SRC_BIDI = 5;
	static const int32_t SRC_NFC = 8;
	static const int32_t SRC_NFKC = 9;
	static $ints* gcbToHst;
	::jdk::internal::icu::impl::UCharacterProperty$IntProperty* intProp = nullptr;
	::jdk::internal::icu::impl::Trie2_16* m_additionalTrie_ = nullptr;
	$ints* m_additionalVectors_ = nullptr;
	int32_t m_additionalColumnsCount_ = 0;
	int32_t m_maxBlockScriptValue_ = 0;
	int32_t m_maxJTGValue_ = 0;
	$chars* m_scriptExtensions_ = nullptr;
	static $String* DATA_FILE_NAME_;
	static const int32_t LEAD_SURROGATE_SHIFT_ = 10;
	static const int32_t SURROGATE_OFFSET_ = 0xFCA02400; // UTF16.SUPPLEMENTARY_MIN_VALUE - (UTF16.SURROGATE_MIN_VALUE << LEAD_SURROGATE_SHIFT_) - UTF16.TRAIL_SURROGATE_MIN_VALUE
	static const int32_t NUMERIC_TYPE_VALUE_SHIFT_ = 6;
	static const int32_t NTV_NONE_ = 0;
	static const int32_t NTV_DECIMAL_START_ = 1;
	static const int32_t NTV_DIGIT_START_ = 11;
	static const int32_t NTV_NUMERIC_START_ = 21;
	static const int32_t SCRIPT_X_MASK = 0x00F000FF;
	static const int32_t SCRIPT_HIGH_MASK = 0x00300000;
	static const int32_t SCRIPT_HIGH_SHIFT = 12;
	static const int32_t MAX_SCRIPT = 1023;
	static const int32_t EAST_ASIAN_MASK_ = 0x000E0000;
	static const int32_t EAST_ASIAN_SHIFT_ = 17;
	static const int32_t BLOCK_MASK_ = 0x0001FF00;
	static const int32_t BLOCK_SHIFT_ = 8;
	static const int32_t SCRIPT_LOW_MASK = 255;
	static const int32_t WHITE_SPACE_PROPERTY_ = 0;
	static const int32_t DASH_PROPERTY_ = 1;
	static const int32_t HYPHEN_PROPERTY_ = 2;
	static const int32_t QUOTATION_MARK_PROPERTY_ = 3;
	static const int32_t TERMINAL_PUNCTUATION_PROPERTY_ = 4;
	static const int32_t MATH_PROPERTY_ = 5;
	static const int32_t HEX_DIGIT_PROPERTY_ = 6;
	static const int32_t ASCII_HEX_DIGIT_PROPERTY_ = 7;
	static const int32_t ALPHABETIC_PROPERTY_ = 8;
	static const int32_t IDEOGRAPHIC_PROPERTY_ = 9;
	static const int32_t DIACRITIC_PROPERTY_ = 10;
	static const int32_t EXTENDER_PROPERTY_ = 11;
	static const int32_t NONCHARACTER_CODE_POINT_PROPERTY_ = 12;
	static const int32_t GRAPHEME_EXTEND_PROPERTY_ = 13;
	static const int32_t GRAPHEME_LINK_PROPERTY_ = 14;
	static const int32_t IDS_BINARY_OPERATOR_PROPERTY_ = 15;
	static const int32_t IDS_TRINARY_OPERATOR_PROPERTY_ = 16;
	static const int32_t RADICAL_PROPERTY_ = 17;
	static const int32_t UNIFIED_IDEOGRAPH_PROPERTY_ = 18;
	static const int32_t DEFAULT_IGNORABLE_CODE_POINT_PROPERTY_ = 19;
	static const int32_t DEPRECATED_PROPERTY_ = 20;
	static const int32_t LOGICAL_ORDER_EXCEPTION_PROPERTY_ = 21;
	static const int32_t XID_START_PROPERTY_ = 22;
	static const int32_t XID_CONTINUE_PROPERTY_ = 23;
	static const int32_t ID_START_PROPERTY_ = 24;
	static const int32_t ID_CONTINUE_PROPERTY_ = 25;
	static const int32_t GRAPHEME_BASE_PROPERTY_ = 26;
	static const int32_t S_TERM_PROPERTY_ = 27;
	static const int32_t VARIATION_SELECTOR_PROPERTY_ = 28;
	static const int32_t PATTERN_SYNTAX = 29;
	static const int32_t PATTERN_WHITE_SPACE = 30;
	static const int32_t LB_MASK = 0x03F00000;
	static const int32_t LB_SHIFT = 20;
	static const int32_t SB_MASK = 0x000F8000;
	static const int32_t SB_SHIFT = 15;
	static const int32_t WB_MASK = 31744;
	static const int32_t WB_SHIFT = 10;
	static const int32_t GCB_MASK = 992;
	static const int32_t GCB_SHIFT = 5;
	static const int32_t DECOMPOSITION_TYPE_MASK_ = 31;
	static const int32_t FIRST_NIBBLE_SHIFT_ = 4;
	static const int32_t LAST_NIBBLE_MASK_ = 15;
	static const int32_t AGE_SHIFT_ = 24;
	static const int32_t DATA_FORMAT = 0x5550726F;
	static const int32_t BIDI_PAIRED_BRACKET_TYPE = 4117;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("AGE_SHIFT_")
#pragma pop_macro("ALPHABETIC_PROPERTY_")
#pragma pop_macro("ASCII_HEX_DIGIT_PROPERTY_")
#pragma pop_macro("BIDI_PAIRED_BRACKET_TYPE")
#pragma pop_macro("BLOCK_MASK_")
#pragma pop_macro("BLOCK_SHIFT_")
#pragma pop_macro("DASH_PROPERTY_")
#pragma pop_macro("DATA_FILE_NAME_")
#pragma pop_macro("DATA_FORMAT")
#pragma pop_macro("DECOMPOSITION_TYPE_MASK_")
#pragma pop_macro("DEFAULT_IGNORABLE_CODE_POINT_PROPERTY_")
#pragma pop_macro("DEPRECATED_PROPERTY_")
#pragma pop_macro("DIACRITIC_PROPERTY_")
#pragma pop_macro("EAST_ASIAN_MASK_")
#pragma pop_macro("EAST_ASIAN_SHIFT_")
#pragma pop_macro("EXTENDER_PROPERTY_")
#pragma pop_macro("FIRST_NIBBLE_SHIFT_")
#pragma pop_macro("GCB_MASK")
#pragma pop_macro("GCB_SHIFT")
#pragma pop_macro("GRAPHEME_BASE_PROPERTY_")
#pragma pop_macro("GRAPHEME_EXTEND_PROPERTY_")
#pragma pop_macro("GRAPHEME_LINK_PROPERTY_")
#pragma pop_macro("HEX_DIGIT_PROPERTY_")
#pragma pop_macro("HYPHEN_PROPERTY_")
#pragma pop_macro("IDEOGRAPHIC_PROPERTY_")
#pragma pop_macro("IDS_BINARY_OPERATOR_PROPERTY_")
#pragma pop_macro("IDS_TRINARY_OPERATOR_PROPERTY_")
#pragma pop_macro("ID_CONTINUE_PROPERTY_")
#pragma pop_macro("ID_START_PROPERTY_")
#pragma pop_macro("INSTANCE")
#pragma pop_macro("LAST_NIBBLE_MASK_")
#pragma pop_macro("LB_MASK")
#pragma pop_macro("LB_SHIFT")
#pragma pop_macro("LEAD_SURROGATE_SHIFT_")
#pragma pop_macro("LOGICAL_ORDER_EXCEPTION_PROPERTY_")
#pragma pop_macro("MATH_PROPERTY_")
#pragma pop_macro("MAX_SCRIPT")
#pragma pop_macro("NONCHARACTER_CODE_POINT_PROPERTY_")
#pragma pop_macro("NTV_DECIMAL_START_")
#pragma pop_macro("NTV_DIGIT_START_")
#pragma pop_macro("NTV_NONE_")
#pragma pop_macro("NTV_NUMERIC_START_")
#pragma pop_macro("NUMERIC_TYPE_VALUE_SHIFT_")
#pragma pop_macro("PATTERN_SYNTAX")
#pragma pop_macro("PATTERN_WHITE_SPACE")
#pragma pop_macro("QUOTATION_MARK_PROPERTY_")
#pragma pop_macro("RADICAL_PROPERTY_")
#pragma pop_macro("SB_MASK")
#pragma pop_macro("SB_SHIFT")
#pragma pop_macro("SCRIPT_HIGH_MASK")
#pragma pop_macro("SCRIPT_HIGH_SHIFT")
#pragma pop_macro("SCRIPT_LOW_MASK")
#pragma pop_macro("SCRIPT_X_MASK")
#pragma pop_macro("SRC_BIDI")
#pragma pop_macro("SRC_CHAR")
#pragma pop_macro("SRC_NFC")
#pragma pop_macro("SRC_NFKC")
#pragma pop_macro("SRC_PROPSVEC")
#pragma pop_macro("SURROGATE_OFFSET_")
#pragma pop_macro("S_TERM_PROPERTY_")
#pragma pop_macro("TERMINAL_PUNCTUATION_PROPERTY_")
#pragma pop_macro("TYPE_MASK")
#pragma pop_macro("UNIFIED_IDEOGRAPH_PROPERTY_")
#pragma pop_macro("VARIATION_SELECTOR_PROPERTY_")
#pragma pop_macro("WB_MASK")
#pragma pop_macro("WB_SHIFT")
#pragma pop_macro("WHITE_SPACE_PROPERTY_")
#pragma pop_macro("XID_CONTINUE_PROPERTY_")
#pragma pop_macro("XID_START_PROPERTY_")

#endif // _jdk_internal_icu_impl_UCharacterProperty_h_