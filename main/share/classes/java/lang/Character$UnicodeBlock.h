#ifndef _java_lang_Character$UnicodeBlock_h_
#define _java_lang_Character$UnicodeBlock_h_
//$ class java.lang.Character$UnicodeBlock
//$ extends java.lang.Character$Subset

#include <java/lang/Array.h>
#include <java/lang/Character$Subset.h>

#pragma push_macro("MANDAIC")
#undef MANDAIC
#pragma push_macro("OSAGE")
#undef OSAGE
#pragma push_macro("MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A")
#undef MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A
#pragma push_macro("CYRILLIC_SUPPLEMENTARY")
#undef CYRILLIC_SUPPLEMENTARY
#pragma push_macro("CHESS_SYMBOLS")
#undef CHESS_SYMBOLS
#pragma push_macro("MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B")
#undef MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B
#pragma push_macro("CAUCASIAN_ALBANIAN")
#undef CAUCASIAN_ALBANIAN
#pragma push_macro("MALAYALAM")
#undef MALAYALAM
#pragma push_macro("KATAKANA_PHONETIC_EXTENSIONS")
#undef KATAKANA_PHONETIC_EXTENSIONS
#pragma push_macro("CARIAN")
#undef CARIAN
#pragma push_macro("CJK_RADICALS_SUPPLEMENT")
#undef CJK_RADICALS_SUPPLEMENT
#pragma push_macro("IDEOGRAPHIC_SYMBOLS_AND_PUNCTUATION")
#undef IDEOGRAPHIC_SYMBOLS_AND_PUNCTUATION
#pragma push_macro("KANBUN")
#undef KANBUN
#pragma push_macro("TAI_LE")
#undef TAI_LE
#pragma push_macro("CHEROKEE_SUPPLEMENT")
#undef CHEROKEE_SUPPLEMENT
#pragma push_macro("EARLY_DYNASTIC_CUNEIFORM")
#undef EARLY_DYNASTIC_CUNEIFORM
#pragma push_macro("DEVANAGARI_EXTENDED")
#undef DEVANAGARI_EXTENDED
#pragma push_macro("BALINESE")
#undef BALINESE
#pragma push_macro("TAMIL")
#undef TAMIL
#pragma push_macro("INSCRIPTIONAL_PARTHIAN")
#undef INSCRIPTIONAL_PARTHIAN
#pragma push_macro("MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS")
#undef MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS
#pragma push_macro("ARROWS")
#undef ARROWS
#pragma push_macro("SOGDIAN")
#undef SOGDIAN
#pragma push_macro("EGYPTIAN_HIEROGLYPHS")
#undef EGYPTIAN_HIEROGLYPHS
#pragma push_macro("LINEAR_A")
#undef LINEAR_A
#pragma push_macro("MENDE_KIKAKUI")
#undef MENDE_KIKAKUI
#pragma push_macro("MATHEMATICAL_ALPHANUMERIC_SYMBOLS")
#undef MATHEMATICAL_ALPHANUMERIC_SYMBOLS
#pragma push_macro("OLD_TURKIC")
#undef OLD_TURKIC
#pragma push_macro("DOMINO_TILES")
#undef DOMINO_TILES
#pragma push_macro("SUPPLEMENTAL_MATHEMATICAL_OPERATORS")
#undef SUPPLEMENTAL_MATHEMATICAL_OPERATORS
#pragma push_macro("MULTANI")
#undef MULTANI
#pragma push_macro("OTTOMAN_SIYAQ_NUMBERS")
#undef OTTOMAN_SIYAQ_NUMBERS
#pragma push_macro("IMPERIAL_ARAMAIC")
#undef IMPERIAL_ARAMAIC
#pragma push_macro("HANUNOO")
#undef HANUNOO
#pragma push_macro("ORIYA")
#undef ORIYA
#pragma push_macro("OLD_PERSIAN")
#undef OLD_PERSIAN
#pragma push_macro("NKO")
#undef NKO
#pragma push_macro("PRIVATE_USE_AREA")
#undef PRIVATE_USE_AREA
#pragma push_macro("KATAKANA")
#undef KATAKANA
#pragma push_macro("PHONETIC_EXTENSIONS_SUPPLEMENT")
#undef PHONETIC_EXTENSIONS_SUPPLEMENT
#pragma push_macro("SUTTON_SIGNWRITING")
#undef SUTTON_SIGNWRITING
#pragma push_macro("TAGS")
#undef TAGS
#pragma push_macro("REJANG")
#undef REJANG
#pragma push_macro("BOPOMOFO_EXTENDED")
#undef BOPOMOFO_EXTENDED
#pragma push_macro("IPA_EXTENSIONS")
#undef IPA_EXTENSIONS
#pragma push_macro("SHARADA")
#undef SHARADA
#pragma push_macro("GENERAL_PUNCTUATION")
#undef GENERAL_PUNCTUATION
#pragma push_macro("SIDDHAM")
#undef SIDDHAM
#pragma push_macro("MODIFIER_TONE_LETTERS")
#undef MODIFIER_TONE_LETTERS
#pragma push_macro("BLOCK_ELEMENTS")
#undef BLOCK_ELEMENTS
#pragma push_macro("COPTIC")
#undef COPTIC
#pragma push_macro("NYIAKENG_PUACHUE_HMONG")
#undef NYIAKENG_PUACHUE_HMONG
#pragma push_macro("MAHJONG_TILES")
#undef MAHJONG_TILES
#pragma push_macro("AHOM")
#undef AHOM
#pragma push_macro("MATHEMATICAL_OPERATORS")
#undef MATHEMATICAL_OPERATORS
#pragma push_macro("SYLOTI_NAGRI")
#undef SYLOTI_NAGRI
#pragma push_macro("SUPPLEMENTARY_PRIVATE_USE_AREA_B")
#undef SUPPLEMENTARY_PRIVATE_USE_AREA_B
#pragma push_macro("PHAGS_PA")
#undef PHAGS_PA
#pragma push_macro("HIRAGANA")
#undef HIRAGANA
#pragma push_macro("DINGBATS")
#undef DINGBATS
#pragma push_macro("SUPPLEMENTARY_PRIVATE_USE_AREA_A")
#undef SUPPLEMENTARY_PRIVATE_USE_AREA_A
#pragma push_macro("MANICHAEAN")
#undef MANICHAEAN
#pragma push_macro("CJK_COMPATIBILITY_FORMS")
#undef CJK_COMPATIBILITY_FORMS
#pragma push_macro("MEETEI_MAYEK_EXTENSIONS")
#undef MEETEI_MAYEK_EXTENSIONS
#pragma push_macro("GEORGIAN_EXTENDED")
#undef GEORGIAN_EXTENDED
#pragma push_macro("DEVANAGARI")
#undef DEVANAGARI
#pragma push_macro("RUNIC")
#undef RUNIC
#pragma push_macro("TAMIL_SUPPLEMENT")
#undef TAMIL_SUPPLEMENT
#pragma push_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B")
#undef CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B
#pragma push_macro("SMALL_KANA_EXTENSION")
#undef SMALL_KANA_EXTENSION
#pragma push_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A")
#undef CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A
#pragma push_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D")
#undef CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D
#pragma push_macro("KAITHI")
#undef KAITHI
#pragma push_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C")
#undef CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C
#pragma push_macro("GEOMETRIC_SHAPES_EXTENDED")
#undef GEOMETRIC_SHAPES_EXTENDED
#pragma push_macro("MAYAN_NUMERALS")
#undef MAYAN_NUMERALS
#pragma push_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_F")
#undef CJK_UNIFIED_IDEOGRAPHS_EXTENSION_F
#pragma push_macro("COMMON_INDIC_NUMBER_FORMS")
#undef COMMON_INDIC_NUMBER_FORMS
#pragma push_macro("DUPLOYAN")
#undef DUPLOYAN
#pragma push_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_E")
#undef CJK_UNIFIED_IDEOGRAPHS_EXTENSION_E
#pragma push_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_G")
#undef CJK_UNIFIED_IDEOGRAPHS_EXTENSION_G
#pragma push_macro("CURRENCY_SYMBOLS")
#undef CURRENCY_SYMBOLS
#pragma push_macro("GEORGIAN_SUPPLEMENT")
#undef GEORGIAN_SUPPLEMENT
#pragma push_macro("LEPCHA")
#undef LEPCHA
#pragma push_macro("ENCLOSED_ALPHANUMERIC_SUPPLEMENT")
#undef ENCLOSED_ALPHANUMERIC_SUPPLEMENT
#pragma push_macro("KANA_EXTENDED_A")
#undef KANA_EXTENDED_A
#pragma push_macro("TAKRI")
#undef TAKRI
#pragma push_macro("KHAROSHTHI")
#undef KHAROSHTHI
#pragma push_macro("INSCRIPTIONAL_PAHLAVI")
#undef INSCRIPTIONAL_PAHLAVI
#pragma push_macro("LIMBU")
#undef LIMBU
#pragma push_macro("DESERET")
#undef DESERET
#pragma push_macro("LYCIAN")
#undef LYCIAN
#pragma push_macro("WARANG_CITI")
#undef WARANG_CITI
#pragma push_macro("MASARAM_GONDI")
#undef MASARAM_GONDI
#pragma push_macro("NUM_ENTITIES")
#undef NUM_ENTITIES
#pragma push_macro("ENCLOSED_ALPHANUMERICS")
#undef ENCLOSED_ALPHANUMERICS
#pragma push_macro("SINHALA_ARCHAIC_NUMBERS")
#undef SINHALA_ARCHAIC_NUMBERS
#pragma push_macro("HANGUL_SYLLABLES")
#undef HANGUL_SYLLABLES
#pragma push_macro("SUNDANESE")
#undef SUNDANESE
#pragma push_macro("MONGOLIAN_SUPPLEMENT")
#undef MONGOLIAN_SUPPLEMENT
#pragma push_macro("COMBINING_DIACRITICAL_MARKS_SUPPLEMENT")
#undef COMBINING_DIACRITICAL_MARKS_SUPPLEMENT
#pragma push_macro("GEOMETRIC_SHAPES")
#undef GEOMETRIC_SHAPES
#pragma push_macro("CYPRIOT_SYLLABARY")
#undef CYPRIOT_SYLLABARY
#pragma push_macro("MEETEI_MAYEK")
#undef MEETEI_MAYEK
#pragma push_macro("TRANSPORT_AND_MAP_SYMBOLS")
#undef TRANSPORT_AND_MAP_SYMBOLS
#pragma push_macro("PSALTER_PAHLAVI")
#undef PSALTER_PAHLAVI
#pragma push_macro("LISU")
#undef LISU
#pragma push_macro("GLAGOLITIC_SUPPLEMENT")
#undef GLAGOLITIC_SUPPLEMENT
#pragma push_macro("MARCHEN")
#undef MARCHEN
#pragma push_macro("OL_CHIKI")
#undef OL_CHIKI
#pragma push_macro("PAHAWH_HMONG")
#undef PAHAWH_HMONG
#pragma push_macro("BAMUM")
#undef BAMUM
#pragma push_macro("TAI_THAM")
#undef TAI_THAM
#pragma push_macro("SAURASHTRA")
#undef SAURASHTRA
#pragma push_macro("LYDIAN")
#undef LYDIAN
#pragma push_macro("MISCELLANEOUS_SYMBOLS")
#undef MISCELLANEOUS_SYMBOLS
#pragma push_macro("ALCHEMICAL_SYMBOLS")
#undef ALCHEMICAL_SYMBOLS
#pragma push_macro("NUMBER_FORMS")
#undef NUMBER_FORMS
#pragma push_macro("SORA_SOMPENG")
#undef SORA_SOMPENG
#pragma push_macro("YEZIDI")
#undef YEZIDI
#pragma push_macro("TIBETAN")
#undef TIBETAN
#pragma push_macro("COMBINING_DIACRITICAL_MARKS_EXTENDED")
#undef COMBINING_DIACRITICAL_MARKS_EXTENDED
#pragma push_macro("BRAILLE_PATTERNS")
#undef BRAILLE_PATTERNS
#pragma push_macro("KANA_SUPPLEMENT")
#undef KANA_SUPPLEMENT
#pragma push_macro("HIGH_PRIVATE_USE_SURROGATES")
#undef HIGH_PRIVATE_USE_SURROGATES
#pragma push_macro("BAMUM_SUPPLEMENT")
#undef BAMUM_SUPPLEMENT
#pragma push_macro("BASIC_LATIN")
#undef BASIC_LATIN
#pragma push_macro("GOTHIC")
#undef GOTHIC
#pragma push_macro("ZANABAZAR_SQUARE")
#undef ZANABAZAR_SQUARE
#pragma push_macro("OLD_ITALIC")
#undef OLD_ITALIC
#pragma push_macro("NEWA")
#undef NEWA
#pragma push_macro("ETHIOPIC")
#undef ETHIOPIC
#pragma push_macro("TIFINAGH")
#undef TIFINAGH
#pragma push_macro("GUJARATI")
#undef GUJARATI
#pragma push_macro("MEROITIC_HIEROGLYPHS")
#undef MEROITIC_HIEROGLYPHS
#pragma push_macro("BOPOMOFO")
#undef BOPOMOFO
#pragma push_macro("GREEK")
#undef GREEK
#pragma push_macro("MIAO")
#undef MIAO
#pragma push_macro("KHITAN_SMALL_SCRIPT")
#undef KHITAN_SMALL_SCRIPT
#pragma push_macro("NANDINAGARI")
#undef NANDINAGARI
#pragma push_macro("INDIC_SIYAQ_NUMBERS")
#undef INDIC_SIYAQ_NUMBERS
#pragma push_macro("KHMER_SYMBOLS")
#undef KHMER_SYMBOLS
#pragma push_macro("CYRILLIC_EXTENDED_A")
#undef CYRILLIC_EXTENDED_A
#pragma push_macro("CYRILLIC_EXTENDED_B")
#undef CYRILLIC_EXTENDED_B
#pragma push_macro("TIRHUTA")
#undef TIRHUTA
#pragma push_macro("CYRILLIC_EXTENDED_C")
#undef CYRILLIC_EXTENDED_C
#pragma push_macro("CJK_STROKES")
#undef CJK_STROKES
#pragma push_macro("HANGUL_JAMO_EXTENDED_A")
#undef HANGUL_JAMO_EXTENDED_A
#pragma push_macro("KHUDAWADI")
#undef KHUDAWADI
#pragma push_macro("TAGBANWA")
#undef TAGBANWA
#pragma push_macro("VAI")
#undef VAI
#pragma push_macro("HANGUL_JAMO_EXTENDED_B")
#undef HANGUL_JAMO_EXTENDED_B
#pragma push_macro("PLAYING_CARDS")
#undef PLAYING_CARDS
#pragma push_macro("HIGH_SURROGATES")
#undef HIGH_SURROGATES
#pragma push_macro("HALFWIDTH_AND_FULLWIDTH_FORMS")
#undef HALFWIDTH_AND_FULLWIDTH_FORMS
#pragma push_macro("TANGUT")
#undef TANGUT
#pragma push_macro("NUSHU")
#undef NUSHU
#pragma push_macro("BRAHMI")
#undef BRAHMI
#pragma push_macro("MYANMAR")
#undef MYANMAR
#pragma push_macro("RUMI_NUMERAL_SYMBOLS")
#undef RUMI_NUMERAL_SYMBOLS
#pragma push_macro("COMBINING_DIACRITICAL_MARKS")
#undef COMBINING_DIACRITICAL_MARKS
#pragma push_macro("PAU_CIN_HAU")
#undef PAU_CIN_HAU
#pragma push_macro("ARABIC_PRESENTATION_FORMS_A")
#undef ARABIC_PRESENTATION_FORMS_A
#pragma push_macro("OLD_NORTH_ARABIAN")
#undef OLD_NORTH_ARABIAN
#pragma push_macro("BATAK")
#undef BATAK
#pragma push_macro("ARABIC")
#undef ARABIC
#pragma push_macro("ARABIC_PRESENTATION_FORMS_B")
#undef ARABIC_PRESENTATION_FORMS_B
#pragma push_macro("NEW_TAI_LUE")
#undef NEW_TAI_LUE
#pragma push_macro("THAANA")
#undef THAANA
#pragma push_macro("HANIFI_ROHINGYA")
#undef HANIFI_ROHINGYA
#pragma push_macro("ORNAMENTAL_DINGBATS")
#undef ORNAMENTAL_DINGBATS
#pragma push_macro("UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED")
#undef UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED
#pragma push_macro("ANCIENT_SYMBOLS")
#undef ANCIENT_SYMBOLS
#pragma push_macro("YI_RADICALS")
#undef YI_RADICALS
#pragma push_macro("ETHIOPIC_EXTENDED")
#undef ETHIOPIC_EXTENDED
#pragma push_macro("CUNEIFORM")
#undef CUNEIFORM
#pragma push_macro("LETTERLIKE_SYMBOLS")
#undef LETTERLIKE_SYMBOLS
#pragma push_macro("EMOTICONS")
#undef EMOTICONS
#pragma push_macro("HATRAN")
#undef HATRAN
#pragma push_macro("OPTICAL_CHARACTER_RECOGNITION")
#undef OPTICAL_CHARACTER_RECOGNITION
#pragma push_macro("KHOJKI")
#undef KHOJKI
#pragma push_macro("BENGALI")
#undef BENGALI
#pragma push_macro("LOW_SURROGATES")
#undef LOW_SURROGATES
#pragma push_macro("SINHALA")
#undef SINHALA
#pragma push_macro("VERTICAL_FORMS")
#undef VERTICAL_FORMS
#pragma push_macro("CYRILLIC")
#undef CYRILLIC
#pragma push_macro("CHAKMA")
#undef CHAKMA
#pragma push_macro("PALMYRENE")
#undef PALMYRENE
#pragma push_macro("MRO")
#undef MRO
#pragma push_macro("CHAM")
#undef CHAM
#pragma push_macro("SYRIAC")
#undef SYRIAC
#pragma push_macro("CUNEIFORM_NUMBERS_AND_PUNCTUATION")
#undef CUNEIFORM_NUMBERS_AND_PUNCTUATION
#pragma push_macro("YI_SYLLABLES")
#undef YI_SYLLABLES
#pragma push_macro("OSMANYA")
#undef OSMANYA
#pragma push_macro("SURROGATES_AREA")
#undef SURROGATES_AREA
#pragma push_macro("DIVES_AKURU")
#undef DIVES_AKURU
#pragma push_macro("CHORASMIAN")
#undef CHORASMIAN
#pragma push_macro("CHEROKEE")
#undef CHEROKEE
#pragma push_macro("MISCELLANEOUS_SYMBOLS_AND_ARROWS")
#undef MISCELLANEOUS_SYMBOLS_AND_ARROWS
#pragma push_macro("BASSA_VAH")
#undef BASSA_VAH
#pragma push_macro("SUNDANESE_SUPPLEMENT")
#undef SUNDANESE_SUPPLEMENT
#pragma push_macro("SPECIALS")
#undef SPECIALS
#pragma push_macro("OLD_HUNGARIAN")
#undef OLD_HUNGARIAN
#pragma push_macro("SYMBOLS_AND_PICTOGRAPHS_EXTENDED_A")
#undef SYMBOLS_AND_PICTOGRAPHS_EXTENDED_A
#pragma push_macro("MUSICAL_SYMBOLS")
#undef MUSICAL_SYMBOLS
#pragma push_macro("IDEOGRAPHIC_DESCRIPTION_CHARACTERS")
#undef IDEOGRAPHIC_DESCRIPTION_CHARACTERS
#pragma push_macro("UGARITIC")
#undef UGARITIC
#pragma push_macro("PHOENICIAN")
#undef PHOENICIAN
#pragma push_macro("LATIN_1_SUPPLEMENT")
#undef LATIN_1_SUPPLEMENT
#pragma push_macro("PHAISTOS_DISC")
#undef PHAISTOS_DISC
#pragma push_macro("ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS")
#undef ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS
#pragma push_macro("WANCHO")
#undef WANCHO
#pragma push_macro("LISU_SUPPLEMENT")
#undef LISU_SUPPLEMENT
#pragma push_macro("HANGUL_COMPATIBILITY_JAMO")
#undef HANGUL_COMPATIBILITY_JAMO
#pragma push_macro("GUNJALA_GONDI")
#undef GUNJALA_GONDI
#pragma push_macro("ANCIENT_GREEK_MUSICAL_NOTATION")
#undef ANCIENT_GREEK_MUSICAL_NOTATION
#pragma push_macro("JAVANESE")
#undef JAVANESE
#pragma push_macro("TELUGU")
#undef TELUGU
#pragma push_macro("ARMENIAN")
#undef ARMENIAN
#pragma push_macro("GRANTHA")
#undef GRANTHA
#pragma push_macro("TANGUT_SUPPLEMENT")
#undef TANGUT_SUPPLEMENT
#pragma push_macro("GURMUKHI")
#undef GURMUKHI
#pragma push_macro("KANGXI_RADICALS")
#undef KANGXI_RADICALS
#pragma push_macro("SPACING_MODIFIER_LETTERS")
#undef SPACING_MODIFIER_LETTERS
#pragma push_macro("LAO")
#undef LAO
#pragma push_macro("BYZANTINE_MUSICAL_SYMBOLS")
#undef BYZANTINE_MUSICAL_SYMBOLS
#pragma push_macro("KHMER")
#undef KHMER
#pragma push_macro("MODI")
#undef MODI
#pragma push_macro("SUPPLEMENTAL_ARROWS_A")
#undef SUPPLEMENTAL_ARROWS_A
#pragma push_macro("PHONETIC_EXTENSIONS")
#undef PHONETIC_EXTENSIONS
#pragma push_macro("EGYPTIAN_HIEROGLYPH_FORMAT_CONTROLS")
#undef EGYPTIAN_HIEROGLYPH_FORMAT_CONTROLS
#pragma push_macro("CJK_COMPATIBILITY_IDEOGRAPHS")
#undef CJK_COMPATIBILITY_IDEOGRAPHS
#pragma push_macro("ELYMAIC")
#undef ELYMAIC
#pragma push_macro("SUPPLEMENTAL_ARROWS_C")
#undef SUPPLEMENTAL_ARROWS_C
#pragma push_macro("SUPPLEMENTAL_ARROWS_B")
#undef SUPPLEMENTAL_ARROWS_B
#pragma push_macro("SUPERSCRIPTS_AND_SUBSCRIPTS")
#undef SUPERSCRIPTS_AND_SUBSCRIPTS
#pragma push_macro("CJK_SYMBOLS_AND_PUNCTUATION")
#undef CJK_SYMBOLS_AND_PUNCTUATION
#pragma push_macro("SHAVIAN")
#undef SHAVIAN
#pragma push_macro("OLD_SOUTH_ARABIAN")
#undef OLD_SOUTH_ARABIAN
#pragma push_macro("SYRIAC_SUPPLEMENT")
#undef SYRIAC_SUPPLEMENT
#pragma push_macro("YIJING_HEXAGRAM_SYMBOLS")
#undef YIJING_HEXAGRAM_SYMBOLS
#pragma push_macro("CJK_UNIFIED_IDEOGRAPHS")
#undef CJK_UNIFIED_IDEOGRAPHS
#pragma push_macro("LATIN_EXTENDED_A")
#undef LATIN_EXTENDED_A
#pragma push_macro("LATIN_EXTENDED_B")
#undef LATIN_EXTENDED_B
#pragma push_macro("UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS")
#undef UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS
#pragma push_macro("LATIN_EXTENDED_C")
#undef LATIN_EXTENDED_C
#pragma push_macro("LATIN_EXTENDED_D")
#undef LATIN_EXTENDED_D
#pragma push_macro("LATIN_EXTENDED_E")
#undef LATIN_EXTENDED_E
#pragma push_macro("BHAIKSUKI")
#undef BHAIKSUKI
#pragma push_macro("ALPHABETIC_PRESENTATION_FORMS")
#undef ALPHABETIC_PRESENTATION_FORMS
#pragma push_macro("COPTIC_EPACT_NUMBERS")
#undef COPTIC_EPACT_NUMBERS
#pragma push_macro("TANGUT_COMPONENTS")
#undef TANGUT_COMPONENTS
#pragma push_macro("ARABIC_EXTENDED_A")
#undef ARABIC_EXTENDED_A
#pragma push_macro("ANATOLIAN_HIEROGLYPHS")
#undef ANATOLIAN_HIEROGLYPHS
#pragma push_macro("MEDEFAIDRIN")
#undef MEDEFAIDRIN
#pragma push_macro("SHORTHAND_FORMAT_CONTROLS")
#undef SHORTHAND_FORMAT_CONTROLS
#pragma push_macro("GEORGIAN")
#undef GEORGIAN
#pragma push_macro("SUPPLEMENTAL_PUNCTUATION")
#undef SUPPLEMENTAL_PUNCTUATION
#pragma push_macro("ELBASAN")
#undef ELBASAN
#pragma push_macro("DOGRA")
#undef DOGRA
#pragma push_macro("ETHIOPIC_SUPPLEMENT")
#undef ETHIOPIC_SUPPLEMENT
#pragma push_macro("KAYAH_LI")
#undef KAYAH_LI
#pragma push_macro("COMBINING_HALF_MARKS")
#undef COMBINING_HALF_MARKS
#pragma push_macro("CONTROL_PICTURES")
#undef CONTROL_PICTURES
#pragma push_macro("HEBREW")
#undef HEBREW
#pragma push_macro("MYANMAR_EXTENDED_A")
#undef MYANMAR_EXTENDED_A
#pragma push_macro("NABATAEAN")
#undef NABATAEAN
#pragma push_macro("THAI")
#undef THAI
#pragma push_macro("VARIATION_SELECTORS")
#undef VARIATION_SELECTORS
#pragma push_macro("GLAGOLITIC")
#undef GLAGOLITIC
#pragma push_macro("MYANMAR_EXTENDED_B")
#undef MYANMAR_EXTENDED_B
#pragma push_macro("AEGEAN_NUMBERS")
#undef AEGEAN_NUMBERS
#pragma push_macro("GREEK_EXTENDED")
#undef GREEK_EXTENDED
#pragma push_macro("OLD_SOGDIAN")
#undef OLD_SOGDIAN
#pragma push_macro("TAGALOG")
#undef TAGALOG
#pragma push_macro("ADLAM")
#undef ADLAM
#pragma push_macro("LATIN_EXTENDED_ADDITIONAL")
#undef LATIN_EXTENDED_ADDITIONAL
#pragma push_macro("TAI_VIET")
#undef TAI_VIET
#pragma push_macro("HANGUL_JAMO")
#undef HANGUL_JAMO
#pragma push_macro("SUPPLEMENTAL_SYMBOLS_AND_PICTOGRAPHS")
#undef SUPPLEMENTAL_SYMBOLS_AND_PICTOGRAPHS
#pragma push_macro("ANCIENT_GREEK_NUMBERS")
#undef ANCIENT_GREEK_NUMBERS
#pragma push_macro("MEROITIC_CURSIVE")
#undef MEROITIC_CURSIVE
#pragma push_macro("SYMBOLS_FOR_LEGACY_COMPUTING")
#undef SYMBOLS_FOR_LEGACY_COMPUTING
#pragma push_macro("VEDIC_EXTENSIONS")
#undef VEDIC_EXTENSIONS
#pragma push_macro("CJK_COMPATIBILITY")
#undef CJK_COMPATIBILITY
#pragma push_macro("AVESTAN")
#undef AVESTAN
#pragma push_macro("SOYOMBO")
#undef SOYOMBO
#pragma push_macro("ENCLOSED_IDEOGRAPHIC_SUPPLEMENT")
#undef ENCLOSED_IDEOGRAPHIC_SUPPLEMENT
#pragma push_macro("MISCELLANEOUS_TECHNICAL")
#undef MISCELLANEOUS_TECHNICAL
#pragma push_macro("ENCLOSED_CJK_LETTERS_AND_MONTHS")
#undef ENCLOSED_CJK_LETTERS_AND_MONTHS
#pragma push_macro("SMALL_FORM_VARIANTS")
#undef SMALL_FORM_VARIANTS
#pragma push_macro("ARABIC_SUPPLEMENT")
#undef ARABIC_SUPPLEMENT
#pragma push_macro("LINEAR_B_IDEOGRAMS")
#undef LINEAR_B_IDEOGRAMS
#pragma push_macro("MONGOLIAN")
#undef MONGOLIAN
#pragma push_macro("KANNADA")
#undef KANNADA
#pragma push_macro("SAMARITAN")
#undef SAMARITAN
#pragma push_macro("OGHAM")
#undef OGHAM
#pragma push_macro("CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT")
#undef CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT
#pragma push_macro("COMBINING_MARKS_FOR_SYMBOLS")
#undef COMBINING_MARKS_FOR_SYMBOLS
#pragma push_macro("BOX_DRAWING")
#undef BOX_DRAWING
#pragma push_macro("ETHIOPIC_EXTENDED_A")
#undef ETHIOPIC_EXTENDED_A
#pragma push_macro("BUGINESE")
#undef BUGINESE
#pragma push_macro("COUNTING_ROD_NUMERALS")
#undef COUNTING_ROD_NUMERALS
#pragma push_macro("MAKASAR")
#undef MAKASAR
#pragma push_macro("OLD_PERMIC")
#undef OLD_PERMIC
#pragma push_macro("VARIATION_SELECTORS_SUPPLEMENT")
#undef VARIATION_SELECTORS_SUPPLEMENT
#pragma push_macro("BUHID")
#undef BUHID
#pragma push_macro("MAHAJANI")
#undef MAHAJANI
#pragma push_macro("LINEAR_B_SYLLABARY")
#undef LINEAR_B_SYLLABARY
#pragma push_macro("TAI_XUAN_JING_SYMBOLS")
#undef TAI_XUAN_JING_SYMBOLS

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace lang {

class $export Character$UnicodeBlock : public ::java::lang::Character$Subset {
	$class(Character$UnicodeBlock, 0, ::java::lang::Character$Subset)
public:
	Character$UnicodeBlock();
	void init$($String* idName);
	void init$($String* idName, $String* alias);
	void init$($String* idName, $StringArray* aliases);
	static ::java::lang::Character$UnicodeBlock* forName($String* blockName);
	static ::java::lang::Character$UnicodeBlock* of(char16_t c);
	static ::java::lang::Character$UnicodeBlock* of(int32_t codePoint);
	static const int32_t NUM_ENTITIES = 684;
	static ::java::util::Map* map;
	static ::java::lang::Character$UnicodeBlock* BASIC_LATIN;
	static ::java::lang::Character$UnicodeBlock* LATIN_1_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* LATIN_EXTENDED_A;
	static ::java::lang::Character$UnicodeBlock* LATIN_EXTENDED_B;
	static ::java::lang::Character$UnicodeBlock* IPA_EXTENSIONS;
	static ::java::lang::Character$UnicodeBlock* SPACING_MODIFIER_LETTERS;
	static ::java::lang::Character$UnicodeBlock* COMBINING_DIACRITICAL_MARKS;
	static ::java::lang::Character$UnicodeBlock* GREEK;
	static ::java::lang::Character$UnicodeBlock* CYRILLIC;
	static ::java::lang::Character$UnicodeBlock* ARMENIAN;
	static ::java::lang::Character$UnicodeBlock* HEBREW;
	static ::java::lang::Character$UnicodeBlock* ARABIC;
	static ::java::lang::Character$UnicodeBlock* DEVANAGARI;
	static ::java::lang::Character$UnicodeBlock* BENGALI;
	static ::java::lang::Character$UnicodeBlock* GURMUKHI;
	static ::java::lang::Character$UnicodeBlock* GUJARATI;
	static ::java::lang::Character$UnicodeBlock* ORIYA;
	static ::java::lang::Character$UnicodeBlock* TAMIL;
	static ::java::lang::Character$UnicodeBlock* TELUGU;
	static ::java::lang::Character$UnicodeBlock* KANNADA;
	static ::java::lang::Character$UnicodeBlock* MALAYALAM;
	static ::java::lang::Character$UnicodeBlock* THAI;
	static ::java::lang::Character$UnicodeBlock* LAO;
	static ::java::lang::Character$UnicodeBlock* TIBETAN;
	static ::java::lang::Character$UnicodeBlock* GEORGIAN;
	static ::java::lang::Character$UnicodeBlock* HANGUL_JAMO;
	static ::java::lang::Character$UnicodeBlock* LATIN_EXTENDED_ADDITIONAL;
	static ::java::lang::Character$UnicodeBlock* GREEK_EXTENDED;
	static ::java::lang::Character$UnicodeBlock* GENERAL_PUNCTUATION;
	static ::java::lang::Character$UnicodeBlock* SUPERSCRIPTS_AND_SUBSCRIPTS;
	static ::java::lang::Character$UnicodeBlock* CURRENCY_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* COMBINING_MARKS_FOR_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* LETTERLIKE_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* NUMBER_FORMS;
	static ::java::lang::Character$UnicodeBlock* ARROWS;
	static ::java::lang::Character$UnicodeBlock* MATHEMATICAL_OPERATORS;
	static ::java::lang::Character$UnicodeBlock* MISCELLANEOUS_TECHNICAL;
	static ::java::lang::Character$UnicodeBlock* CONTROL_PICTURES;
	static ::java::lang::Character$UnicodeBlock* OPTICAL_CHARACTER_RECOGNITION;
	static ::java::lang::Character$UnicodeBlock* ENCLOSED_ALPHANUMERICS;
	static ::java::lang::Character$UnicodeBlock* BOX_DRAWING;
	static ::java::lang::Character$UnicodeBlock* BLOCK_ELEMENTS;
	static ::java::lang::Character$UnicodeBlock* GEOMETRIC_SHAPES;
	static ::java::lang::Character$UnicodeBlock* MISCELLANEOUS_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* DINGBATS;
	static ::java::lang::Character$UnicodeBlock* CJK_SYMBOLS_AND_PUNCTUATION;
	static ::java::lang::Character$UnicodeBlock* HIRAGANA;
	static ::java::lang::Character$UnicodeBlock* KATAKANA;
	static ::java::lang::Character$UnicodeBlock* BOPOMOFO;
	static ::java::lang::Character$UnicodeBlock* HANGUL_COMPATIBILITY_JAMO;
	static ::java::lang::Character$UnicodeBlock* KANBUN;
	static ::java::lang::Character$UnicodeBlock* ENCLOSED_CJK_LETTERS_AND_MONTHS;
	static ::java::lang::Character$UnicodeBlock* CJK_COMPATIBILITY;
	static ::java::lang::Character$UnicodeBlock* CJK_UNIFIED_IDEOGRAPHS;
	static ::java::lang::Character$UnicodeBlock* HANGUL_SYLLABLES;
	static ::java::lang::Character$UnicodeBlock* PRIVATE_USE_AREA;
	static ::java::lang::Character$UnicodeBlock* CJK_COMPATIBILITY_IDEOGRAPHS;
	static ::java::lang::Character$UnicodeBlock* ALPHABETIC_PRESENTATION_FORMS;
	static ::java::lang::Character$UnicodeBlock* ARABIC_PRESENTATION_FORMS_A;
	static ::java::lang::Character$UnicodeBlock* COMBINING_HALF_MARKS;
	static ::java::lang::Character$UnicodeBlock* CJK_COMPATIBILITY_FORMS;
	static ::java::lang::Character$UnicodeBlock* SMALL_FORM_VARIANTS;
	static ::java::lang::Character$UnicodeBlock* ARABIC_PRESENTATION_FORMS_B;
	static ::java::lang::Character$UnicodeBlock* HALFWIDTH_AND_FULLWIDTH_FORMS;
	static ::java::lang::Character$UnicodeBlock* SPECIALS;
	static ::java::lang::Character$UnicodeBlock* SURROGATES_AREA;
	static ::java::lang::Character$UnicodeBlock* SYRIAC;
	static ::java::lang::Character$UnicodeBlock* THAANA;
	static ::java::lang::Character$UnicodeBlock* SINHALA;
	static ::java::lang::Character$UnicodeBlock* MYANMAR;
	static ::java::lang::Character$UnicodeBlock* ETHIOPIC;
	static ::java::lang::Character$UnicodeBlock* CHEROKEE;
	static ::java::lang::Character$UnicodeBlock* UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS;
	static ::java::lang::Character$UnicodeBlock* OGHAM;
	static ::java::lang::Character$UnicodeBlock* RUNIC;
	static ::java::lang::Character$UnicodeBlock* KHMER;
	static ::java::lang::Character$UnicodeBlock* MONGOLIAN;
	static ::java::lang::Character$UnicodeBlock* BRAILLE_PATTERNS;
	static ::java::lang::Character$UnicodeBlock* CJK_RADICALS_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* KANGXI_RADICALS;
	static ::java::lang::Character$UnicodeBlock* IDEOGRAPHIC_DESCRIPTION_CHARACTERS;
	static ::java::lang::Character$UnicodeBlock* BOPOMOFO_EXTENDED;
	static ::java::lang::Character$UnicodeBlock* CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A;
	static ::java::lang::Character$UnicodeBlock* YI_SYLLABLES;
	static ::java::lang::Character$UnicodeBlock* YI_RADICALS;
	static ::java::lang::Character$UnicodeBlock* CYRILLIC_SUPPLEMENTARY;
	static ::java::lang::Character$UnicodeBlock* TAGALOG;
	static ::java::lang::Character$UnicodeBlock* HANUNOO;
	static ::java::lang::Character$UnicodeBlock* BUHID;
	static ::java::lang::Character$UnicodeBlock* TAGBANWA;
	static ::java::lang::Character$UnicodeBlock* LIMBU;
	static ::java::lang::Character$UnicodeBlock* TAI_LE;
	static ::java::lang::Character$UnicodeBlock* KHMER_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* PHONETIC_EXTENSIONS;
	static ::java::lang::Character$UnicodeBlock* MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A;
	static ::java::lang::Character$UnicodeBlock* SUPPLEMENTAL_ARROWS_A;
	static ::java::lang::Character$UnicodeBlock* SUPPLEMENTAL_ARROWS_B;
	static ::java::lang::Character$UnicodeBlock* MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B;
	static ::java::lang::Character$UnicodeBlock* SUPPLEMENTAL_MATHEMATICAL_OPERATORS;
	static ::java::lang::Character$UnicodeBlock* MISCELLANEOUS_SYMBOLS_AND_ARROWS;
	static ::java::lang::Character$UnicodeBlock* KATAKANA_PHONETIC_EXTENSIONS;
	static ::java::lang::Character$UnicodeBlock* YIJING_HEXAGRAM_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* VARIATION_SELECTORS;
	static ::java::lang::Character$UnicodeBlock* LINEAR_B_SYLLABARY;
	static ::java::lang::Character$UnicodeBlock* LINEAR_B_IDEOGRAMS;
	static ::java::lang::Character$UnicodeBlock* AEGEAN_NUMBERS;
	static ::java::lang::Character$UnicodeBlock* OLD_ITALIC;
	static ::java::lang::Character$UnicodeBlock* GOTHIC;
	static ::java::lang::Character$UnicodeBlock* UGARITIC;
	static ::java::lang::Character$UnicodeBlock* DESERET;
	static ::java::lang::Character$UnicodeBlock* SHAVIAN;
	static ::java::lang::Character$UnicodeBlock* OSMANYA;
	static ::java::lang::Character$UnicodeBlock* CYPRIOT_SYLLABARY;
	static ::java::lang::Character$UnicodeBlock* BYZANTINE_MUSICAL_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* MUSICAL_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* TAI_XUAN_JING_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* MATHEMATICAL_ALPHANUMERIC_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B;
	static ::java::lang::Character$UnicodeBlock* CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* TAGS;
	static ::java::lang::Character$UnicodeBlock* VARIATION_SELECTORS_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* SUPPLEMENTARY_PRIVATE_USE_AREA_A;
	static ::java::lang::Character$UnicodeBlock* SUPPLEMENTARY_PRIVATE_USE_AREA_B;
	static ::java::lang::Character$UnicodeBlock* HIGH_SURROGATES;
	static ::java::lang::Character$UnicodeBlock* HIGH_PRIVATE_USE_SURROGATES;
	static ::java::lang::Character$UnicodeBlock* LOW_SURROGATES;
	static ::java::lang::Character$UnicodeBlock* ARABIC_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* NKO;
	static ::java::lang::Character$UnicodeBlock* SAMARITAN;
	static ::java::lang::Character$UnicodeBlock* MANDAIC;
	static ::java::lang::Character$UnicodeBlock* ETHIOPIC_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED;
	static ::java::lang::Character$UnicodeBlock* NEW_TAI_LUE;
	static ::java::lang::Character$UnicodeBlock* BUGINESE;
	static ::java::lang::Character$UnicodeBlock* TAI_THAM;
	static ::java::lang::Character$UnicodeBlock* BALINESE;
	static ::java::lang::Character$UnicodeBlock* SUNDANESE;
	static ::java::lang::Character$UnicodeBlock* BATAK;
	static ::java::lang::Character$UnicodeBlock* LEPCHA;
	static ::java::lang::Character$UnicodeBlock* OL_CHIKI;
	static ::java::lang::Character$UnicodeBlock* VEDIC_EXTENSIONS;
	static ::java::lang::Character$UnicodeBlock* PHONETIC_EXTENSIONS_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* COMBINING_DIACRITICAL_MARKS_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* GLAGOLITIC;
	static ::java::lang::Character$UnicodeBlock* LATIN_EXTENDED_C;
	static ::java::lang::Character$UnicodeBlock* COPTIC;
	static ::java::lang::Character$UnicodeBlock* GEORGIAN_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* TIFINAGH;
	static ::java::lang::Character$UnicodeBlock* ETHIOPIC_EXTENDED;
	static ::java::lang::Character$UnicodeBlock* CYRILLIC_EXTENDED_A;
	static ::java::lang::Character$UnicodeBlock* SUPPLEMENTAL_PUNCTUATION;
	static ::java::lang::Character$UnicodeBlock* CJK_STROKES;
	static ::java::lang::Character$UnicodeBlock* LISU;
	static ::java::lang::Character$UnicodeBlock* VAI;
	static ::java::lang::Character$UnicodeBlock* CYRILLIC_EXTENDED_B;
	static ::java::lang::Character$UnicodeBlock* BAMUM;
	static ::java::lang::Character$UnicodeBlock* MODIFIER_TONE_LETTERS;
	static ::java::lang::Character$UnicodeBlock* LATIN_EXTENDED_D;
	static ::java::lang::Character$UnicodeBlock* SYLOTI_NAGRI;
	static ::java::lang::Character$UnicodeBlock* COMMON_INDIC_NUMBER_FORMS;
	static ::java::lang::Character$UnicodeBlock* PHAGS_PA;
	static ::java::lang::Character$UnicodeBlock* SAURASHTRA;
	static ::java::lang::Character$UnicodeBlock* DEVANAGARI_EXTENDED;
	static ::java::lang::Character$UnicodeBlock* KAYAH_LI;
	static ::java::lang::Character$UnicodeBlock* REJANG;
	static ::java::lang::Character$UnicodeBlock* HANGUL_JAMO_EXTENDED_A;
	static ::java::lang::Character$UnicodeBlock* JAVANESE;
	static ::java::lang::Character$UnicodeBlock* CHAM;
	static ::java::lang::Character$UnicodeBlock* MYANMAR_EXTENDED_A;
	static ::java::lang::Character$UnicodeBlock* TAI_VIET;
	static ::java::lang::Character$UnicodeBlock* ETHIOPIC_EXTENDED_A;
	static ::java::lang::Character$UnicodeBlock* MEETEI_MAYEK;
	static ::java::lang::Character$UnicodeBlock* HANGUL_JAMO_EXTENDED_B;
	static ::java::lang::Character$UnicodeBlock* VERTICAL_FORMS;
	static ::java::lang::Character$UnicodeBlock* ANCIENT_GREEK_NUMBERS;
	static ::java::lang::Character$UnicodeBlock* ANCIENT_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* PHAISTOS_DISC;
	static ::java::lang::Character$UnicodeBlock* LYCIAN;
	static ::java::lang::Character$UnicodeBlock* CARIAN;
	static ::java::lang::Character$UnicodeBlock* OLD_PERSIAN;
	static ::java::lang::Character$UnicodeBlock* IMPERIAL_ARAMAIC;
	static ::java::lang::Character$UnicodeBlock* PHOENICIAN;
	static ::java::lang::Character$UnicodeBlock* LYDIAN;
	static ::java::lang::Character$UnicodeBlock* KHAROSHTHI;
	static ::java::lang::Character$UnicodeBlock* OLD_SOUTH_ARABIAN;
	static ::java::lang::Character$UnicodeBlock* AVESTAN;
	static ::java::lang::Character$UnicodeBlock* INSCRIPTIONAL_PARTHIAN;
	static ::java::lang::Character$UnicodeBlock* INSCRIPTIONAL_PAHLAVI;
	static ::java::lang::Character$UnicodeBlock* OLD_TURKIC;
	static ::java::lang::Character$UnicodeBlock* RUMI_NUMERAL_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* BRAHMI;
	static ::java::lang::Character$UnicodeBlock* KAITHI;
	static ::java::lang::Character$UnicodeBlock* CUNEIFORM;
	static ::java::lang::Character$UnicodeBlock* CUNEIFORM_NUMBERS_AND_PUNCTUATION;
	static ::java::lang::Character$UnicodeBlock* EGYPTIAN_HIEROGLYPHS;
	static ::java::lang::Character$UnicodeBlock* BAMUM_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* KANA_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* ANCIENT_GREEK_MUSICAL_NOTATION;
	static ::java::lang::Character$UnicodeBlock* COUNTING_ROD_NUMERALS;
	static ::java::lang::Character$UnicodeBlock* MAHJONG_TILES;
	static ::java::lang::Character$UnicodeBlock* DOMINO_TILES;
	static ::java::lang::Character$UnicodeBlock* PLAYING_CARDS;
	static ::java::lang::Character$UnicodeBlock* ENCLOSED_ALPHANUMERIC_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* ENCLOSED_IDEOGRAPHIC_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS;
	static ::java::lang::Character$UnicodeBlock* EMOTICONS;
	static ::java::lang::Character$UnicodeBlock* TRANSPORT_AND_MAP_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* ALCHEMICAL_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C;
	static ::java::lang::Character$UnicodeBlock* CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D;
	static ::java::lang::Character$UnicodeBlock* ARABIC_EXTENDED_A;
	static ::java::lang::Character$UnicodeBlock* SUNDANESE_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* MEETEI_MAYEK_EXTENSIONS;
	static ::java::lang::Character$UnicodeBlock* MEROITIC_HIEROGLYPHS;
	static ::java::lang::Character$UnicodeBlock* MEROITIC_CURSIVE;
	static ::java::lang::Character$UnicodeBlock* SORA_SOMPENG;
	static ::java::lang::Character$UnicodeBlock* CHAKMA;
	static ::java::lang::Character$UnicodeBlock* SHARADA;
	static ::java::lang::Character$UnicodeBlock* TAKRI;
	static ::java::lang::Character$UnicodeBlock* MIAO;
	static ::java::lang::Character$UnicodeBlock* ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* COMBINING_DIACRITICAL_MARKS_EXTENDED;
	static ::java::lang::Character$UnicodeBlock* MYANMAR_EXTENDED_B;
	static ::java::lang::Character$UnicodeBlock* LATIN_EXTENDED_E;
	static ::java::lang::Character$UnicodeBlock* COPTIC_EPACT_NUMBERS;
	static ::java::lang::Character$UnicodeBlock* OLD_PERMIC;
	static ::java::lang::Character$UnicodeBlock* ELBASAN;
	static ::java::lang::Character$UnicodeBlock* CAUCASIAN_ALBANIAN;
	static ::java::lang::Character$UnicodeBlock* LINEAR_A;
	static ::java::lang::Character$UnicodeBlock* PALMYRENE;
	static ::java::lang::Character$UnicodeBlock* NABATAEAN;
	static ::java::lang::Character$UnicodeBlock* OLD_NORTH_ARABIAN;
	static ::java::lang::Character$UnicodeBlock* MANICHAEAN;
	static ::java::lang::Character$UnicodeBlock* PSALTER_PAHLAVI;
	static ::java::lang::Character$UnicodeBlock* MAHAJANI;
	static ::java::lang::Character$UnicodeBlock* SINHALA_ARCHAIC_NUMBERS;
	static ::java::lang::Character$UnicodeBlock* KHOJKI;
	static ::java::lang::Character$UnicodeBlock* KHUDAWADI;
	static ::java::lang::Character$UnicodeBlock* GRANTHA;
	static ::java::lang::Character$UnicodeBlock* TIRHUTA;
	static ::java::lang::Character$UnicodeBlock* SIDDHAM;
	static ::java::lang::Character$UnicodeBlock* MODI;
	static ::java::lang::Character$UnicodeBlock* WARANG_CITI;
	static ::java::lang::Character$UnicodeBlock* PAU_CIN_HAU;
	static ::java::lang::Character$UnicodeBlock* MRO;
	static ::java::lang::Character$UnicodeBlock* BASSA_VAH;
	static ::java::lang::Character$UnicodeBlock* PAHAWH_HMONG;
	static ::java::lang::Character$UnicodeBlock* DUPLOYAN;
	static ::java::lang::Character$UnicodeBlock* SHORTHAND_FORMAT_CONTROLS;
	static ::java::lang::Character$UnicodeBlock* MENDE_KIKAKUI;
	static ::java::lang::Character$UnicodeBlock* ORNAMENTAL_DINGBATS;
	static ::java::lang::Character$UnicodeBlock* GEOMETRIC_SHAPES_EXTENDED;
	static ::java::lang::Character$UnicodeBlock* SUPPLEMENTAL_ARROWS_C;
	static ::java::lang::Character$UnicodeBlock* CHEROKEE_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* HATRAN;
	static ::java::lang::Character$UnicodeBlock* OLD_HUNGARIAN;
	static ::java::lang::Character$UnicodeBlock* MULTANI;
	static ::java::lang::Character$UnicodeBlock* AHOM;
	static ::java::lang::Character$UnicodeBlock* EARLY_DYNASTIC_CUNEIFORM;
	static ::java::lang::Character$UnicodeBlock* ANATOLIAN_HIEROGLYPHS;
	static ::java::lang::Character$UnicodeBlock* SUTTON_SIGNWRITING;
	static ::java::lang::Character$UnicodeBlock* SUPPLEMENTAL_SYMBOLS_AND_PICTOGRAPHS;
	static ::java::lang::Character$UnicodeBlock* CJK_UNIFIED_IDEOGRAPHS_EXTENSION_E;
	static ::java::lang::Character$UnicodeBlock* SYRIAC_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* CYRILLIC_EXTENDED_C;
	static ::java::lang::Character$UnicodeBlock* OSAGE;
	static ::java::lang::Character$UnicodeBlock* NEWA;
	static ::java::lang::Character$UnicodeBlock* MONGOLIAN_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* MARCHEN;
	static ::java::lang::Character$UnicodeBlock* IDEOGRAPHIC_SYMBOLS_AND_PUNCTUATION;
	static ::java::lang::Character$UnicodeBlock* TANGUT;
	static ::java::lang::Character$UnicodeBlock* TANGUT_COMPONENTS;
	static ::java::lang::Character$UnicodeBlock* KANA_EXTENDED_A;
	static ::java::lang::Character$UnicodeBlock* GLAGOLITIC_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* ADLAM;
	static ::java::lang::Character$UnicodeBlock* MASARAM_GONDI;
	static ::java::lang::Character$UnicodeBlock* ZANABAZAR_SQUARE;
	static ::java::lang::Character$UnicodeBlock* NUSHU;
	static ::java::lang::Character$UnicodeBlock* SOYOMBO;
	static ::java::lang::Character$UnicodeBlock* BHAIKSUKI;
	static ::java::lang::Character$UnicodeBlock* CJK_UNIFIED_IDEOGRAPHS_EXTENSION_F;
	static ::java::lang::Character$UnicodeBlock* GEORGIAN_EXTENDED;
	static ::java::lang::Character$UnicodeBlock* HANIFI_ROHINGYA;
	static ::java::lang::Character$UnicodeBlock* OLD_SOGDIAN;
	static ::java::lang::Character$UnicodeBlock* SOGDIAN;
	static ::java::lang::Character$UnicodeBlock* DOGRA;
	static ::java::lang::Character$UnicodeBlock* GUNJALA_GONDI;
	static ::java::lang::Character$UnicodeBlock* MAKASAR;
	static ::java::lang::Character$UnicodeBlock* MEDEFAIDRIN;
	static ::java::lang::Character$UnicodeBlock* MAYAN_NUMERALS;
	static ::java::lang::Character$UnicodeBlock* INDIC_SIYAQ_NUMBERS;
	static ::java::lang::Character$UnicodeBlock* CHESS_SYMBOLS;
	static ::java::lang::Character$UnicodeBlock* ELYMAIC;
	static ::java::lang::Character$UnicodeBlock* NANDINAGARI;
	static ::java::lang::Character$UnicodeBlock* TAMIL_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* EGYPTIAN_HIEROGLYPH_FORMAT_CONTROLS;
	static ::java::lang::Character$UnicodeBlock* SMALL_KANA_EXTENSION;
	static ::java::lang::Character$UnicodeBlock* NYIAKENG_PUACHUE_HMONG;
	static ::java::lang::Character$UnicodeBlock* WANCHO;
	static ::java::lang::Character$UnicodeBlock* OTTOMAN_SIYAQ_NUMBERS;
	static ::java::lang::Character$UnicodeBlock* SYMBOLS_AND_PICTOGRAPHS_EXTENDED_A;
	static ::java::lang::Character$UnicodeBlock* YEZIDI;
	static ::java::lang::Character$UnicodeBlock* CHORASMIAN;
	static ::java::lang::Character$UnicodeBlock* DIVES_AKURU;
	static ::java::lang::Character$UnicodeBlock* LISU_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* KHITAN_SMALL_SCRIPT;
	static ::java::lang::Character$UnicodeBlock* TANGUT_SUPPLEMENT;
	static ::java::lang::Character$UnicodeBlock* SYMBOLS_FOR_LEGACY_COMPUTING;
	static ::java::lang::Character$UnicodeBlock* CJK_UNIFIED_IDEOGRAPHS_EXTENSION_G;
	static $ints* blockStarts;
	static $Array<::java::lang::Character$UnicodeBlock>* blocks;
};

	} // lang
} // java

