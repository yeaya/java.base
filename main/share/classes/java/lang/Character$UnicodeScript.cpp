#include <java/lang/Character$UnicodeScript.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ADLAM
#undef AHOM
#undef ANATOLIAN_HIEROGLYPHS
#undef ARABIC
#undef ARMENIAN
#undef AVESTAN
#undef BALINESE
#undef BAMUM
#undef BASSA_VAH
#undef BATAK
#undef BENGALI
#undef BHAIKSUKI
#undef BOPOMOFO
#undef BRAHMI
#undef BRAILLE
#undef BUGINESE
#undef BUHID
#undef CANADIAN_ABORIGINAL
#undef CARIAN
#undef CAUCASIAN_ALBANIAN
#undef CHAKMA
#undef CHAM
#undef CHEROKEE
#undef CHORASMIAN
#undef COMMON
#undef COPTIC
#undef CUNEIFORM
#undef CYPRIOT
#undef CYRILLIC
#undef DESERET
#undef DEVANAGARI
#undef DIVES_AKURU
#undef DOGRA
#undef DUPLOYAN
#undef EGYPTIAN_HIEROGLYPHS
#undef ELBASAN
#undef ELYMAIC
#undef ENGLISH
#undef ETHIOPIC
#undef GEORGIAN
#undef GLAGOLITIC
#undef GOTHIC
#undef GRANTHA
#undef GREEK
#undef GUJARATI
#undef GUNJALA_GONDI
#undef GURMUKHI
#undef HAN
#undef HANGUL
#undef HANIFI_ROHINGYA
#undef HANUNOO
#undef HATRAN
#undef HEBREW
#undef HIRAGANA
#undef IMPERIAL_ARAMAIC
#undef INHERITED
#undef INSCRIPTIONAL_PAHLAVI
#undef INSCRIPTIONAL_PARTHIAN
#undef JAVANESE
#undef KAITHI
#undef KANNADA
#undef KATAKANA
#undef KAYAH_LI
#undef KHAROSHTHI
#undef KHITAN_SMALL_SCRIPT
#undef KHMER
#undef KHOJKI
#undef KHUDAWADI
#undef LAO
#undef LATIN
#undef LEPCHA
#undef LIMBU
#undef LINEAR_A
#undef LINEAR_B
#undef LISU
#undef LYCIAN
#undef LYDIAN
#undef MAHAJANI
#undef MAKASAR
#undef MALAYALAM
#undef MANDAIC
#undef MANICHAEAN
#undef MARCHEN
#undef MASARAM_GONDI
#undef MEDEFAIDRIN
#undef MEETEI_MAYEK
#undef MENDE_KIKAKUI
#undef MEROITIC_CURSIVE
#undef MEROITIC_HIEROGLYPHS
#undef MIAO
#undef MODI
#undef MONGOLIAN
#undef MRO
#undef MULTANI
#undef MYANMAR
#undef NABATAEAN
#undef NANDINAGARI
#undef NEWA
#undef NEW_TAI_LUE
#undef NKO
#undef NUSHU
#undef NYIAKENG_PUACHUE_HMONG
#undef OGHAM
#undef OLD_HUNGARIAN
#undef OLD_ITALIC
#undef OLD_NORTH_ARABIAN
#undef OLD_PERMIC
#undef OLD_PERSIAN
#undef OLD_SOGDIAN
#undef OLD_SOUTH_ARABIAN
#undef OLD_TURKIC
#undef OL_CHIKI
#undef ORIYA
#undef OSAGE
#undef OSMANYA
#undef PAHAWH_HMONG
#undef PALMYRENE
#undef PAU_CIN_HAU
#undef PHAGS_PA
#undef PHOENICIAN
#undef PSALTER_PAHLAVI
#undef REJANG
#undef RUNIC
#undef SAMARITAN
#undef SAURASHTRA
#undef SHARADA
#undef SHAVIAN
#undef SIDDHAM
#undef SIGNWRITING
#undef SINHALA
#undef SOGDIAN
#undef SORA_SOMPENG
#undef SOYOMBO
#undef SUNDANESE
#undef SYLOTI_NAGRI
#undef SYRIAC
#undef TAGALOG
#undef TAGBANWA
#undef TAI_LE
#undef TAI_THAM
#undef TAI_VIET
#undef TAKRI
#undef TAMIL
#undef TANGUT
#undef TELUGU
#undef THAANA
#undef THAI
#undef TIBETAN
#undef TIFINAGH
#undef TIRHUTA
#undef UGARITIC
#undef UNKNOWN
#undef VAI
#undef WANCHO
#undef WARANG_CITI
#undef YEZIDI
#undef YI
#undef ZANABAZAR_SQUARE

using $Character$UnicodeScriptArray = $Array<::java::lang::Character$UnicodeScript>;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;