#pragma pop_macro("MANDAIC")
#pragma pop_macro("OSAGE")
#pragma pop_macro("MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A")
#pragma pop_macro("CYRILLIC_SUPPLEMENTARY")
#pragma pop_macro("CHESS_SYMBOLS")
#pragma pop_macro("MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B")
#pragma pop_macro("CAUCASIAN_ALBANIAN")
#pragma pop_macro("MALAYALAM")
#pragma pop_macro("KATAKANA_PHONETIC_EXTENSIONS")
#pragma pop_macro("CARIAN")
#pragma pop_macro("CJK_RADICALS_SUPPLEMENT")
#pragma pop_macro("IDEOGRAPHIC_SYMBOLS_AND_PUNCTUATION")
#pragma pop_macro("KANBUN")
#pragma pop_macro("TAI_LE")
#pragma pop_macro("CHEROKEE_SUPPLEMENT")
#pragma pop_macro("EARLY_DYNASTIC_CUNEIFORM")
#pragma pop_macro("DEVANAGARI_EXTENDED")
#pragma pop_macro("BALINESE")
#pragma pop_macro("TAMIL")
#pragma pop_macro("INSCRIPTIONAL_PARTHIAN")
#pragma pop_macro("MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS")
#pragma pop_macro("ARROWS")
#pragma pop_macro("SOGDIAN")
#pragma pop_macro("EGYPTIAN_HIEROGLYPHS")
#pragma pop_macro("LINEAR_A")
#pragma pop_macro("MENDE_KIKAKUI")
#pragma pop_macro("MATHEMATICAL_ALPHANUMERIC_SYMBOLS")
#pragma pop_macro("OLD_TURKIC")
#pragma pop_macro("DOMINO_TILES")
#pragma pop_macro("SUPPLEMENTAL_MATHEMATICAL_OPERATORS")
#pragma pop_macro("MULTANI")
#pragma pop_macro("OTTOMAN_SIYAQ_NUMBERS")
#pragma pop_macro("IMPERIAL_ARAMAIC")
#pragma pop_macro("HANUNOO")
#pragma pop_macro("ORIYA")
#pragma pop_macro("OLD_PERSIAN")
#pragma pop_macro("NKO")
#pragma pop_macro("PRIVATE_USE_AREA")
#pragma pop_macro("KATAKANA")
#pragma pop_macro("PHONETIC_EXTENSIONS_SUPPLEMENT")
#pragma pop_macro("SUTTON_SIGNWRITING")
#pragma pop_macro("TAGS")
#pragma pop_macro("REJANG")
#pragma pop_macro("BOPOMOFO_EXTENDED")
#pragma pop_macro("IPA_EXTENSIONS")
#pragma pop_macro("SHARADA")
#pragma pop_macro("GENERAL_PUNCTUATION")
#pragma pop_macro("SIDDHAM")
#pragma pop_macro("MODIFIER_TONE_LETTERS")
#pragma pop_macro("BLOCK_ELEMENTS")
#pragma pop_macro("COPTIC")
#pragma pop_macro("NYIAKENG_PUACHUE_HMONG")
#pragma pop_macro("MAHJONG_TILES")
#pragma pop_macro("AHOM")
#pragma pop_macro("MATHEMATICAL_OPERATORS")
#pragma pop_macro("SYLOTI_NAGRI")
#pragma pop_macro("SUPPLEMENTARY_PRIVATE_USE_AREA_B")
#pragma pop_macro("PHAGS_PA")
#pragma pop_macro("HIRAGANA")
#pragma pop_macro("DINGBATS")
#pragma pop_macro("SUPPLEMENTARY_PRIVATE_USE_AREA_A")
#pragma pop_macro("MANICHAEAN")
#pragma pop_macro("CJK_COMPATIBILITY_FORMS")
#pragma pop_macro("MEETEI_MAYEK_EXTENSIONS")
#pragma pop_macro("GEORGIAN_EXTENDED")
#pragma pop_macro("DEVANAGARI")
#pragma pop_macro("RUNIC")
#pragma pop_macro("TAMIL_SUPPLEMENT")
#pragma pop_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B")
#pragma pop_macro("SMALL_KANA_EXTENSION")
#pragma pop_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A")
#pragma pop_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D")
#pragma pop_macro("KAITHI")
#pragma pop_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C")
#pragma pop_macro("GEOMETRIC_SHAPES_EXTENDED")
#pragma pop_macro("MAYAN_NUMERALS")
#pragma pop_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_F")
#pragma pop_macro("COMMON_INDIC_NUMBER_FORMS")
#pragma pop_macro("DUPLOYAN")
#pragma pop_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_E")
#pragma pop_macro("CJK_UNIFIED_IDEOGRAPHS_EXTENSION_G")
#pragma pop_macro("CURRENCY_SYMBOLS")
#pragma pop_macro("GEORGIAN_SUPPLEMENT")
#pragma pop_macro("LEPCHA")
#pragma pop_macro("ENCLOSED_ALPHANUMERIC_SUPPLEMENT")
#pragma pop_macro("KANA_EXTENDED_A")
#pragma pop_macro("TAKRI")
#pragma pop_macro("KHAROSHTHI")
#pragma pop_macro("INSCRIPTIONAL_PAHLAVI")
#pragma pop_macro("LIMBU")
#pragma pop_macro("DESERET")
#pragma pop_macro("LYCIAN")
#pragma pop_macro("WARANG_CITI")
#pragma pop_macro("MASARAM_GONDI")
#pragma pop_macro("NUM_ENTITIES")
#pragma pop_macro("ENCLOSED_ALPHANUMERICS")
#pragma pop_macro("SINHALA_ARCHAIC_NUMBERS")
#pragma pop_macro("HANGUL_SYLLABLES")
#pragma pop_macro("SUNDANESE")
#pragma pop_macro("MONGOLIAN_SUPPLEMENT")
#pragma pop_macro("COMBINING_DIACRITICAL_MARKS_SUPPLEMENT")
#pragma pop_macro("GEOMETRIC_SHAPES")
#pragma pop_macro("CYPRIOT_SYLLABARY")
#pragma pop_macro("MEETEI_MAYEK")
#pragma pop_macro("TRANSPORT_AND_MAP_SYMBOLS")
#pragma pop_macro("PSALTER_PAHLAVI")
#pragma pop_macro("LISU")
#pragma pop_macro("GLAGOLITIC_SUPPLEMENT")
#pragma pop_macro("MARCHEN")
#pragma pop_macro("OL_CHIKI")
#pragma pop_macro("PAHAWH_HMONG")
#pragma pop_macro("BAMUM")
#pragma pop_macro("TAI_THAM")
#pragma pop_macro("SAURASHTRA")
#pragma pop_macro("LYDIAN")
#pragma pop_macro("MISCELLANEOUS_SYMBOLS")
#pragma pop_macro("ALCHEMICAL_SYMBOLS")
#pragma pop_macro("NUMBER_FORMS")
#pragma pop_macro("SORA_SOMPENG")
#pragma pop_macro("YEZIDI")
#pragma pop_macro("TIBETAN")
#pragma pop_macro("COMBINING_DIACRITICAL_MARKS_EXTENDED")
#pragma pop_macro("BRAILLE_PATTERNS")
#pragma pop_macro("KANA_SUPPLEMENT")
#pragma pop_macro("HIGH_PRIVATE_USE_SURROGATES")
#pragma pop_macro("BAMUM_SUPPLEMENT")
#pragma pop_macro("BASIC_LATIN")
#pragma pop_macro("GOTHIC")
#pragma pop_macro("ZANABAZAR_SQUARE")
#pragma pop_macro("OLD_ITALIC")
#pragma pop_macro("NEWA")
#pragma pop_macro("ETHIOPIC")
#pragma pop_macro("TIFINAGH")
#pragma pop_macro("GUJARATI")
#pragma pop_macro("MEROITIC_HIEROGLYPHS")
#pragma pop_macro("BOPOMOFO")
#pragma pop_macro("GREEK")
#pragma pop_macro("MIAO")
#pragma pop_macro("KHITAN_SMALL_SCRIPT")
#pragma pop_macro("NANDINAGARI")
#pragma pop_macro("INDIC_SIYAQ_NUMBERS")
#pragma pop_macro("KHMER_SYMBOLS")
#pragma pop_macro("CYRILLIC_EXTENDED_A")
#pragma pop_macro("CYRILLIC_EXTENDED_B")
#pragma pop_macro("TIRHUTA")
#pragma pop_macro("CYRILLIC_EXTENDED_C")
#pragma pop_macro("CJK_STROKES")
#pragma pop_macro("HANGUL_JAMO_EXTENDED_A")
#pragma pop_macro("KHUDAWADI")
#pragma pop_macro("TAGBANWA")
#pragma pop_macro("VAI")
#pragma pop_macro("HANGUL_JAMO_EXTENDED_B")
#pragma pop_macro("PLAYING_CARDS")
#pragma pop_macro("HIGH_SURROGATES")
#pragma pop_macro("HALFWIDTH_AND_FULLWIDTH_FORMS")
#pragma pop_macro("TANGUT")
#pragma pop_macro("NUSHU")
#pragma pop_macro("BRAHMI")
#pragma pop_macro("MYANMAR")
#pragma pop_macro("RUMI_NUMERAL_SYMBOLS")
#pragma pop_macro("COMBINING_DIACRITICAL_MARKS")
#pragma pop_macro("PAU_CIN_HAU")
#pragma pop_macro("ARABIC_PRESENTATION_FORMS_A")
#pragma pop_macro("OLD_NORTH_ARABIAN")
#pragma pop_macro("BATAK")
#pragma pop_macro("ARABIC")
#pragma pop_macro("ARABIC_PRESENTATION_FORMS_B")
#pragma pop_macro("NEW_TAI_LUE")
#pragma pop_macro("THAANA")
#pragma pop_macro("HANIFI_ROHINGYA")
#pragma pop_macro("ORNAMENTAL_DINGBATS")
#pragma pop_macro("UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED")
#pragma pop_macro("ANCIENT_SYMBOLS")
#pragma pop_macro("YI_RADICALS")
#pragma pop_macro("ETHIOPIC_EXTENDED")
#pragma pop_macro("CUNEIFORM")
#pragma pop_macro("LETTERLIKE_SYMBOLS")
#pragma pop_macro("EMOTICONS")
#pragma pop_macro("HATRAN")
#pragma pop_macro("OPTICAL_CHARACTER_RECOGNITION")
#pragma pop_macro("KHOJKI")
#pragma pop_macro("BENGALI")
#pragma pop_macro("LOW_SURROGATES")
#pragma pop_macro("SINHALA")
#pragma pop_macro("VERTICAL_FORMS")
#pragma pop_macro("CYRILLIC")
#pragma pop_macro("CHAKMA")
#pragma pop_macro("PALMYRENE")
#pragma pop_macro("MRO")
#pragma pop_macro("CHAM")
#pragma pop_macro("SYRIAC")
#pragma pop_macro("CUNEIFORM_NUMBERS_AND_PUNCTUATION")
#pragma pop_macro("YI_SYLLABLES")
#pragma pop_macro("OSMANYA")
#pragma pop_macro("SURROGATES_AREA")
#pragma pop_macro("DIVES_AKURU")
#pragma pop_macro("CHORASMIAN")
#pragma pop_macro("CHEROKEE")
#pragma pop_macro("MISCELLANEOUS_SYMBOLS_AND_ARROWS")
#pragma pop_macro("BASSA_VAH")
#pragma pop_macro("SUNDANESE_SUPPLEMENT")
#pragma pop_macro("SPECIALS")
#pragma pop_macro("OLD_HUNGARIAN")
#pragma pop_macro("SYMBOLS_AND_PICTOGRAPHS_EXTENDED_A")
#pragma pop_macro("MUSICAL_SYMBOLS")
#pragma pop_macro("IDEOGRAPHIC_DESCRIPTION_CHARACTERS")
#pragma pop_macro("UGARITIC")
#pragma pop_macro("PHOENICIAN")
#pragma pop_macro("LATIN_1_SUPPLEMENT")
#pragma pop_macro("PHAISTOS_DISC")
#pragma pop_macro("ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS")
#pragma pop_macro("WANCHO")
#pragma pop_macro("LISU_SUPPLEMENT")
#pragma pop_macro("HANGUL_COMPATIBILITY_JAMO")
#pragma pop_macro("GUNJALA_GONDI")
#pragma pop_macro("ANCIENT_GREEK_MUSICAL_NOTATION")
#pragma pop_macro("JAVANESE")
#pragma pop_macro("TELUGU")
#pragma pop_macro("ARMENIAN")
#pragma pop_macro("GRANTHA")
#pragma pop_macro("TANGUT_SUPPLEMENT")
#pragma pop_macro("GURMUKHI")
#pragma pop_macro("KANGXI_RADICALS")
#pragma pop_macro("SPACING_MODIFIER_LETTERS")
#pragma pop_macro("LAO")
#pragma pop_macro("BYZANTINE_MUSICAL_SYMBOLS")
#pragma pop_macro("KHMER")
#pragma pop_macro("MODI")
#pragma pop_macro("SUPPLEMENTAL_ARROWS_A")
#pragma pop_macro("PHONETIC_EXTENSIONS")
#pragma pop_macro("EGYPTIAN_HIEROGLYPH_FORMAT_CONTROLS")
#pragma pop_macro("CJK_COMPATIBILITY_IDEOGRAPHS")
#pragma pop_macro("ELYMAIC")
#pragma pop_macro("SUPPLEMENTAL_ARROWS_C")
#pragma pop_macro("SUPPLEMENTAL_ARROWS_B")
#pragma pop_macro("SUPERSCRIPTS_AND_SUBSCRIPTS")
#pragma pop_macro("CJK_SYMBOLS_AND_PUNCTUATION")
#pragma pop_macro("SHAVIAN")
#pragma pop_macro("OLD_SOUTH_ARABIAN")
#pragma pop_macro("SYRIAC_SUPPLEMENT")
#pragma pop_macro("YIJING_HEXAGRAM_SYMBOLS")
#pragma pop_macro("CJK_UNIFIED_IDEOGRAPHS")
#pragma pop_macro("LATIN_EXTENDED_A")
#pragma pop_macro("LATIN_EXTENDED_B")
#pragma pop_macro("UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS")
#pragma pop_macro("LATIN_EXTENDED_C")
#pragma pop_macro("LATIN_EXTENDED_D")
#pragma pop_macro("LATIN_EXTENDED_E")
#pragma pop_macro("BHAIKSUKI")
#pragma pop_macro("ALPHABETIC_PRESENTATION_FORMS")
#pragma pop_macro("COPTIC_EPACT_NUMBERS")
#pragma pop_macro("TANGUT_COMPONENTS")
#pragma pop_macro("ARABIC_EXTENDED_A")
#pragma pop_macro("ANATOLIAN_HIEROGLYPHS")
#pragma pop_macro("MEDEFAIDRIN")
#pragma pop_macro("SHORTHAND_FORMAT_CONTROLS")
#pragma pop_macro("GEORGIAN")
#pragma pop_macro("SUPPLEMENTAL_PUNCTUATION")
#pragma pop_macro("ELBASAN")
#pragma pop_macro("DOGRA")
#pragma pop_macro("ETHIOPIC_SUPPLEMENT")
#pragma pop_macro("KAYAH_LI")
#pragma pop_macro("COMBINING_HALF_MARKS")
#pragma pop_macro("CONTROL_PICTURES")
#pragma pop_macro("HEBREW")
#pragma pop_macro("MYANMAR_EXTENDED_A")
#pragma pop_macro("NABATAEAN")
#pragma pop_macro("THAI")
#pragma pop_macro("VARIATION_SELECTORS")
#pragma pop_macro("GLAGOLITIC")
#pragma pop_macro("MYANMAR_EXTENDED_B")
#pragma pop_macro("AEGEAN_NUMBERS")
#pragma pop_macro("GREEK_EXTENDED")
#pragma pop_macro("OLD_SOGDIAN")
#pragma pop_macro("TAGALOG")
#pragma pop_macro("ADLAM")
#pragma pop_macro("LATIN_EXTENDED_ADDITIONAL")
#pragma pop_macro("TAI_VIET")
#pragma pop_macro("HANGUL_JAMO")
#pragma pop_macro("SUPPLEMENTAL_SYMBOLS_AND_PICTOGRAPHS")
#pragma pop_macro("ANCIENT_GREEK_NUMBERS")
#pragma pop_macro("MEROITIC_CURSIVE")
#pragma pop_macro("SYMBOLS_FOR_LEGACY_COMPUTING")
#pragma pop_macro("VEDIC_EXTENSIONS")
#pragma pop_macro("CJK_COMPATIBILITY")
#pragma pop_macro("AVESTAN")
#pragma pop_macro("SOYOMBO")
#pragma pop_macro("ENCLOSED_IDEOGRAPHIC_SUPPLEMENT")
#pragma pop_macro("MISCELLANEOUS_TECHNICAL")
#pragma pop_macro("ENCLOSED_CJK_LETTERS_AND_MONTHS")
#pragma pop_macro("SMALL_FORM_VARIANTS")
#pragma pop_macro("ARABIC_SUPPLEMENT")
#pragma pop_macro("LINEAR_B_IDEOGRAMS")
#pragma pop_macro("MONGOLIAN")
#pragma pop_macro("KANNADA")
#pragma pop_macro("SAMARITAN")
#pragma pop_macro("OGHAM")
#pragma pop_macro("CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT")
#pragma pop_macro("COMBINING_MARKS_FOR_SYMBOLS")
#pragma pop_macro("BOX_DRAWING")
#pragma pop_macro("ETHIOPIC_EXTENDED_A")
#pragma pop_macro("BUGINESE")
#pragma pop_macro("COUNTING_ROD_NUMERALS")
#pragma pop_macro("MAKASAR")
#pragma pop_macro("OLD_PERMIC")
#pragma pop_macro("VARIATION_SELECTORS_SUPPLEMENT")
#pragma pop_macro("BUHID")
#pragma pop_macro("MAHAJANI")
#pragma pop_macro("LINEAR_B_SYLLABARY")
#pragma pop_macro("TAI_XUAN_JING_SYMBOLS")

#endif // _java_lang_Character$UnicodeBlock_h_