namespace java {
	namespace lang {

$FieldInfo _Character$UnicodeScript_FieldInfo_[] = {
	{"COMMON", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, COMMON)},
	{"LATIN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, LATIN)},
	{"GREEK", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, GREEK)},
	{"CYRILLIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, CYRILLIC)},
	{"ARMENIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, ARMENIAN)},
	{"HEBREW", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, HEBREW)},
	{"ARABIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, ARABIC)},
	{"SYRIAC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SYRIAC)},
	{"THAANA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, THAANA)},
	{"DEVANAGARI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, DEVANAGARI)},
	{"BENGALI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, BENGALI)},
	{"GURMUKHI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, GURMUKHI)},
	{"GUJARATI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, GUJARATI)},
	{"ORIYA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, ORIYA)},
	{"TAMIL", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TAMIL)},
	{"TELUGU", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TELUGU)},
	{"KANNADA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, KANNADA)},
	{"MALAYALAM", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MALAYALAM)},
	{"SINHALA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SINHALA)},
	{"THAI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, THAI)},
	{"LAO", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, LAO)},
	{"TIBETAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TIBETAN)},
	{"MYANMAR", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MYANMAR)},
	{"GEORGIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, GEORGIAN)},
	{"HANGUL", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, HANGUL)},
	{"ETHIOPIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, ETHIOPIC)},
	{"CHEROKEE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, CHEROKEE)},
	{"CANADIAN_ABORIGINAL", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, CANADIAN_ABORIGINAL)},
	{"OGHAM", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OGHAM)},
	{"RUNIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, RUNIC)},
	{"KHMER", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, KHMER)},
	{"MONGOLIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MONGOLIAN)},
	{"HIRAGANA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, HIRAGANA)},
	{"KATAKANA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, KATAKANA)},
	{"BOPOMOFO", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, BOPOMOFO)},
	{"HAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, HAN)},
	{"YI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, YI)},
	{"OLD_ITALIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OLD_ITALIC)},
	{"GOTHIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, GOTHIC)},
	{"DESERET", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, DESERET)},
	{"INHERITED", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, INHERITED)},
	{"TAGALOG", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TAGALOG)},
	{"HANUNOO", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, HANUNOO)},
	{"BUHID", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, BUHID)},
	{"TAGBANWA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TAGBANWA)},
	{"LIMBU", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, LIMBU)},
	{"TAI_LE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TAI_LE)},
	{"LINEAR_B", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, LINEAR_B)},
	{"UGARITIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, UGARITIC)},
	{"SHAVIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SHAVIAN)},
	{"OSMANYA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OSMANYA)},
	{"CYPRIOT", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, CYPRIOT)},
	{"BRAILLE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, BRAILLE)},
	{"BUGINESE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, BUGINESE)},
	{"COPTIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, COPTIC)},
	{"NEW_TAI_LUE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, NEW_TAI_LUE)},
	{"GLAGOLITIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, GLAGOLITIC)},
	{"TIFINAGH", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TIFINAGH)},
	{"SYLOTI_NAGRI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SYLOTI_NAGRI)},
	{"OLD_PERSIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OLD_PERSIAN)},
	{"KHAROSHTHI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, KHAROSHTHI)},
	{"BALINESE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, BALINESE)},
	{"CUNEIFORM", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, CUNEIFORM)},
	{"PHOENICIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, PHOENICIAN)},
	{"PHAGS_PA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, PHAGS_PA)},
	{"NKO", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, NKO)},
	{"SUNDANESE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SUNDANESE)},
	{"BATAK", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, BATAK)},
	{"LEPCHA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, LEPCHA)},
	{"OL_CHIKI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OL_CHIKI)},
	{"VAI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, VAI)},
	{"SAURASHTRA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SAURASHTRA)},
	{"KAYAH_LI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, KAYAH_LI)},
	{"REJANG", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, REJANG)},
	{"LYCIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, LYCIAN)},
	{"CARIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, CARIAN)},
	{"LYDIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, LYDIAN)},
	{"CHAM", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, CHAM)},
	{"TAI_THAM", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TAI_THAM)},
	{"TAI_VIET", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TAI_VIET)},
	{"AVESTAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, AVESTAN)},
	{"EGYPTIAN_HIEROGLYPHS", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, EGYPTIAN_HIEROGLYPHS)},
	{"SAMARITAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SAMARITAN)},
	{"MANDAIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MANDAIC)},
	{"LISU", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, LISU)},
	{"BAMUM", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, BAMUM)},
	{"JAVANESE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, JAVANESE)},
	{"MEETEI_MAYEK", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MEETEI_MAYEK)},
	{"IMPERIAL_ARAMAIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, IMPERIAL_ARAMAIC)},
	{"OLD_SOUTH_ARABIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OLD_SOUTH_ARABIAN)},
	{"INSCRIPTIONAL_PARTHIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, INSCRIPTIONAL_PARTHIAN)},
	{"INSCRIPTIONAL_PAHLAVI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, INSCRIPTIONAL_PAHLAVI)},
	{"OLD_TURKIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OLD_TURKIC)},
	{"BRAHMI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, BRAHMI)},
	{"KAITHI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, KAITHI)},
	{"MEROITIC_HIEROGLYPHS", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MEROITIC_HIEROGLYPHS)},
	{"MEROITIC_CURSIVE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MEROITIC_CURSIVE)},
	{"SORA_SOMPENG", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SORA_SOMPENG)},
	{"CHAKMA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, CHAKMA)},
	{"SHARADA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SHARADA)},
	{"TAKRI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TAKRI)},
	{"MIAO", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MIAO)},
	{"CAUCASIAN_ALBANIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, CAUCASIAN_ALBANIAN)},
	{"BASSA_VAH", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, BASSA_VAH)},
	{"DUPLOYAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, DUPLOYAN)},
	{"ELBASAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, ELBASAN)},
	{"GRANTHA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, GRANTHA)},
	{"PAHAWH_HMONG", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, PAHAWH_HMONG)},
	{"KHOJKI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, KHOJKI)},
	{"LINEAR_A", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, LINEAR_A)},
	{"MAHAJANI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MAHAJANI)},
	{"MANICHAEAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MANICHAEAN)},
	{"MENDE_KIKAKUI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MENDE_KIKAKUI)},
	{"MODI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MODI)},
	{"MRO", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MRO)},
	{"OLD_NORTH_ARABIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OLD_NORTH_ARABIAN)},
	{"NABATAEAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, NABATAEAN)},
	{"PALMYRENE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, PALMYRENE)},
	{"PAU_CIN_HAU", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, PAU_CIN_HAU)},
	{"OLD_PERMIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OLD_PERMIC)},
	{"PSALTER_PAHLAVI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, PSALTER_PAHLAVI)},
	{"SIDDHAM", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SIDDHAM)},
	{"KHUDAWADI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, KHUDAWADI)},
	{"TIRHUTA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TIRHUTA)},
	{"WARANG_CITI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, WARANG_CITI)},
	{"AHOM", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, AHOM)},
	{"ANATOLIAN_HIEROGLYPHS", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, ANATOLIAN_HIEROGLYPHS)},
	{"HATRAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, HATRAN)},
	{"MULTANI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MULTANI)},
	{"OLD_HUNGARIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OLD_HUNGARIAN)},
	{"SIGNWRITING", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SIGNWRITING)},
	{"ADLAM", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, ADLAM)},
	{"BHAIKSUKI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, BHAIKSUKI)},
	{"MARCHEN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MARCHEN)},
	{"NEWA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, NEWA)},
	{"OSAGE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OSAGE)},
	{"TANGUT", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, TANGUT)},
	{"MASARAM_GONDI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MASARAM_GONDI)},
	{"NUSHU", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, NUSHU)},
	{"SOYOMBO", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SOYOMBO)},
	{"ZANABAZAR_SQUARE", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, ZANABAZAR_SQUARE)},
	{"HANIFI_ROHINGYA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, HANIFI_ROHINGYA)},
	{"OLD_SOGDIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, OLD_SOGDIAN)},
	{"SOGDIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, SOGDIAN)},
	{"DOGRA", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, DOGRA)},
	{"GUNJALA_GONDI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, GUNJALA_GONDI)},
	{"MAKASAR", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MAKASAR)},
	{"MEDEFAIDRIN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, MEDEFAIDRIN)},
	{"ELYMAIC", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, ELYMAIC)},
	{"NANDINAGARI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, NANDINAGARI)},
	{"NYIAKENG_PUACHUE_HMONG", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, NYIAKENG_PUACHUE_HMONG)},
	{"WANCHO", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, WANCHO)},
	{"YEZIDI", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, YEZIDI)},
	{"CHORASMIAN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, CHORASMIAN)},
	{"DIVES_AKURU", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, DIVES_AKURU)},
	{"KHITAN_SMALL_SCRIPT", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, KHITAN_SMALL_SCRIPT)},
	{"UNKNOWN", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Character$UnicodeScript, UNKNOWN)},
	{"$VALUES", "[Ljava/lang/Character$UnicodeScript;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Character$UnicodeScript, $VALUES)},
	{"scriptStarts", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Character$UnicodeScript, scriptStarts)},
	{"scripts", "[Ljava/lang/Character$UnicodeScript;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Character$UnicodeScript, scripts)},
	{"aliases", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Character$UnicodeScript;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Character$UnicodeScript, aliases)},
	{}
};

$MethodInfo _Character$UnicodeScript_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/Character$UnicodeScript;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Character$UnicodeScriptArray*(*)()>(&Character$UnicodeScript::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Character$UnicodeScript::*)($String*,int32_t)>(&Character$UnicodeScript::init$))},
	{"forName", "(Ljava/lang/String;)Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<Character$UnicodeScript*(*)($String*)>(&Character$UnicodeScript::forName))},
	{"of", "(I)Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Character$UnicodeScript*(*)(int32_t)>(&Character$UnicodeScript::of))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Character$UnicodeScript*(*)($String*)>(&Character$UnicodeScript::valueOf))},
	{"values", "()[Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Character$UnicodeScriptArray*(*)()>(&Character$UnicodeScript::values))},
	{}
};

$InnerClassInfo _Character$UnicodeScript_InnerClassesInfo_[] = {
	{"java.lang.Character$UnicodeScript", "java.lang.Character", "UnicodeScript", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Character$UnicodeScript_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.Character$UnicodeScript",
	"java.lang.Enum",
	nullptr,
	_Character$UnicodeScript_FieldInfo_,
	_Character$UnicodeScript_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/Character$UnicodeScript;>;",
	nullptr,
	_Character$UnicodeScript_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Character"
};

$Object* allocate$Character$UnicodeScript($Class* clazz) {
	return $of($alloc(Character$UnicodeScript));
}


Character$UnicodeScript* Character$UnicodeScript::COMMON = nullptr;

Character$UnicodeScript* Character$UnicodeScript::LATIN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::GREEK = nullptr;

Character$UnicodeScript* Character$UnicodeScript::CYRILLIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::ARMENIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::HEBREW = nullptr;

Character$UnicodeScript* Character$UnicodeScript::ARABIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SYRIAC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::THAANA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::DEVANAGARI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::BENGALI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::GURMUKHI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::GUJARATI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::ORIYA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TAMIL = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TELUGU = nullptr;

Character$UnicodeScript* Character$UnicodeScript::KANNADA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MALAYALAM = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SINHALA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::THAI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::LAO = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TIBETAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MYANMAR = nullptr;

Character$UnicodeScript* Character$UnicodeScript::GEORGIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::HANGUL = nullptr;

Character$UnicodeScript* Character$UnicodeScript::ETHIOPIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::CHEROKEE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::CANADIAN_ABORIGINAL = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OGHAM = nullptr;

Character$UnicodeScript* Character$UnicodeScript::RUNIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::KHMER = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MONGOLIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::HIRAGANA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::KATAKANA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::BOPOMOFO = nullptr;

Character$UnicodeScript* Character$UnicodeScript::HAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::YI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OLD_ITALIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::GOTHIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::DESERET = nullptr;

Character$UnicodeScript* Character$UnicodeScript::INHERITED = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TAGALOG = nullptr;

Character$UnicodeScript* Character$UnicodeScript::HANUNOO = nullptr;

Character$UnicodeScript* Character$UnicodeScript::BUHID = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TAGBANWA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::LIMBU = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TAI_LE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::LINEAR_B = nullptr;

Character$UnicodeScript* Character$UnicodeScript::UGARITIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SHAVIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OSMANYA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::CYPRIOT = nullptr;

Character$UnicodeScript* Character$UnicodeScript::BRAILLE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::BUGINESE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::COPTIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::NEW_TAI_LUE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::GLAGOLITIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TIFINAGH = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SYLOTI_NAGRI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OLD_PERSIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::KHAROSHTHI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::BALINESE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::CUNEIFORM = nullptr;

Character$UnicodeScript* Character$UnicodeScript::PHOENICIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::PHAGS_PA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::NKO = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SUNDANESE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::BATAK = nullptr;

Character$UnicodeScript* Character$UnicodeScript::LEPCHA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OL_CHIKI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::VAI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SAURASHTRA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::KAYAH_LI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::REJANG = nullptr;

Character$UnicodeScript* Character$UnicodeScript::LYCIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::CARIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::LYDIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::CHAM = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TAI_THAM = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TAI_VIET = nullptr;

Character$UnicodeScript* Character$UnicodeScript::AVESTAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::EGYPTIAN_HIEROGLYPHS = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SAMARITAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MANDAIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::LISU = nullptr;

Character$UnicodeScript* Character$UnicodeScript::BAMUM = nullptr;

Character$UnicodeScript* Character$UnicodeScript::JAVANESE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MEETEI_MAYEK = nullptr;

Character$UnicodeScript* Character$UnicodeScript::IMPERIAL_ARAMAIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OLD_SOUTH_ARABIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::INSCRIPTIONAL_PARTHIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::INSCRIPTIONAL_PAHLAVI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OLD_TURKIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::BRAHMI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::KAITHI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MEROITIC_HIEROGLYPHS = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MEROITIC_CURSIVE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SORA_SOMPENG = nullptr;

Character$UnicodeScript* Character$UnicodeScript::CHAKMA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SHARADA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TAKRI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MIAO = nullptr;

Character$UnicodeScript* Character$UnicodeScript::CAUCASIAN_ALBANIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::BASSA_VAH = nullptr;

Character$UnicodeScript* Character$UnicodeScript::DUPLOYAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::ELBASAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::GRANTHA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::PAHAWH_HMONG = nullptr;

Character$UnicodeScript* Character$UnicodeScript::KHOJKI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::LINEAR_A = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MAHAJANI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MANICHAEAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MENDE_KIKAKUI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MODI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MRO = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OLD_NORTH_ARABIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::NABATAEAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::PALMYRENE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::PAU_CIN_HAU = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OLD_PERMIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::PSALTER_PAHLAVI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SIDDHAM = nullptr;

Character$UnicodeScript* Character$UnicodeScript::KHUDAWADI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TIRHUTA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::WARANG_CITI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::AHOM = nullptr;

Character$UnicodeScript* Character$UnicodeScript::ANATOLIAN_HIEROGLYPHS = nullptr;

Character$UnicodeScript* Character$UnicodeScript::HATRAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MULTANI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OLD_HUNGARIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SIGNWRITING = nullptr;

Character$UnicodeScript* Character$UnicodeScript::ADLAM = nullptr;

Character$UnicodeScript* Character$UnicodeScript::BHAIKSUKI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MARCHEN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::NEWA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OSAGE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::TANGUT = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MASARAM_GONDI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::NUSHU = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SOYOMBO = nullptr;

Character$UnicodeScript* Character$UnicodeScript::ZANABAZAR_SQUARE = nullptr;

Character$UnicodeScript* Character$UnicodeScript::HANIFI_ROHINGYA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::OLD_SOGDIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::SOGDIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::DOGRA = nullptr;

Character$UnicodeScript* Character$UnicodeScript::GUNJALA_GONDI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MAKASAR = nullptr;

Character$UnicodeScript* Character$UnicodeScript::MEDEFAIDRIN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::ELYMAIC = nullptr;

Character$UnicodeScript* Character$UnicodeScript::NANDINAGARI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::NYIAKENG_PUACHUE_HMONG = nullptr;

Character$UnicodeScript* Character$UnicodeScript::WANCHO = nullptr;

Character$UnicodeScript* Character$UnicodeScript::YEZIDI = nullptr;

Character$UnicodeScript* Character$UnicodeScript::CHORASMIAN = nullptr;

Character$UnicodeScript* Character$UnicodeScript::DIVES_AKURU = nullptr;

Character$UnicodeScript* Character$UnicodeScript::KHITAN_SMALL_SCRIPT = nullptr;

Character$UnicodeScript* Character$UnicodeScript::UNKNOWN = nullptr;
$Character$UnicodeScriptArray* Character$UnicodeScript::$VALUES = nullptr;
$ints* Character$UnicodeScript::scriptStarts = nullptr;
$Character$UnicodeScriptArray* Character$UnicodeScript::scripts = nullptr;
$HashMap* Character$UnicodeScript::aliases = nullptr;

$Character$UnicodeScriptArray* Character$UnicodeScript::$values() {
	$init(Character$UnicodeScript);
	return $new($Character$UnicodeScriptArray, {
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::CYRILLIC,
		Character$UnicodeScript::ARMENIAN,
		Character$UnicodeScript::HEBREW,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::SYRIAC,
		Character$UnicodeScript::THAANA,
		Character$UnicodeScript::DEVANAGARI,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::MALAYALAM,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::THAI,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::TIBETAN,
		Character$UnicodeScript::MYANMAR,
		Character$UnicodeScript::GEORGIAN,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::CHEROKEE,
		Character$UnicodeScript::CANADIAN_ABORIGINAL,
		Character$UnicodeScript::OGHAM,
		Character$UnicodeScript::RUNIC,
		Character$UnicodeScript::KHMER,
		Character$UnicodeScript::MONGOLIAN,
		Character$UnicodeScript::HIRAGANA,
		Character$UnicodeScript::KATAKANA,
		Character$UnicodeScript::BOPOMOFO,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::YI,
		Character$UnicodeScript::OLD_ITALIC,
		Character$UnicodeScript::GOTHIC,
		Character$UnicodeScript::DESERET,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::TAGALOG,
		Character$UnicodeScript::HANUNOO,
		Character$UnicodeScript::BUHID,
		Character$UnicodeScript::TAGBANWA,
		Character$UnicodeScript::LIMBU,
		Character$UnicodeScript::TAI_LE,
		Character$UnicodeScript::LINEAR_B,
		Character$UnicodeScript::UGARITIC,
		Character$UnicodeScript::SHAVIAN,
		Character$UnicodeScript::OSMANYA,
		Character$UnicodeScript::CYPRIOT,
		Character$UnicodeScript::BRAILLE,
		Character$UnicodeScript::BUGINESE,
		Character$UnicodeScript::COPTIC,
		Character$UnicodeScript::NEW_TAI_LUE,
		Character$UnicodeScript::GLAGOLITIC,
		Character$UnicodeScript::TIFINAGH,
		Character$UnicodeScript::SYLOTI_NAGRI,
		Character$UnicodeScript::OLD_PERSIAN,
		Character$UnicodeScript::KHAROSHTHI,
		Character$UnicodeScript::BALINESE,
		Character$UnicodeScript::CUNEIFORM,
		Character$UnicodeScript::PHOENICIAN,
		Character$UnicodeScript::PHAGS_PA,
		Character$UnicodeScript::NKO,
		Character$UnicodeScript::SUNDANESE,
		Character$UnicodeScript::BATAK,
		Character$UnicodeScript::LEPCHA,
		Character$UnicodeScript::OL_CHIKI,
		Character$UnicodeScript::VAI,
		Character$UnicodeScript::SAURASHTRA,
		Character$UnicodeScript::KAYAH_LI,
		Character$UnicodeScript::REJANG,
		Character$UnicodeScript::LYCIAN,
		Character$UnicodeScript::CARIAN,
		Character$UnicodeScript::LYDIAN,
		Character$UnicodeScript::CHAM,
		Character$UnicodeScript::TAI_THAM,
		Character$UnicodeScript::TAI_VIET,
		Character$UnicodeScript::AVESTAN,
		Character$UnicodeScript::EGYPTIAN_HIEROGLYPHS,
		Character$UnicodeScript::SAMARITAN,
		Character$UnicodeScript::MANDAIC,
		Character$UnicodeScript::LISU,
		Character$UnicodeScript::BAMUM,
		Character$UnicodeScript::JAVANESE,
		Character$UnicodeScript::MEETEI_MAYEK,
		Character$UnicodeScript::IMPERIAL_ARAMAIC,
		Character$UnicodeScript::OLD_SOUTH_ARABIAN,
		Character$UnicodeScript::INSCRIPTIONAL_PARTHIAN,
		Character$UnicodeScript::INSCRIPTIONAL_PAHLAVI,
		Character$UnicodeScript::OLD_TURKIC,
		Character$UnicodeScript::BRAHMI,
		Character$UnicodeScript::KAITHI,
		Character$UnicodeScript::MEROITIC_HIEROGLYPHS,
		Character$UnicodeScript::MEROITIC_CURSIVE,
		Character$UnicodeScript::SORA_SOMPENG,
		Character$UnicodeScript::CHAKMA,
		Character$UnicodeScript::SHARADA,
		Character$UnicodeScript::TAKRI,
		Character$UnicodeScript::MIAO,
		Character$UnicodeScript::CAUCASIAN_ALBANIAN,
		Character$UnicodeScript::BASSA_VAH,
		Character$UnicodeScript::DUPLOYAN,
		Character$UnicodeScript::ELBASAN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::PAHAWH_HMONG,
		Character$UnicodeScript::KHOJKI,
		Character$UnicodeScript::LINEAR_A,
		Character$UnicodeScript::MAHAJANI,
		Character$UnicodeScript::MANICHAEAN,
		Character$UnicodeScript::MENDE_KIKAKUI,
		Character$UnicodeScript::MODI,
		Character$UnicodeScript::MRO,
		Character$UnicodeScript::OLD_NORTH_ARABIAN,
		Character$UnicodeScript::NABATAEAN,
		Character$UnicodeScript::PALMYRENE,
		Character$UnicodeScript::PAU_CIN_HAU,
		Character$UnicodeScript::OLD_PERMIC,
		Character$UnicodeScript::PSALTER_PAHLAVI,
		Character$UnicodeScript::SIDDHAM,
		Character$UnicodeScript::KHUDAWADI,
		Character$UnicodeScript::TIRHUTA,
		Character$UnicodeScript::WARANG_CITI,
		Character$UnicodeScript::AHOM,
		Character$UnicodeScript::ANATOLIAN_HIEROGLYPHS,
		Character$UnicodeScript::HATRAN,
		Character$UnicodeScript::MULTANI,
		Character$UnicodeScript::OLD_HUNGARIAN,
		Character$UnicodeScript::SIGNWRITING,
		Character$UnicodeScript::ADLAM,
		Character$UnicodeScript::BHAIKSUKI,
		Character$UnicodeScript::MARCHEN,
		Character$UnicodeScript::NEWA,
		Character$UnicodeScript::OSAGE,
		Character$UnicodeScript::TANGUT,
		Character$UnicodeScript::MASARAM_GONDI,
		Character$UnicodeScript::NUSHU,
		Character$UnicodeScript::SOYOMBO,
		Character$UnicodeScript::ZANABAZAR_SQUARE,
		Character$UnicodeScript::HANIFI_ROHINGYA,
		Character$UnicodeScript::OLD_SOGDIAN,
		Character$UnicodeScript::SOGDIAN,
		Character$UnicodeScript::DOGRA,
		Character$UnicodeScript::GUNJALA_GONDI,
		Character$UnicodeScript::MAKASAR,
		Character$UnicodeScript::MEDEFAIDRIN,
		Character$UnicodeScript::ELYMAIC,
		Character$UnicodeScript::NANDINAGARI,
		Character$UnicodeScript::NYIAKENG_PUACHUE_HMONG,
		Character$UnicodeScript::WANCHO,
		Character$UnicodeScript::YEZIDI,
		Character$UnicodeScript::CHORASMIAN,
		Character$UnicodeScript::DIVES_AKURU,
		Character$UnicodeScript::KHITAN_SMALL_SCRIPT,
		Character$UnicodeScript::UNKNOWN
	});
}

$Character$UnicodeScriptArray* Character$UnicodeScript::values() {
	$init(Character$UnicodeScript);
	return $cast($Character$UnicodeScriptArray, Character$UnicodeScript::$VALUES->clone());
}

Character$UnicodeScript* Character$UnicodeScript::valueOf($String* name) {
	$init(Character$UnicodeScript);
	return $cast(Character$UnicodeScript, $Enum::valueOf(Character$UnicodeScript::class$, name));
}

void Character$UnicodeScript::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

Character$UnicodeScript* Character$UnicodeScript::of(int32_t codePoint) {
	$init(Character$UnicodeScript);
	if (!$Character::isValidCodePoint(codePoint)) {
		$throwNew($IllegalArgumentException, $($String::format("Not a valid Unicode code point: 0x%X"_s, $$new($ObjectArray, {$($of($Integer::valueOf(codePoint)))}))));
	}
	int32_t type = $Character::getType(codePoint);
	if (type == (int8_t)0) {
		return Character$UnicodeScript::UNKNOWN;
	}
	int32_t index = $Arrays::binarySearch(Character$UnicodeScript::scriptStarts, codePoint);
	if (index < 0) {
		index = -index - 2;
	}
	return $nc(Character$UnicodeScript::scripts)->get(index);
}

Character$UnicodeScript* Character$UnicodeScript::forName($String* scriptName$renamed) {
	$init(Character$UnicodeScript);
	$var($String, scriptName, scriptName$renamed);
	$init($Locale);
	$assign(scriptName, $nc(scriptName)->toUpperCase($Locale::ENGLISH));
	Character$UnicodeScript* sc = $cast(Character$UnicodeScript, $nc(Character$UnicodeScript::aliases)->get(scriptName));
	if (sc != nullptr) {
		return sc;
	}
	return valueOf(scriptName);
}

void clinit$Character$UnicodeScript($Class* class$) {
	$assignStatic(Character$UnicodeScript::COMMON, $new(Character$UnicodeScript, "COMMON"_s, 0));
	$assignStatic(Character$UnicodeScript::LATIN, $new(Character$UnicodeScript, "LATIN"_s, 1));
	$assignStatic(Character$UnicodeScript::GREEK, $new(Character$UnicodeScript, "GREEK"_s, 2));
	$assignStatic(Character$UnicodeScript::CYRILLIC, $new(Character$UnicodeScript, "CYRILLIC"_s, 3));
	$assignStatic(Character$UnicodeScript::ARMENIAN, $new(Character$UnicodeScript, "ARMENIAN"_s, 4));
	$assignStatic(Character$UnicodeScript::HEBREW, $new(Character$UnicodeScript, "HEBREW"_s, 5));
	$assignStatic(Character$UnicodeScript::ARABIC, $new(Character$UnicodeScript, "ARABIC"_s, 6));
	$assignStatic(Character$UnicodeScript::SYRIAC, $new(Character$UnicodeScript, "SYRIAC"_s, 7));
	$assignStatic(Character$UnicodeScript::THAANA, $new(Character$UnicodeScript, "THAANA"_s, 8));
	$assignStatic(Character$UnicodeScript::DEVANAGARI, $new(Character$UnicodeScript, "DEVANAGARI"_s, 9));
	$assignStatic(Character$UnicodeScript::BENGALI, $new(Character$UnicodeScript, "BENGALI"_s, 10));
	$assignStatic(Character$UnicodeScript::GURMUKHI, $new(Character$UnicodeScript, "GURMUKHI"_s, 11));
	$assignStatic(Character$UnicodeScript::GUJARATI, $new(Character$UnicodeScript, "GUJARATI"_s, 12));
	$assignStatic(Character$UnicodeScript::ORIYA, $new(Character$UnicodeScript, "ORIYA"_s, 13));
	$assignStatic(Character$UnicodeScript::TAMIL, $new(Character$UnicodeScript, "TAMIL"_s, 14));
	$assignStatic(Character$UnicodeScript::TELUGU, $new(Character$UnicodeScript, "TELUGU"_s, 15));
	$assignStatic(Character$UnicodeScript::KANNADA, $new(Character$UnicodeScript, "KANNADA"_s, 16));
	$assignStatic(Character$UnicodeScript::MALAYALAM, $new(Character$UnicodeScript, "MALAYALAM"_s, 17));
	$assignStatic(Character$UnicodeScript::SINHALA, $new(Character$UnicodeScript, "SINHALA"_s, 18));
	$assignStatic(Character$UnicodeScript::THAI, $new(Character$UnicodeScript, "THAI"_s, 19));
	$assignStatic(Character$UnicodeScript::LAO, $new(Character$UnicodeScript, "LAO"_s, 20));
	$assignStatic(Character$UnicodeScript::TIBETAN, $new(Character$UnicodeScript, "TIBETAN"_s, 21));
	$assignStatic(Character$UnicodeScript::MYANMAR, $new(Character$UnicodeScript, "MYANMAR"_s, 22));
	$assignStatic(Character$UnicodeScript::GEORGIAN, $new(Character$UnicodeScript, "GEORGIAN"_s, 23));
	$assignStatic(Character$UnicodeScript::HANGUL, $new(Character$UnicodeScript, "HANGUL"_s, 24));
	$assignStatic(Character$UnicodeScript::ETHIOPIC, $new(Character$UnicodeScript, "ETHIOPIC"_s, 25));
	$assignStatic(Character$UnicodeScript::CHEROKEE, $new(Character$UnicodeScript, "CHEROKEE"_s, 26));
	$assignStatic(Character$UnicodeScript::CANADIAN_ABORIGINAL, $new(Character$UnicodeScript, "CANADIAN_ABORIGINAL"_s, 27));
	$assignStatic(Character$UnicodeScript::OGHAM, $new(Character$UnicodeScript, "OGHAM"_s, 28));
	$assignStatic(Character$UnicodeScript::RUNIC, $new(Character$UnicodeScript, "RUNIC"_s, 29));
	$assignStatic(Character$UnicodeScript::KHMER, $new(Character$UnicodeScript, "KHMER"_s, 30));
	$assignStatic(Character$UnicodeScript::MONGOLIAN, $new(Character$UnicodeScript, "MONGOLIAN"_s, 31));
	$assignStatic(Character$UnicodeScript::HIRAGANA, $new(Character$UnicodeScript, "HIRAGANA"_s, 32));
	$assignStatic(Character$UnicodeScript::KATAKANA, $new(Character$UnicodeScript, "KATAKANA"_s, 33));
	$assignStatic(Character$UnicodeScript::BOPOMOFO, $new(Character$UnicodeScript, "BOPOMOFO"_s, 34));
	$assignStatic(Character$UnicodeScript::HAN, $new(Character$UnicodeScript, "HAN"_s, 35));
	$assignStatic(Character$UnicodeScript::YI, $new(Character$UnicodeScript, "YI"_s, 36));
	$assignStatic(Character$UnicodeScript::OLD_ITALIC, $new(Character$UnicodeScript, "OLD_ITALIC"_s, 37));
	$assignStatic(Character$UnicodeScript::GOTHIC, $new(Character$UnicodeScript, "GOTHIC"_s, 38));
	$assignStatic(Character$UnicodeScript::DESERET, $new(Character$UnicodeScript, "DESERET"_s, 39));
	$assignStatic(Character$UnicodeScript::INHERITED, $new(Character$UnicodeScript, "INHERITED"_s, 40));
	$assignStatic(Character$UnicodeScript::TAGALOG, $new(Character$UnicodeScript, "TAGALOG"_s, 41));
	$assignStatic(Character$UnicodeScript::HANUNOO, $new(Character$UnicodeScript, "HANUNOO"_s, 42));
	$assignStatic(Character$UnicodeScript::BUHID, $new(Character$UnicodeScript, "BUHID"_s, 43));
	$assignStatic(Character$UnicodeScript::TAGBANWA, $new(Character$UnicodeScript, "TAGBANWA"_s, 44));
	$assignStatic(Character$UnicodeScript::LIMBU, $new(Character$UnicodeScript, "LIMBU"_s, 45));
	$assignStatic(Character$UnicodeScript::TAI_LE, $new(Character$UnicodeScript, "TAI_LE"_s, 46));
	$assignStatic(Character$UnicodeScript::LINEAR_B, $new(Character$UnicodeScript, "LINEAR_B"_s, 47));
	$assignStatic(Character$UnicodeScript::UGARITIC, $new(Character$UnicodeScript, "UGARITIC"_s, 48));
	$assignStatic(Character$UnicodeScript::SHAVIAN, $new(Character$UnicodeScript, "SHAVIAN"_s, 49));
	$assignStatic(Character$UnicodeScript::OSMANYA, $new(Character$UnicodeScript, "OSMANYA"_s, 50));
	$assignStatic(Character$UnicodeScript::CYPRIOT, $new(Character$UnicodeScript, "CYPRIOT"_s, 51));
	$assignStatic(Character$UnicodeScript::BRAILLE, $new(Character$UnicodeScript, "BRAILLE"_s, 52));
	$assignStatic(Character$UnicodeScript::BUGINESE, $new(Character$UnicodeScript, "BUGINESE"_s, 53));
	$assignStatic(Character$UnicodeScript::COPTIC, $new(Character$UnicodeScript, "COPTIC"_s, 54));
	$assignStatic(Character$UnicodeScript::NEW_TAI_LUE, $new(Character$UnicodeScript, "NEW_TAI_LUE"_s, 55));
	$assignStatic(Character$UnicodeScript::GLAGOLITIC, $new(Character$UnicodeScript, "GLAGOLITIC"_s, 56));
	$assignStatic(Character$UnicodeScript::TIFINAGH, $new(Character$UnicodeScript, "TIFINAGH"_s, 57));
	$assignStatic(Character$UnicodeScript::SYLOTI_NAGRI, $new(Character$UnicodeScript, "SYLOTI_NAGRI"_s, 58));
	$assignStatic(Character$UnicodeScript::OLD_PERSIAN, $new(Character$UnicodeScript, "OLD_PERSIAN"_s, 59));
	$assignStatic(Character$UnicodeScript::KHAROSHTHI, $new(Character$UnicodeScript, "KHAROSHTHI"_s, 60));
	$assignStatic(Character$UnicodeScript::BALINESE, $new(Character$UnicodeScript, "BALINESE"_s, 61));
	$assignStatic(Character$UnicodeScript::CUNEIFORM, $new(Character$UnicodeScript, "CUNEIFORM"_s, 62));
	$assignStatic(Character$UnicodeScript::PHOENICIAN, $new(Character$UnicodeScript, "PHOENICIAN"_s, 63));
	$assignStatic(Character$UnicodeScript::PHAGS_PA, $new(Character$UnicodeScript, "PHAGS_PA"_s, 64));
	$assignStatic(Character$UnicodeScript::NKO, $new(Character$UnicodeScript, "NKO"_s, 65));
	$assignStatic(Character$UnicodeScript::SUNDANESE, $new(Character$UnicodeScript, "SUNDANESE"_s, 66));
	$assignStatic(Character$UnicodeScript::BATAK, $new(Character$UnicodeScript, "BATAK"_s, 67));
	$assignStatic(Character$UnicodeScript::LEPCHA, $new(Character$UnicodeScript, "LEPCHA"_s, 68));
	$assignStatic(Character$UnicodeScript::OL_CHIKI, $new(Character$UnicodeScript, "OL_CHIKI"_s, 69));
	$assignStatic(Character$UnicodeScript::VAI, $new(Character$UnicodeScript, "VAI"_s, 70));
	$assignStatic(Character$UnicodeScript::SAURASHTRA, $new(Character$UnicodeScript, "SAURASHTRA"_s, 71));
	$assignStatic(Character$UnicodeScript::KAYAH_LI, $new(Character$UnicodeScript, "KAYAH_LI"_s, 72));
	$assignStatic(Character$UnicodeScript::REJANG, $new(Character$UnicodeScript, "REJANG"_s, 73));
	$assignStatic(Character$UnicodeScript::LYCIAN, $new(Character$UnicodeScript, "LYCIAN"_s, 74));
	$assignStatic(Character$UnicodeScript::CARIAN, $new(Character$UnicodeScript, "CARIAN"_s, 75));
	$assignStatic(Character$UnicodeScript::LYDIAN, $new(Character$UnicodeScript, "LYDIAN"_s, 76));
	$assignStatic(Character$UnicodeScript::CHAM, $new(Character$UnicodeScript, "CHAM"_s, 77));
	$assignStatic(Character$UnicodeScript::TAI_THAM, $new(Character$UnicodeScript, "TAI_THAM"_s, 78));
	$assignStatic(Character$UnicodeScript::TAI_VIET, $new(Character$UnicodeScript, "TAI_VIET"_s, 79));
	$assignStatic(Character$UnicodeScript::AVESTAN, $new(Character$UnicodeScript, "AVESTAN"_s, 80));
	$assignStatic(Character$UnicodeScript::EGYPTIAN_HIEROGLYPHS, $new(Character$UnicodeScript, "EGYPTIAN_HIEROGLYPHS"_s, 81));
	$assignStatic(Character$UnicodeScript::SAMARITAN, $new(Character$UnicodeScript, "SAMARITAN"_s, 82));
	$assignStatic(Character$UnicodeScript::MANDAIC, $new(Character$UnicodeScript, "MANDAIC"_s, 83));
	$assignStatic(Character$UnicodeScript::LISU, $new(Character$UnicodeScript, "LISU"_s, 84));
	$assignStatic(Character$UnicodeScript::BAMUM, $new(Character$UnicodeScript, "BAMUM"_s, 85));
	$assignStatic(Character$UnicodeScript::JAVANESE, $new(Character$UnicodeScript, "JAVANESE"_s, 86));
	$assignStatic(Character$UnicodeScript::MEETEI_MAYEK, $new(Character$UnicodeScript, "MEETEI_MAYEK"_s, 87));
	$assignStatic(Character$UnicodeScript::IMPERIAL_ARAMAIC, $new(Character$UnicodeScript, "IMPERIAL_ARAMAIC"_s, 88));
	$assignStatic(Character$UnicodeScript::OLD_SOUTH_ARABIAN, $new(Character$UnicodeScript, "OLD_SOUTH_ARABIAN"_s, 89));
	$assignStatic(Character$UnicodeScript::INSCRIPTIONAL_PARTHIAN, $new(Character$UnicodeScript, "INSCRIPTIONAL_PARTHIAN"_s, 90));
	$assignStatic(Character$UnicodeScript::INSCRIPTIONAL_PAHLAVI, $new(Character$UnicodeScript, "INSCRIPTIONAL_PAHLAVI"_s, 91));
	$assignStatic(Character$UnicodeScript::OLD_TURKIC, $new(Character$UnicodeScript, "OLD_TURKIC"_s, 92));
	$assignStatic(Character$UnicodeScript::BRAHMI, $new(Character$UnicodeScript, "BRAHMI"_s, 93));
	$assignStatic(Character$UnicodeScript::KAITHI, $new(Character$UnicodeScript, "KAITHI"_s, 94));
	$assignStatic(Character$UnicodeScript::MEROITIC_HIEROGLYPHS, $new(Character$UnicodeScript, "MEROITIC_HIEROGLYPHS"_s, 95));
	$assignStatic(Character$UnicodeScript::MEROITIC_CURSIVE, $new(Character$UnicodeScript, "MEROITIC_CURSIVE"_s, 96));
	$assignStatic(Character$UnicodeScript::SORA_SOMPENG, $new(Character$UnicodeScript, "SORA_SOMPENG"_s, 97));
	$assignStatic(Character$UnicodeScript::CHAKMA, $new(Character$UnicodeScript, "CHAKMA"_s, 98));
	$assignStatic(Character$UnicodeScript::SHARADA, $new(Character$UnicodeScript, "SHARADA"_s, 99));
	$assignStatic(Character$UnicodeScript::TAKRI, $new(Character$UnicodeScript, "TAKRI"_s, 100));
	$assignStatic(Character$UnicodeScript::MIAO, $new(Character$UnicodeScript, "MIAO"_s, 101));
	$assignStatic(Character$UnicodeScript::CAUCASIAN_ALBANIAN, $new(Character$UnicodeScript, "CAUCASIAN_ALBANIAN"_s, 102));
	$assignStatic(Character$UnicodeScript::BASSA_VAH, $new(Character$UnicodeScript, "BASSA_VAH"_s, 103));
	$assignStatic(Character$UnicodeScript::DUPLOYAN, $new(Character$UnicodeScript, "DUPLOYAN"_s, 104));
	$assignStatic(Character$UnicodeScript::ELBASAN, $new(Character$UnicodeScript, "ELBASAN"_s, 105));
	$assignStatic(Character$UnicodeScript::GRANTHA, $new(Character$UnicodeScript, "GRANTHA"_s, 106));
	$assignStatic(Character$UnicodeScript::PAHAWH_HMONG, $new(Character$UnicodeScript, "PAHAWH_HMONG"_s, 107));
	$assignStatic(Character$UnicodeScript::KHOJKI, $new(Character$UnicodeScript, "KHOJKI"_s, 108));
	$assignStatic(Character$UnicodeScript::LINEAR_A, $new(Character$UnicodeScript, "LINEAR_A"_s, 109));
	$assignStatic(Character$UnicodeScript::MAHAJANI, $new(Character$UnicodeScript, "MAHAJANI"_s, 110));
	$assignStatic(Character$UnicodeScript::MANICHAEAN, $new(Character$UnicodeScript, "MANICHAEAN"_s, 111));
	$assignStatic(Character$UnicodeScript::MENDE_KIKAKUI, $new(Character$UnicodeScript, "MENDE_KIKAKUI"_s, 112));
	$assignStatic(Character$UnicodeScript::MODI, $new(Character$UnicodeScript, "MODI"_s, 113));
	$assignStatic(Character$UnicodeScript::MRO, $new(Character$UnicodeScript, "MRO"_s, 114));
	$assignStatic(Character$UnicodeScript::OLD_NORTH_ARABIAN, $new(Character$UnicodeScript, "OLD_NORTH_ARABIAN"_s, 115));
	$assignStatic(Character$UnicodeScript::NABATAEAN, $new(Character$UnicodeScript, "NABATAEAN"_s, 116));
	$assignStatic(Character$UnicodeScript::PALMYRENE, $new(Character$UnicodeScript, "PALMYRENE"_s, 117));
	$assignStatic(Character$UnicodeScript::PAU_CIN_HAU, $new(Character$UnicodeScript, "PAU_CIN_HAU"_s, 118));
	$assignStatic(Character$UnicodeScript::OLD_PERMIC, $new(Character$UnicodeScript, "OLD_PERMIC"_s, 119));
	$assignStatic(Character$UnicodeScript::PSALTER_PAHLAVI, $new(Character$UnicodeScript, "PSALTER_PAHLAVI"_s, 120));
	$assignStatic(Character$UnicodeScript::SIDDHAM, $new(Character$UnicodeScript, "SIDDHAM"_s, 121));
	$assignStatic(Character$UnicodeScript::KHUDAWADI, $new(Character$UnicodeScript, "KHUDAWADI"_s, 122));
	$assignStatic(Character$UnicodeScript::TIRHUTA, $new(Character$UnicodeScript, "TIRHUTA"_s, 123));
	$assignStatic(Character$UnicodeScript::WARANG_CITI, $new(Character$UnicodeScript, "WARANG_CITI"_s, 124));
	$assignStatic(Character$UnicodeScript::AHOM, $new(Character$UnicodeScript, "AHOM"_s, 125));
	$assignStatic(Character$UnicodeScript::ANATOLIAN_HIEROGLYPHS, $new(Character$UnicodeScript, "ANATOLIAN_HIEROGLYPHS"_s, 126));
	$assignStatic(Character$UnicodeScript::HATRAN, $new(Character$UnicodeScript, "HATRAN"_s, 127));
	$assignStatic(Character$UnicodeScript::MULTANI, $new(Character$UnicodeScript, "MULTANI"_s, 128));
	$assignStatic(Character$UnicodeScript::OLD_HUNGARIAN, $new(Character$UnicodeScript, "OLD_HUNGARIAN"_s, 129));
	$assignStatic(Character$UnicodeScript::SIGNWRITING, $new(Character$UnicodeScript, "SIGNWRITING"_s, 130));
	$assignStatic(Character$UnicodeScript::ADLAM, $new(Character$UnicodeScript, "ADLAM"_s, 131));
	$assignStatic(Character$UnicodeScript::BHAIKSUKI, $new(Character$UnicodeScript, "BHAIKSUKI"_s, 132));
	$assignStatic(Character$UnicodeScript::MARCHEN, $new(Character$UnicodeScript, "MARCHEN"_s, 133));
	$assignStatic(Character$UnicodeScript::NEWA, $new(Character$UnicodeScript, "NEWA"_s, 134));
	$assignStatic(Character$UnicodeScript::OSAGE, $new(Character$UnicodeScript, "OSAGE"_s, 135));
	$assignStatic(Character$UnicodeScript::TANGUT, $new(Character$UnicodeScript, "TANGUT"_s, 136));
	$assignStatic(Character$UnicodeScript::MASARAM_GONDI, $new(Character$UnicodeScript, "MASARAM_GONDI"_s, 137));
	$assignStatic(Character$UnicodeScript::NUSHU, $new(Character$UnicodeScript, "NUSHU"_s, 138));
	$assignStatic(Character$UnicodeScript::SOYOMBO, $new(Character$UnicodeScript, "SOYOMBO"_s, 139));
	$assignStatic(Character$UnicodeScript::ZANABAZAR_SQUARE, $new(Character$UnicodeScript, "ZANABAZAR_SQUARE"_s, 140));
	$assignStatic(Character$UnicodeScript::HANIFI_ROHINGYA, $new(Character$UnicodeScript, "HANIFI_ROHINGYA"_s, 141));
	$assignStatic(Character$UnicodeScript::OLD_SOGDIAN, $new(Character$UnicodeScript, "OLD_SOGDIAN"_s, 142));
	$assignStatic(Character$UnicodeScript::SOGDIAN, $new(Character$UnicodeScript, "SOGDIAN"_s, 143));
	$assignStatic(Character$UnicodeScript::DOGRA, $new(Character$UnicodeScript, "DOGRA"_s, 144));
	$assignStatic(Character$UnicodeScript::GUNJALA_GONDI, $new(Character$UnicodeScript, "GUNJALA_GONDI"_s, 145));
	$assignStatic(Character$UnicodeScript::MAKASAR, $new(Character$UnicodeScript, "MAKASAR"_s, 146));
	$assignStatic(Character$UnicodeScript::MEDEFAIDRIN, $new(Character$UnicodeScript, "MEDEFAIDRIN"_s, 147));
	$assignStatic(Character$UnicodeScript::ELYMAIC, $new(Character$UnicodeScript, "ELYMAIC"_s, 148));
	$assignStatic(Character$UnicodeScript::NANDINAGARI, $new(Character$UnicodeScript, "NANDINAGARI"_s, 149));
	$assignStatic(Character$UnicodeScript::NYIAKENG_PUACHUE_HMONG, $new(Character$UnicodeScript, "NYIAKENG_PUACHUE_HMONG"_s, 150));
	$assignStatic(Character$UnicodeScript::WANCHO, $new(Character$UnicodeScript, "WANCHO"_s, 151));
	$assignStatic(Character$UnicodeScript::YEZIDI, $new(Character$UnicodeScript, "YEZIDI"_s, 152));
	$assignStatic(Character$UnicodeScript::CHORASMIAN, $new(Character$UnicodeScript, "CHORASMIAN"_s, 153));
	$assignStatic(Character$UnicodeScript::DIVES_AKURU, $new(Character$UnicodeScript, "DIVES_AKURU"_s, 154));
	$assignStatic(Character$UnicodeScript::KHITAN_SMALL_SCRIPT, $new(Character$UnicodeScript, "KHITAN_SMALL_SCRIPT"_s, 155));
	$assignStatic(Character$UnicodeScript::UNKNOWN, $new(Character$UnicodeScript, "UNKNOWN"_s, 156));
	$assignStatic(Character$UnicodeScript::$VALUES, Character$UnicodeScript::$values());
	$assignStatic(Character$UnicodeScript::scriptStarts, $new($ints, {
		0,
		65,
		91,
		97,
		123,
		170,
		171,
		186,
		187,
		192,
		215,
		216,
		247,
		248,
		697,
		736,
		741,
		746,
		748,
		768,
		880,
		884,
		885,
		888,
		890,
		894,
		895,
		896,
		900,
		901,
		902,
		903,
		904,
		907,
		908,
		909,
		910,
		930,
		931,
		994,
		1008,
		1024,
		1157,
		1159,
		1328,
		1329,
		1367,
		1369,
		1419,
		1421,
		1424,
		1425,
		1480,
		1488,
		1515,
		1519,
		1525,
		1536,
		1541,
		1542,
		1548,
		1549,
		1563,
		1564,
		1565,
		1566,
		1567,
		1568,
		1600,
		1601,
		1611,
		1622,
		1648,
		1649,
		1757,
		1758,
		1792,
		1806,
		1807,
		1867,
		1869,
		1872,
		1920,
		1970,
		1984,
		2043,
		2045,
		2048,
		2094,
		2096,
		2111,
		2112,
		2140,
		2142,
		2143,
		2144,
		2155,
		2208,
		2229,
		2230,
		2248,
		2259,
		2274,
		2275,
		2304,
		2385,
		2389,
		2404,
		2406,
		2432,
		2436,
		2437,
		2445,
		2447,
		2449,
		2451,
		2473,
		2474,
		2481,
		2482,
		2483,
		2486,
		2490,
		2492,
		2501,
		2503,
		2505,
		2507,
		2511,
		2519,
		2520,
		2524,
		2526,
		2527,
		2532,
		2534,
		2559,
		2561,
		2564,
		2565,
		2571,
		2575,
		2577,
		2579,
		2601,
		2602,
		2609,
		2610,
		2612,
		2613,
		2615,
		2616,
		2618,
		2620,
		2621,
		2622,
		2627,
		2631,
		2633,
		2635,
		2638,
		2641,
		2642,
		2649,
		2653,
		2654,
		2655,
		2662,
		2679,
		2689,
		2692,
		2693,
		2702,
		2703,
		2706,
		2707,
		2729,
		2730,
		2737,
		2738,
		2740,
		2741,
		2746,
		2748,
		2758,
		2759,
		2762,
		2763,
		2766,
		2768,
		2769,
		2784,
		2788,
		2790,
		2802,
		2809,
		2816,
		2817,
		2820,
		2821,
		2829,
		2831,
		2833,
		2835,
		2857,
		2858,
		2865,
		2866,
		2868,
		2869,
		2874,
		2876,
		2885,
		2887,
		2889,
		2891,
		2894,
		2901,
		2904,
		2908,
		2910,
		2911,
		2916,
		2918,
		2936,
		2946,
		2948,
		2949,
		2955,
		2958,
		2961,
		2962,
		2966,
		2969,
		2971,
		2972,
		2973,
		2974,
		2976,
		2979,
		2981,
		2984,
		2987,
		2990,
		3002,
		3006,
		3011,
		3014,
		3017,
		3018,
		3022,
		3024,
		3025,
		3031,
		3032,
		3046,
		3067,
		3072,
		3085,
		3086,
		3089,
		3090,
		3113,
		3114,
		3130,
		3133,
		3141,
		3142,
		3145,
		3146,
		3150,
		3157,
		3159,
		3160,
		3163,
		3168,
		3172,
		3174,
		3184,
		3191,
		3200,
		3213,
		3214,
		3217,
		3218,
		3241,
		3242,
		3252,
		3253,
		3258,
		3260,
		3269,
		3270,
		3273,
		3274,
		3278,
		3285,
		3287,
		3294,
		3295,
		3296,
		3300,
		3302,
		3312,
		3313,
		3315,
		3328,
		3341,
		3342,
		3345,
		3346,
		3397,
		3398,
		3401,
		3402,
		3408,
		3412,
		3428,
		3430,
		3456,
		3457,
		3460,
		3461,
		3479,
		3482,
		3506,
		3507,
		3516,
		3517,
		3518,
		3520,
		3527,
		3530,
		3531,
		3535,
		3541,
		3542,
		3543,
		3544,
		3552,
		3558,
		3568,
		3570,
		3573,
		3585,
		3643,
		3647,
		3648,
		3676,
		3713,
		3715,
		3716,
		3717,
		3718,
		3723,
		3724,
		3748,
		3749,
		3750,
		3751,
		3774,
		3776,
		3781,
		3782,
		3783,
		3784,
		3790,
		3792,
		3802,
		3804,
		3808,
		3840,
		3912,
		3913,
		3949,
		3953,
		3992,
		3993,
		4029,
		4030,
		4045,
		4046,
		4053,
		4057,
		4059,
		4096,
		4256,
		4294,
		4295,
		4296,
		4301,
		4302,
		4304,
		4347,
		4348,
		4352,
		4608,
		4681,
		4682,
		4686,
		4688,
		4695,
		4696,
		4697,
		4698,
		4702,
		4704,
		4745,
		4746,
		4750,
		4752,
		4785,
		4786,
		4790,
		4792,
		4799,
		4800,
		4801,
		4802,
		4806,
		4808,
		4823,
		4824,
		4881,
		4882,
		4886,
		4888,
		4955,
		4957,
		4989,
		4992,
		5018,
		5024,
		5110,
		5112,
		5118,
		5120,
		5760,
		5789,
		5792,
		5867,
		5870,
		5881,
		5888,
		5901,
		5902,
		5909,
		5920,
		5941,
		5943,
		5952,
		5972,
		5984,
		5997,
		5998,
		6001,
		6002,
		6004,
		6016,
		6110,
		6112,
		6122,
		6128,
		6138,
		6144,
		6146,
		6148,
		6149,
		6150,
		6159,
		6160,
		6170,
		6176,
		6265,
		6272,
		6315,
		6320,
		6390,
		6400,
		6431,
		6432,
		6444,
		6448,
		6460,
		6464,
		6465,
		6468,
		6480,
		6510,
		6512,
		6517,
		6528,
		6572,
		6576,
		6602,
		6608,
		6619,
		6622,
		6624,
		6656,
		6684,
		6686,
		6688,
		6751,
		6752,
		6781,
		6783,
		6794,
		6800,
		6810,
		6816,
		6830,
		6832,
		6849,
		6912,
		6988,
		6992,
		7037,
		7040,
		7104,
		7156,
		7164,
		7168,
		7224,
		7227,
		7242,
		7245,
		7248,
		7296,
		7305,
		7312,
		7355,
		7357,
		7360,
		7368,
		7376,
		7379,
		7380,
		7393,
		7394,
		7401,
		7405,
		7406,
		7412,
		7413,
		7416,
		7418,
		7419,
		7424,
		7462,
		7467,
		7468,
		7517,
		7522,
		7526,
		7531,
		7544,
		7545,
		7615,
		7616,
		7674,
		7675,
		7680,
		7936,
		7958,
		7960,
		7966,
		7968,
		8006,
		8008,
		8014,
		8016,
		8024,
		8025,
		8026,
		8027,
		8028,
		8029,
		8030,
		8031,
		8062,
		8064,
		8117,
		8118,
		8133,
		8134,
		8148,
		8150,
		8156,
		8157,
		8176,
		8178,
		8181,
		8182,
		8191,
		8192,
		8204,
		8206,
		8293,
		8294,
		8305,
		8306,
		8308,
		8319,
		8320,
		8335,
		8336,
		8349,
		8352,
		8384,
		8400,
		8433,
		8448,
		8486,
		8487,
		8490,
		8492,
		8498,
		8499,
		8526,
		8527,
		8544,
		8585,
		8588,
		8592,
		9255,
		9280,
		9291,
		9312,
		10240,
		10496,
		11124,
		11126,
		11158,
		11159,
		11264,
		11311,
		11312,
		11359,
		11360,
		11392,
		11508,
		11513,
		11520,
		11558,
		11559,
		11560,
		11565,
		11566,
		11568,
		11624,
		11631,
		11633,
		11647,
		11648,
		11671,
		11680,
		11687,
		11688,
		11695,
		11696,
		11703,
		11704,
		11711,
		11712,
		11719,
		11720,
		11727,
		11728,
		11735,
		11736,
		11743,
		11744,
		11776,
		11859,
		11904,
		11930,
		11931,
		12020,
		12032,
		12246,
		12272,
		12284,
		12288,
		12293,
		12294,
		12295,
		12296,
		12321,
		12330,
		12334,
		12336,
		12344,
		12348,
		12352,
		12353,
		12439,
		12441,
		12443,
		12445,
		12448,
		12449,
		12539,
		12541,
		12544,
		12549,
		12592,
		12593,
		12687,
		12688,
		12704,
		12736,
		12772,
		12784,
		12800,
		12831,
		12832,
		12896,
		12927,
		13008,
		13055,
		13056,
		13144,
		13312,
		19904,
		19968,
		0x00009FFD,
		0x0000A000,
		0x0000A48D,
		0x0000A490,
		0x0000A4C7,
		0x0000A4D0,
		0x0000A500,
		0x0000A62C,
		0x0000A640,
		0x0000A6A0,
		0x0000A6F8,
		0x0000A700,
		0x0000A722,
		0x0000A788,
		0x0000A78B,
		0x0000A7C0,
		0x0000A7C2,
		0x0000A7CB,
		0x0000A7F5,
		0x0000A800,
		0x0000A82D,
		0x0000A830,
		0x0000A83A,
		0x0000A840,
		0x0000A878,
		0x0000A880,
		0x0000A8C6,
		0x0000A8CE,
		0x0000A8DA,
		0x0000A8E0,
		0x0000A900,
		0x0000A92E,
		0x0000A92F,
		0x0000A930,
		0x0000A954,
		0x0000A95F,
		0x0000A960,
		0x0000A97D,
		0x0000A980,
		0x0000A9CE,
		0x0000A9CF,
		0x0000A9D0,
		0x0000A9DA,
		0x0000A9DE,
		0x0000A9E0,
		0x0000A9FF,
		0x0000AA00,
		0x0000AA37,
		0x0000AA40,
		0x0000AA4E,
		0x0000AA50,
		0x0000AA5A,
		0x0000AA5C,
		0x0000AA60,
		0x0000AA80,
		0x0000AAC3,
		0x0000AADB,
		0x0000AAE0,
		0x0000AAF7,
		0x0000AB01,
		0x0000AB07,
		0x0000AB09,
		0x0000AB0F,
		0x0000AB11,
		0x0000AB17,
		0x0000AB20,
		0x0000AB27,
		0x0000AB28,
		0x0000AB2F,
		0x0000AB30,
		0x0000AB5B,
		0x0000AB5C,
		0x0000AB65,
		0x0000AB66,
		0x0000AB6A,
		0x0000AB6C,
		0x0000AB70,
		0x0000ABC0,
		0x0000ABEE,
		0x0000ABF0,
		0x0000ABFA,
		0x0000AC00,
		0x0000D7A4,
		0x0000D7B0,
		0x0000D7C7,
		0x0000D7CB,
		0x0000D7FC,
		0x0000F900,
		0x0000FA6E,
		0x0000FA70,
		0x0000FADA,
		0x0000FB00,
		0x0000FB07,
		0x0000FB13,
		0x0000FB18,
		0x0000FB1D,
		0x0000FB37,
		0x0000FB38,
		0x0000FB3D,
		0x0000FB3E,
		0x0000FB3F,
		0x0000FB40,
		0x0000FB42,
		0x0000FB43,
		0x0000FB45,
		0x0000FB46,
		0x0000FB50,
		0x0000FBC2,
		0x0000FBD3,
		0x0000FD3E,
		0x0000FD40,
		0x0000FD50,
		0x0000FD90,
		0x0000FD92,
		0x0000FDC8,
		0x0000FDF0,
		0x0000FDFE,
		0x0000FE00,
		0x0000FE10,
		0x0000FE1A,
		0x0000FE20,
		0x0000FE2E,
		0x0000FE30,
		0x0000FE53,
		0x0000FE54,
		0x0000FE67,
		0x0000FE68,
		0x0000FE6C,
		0x0000FE70,
		0x0000FE75,
		0x0000FE76,
		0x0000FEFD,
		0x0000FEFF,
		0x0000FF00,
		0x0000FF01,
		0x0000FF21,
		0x0000FF3B,
		0x0000FF41,
		0x0000FF5B,
		0x0000FF66,
		0x0000FF70,
		0x0000FF71,
		0x0000FF9E,
		0x0000FFA0,
		0x0000FFBF,
		0x0000FFC2,
		0x0000FFC8,
		0x0000FFCA,
		0x0000FFD0,
		0x0000FFD2,
		0x0000FFD8,
		0x0000FFDA,
		0x0000FFDD,
		0x0000FFE0,
		0x0000FFE7,
		0x0000FFE8,
		0x0000FFEF,
		0x0000FFF9,
		0x0000FFFE,
		0x00010000,
		0x0001000C,
		0x0001000D,
		0x00010027,
		0x00010028,
		0x0001003B,
		0x0001003C,
		0x0001003E,
		0x0001003F,
		0x0001004E,
		0x00010050,
		0x0001005E,
		0x00010080,
		0x000100FB,
		0x00010100,
		0x00010103,
		0x00010107,
		0x00010134,
		0x00010137,
		0x00010140,
		0x0001018F,
		0x00010190,
		0x0001019D,
		0x000101A0,
		0x000101A1,
		0x000101D0,
		0x000101FD,
		0x000101FE,
		0x00010280,
		0x0001029D,
		0x000102A0,
		0x000102D1,
		0x000102E0,
		0x000102E1,
		0x000102FC,
		0x00010300,
		0x00010324,
		0x0001032D,
		0x00010330,
		0x0001034B,
		0x00010350,
		0x0001037B,
		0x00010380,
		0x0001039E,
		0x0001039F,
		0x000103A0,
		0x000103C4,
		0x000103C8,
		0x000103D6,
		0x00010400,
		0x00010450,
		0x00010480,
		0x0001049E,
		0x000104A0,
		0x000104AA,
		0x000104B0,
		0x000104D4,
		0x000104D8,
		0x000104FC,
		0x00010500,
		0x00010528,
		0x00010530,
		0x00010564,
		0x0001056F,
		0x00010570,
		0x00010600,
		0x00010737,
		0x00010740,
		0x00010756,
		0x00010760,
		0x00010768,
		0x00010800,
		0x00010806,
		0x00010808,
		0x00010809,
		0x0001080A,
		0x00010836,
		0x00010837,
		0x00010839,
		0x0001083C,
		0x0001083D,
		0x0001083F,
		0x00010840,
		0x00010856,
		0x00010857,
		0x00010860,
		0x00010880,
		0x0001089F,
		0x000108A7,
		0x000108B0,
		0x000108E0,
		0x000108F3,
		0x000108F4,
		0x000108F6,
		0x000108FB,
		0x00010900,
		0x0001091C,
		0x0001091F,
		0x00010920,
		0x0001093A,
		0x0001093F,
		0x00010940,
		0x00010980,
		0x000109A0,
		0x000109B8,
		0x000109BC,
		0x000109D0,
		0x000109D2,
		0x00010A00,
		0x00010A04,
		0x00010A05,
		0x00010A07,
		0x00010A0C,
		0x00010A14,
		0x00010A15,
		0x00010A18,
		0x00010A19,
		0x00010A36,
		0x00010A38,
		0x00010A3B,
		0x00010A3F,
		0x00010A49,
		0x00010A50,
		0x00010A59,
		0x00010A60,
		0x00010A80,
		0x00010AA0,
		0x00010AC0,
		0x00010AE7,
		0x00010AEB,
		0x00010AF7,
		0x00010B00,
		0x00010B36,
		0x00010B39,
		0x00010B40,
		0x00010B56,
		0x00010B58,
		0x00010B60,
		0x00010B73,
		0x00010B78,
		0x00010B80,
		0x00010B92,
		0x00010B99,
		0x00010B9D,
		0x00010BA9,
		0x00010BB0,
		0x00010C00,
		0x00010C49,
		0x00010C80,
		0x00010CB3,
		0x00010CC0,
		0x00010CF3,
		0x00010CFA,
		0x00010D00,
		0x00010D28,
		0x00010D30,
		0x00010D3A,
		0x00010E60,
		0x00010E7F,
		0x00010E80,
		0x00010EAA,
		0x00010EAB,
		0x00010EAE,
		0x00010EB0,
		0x00010EB2,
		0x00010F00,
		0x00010F28,
		0x00010F30,
		0x00010F5A,
		0x00010FB0,
		0x00010FCC,
		0x00010FE0,
		0x00010FF7,
		0x00011000,
		0x0001104E,
		0x00011052,
		0x00011070,
		0x0001107F,
		0x00011080,
		0x000110C2,
		0x000110CD,
		0x000110CE,
		0x000110D0,
		0x000110E9,
		0x000110F0,
		0x000110FA,
		0x00011100,
		0x00011135,
		0x00011136,
		0x00011148,
		0x00011150,
		0x00011177,
		0x00011180,
		0x000111E0,
		0x000111E1,
		0x000111F5,
		0x00011200,
		0x00011212,
		0x00011213,
		0x0001123F,
		0x00011280,
		0x00011287,
		0x00011288,
		0x00011289,
		0x0001128A,
		0x0001128E,
		0x0001128F,
		0x0001129E,
		0x0001129F,
		0x000112AA,
		0x000112B0,
		0x000112EB,
		0x000112F0,
		0x000112FA,
		0x00011300,
		0x00011304,
		0x00011305,
		0x0001130D,
		0x0001130F,
		0x00011311,
		0x00011313,
		0x00011329,
		0x0001132A,
		0x00011331,
		0x00011332,
		0x00011334,
		0x00011335,
		0x0001133A,
		0x0001133B,
		0x0001133C,
		0x00011345,
		0x00011347,
		0x00011349,
		0x0001134B,
		0x0001134E,
		0x00011350,
		0x00011351,
		0x00011357,
		0x00011358,
		0x0001135D,
		0x00011364,
		0x00011366,
		0x0001136D,
		0x00011370,
		0x00011375,
		0x00011400,
		0x0001145C,
		0x0001145D,
		0x00011462,
		0x00011480,
		0x000114C8,
		0x000114D0,
		0x000114DA,
		0x00011580,
		0x000115B6,
		0x000115B8,
		0x000115DE,
		0x00011600,
		0x00011645,
		0x00011650,
		0x0001165A,
		0x00011660,
		0x0001166D,
		0x00011680,
		0x000116B9,
		0x000116C0,
		0x000116CA,
		0x00011700,
		0x0001171B,
		0x0001171D,
		0x0001172C,
		0x00011730,
		0x00011740,
		0x00011800,
		0x0001183C,
		0x000118A0,
		0x000118F3,
		0x000118FF,
		0x00011900,
		0x00011907,
		0x00011909,
		0x0001190A,
		0x0001190C,
		0x00011914,
		0x00011915,
		0x00011917,
		0x00011918,
		0x00011936,
		0x00011937,
		0x00011939,
		0x0001193B,
		0x00011947,
		0x00011950,
		0x0001195A,
		0x000119A0,
		0x000119A8,
		0x000119AA,
		0x000119D8,
		0x000119DA,
		0x000119E5,
		0x00011A00,
		0x00011A48,
		0x00011A50,
		0x00011AA3,
		0x00011AC0,
		0x00011AF9,
		0x00011C00,
		0x00011C09,
		0x00011C0A,
		0x00011C37,
		0x00011C38,
		0x00011C46,
		0x00011C50,
		0x00011C6D,
		0x00011C70,
		0x00011C90,
		0x00011C92,
		0x00011CA8,
		0x00011CA9,
		0x00011CB7,
		0x00011D00,
		0x00011D07,
		0x00011D08,
		0x00011D0A,
		0x00011D0B,
		0x00011D37,
		0x00011D3A,
		0x00011D3B,
		0x00011D3C,
		0x00011D3E,
		0x00011D3F,
		0x00011D48,
		0x00011D50,
		0x00011D5A,
		0x00011D60,
		0x00011D66,
		0x00011D67,
		0x00011D69,
		0x00011D6A,
		0x00011D8F,
		0x00011D90,
		0x00011D92,
		0x00011D93,
		0x00011D99,
		0x00011DA0,
		0x00011DAA,
		0x00011EE0,
		0x00011EF9,
		0x00011FB0,
		0x00011FB1,
		0x00011FC0,
		0x00011FF2,
		0x00011FFF,
		0x00012000,
		0x0001239A,
		0x00012400,
		0x0001246F,
		0x00012470,
		0x00012475,
		0x00012480,
		0x00012544,
		0x00013000,
		0x0001342F,
		0x00013430,
		0x00013439,
		0x00014400,
		0x00014647,
		0x00016800,
		0x00016A39,
		0x00016A40,
		0x00016A5F,
		0x00016A60,
		0x00016A6A,
		0x00016A6E,
		0x00016A70,
		0x00016AD0,
		0x00016AEE,
		0x00016AF0,
		0x00016AF6,
		0x00016B00,
		0x00016B46,
		0x00016B50,
		0x00016B5A,
		0x00016B5B,
		0x00016B62,
		0x00016B63,
		0x00016B78,
		0x00016B7D,
		0x00016B90,
		0x00016E40,
		0x00016E9B,
		0x00016F00,
		0x00016F4B,
		0x00016F4F,
		0x00016F88,
		0x00016F8F,
		0x00016FA0,
		0x00016FE0,
		0x00016FE1,
		0x00016FE2,
		0x00016FE4,
		0x00016FE5,
		0x00016FF0,
		0x00016FF2,
		0x00017000,
		0x000187F8,
		0x00018800,
		0x00018B00,
		0x00018CD6,
		0x00018D00,
		0x00018D09,
		0x0001B000,
		0x0001B001,
		0x0001B11F,
		0x0001B150,
		0x0001B153,
		0x0001B164,
		0x0001B168,
		0x0001B170,
		0x0001B2FC,
		0x0001BC00,
		0x0001BC6B,
		0x0001BC70,
		0x0001BC7D,
		0x0001BC80,
		0x0001BC89,
		0x0001BC90,
		0x0001BC9A,
		0x0001BC9C,
		0x0001BCA0,
		0x0001BCA4,
		0x0001D000,
		0x0001D0F6,
		0x0001D100,
		0x0001D127,
		0x0001D129,
		0x0001D167,
		0x0001D16A,
		0x0001D17B,
		0x0001D183,
		0x0001D185,
		0x0001D18C,
		0x0001D1AA,
		0x0001D1AE,
		0x0001D1E9,
		0x0001D200,
		0x0001D246,
		0x0001D2E0,
		0x0001D2F4,
		0x0001D300,
		0x0001D357,
		0x0001D360,
		0x0001D379,
		0x0001D400,
		0x0001D455,
		0x0001D456,
		0x0001D49D,
		0x0001D49E,
		0x0001D4A0,
		0x0001D4A2,
		0x0001D4A3,
		0x0001D4A5,
		0x0001D4A7,
		0x0001D4A9,
		0x0001D4AD,
		0x0001D4AE,
		0x0001D4BA,
		0x0001D4BB,
		0x0001D4BC,
		0x0001D4BD,
		0x0001D4C4,
		0x0001D4C5,
		0x0001D506,
		0x0001D507,
		0x0001D50B,
		0x0001D50D,
		0x0001D515,
		0x0001D516,
		0x0001D51D,
		0x0001D51E,
		0x0001D53A,
		0x0001D53B,
		0x0001D53F,
		0x0001D540,
		0x0001D545,
		0x0001D546,
		0x0001D547,
		0x0001D54A,
		0x0001D551,
		0x0001D552,
		0x0001D6A6,
		0x0001D6A8,
		0x0001D7CC,
		0x0001D7CE,
		0x0001D800,
		0x0001DA8C,
		0x0001DA9B,
		0x0001DAA0,
		0x0001DAA1,
		0x0001DAB0,
		0x0001E000,
		0x0001E007,
		0x0001E008,
		0x0001E019,
		0x0001E01B,
		0x0001E022,
		0x0001E023,
		0x0001E025,
		0x0001E026,
		0x0001E02B,
		0x0001E100,
		0x0001E12D,
		0x0001E130,
		0x0001E13E,
		0x0001E140,
		0x0001E14A,
		0x0001E14E,
		0x0001E150,
		0x0001E2C0,
		0x0001E2FA,
		0x0001E2FF,
		0x0001E300,
		0x0001E800,
		0x0001E8C5,
		0x0001E8C7,
		0x0001E8D7,
		0x0001E900,
		0x0001E94C,
		0x0001E950,
		0x0001E95A,
		0x0001E95E,
		0x0001E960,
		0x0001EC71,
		0x0001ECB5,
		0x0001ED01,
		0x0001ED3E,
		0x0001EE00,
		0x0001EE04,
		0x0001EE05,
		0x0001EE20,
		0x0001EE21,
		0x0001EE23,
		0x0001EE24,
		0x0001EE25,
		0x0001EE27,
		0x0001EE28,
		0x0001EE29,
		0x0001EE33,
		0x0001EE34,
		0x0001EE38,
		0x0001EE39,
		0x0001EE3A,
		0x0001EE3B,
		0x0001EE3C,
		0x0001EE42,
		0x0001EE43,
		0x0001EE47,
		0x0001EE48,
		0x0001EE49,
		0x0001EE4A,
		0x0001EE4B,
		0x0001EE4C,
		0x0001EE4D,
		0x0001EE50,
		0x0001EE51,
		0x0001EE53,
		0x0001EE54,
		0x0001EE55,
		0x0001EE57,
		0x0001EE58,
		0x0001EE59,
		0x0001EE5A,
		0x0001EE5B,
		0x0001EE5C,
		0x0001EE5D,
		0x0001EE5E,
		0x0001EE5F,
		0x0001EE60,
		0x0001EE61,
		0x0001EE63,
		0x0001EE64,
		0x0001EE65,
		0x0001EE67,
		0x0001EE6B,
		0x0001EE6C,
		0x0001EE73,
		0x0001EE74,
		0x0001EE78,
		0x0001EE79,
		0x0001EE7D,
		0x0001EE7E,
		0x0001EE7F,
		0x0001EE80,
		0x0001EE8A,
		0x0001EE8B,
		0x0001EE9C,
		0x0001EEA1,
		0x0001EEA4,
		0x0001EEA5,
		0x0001EEAA,
		0x0001EEAB,
		0x0001EEBC,
		0x0001EEF0,
		0x0001EEF2,
		0x0001F000,
		0x0001F02C,
		0x0001F030,
		0x0001F094,
		0x0001F0A0,
		0x0001F0AF,
		0x0001F0B1,
		0x0001F0C0,
		0x0001F0C1,
		0x0001F0D0,
		0x0001F0D1,
		0x0001F0F6,
		0x0001F100,
		0x0001F1AE,
		0x0001F1E6,
		0x0001F200,
		0x0001F201,
		0x0001F203,
		0x0001F210,
		0x0001F23C,
		0x0001F240,
		0x0001F249,
		0x0001F250,
		0x0001F252,
		0x0001F260,
		0x0001F266,
		0x0001F300,
		0x0001F6D8,
		0x0001F6E0,
		0x0001F6ED,
		0x0001F6F0,
		0x0001F6FD,
		0x0001F700,
		0x0001F774,
		0x0001F780,
		0x0001F7D9,
		0x0001F7E0,
		0x0001F7EC,
		0x0001F800,
		0x0001F80C,
		0x0001F810,
		0x0001F848,
		0x0001F850,
		0x0001F85A,
		0x0001F860,
		0x0001F888,
		0x0001F890,
		0x0001F8AE,
		0x0001F8B0,
		0x0001F8B2,
		0x0001F900,
		0x0001F979,
		0x0001F97A,
		0x0001F9CC,
		0x0001F9CD,
		0x0001FA54,
		0x0001FA60,
		0x0001FA6E,
		0x0001FA70,
		0x0001FA75,
		0x0001FA78,
		0x0001FA7B,
		0x0001FA80,
		0x0001FA87,
		0x0001FA90,
		0x0001FAA9,
		0x0001FAB0,
		0x0001FAB7,
		0x0001FAC0,
		0x0001FAC3,
		0x0001FAD0,
		0x0001FAD7,
		0x0001FB00,
		0x0001FB93,
		0x0001FB94,
		0x0001FBCB,
		0x0001FBF0,
		0x0001FBFA,
		0x00020000,
		0x0002A6DE,
		0x0002A700,
		0x0002B735,
		0x0002B740,
		0x0002B81E,
		0x0002B820,
		0x0002CEA2,
		0x0002CEB0,
		0x0002EBE1,
		0x0002F800,
		0x0002FA1E,
		0x00030000,
		0x0003134B,
		0x000E0001,
		0x000E0002,
		0x000E0020,
		0x000E0080,
		0x000E0100,
		0x000E01F0
	}));
	$assignStatic(Character$UnicodeScript::scripts, $new($Character$UnicodeScriptArray, {
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::BOPOMOFO,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::COPTIC,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::CYRILLIC,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::CYRILLIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARMENIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARMENIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARMENIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HEBREW,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HEBREW,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HEBREW,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::SYRIAC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SYRIAC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SYRIAC,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::THAANA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NKO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NKO,
		Character$UnicodeScript::SAMARITAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SAMARITAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MANDAIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MANDAIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SYRIAC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::DEVANAGARI,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::DEVANAGARI,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::DEVANAGARI,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BENGALI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GURMUKHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUJARATI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ORIYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TELUGU,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KANNADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MALAYALAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MALAYALAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MALAYALAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MALAYALAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MALAYALAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MALAYALAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MALAYALAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::THAI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::THAI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TIBETAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TIBETAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TIBETAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TIBETAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TIBETAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TIBETAN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::TIBETAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MYANMAR,
		Character$UnicodeScript::GEORGIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GEORGIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GEORGIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GEORGIAN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::GEORGIAN,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CHEROKEE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CHEROKEE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CANADIAN_ABORIGINAL,
		Character$UnicodeScript::OGHAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::RUNIC,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::RUNIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAGALOG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAGALOG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HANUNOO,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BUHID,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAGBANWA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAGBANWA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAGBANWA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHMER,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHMER,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHMER,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MONGOLIAN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::MONGOLIAN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::MONGOLIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MONGOLIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MONGOLIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MONGOLIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CANADIAN_ABORIGINAL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LIMBU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LIMBU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LIMBU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LIMBU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LIMBU,
		Character$UnicodeScript::TAI_LE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAI_LE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NEW_TAI_LUE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NEW_TAI_LUE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NEW_TAI_LUE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NEW_TAI_LUE,
		Character$UnicodeScript::KHMER,
		Character$UnicodeScript::BUGINESE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BUGINESE,
		Character$UnicodeScript::TAI_THAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAI_THAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAI_THAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAI_THAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAI_THAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BALINESE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BALINESE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SUNDANESE,
		Character$UnicodeScript::BATAK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BATAK,
		Character$UnicodeScript::LEPCHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LEPCHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LEPCHA,
		Character$UnicodeScript::OL_CHIKI,
		Character$UnicodeScript::CYRILLIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GEORGIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GEORGIAN,
		Character$UnicodeScript::SUNDANESE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::CYRILLIC,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::CYRILLIC,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::BRAILLE,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::GLAGOLITIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GLAGOLITIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COPTIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COPTIC,
		Character$UnicodeScript::GEORGIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GEORGIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GEORGIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TIFINAGH,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TIFINAGH,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TIFINAGH,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CYRILLIC,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HIRAGANA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::HIRAGANA,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::KATAKANA,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::KATAKANA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BOPOMOFO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::BOPOMOFO,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KATAKANA,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::KATAKANA,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::KATAKANA,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::YI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::YI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LISU,
		Character$UnicodeScript::VAI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CYRILLIC,
		Character$UnicodeScript::BAMUM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::SYLOTI_NAGRI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::PHAGS_PA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SAURASHTRA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SAURASHTRA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DEVANAGARI,
		Character$UnicodeScript::KAYAH_LI,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::KAYAH_LI,
		Character$UnicodeScript::REJANG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::REJANG,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::JAVANESE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::JAVANESE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::JAVANESE,
		Character$UnicodeScript::MYANMAR,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CHAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CHAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CHAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CHAM,
		Character$UnicodeScript::MYANMAR,
		Character$UnicodeScript::TAI_VIET,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAI_VIET,
		Character$UnicodeScript::MEETEI_MAYEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ETHIOPIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CHEROKEE,
		Character$UnicodeScript::MEETEI_MAYEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MEETEI_MAYEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARMENIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HEBREW,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HEBREW,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HEBREW,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HEBREW,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HEBREW,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HEBREW,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::CYRILLIC,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::LATIN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::KATAKANA,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::KATAKANA,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HANGUL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LINEAR_B,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LINEAR_B,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LINEAR_B,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LINEAR_B,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LINEAR_B,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LINEAR_B,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LINEAR_B,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LYCIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CARIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OLD_ITALIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OLD_ITALIC,
		Character$UnicodeScript::GOTHIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OLD_PERMIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::UGARITIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::UGARITIC,
		Character$UnicodeScript::OLD_PERSIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OLD_PERSIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DESERET,
		Character$UnicodeScript::SHAVIAN,
		Character$UnicodeScript::OSMANYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OSMANYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OSAGE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OSAGE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ELBASAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CAUCASIAN_ALBANIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CAUCASIAN_ALBANIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LINEAR_A,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LINEAR_A,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LINEAR_A,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CYPRIOT,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CYPRIOT,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CYPRIOT,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CYPRIOT,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CYPRIOT,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CYPRIOT,
		Character$UnicodeScript::IMPERIAL_ARAMAIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::IMPERIAL_ARAMAIC,
		Character$UnicodeScript::PALMYRENE,
		Character$UnicodeScript::NABATAEAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NABATAEAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HATRAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HATRAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HATRAN,
		Character$UnicodeScript::PHOENICIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::PHOENICIAN,
		Character$UnicodeScript::LYDIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LYDIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MEROITIC_HIEROGLYPHS,
		Character$UnicodeScript::MEROITIC_CURSIVE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MEROITIC_CURSIVE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MEROITIC_CURSIVE,
		Character$UnicodeScript::KHAROSHTHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHAROSHTHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHAROSHTHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHAROSHTHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHAROSHTHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHAROSHTHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHAROSHTHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHAROSHTHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OLD_SOUTH_ARABIAN,
		Character$UnicodeScript::OLD_NORTH_ARABIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MANICHAEAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MANICHAEAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::AVESTAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::AVESTAN,
		Character$UnicodeScript::INSCRIPTIONAL_PARTHIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INSCRIPTIONAL_PARTHIAN,
		Character$UnicodeScript::INSCRIPTIONAL_PAHLAVI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INSCRIPTIONAL_PAHLAVI,
		Character$UnicodeScript::PSALTER_PAHLAVI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::PSALTER_PAHLAVI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::PSALTER_PAHLAVI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OLD_TURKIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OLD_HUNGARIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OLD_HUNGARIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OLD_HUNGARIAN,
		Character$UnicodeScript::HANIFI_ROHINGYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HANIFI_ROHINGYA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::YEZIDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::YEZIDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::YEZIDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::OLD_SOGDIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SOGDIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CHORASMIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ELYMAIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BRAHMI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BRAHMI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BRAHMI,
		Character$UnicodeScript::KAITHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KAITHI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SORA_SOMPENG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SORA_SOMPENG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CHAKMA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CHAKMA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MAHAJANI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SHARADA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SINHALA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHOJKI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHOJKI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MULTANI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MULTANI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MULTANI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MULTANI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MULTANI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHUDAWADI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KHUDAWADI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GRANTHA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NEWA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NEWA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TIRHUTA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TIRHUTA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SIDDHAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SIDDHAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MODI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MODI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MONGOLIAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAKRI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAKRI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::AHOM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::AHOM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::AHOM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DOGRA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::WARANG_CITI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::WARANG_CITI,
		Character$UnicodeScript::DIVES_AKURU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DIVES_AKURU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DIVES_AKURU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DIVES_AKURU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DIVES_AKURU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DIVES_AKURU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DIVES_AKURU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DIVES_AKURU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NANDINAGARI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NANDINAGARI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NANDINAGARI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ZANABAZAR_SQUARE,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SOYOMBO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::PAU_CIN_HAU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BHAIKSUKI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BHAIKSUKI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BHAIKSUKI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BHAIKSUKI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MARCHEN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MARCHEN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MARCHEN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MASARAM_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MASARAM_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MASARAM_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MASARAM_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MASARAM_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MASARAM_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MASARAM_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUNJALA_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUNJALA_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUNJALA_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUNJALA_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUNJALA_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GUNJALA_GONDI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MAKASAR,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::LISU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TAMIL,
		Character$UnicodeScript::CUNEIFORM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CUNEIFORM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CUNEIFORM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::CUNEIFORM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::EGYPTIAN_HIEROGLYPHS,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::EGYPTIAN_HIEROGLYPHS,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ANATOLIAN_HIEROGLYPHS,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BAMUM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MRO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MRO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MRO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BASSA_VAH,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::BASSA_VAH,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::PAHAWH_HMONG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::PAHAWH_HMONG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::PAHAWH_HMONG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::PAHAWH_HMONG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::PAHAWH_HMONG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MEDEFAIDRIN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MIAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MIAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MIAO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TANGUT,
		Character$UnicodeScript::NUSHU,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::KHITAN_SMALL_SCRIPT,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TANGUT,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TANGUT,
		Character$UnicodeScript::KHITAN_SMALL_SCRIPT,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::TANGUT,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KATAKANA,
		Character$UnicodeScript::HIRAGANA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HIRAGANA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::KATAKANA,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NUSHU,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DUPLOYAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DUPLOYAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DUPLOYAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DUPLOYAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::DUPLOYAN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GREEK,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::SIGNWRITING,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SIGNWRITING,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::SIGNWRITING,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GLAGOLITIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GLAGOLITIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GLAGOLITIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GLAGOLITIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::GLAGOLITIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NYIAKENG_PUACHUE_HMONG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NYIAKENG_PUACHUE_HMONG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NYIAKENG_PUACHUE_HMONG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::NYIAKENG_PUACHUE_HMONG,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::WANCHO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::WANCHO,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MENDE_KIKAKUI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::MENDE_KIKAKUI,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ADLAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ADLAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ADLAM,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::ARABIC,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::HIRAGANA,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::HAN,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::COMMON,
		Character$UnicodeScript::UNKNOWN,
		Character$UnicodeScript::INHERITED,
		Character$UnicodeScript::UNKNOWN
	}));
	{
		$assignStatic(Character$UnicodeScript::aliases, $new($HashMap, $cast(int32_t, (157 / 0.75f + 1.0f))));
		$nc(Character$UnicodeScript::aliases)->put("ADLM"_s, Character$UnicodeScript::ADLAM);
		$nc(Character$UnicodeScript::aliases)->put("AGHB"_s, Character$UnicodeScript::CAUCASIAN_ALBANIAN);
		$nc(Character$UnicodeScript::aliases)->put("AHOM"_s, Character$UnicodeScript::AHOM);
		$nc(Character$UnicodeScript::aliases)->put("ARAB"_s, Character$UnicodeScript::ARABIC);
		$nc(Character$UnicodeScript::aliases)->put("ARMI"_s, Character$UnicodeScript::IMPERIAL_ARAMAIC);
		$nc(Character$UnicodeScript::aliases)->put("ARMN"_s, Character$UnicodeScript::ARMENIAN);
		$nc(Character$UnicodeScript::aliases)->put("AVST"_s, Character$UnicodeScript::AVESTAN);
		$nc(Character$UnicodeScript::aliases)->put("BALI"_s, Character$UnicodeScript::BALINESE);
		$nc(Character$UnicodeScript::aliases)->put("BAMU"_s, Character$UnicodeScript::BAMUM);
		$nc(Character$UnicodeScript::aliases)->put("BASS"_s, Character$UnicodeScript::BASSA_VAH);
		$nc(Character$UnicodeScript::aliases)->put("BATK"_s, Character$UnicodeScript::BATAK);
		$nc(Character$UnicodeScript::aliases)->put("BENG"_s, Character$UnicodeScript::BENGALI);
		$nc(Character$UnicodeScript::aliases)->put("BHKS"_s, Character$UnicodeScript::BHAIKSUKI);
		$nc(Character$UnicodeScript::aliases)->put("BOPO"_s, Character$UnicodeScript::BOPOMOFO);
		$nc(Character$UnicodeScript::aliases)->put("BRAH"_s, Character$UnicodeScript::BRAHMI);
		$nc(Character$UnicodeScript::aliases)->put("BRAI"_s, Character$UnicodeScript::BRAILLE);
		$nc(Character$UnicodeScript::aliases)->put("BUGI"_s, Character$UnicodeScript::BUGINESE);
		$nc(Character$UnicodeScript::aliases)->put("BUHD"_s, Character$UnicodeScript::BUHID);
		$nc(Character$UnicodeScript::aliases)->put("CAKM"_s, Character$UnicodeScript::CHAKMA);
		$nc(Character$UnicodeScript::aliases)->put("CANS"_s, Character$UnicodeScript::CANADIAN_ABORIGINAL);
		$nc(Character$UnicodeScript::aliases)->put("CARI"_s, Character$UnicodeScript::CARIAN);
		$nc(Character$UnicodeScript::aliases)->put("CHAM"_s, Character$UnicodeScript::CHAM);
		$nc(Character$UnicodeScript::aliases)->put("CHER"_s, Character$UnicodeScript::CHEROKEE);
		$nc(Character$UnicodeScript::aliases)->put("CHRS"_s, Character$UnicodeScript::CHORASMIAN);
		$nc(Character$UnicodeScript::aliases)->put("COPT"_s, Character$UnicodeScript::COPTIC);
		$nc(Character$UnicodeScript::aliases)->put("CPRT"_s, Character$UnicodeScript::CYPRIOT);
		$nc(Character$UnicodeScript::aliases)->put("CYRL"_s, Character$UnicodeScript::CYRILLIC);
		$nc(Character$UnicodeScript::aliases)->put("DEVA"_s, Character$UnicodeScript::DEVANAGARI);
		$nc(Character$UnicodeScript::aliases)->put("DIAK"_s, Character$UnicodeScript::DIVES_AKURU);
		$nc(Character$UnicodeScript::aliases)->put("DOGR"_s, Character$UnicodeScript::DOGRA);
		$nc(Character$UnicodeScript::aliases)->put("DSRT"_s, Character$UnicodeScript::DESERET);
		$nc(Character$UnicodeScript::aliases)->put("DUPL"_s, Character$UnicodeScript::DUPLOYAN);
		$nc(Character$UnicodeScript::aliases)->put("EGYP"_s, Character$UnicodeScript::EGYPTIAN_HIEROGLYPHS);
		$nc(Character$UnicodeScript::aliases)->put("ELBA"_s, Character$UnicodeScript::ELBASAN);
		$nc(Character$UnicodeScript::aliases)->put("ELYM"_s, Character$UnicodeScript::ELYMAIC);
		$nc(Character$UnicodeScript::aliases)->put("ETHI"_s, Character$UnicodeScript::ETHIOPIC);
		$nc(Character$UnicodeScript::aliases)->put("GEOR"_s, Character$UnicodeScript::GEORGIAN);
		$nc(Character$UnicodeScript::aliases)->put("GLAG"_s, Character$UnicodeScript::GLAGOLITIC);
		$nc(Character$UnicodeScript::aliases)->put("GONM"_s, Character$UnicodeScript::MASARAM_GONDI);
		$nc(Character$UnicodeScript::aliases)->put("GOTH"_s, Character$UnicodeScript::GOTHIC);
		$nc(Character$UnicodeScript::aliases)->put("GONG"_s, Character$UnicodeScript::GUNJALA_GONDI);
		$nc(Character$UnicodeScript::aliases)->put("GRAN"_s, Character$UnicodeScript::GRANTHA);
		$nc(Character$UnicodeScript::aliases)->put("GREK"_s, Character$UnicodeScript::GREEK);
		$nc(Character$UnicodeScript::aliases)->put("GUJR"_s, Character$UnicodeScript::GUJARATI);
		$nc(Character$UnicodeScript::aliases)->put("GURU"_s, Character$UnicodeScript::GURMUKHI);
		$nc(Character$UnicodeScript::aliases)->put("HANG"_s, Character$UnicodeScript::HANGUL);
		$nc(Character$UnicodeScript::aliases)->put("HANI"_s, Character$UnicodeScript::HAN);
		$nc(Character$UnicodeScript::aliases)->put("HANO"_s, Character$UnicodeScript::HANUNOO);
		$nc(Character$UnicodeScript::aliases)->put("HATR"_s, Character$UnicodeScript::HATRAN);
		$nc(Character$UnicodeScript::aliases)->put("HEBR"_s, Character$UnicodeScript::HEBREW);
		$nc(Character$UnicodeScript::aliases)->put("HIRA"_s, Character$UnicodeScript::HIRAGANA);
		$nc(Character$UnicodeScript::aliases)->put("HLUW"_s, Character$UnicodeScript::ANATOLIAN_HIEROGLYPHS);
		$nc(Character$UnicodeScript::aliases)->put("HMNG"_s, Character$UnicodeScript::PAHAWH_HMONG);
		$nc(Character$UnicodeScript::aliases)->put("HMNP"_s, Character$UnicodeScript::NYIAKENG_PUACHUE_HMONG);
		$nc(Character$UnicodeScript::aliases)->put("HUNG"_s, Character$UnicodeScript::OLD_HUNGARIAN);
		$nc(Character$UnicodeScript::aliases)->put("ITAL"_s, Character$UnicodeScript::OLD_ITALIC);
		$nc(Character$UnicodeScript::aliases)->put("JAVA"_s, Character$UnicodeScript::JAVANESE);
		$nc(Character$UnicodeScript::aliases)->put("KALI"_s, Character$UnicodeScript::KAYAH_LI);
		$nc(Character$UnicodeScript::aliases)->put("KANA"_s, Character$UnicodeScript::KATAKANA);
		$nc(Character$UnicodeScript::aliases)->put("KHAR"_s, Character$UnicodeScript::KHAROSHTHI);
		$nc(Character$UnicodeScript::aliases)->put("KHMR"_s, Character$UnicodeScript::KHMER);
		$nc(Character$UnicodeScript::aliases)->put("KHOJ"_s, Character$UnicodeScript::KHOJKI);
		$nc(Character$UnicodeScript::aliases)->put("KITS"_s, Character$UnicodeScript::KHITAN_SMALL_SCRIPT);
		$nc(Character$UnicodeScript::aliases)->put("KNDA"_s, Character$UnicodeScript::KANNADA);
		$nc(Character$UnicodeScript::aliases)->put("KTHI"_s, Character$UnicodeScript::KAITHI);
		$nc(Character$UnicodeScript::aliases)->put("LANA"_s, Character$UnicodeScript::TAI_THAM);
		$nc(Character$UnicodeScript::aliases)->put("LAOO"_s, Character$UnicodeScript::LAO);
		$nc(Character$UnicodeScript::aliases)->put("LATN"_s, Character$UnicodeScript::LATIN);
		$nc(Character$UnicodeScript::aliases)->put("LEPC"_s, Character$UnicodeScript::LEPCHA);
		$nc(Character$UnicodeScript::aliases)->put("LIMB"_s, Character$UnicodeScript::LIMBU);
		$nc(Character$UnicodeScript::aliases)->put("LINA"_s, Character$UnicodeScript::LINEAR_A);
		$nc(Character$UnicodeScript::aliases)->put("LINB"_s, Character$UnicodeScript::LINEAR_B);
		$nc(Character$UnicodeScript::aliases)->put("LISU"_s, Character$UnicodeScript::LISU);
		$nc(Character$UnicodeScript::aliases)->put("LYCI"_s, Character$UnicodeScript::LYCIAN);
		$nc(Character$UnicodeScript::aliases)->put("LYDI"_s, Character$UnicodeScript::LYDIAN);
		$nc(Character$UnicodeScript::aliases)->put("MAHJ"_s, Character$UnicodeScript::MAHAJANI);
		$nc(Character$UnicodeScript::aliases)->put("MAKA"_s, Character$UnicodeScript::MAKASAR);
		$nc(Character$UnicodeScript::aliases)->put("MARC"_s, Character$UnicodeScript::MARCHEN);
		$nc(Character$UnicodeScript::aliases)->put("MAND"_s, Character$UnicodeScript::MANDAIC);
		$nc(Character$UnicodeScript::aliases)->put("MANI"_s, Character$UnicodeScript::MANICHAEAN);
		$nc(Character$UnicodeScript::aliases)->put("MEDF"_s, Character$UnicodeScript::MEDEFAIDRIN);
		$nc(Character$UnicodeScript::aliases)->put("MEND"_s, Character$UnicodeScript::MENDE_KIKAKUI);
		$nc(Character$UnicodeScript::aliases)->put("MERC"_s, Character$UnicodeScript::MEROITIC_CURSIVE);
		$nc(Character$UnicodeScript::aliases)->put("MERO"_s, Character$UnicodeScript::MEROITIC_HIEROGLYPHS);
		$nc(Character$UnicodeScript::aliases)->put("MLYM"_s, Character$UnicodeScript::MALAYALAM);
		$nc(Character$UnicodeScript::aliases)->put("MODI"_s, Character$UnicodeScript::MODI);
		$nc(Character$UnicodeScript::aliases)->put("MONG"_s, Character$UnicodeScript::MONGOLIAN);
		$nc(Character$UnicodeScript::aliases)->put("MROO"_s, Character$UnicodeScript::MRO);
		$nc(Character$UnicodeScript::aliases)->put("MTEI"_s, Character$UnicodeScript::MEETEI_MAYEK);
		$nc(Character$UnicodeScript::aliases)->put("MULT"_s, Character$UnicodeScript::MULTANI);
		$nc(Character$UnicodeScript::aliases)->put("MYMR"_s, Character$UnicodeScript::MYANMAR);
		$nc(Character$UnicodeScript::aliases)->put("NAND"_s, Character$UnicodeScript::NANDINAGARI);
		$nc(Character$UnicodeScript::aliases)->put("NARB"_s, Character$UnicodeScript::OLD_NORTH_ARABIAN);
		$nc(Character$UnicodeScript::aliases)->put("NBAT"_s, Character$UnicodeScript::NABATAEAN);
		$nc(Character$UnicodeScript::aliases)->put("NEWA"_s, Character$UnicodeScript::NEWA);
		$nc(Character$UnicodeScript::aliases)->put("NKOO"_s, Character$UnicodeScript::NKO);
		$nc(Character$UnicodeScript::aliases)->put("NSHU"_s, Character$UnicodeScript::NUSHU);
		$nc(Character$UnicodeScript::aliases)->put("OGAM"_s, Character$UnicodeScript::OGHAM);
		$nc(Character$UnicodeScript::aliases)->put("OLCK"_s, Character$UnicodeScript::OL_CHIKI);
		$nc(Character$UnicodeScript::aliases)->put("ORKH"_s, Character$UnicodeScript::OLD_TURKIC);
		$nc(Character$UnicodeScript::aliases)->put("ORYA"_s, Character$UnicodeScript::ORIYA);
		$nc(Character$UnicodeScript::aliases)->put("OSGE"_s, Character$UnicodeScript::OSAGE);
		$nc(Character$UnicodeScript::aliases)->put("OSMA"_s, Character$UnicodeScript::OSMANYA);
		$nc(Character$UnicodeScript::aliases)->put("PALM"_s, Character$UnicodeScript::PALMYRENE);
		$nc(Character$UnicodeScript::aliases)->put("PAUC"_s, Character$UnicodeScript::PAU_CIN_HAU);
		$nc(Character$UnicodeScript::aliases)->put("PERM"_s, Character$UnicodeScript::OLD_PERMIC);
		$nc(Character$UnicodeScript::aliases)->put("PHAG"_s, Character$UnicodeScript::PHAGS_PA);
		$nc(Character$UnicodeScript::aliases)->put("PHLI"_s, Character$UnicodeScript::INSCRIPTIONAL_PAHLAVI);
		$nc(Character$UnicodeScript::aliases)->put("PHLP"_s, Character$UnicodeScript::PSALTER_PAHLAVI);
		$nc(Character$UnicodeScript::aliases)->put("PHNX"_s, Character$UnicodeScript::PHOENICIAN);
		$nc(Character$UnicodeScript::aliases)->put("PLRD"_s, Character$UnicodeScript::MIAO);
		$nc(Character$UnicodeScript::aliases)->put("PRTI"_s, Character$UnicodeScript::INSCRIPTIONAL_PARTHIAN);
		$nc(Character$UnicodeScript::aliases)->put("RJNG"_s, Character$UnicodeScript::REJANG);
		$nc(Character$UnicodeScript::aliases)->put("ROHG"_s, Character$UnicodeScript::HANIFI_ROHINGYA);
		$nc(Character$UnicodeScript::aliases)->put("RUNR"_s, Character$UnicodeScript::RUNIC);
		$nc(Character$UnicodeScript::aliases)->put("SAMR"_s, Character$UnicodeScript::SAMARITAN);
		$nc(Character$UnicodeScript::aliases)->put("SARB"_s, Character$UnicodeScript::OLD_SOUTH_ARABIAN);
		$nc(Character$UnicodeScript::aliases)->put("SAUR"_s, Character$UnicodeScript::SAURASHTRA);
		$nc(Character$UnicodeScript::aliases)->put("SGNW"_s, Character$UnicodeScript::SIGNWRITING);
		$nc(Character$UnicodeScript::aliases)->put("SHAW"_s, Character$UnicodeScript::SHAVIAN);
		$nc(Character$UnicodeScript::aliases)->put("SHRD"_s, Character$UnicodeScript::SHARADA);
		$nc(Character$UnicodeScript::aliases)->put("SIDD"_s, Character$UnicodeScript::SIDDHAM);
		$nc(Character$UnicodeScript::aliases)->put("SIND"_s, Character$UnicodeScript::KHUDAWADI);
		$nc(Character$UnicodeScript::aliases)->put("SINH"_s, Character$UnicodeScript::SINHALA);
		$nc(Character$UnicodeScript::aliases)->put("SOGD"_s, Character$UnicodeScript::SOGDIAN);
		$nc(Character$UnicodeScript::aliases)->put("SOGO"_s, Character$UnicodeScript::OLD_SOGDIAN);
		$nc(Character$UnicodeScript::aliases)->put("SORA"_s, Character$UnicodeScript::SORA_SOMPENG);
		$nc(Character$UnicodeScript::aliases)->put("SOYO"_s, Character$UnicodeScript::SOYOMBO);
		$nc(Character$UnicodeScript::aliases)->put("SUND"_s, Character$UnicodeScript::SUNDANESE);
		$nc(Character$UnicodeScript::aliases)->put("SYLO"_s, Character$UnicodeScript::SYLOTI_NAGRI);
		$nc(Character$UnicodeScript::aliases)->put("SYRC"_s, Character$UnicodeScript::SYRIAC);
		$nc(Character$UnicodeScript::aliases)->put("TAGB"_s, Character$UnicodeScript::TAGBANWA);
		$nc(Character$UnicodeScript::aliases)->put("TAKR"_s, Character$UnicodeScript::TAKRI);
		$nc(Character$UnicodeScript::aliases)->put("TALE"_s, Character$UnicodeScript::TAI_LE);
		$nc(Character$UnicodeScript::aliases)->put("TALU"_s, Character$UnicodeScript::NEW_TAI_LUE);
		$nc(Character$UnicodeScript::aliases)->put("TAML"_s, Character$UnicodeScript::TAMIL);
		$nc(Character$UnicodeScript::aliases)->put("TANG"_s, Character$UnicodeScript::TANGUT);
		$nc(Character$UnicodeScript::aliases)->put("TAVT"_s, Character$UnicodeScript::TAI_VIET);
		$nc(Character$UnicodeScript::aliases)->put("TELU"_s, Character$UnicodeScript::TELUGU);
		$nc(Character$UnicodeScript::aliases)->put("TFNG"_s, Character$UnicodeScript::TIFINAGH);
		$nc(Character$UnicodeScript::aliases)->put("TGLG"_s, Character$UnicodeScript::TAGALOG);
		$nc(Character$UnicodeScript::aliases)->put("THAA"_s, Character$UnicodeScript::THAANA);
		$nc(Character$UnicodeScript::aliases)->put("THAI"_s, Character$UnicodeScript::THAI);
		$nc(Character$UnicodeScript::aliases)->put("TIBT"_s, Character$UnicodeScript::TIBETAN);
		$nc(Character$UnicodeScript::aliases)->put("TIRH"_s, Character$UnicodeScript::TIRHUTA);
		$nc(Character$UnicodeScript::aliases)->put("UGAR"_s, Character$UnicodeScript::UGARITIC);
		$nc(Character$UnicodeScript::aliases)->put("VAII"_s, Character$UnicodeScript::VAI);
		$nc(Character$UnicodeScript::aliases)->put("WARA"_s, Character$UnicodeScript::WARANG_CITI);
		$nc(Character$UnicodeScript::aliases)->put("WCHO"_s, Character$UnicodeScript::WANCHO);
		$nc(Character$UnicodeScript::aliases)->put("XPEO"_s, Character$UnicodeScript::OLD_PERSIAN);
		$nc(Character$UnicodeScript::aliases)->put("XSUX"_s, Character$UnicodeScript::CUNEIFORM);
		$nc(Character$UnicodeScript::aliases)->put("YIII"_s, Character$UnicodeScript::YI);
		$nc(Character$UnicodeScript::aliases)->put("YEZI"_s, Character$UnicodeScript::YEZIDI);
		$nc(Character$UnicodeScript::aliases)->put("ZANB"_s, Character$UnicodeScript::ZANABAZAR_SQUARE);
		$nc(Character$UnicodeScript::aliases)->put("ZINH"_s, Character$UnicodeScript::INHERITED);
		$nc(Character$UnicodeScript::aliases)->put("ZYYY"_s, Character$UnicodeScript::COMMON);
		$nc(Character$UnicodeScript::aliases)->put("ZZZZ"_s, Character$UnicodeScript::UNKNOWN);
	}
}

Character$UnicodeScript::Character$UnicodeScript() {
}

$Class* Character$UnicodeScript::load$($String* name, bool initialize) {
	$loadClass(Character$UnicodeScript, name, initialize, &_Character$UnicodeScript_ClassInfo_, clinit$Character$UnicodeScript, allocate$Character$UnicodeScript);
	return class$;
}

$Class* Character$UnicodeScript::class$ = nullptr;

	} // lang
} // java