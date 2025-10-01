#include <sun/util/resources/cldr/LocaleNames_en.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

$MethodInfo _LocaleNames_en_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_en::*)()>(&LocaleNames_en::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_en_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.LocaleNames_en",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_en_MethodInfo_
};

$Object* allocate$LocaleNames_en($Class* clazz) {
	return $of($alloc(LocaleNames_en));
}

void LocaleNames_en::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en::getContents() {
	$var($String, metaValue_NR, "Nauru"_s);
	$var($String, metaValue_TK, "Tokelau"_s);
	$var($String, metaValue_TV, "Tuvalu"_s);
	$var($String, metaValue_ae, "Avestan"_s);
	$var($String, metaValue_ar, "Arabic"_s);
	$var($String, metaValue_bn, "Bangla"_s);
	$var($String, metaValue_bo, "Tibetan"_s);
	$var($String, metaValue_el, "Greek"_s);
	$var($String, metaValue_gu, "Gujarati"_s);
	$var($String, metaValue_he, "Hebrew"_s);
	$var($String, metaValue_hy, "Armenian"_s);
	$var($String, metaValue_ja, "Japanese"_s);
	$var($String, metaValue_jv, "Javanese"_s);
	$var($String, metaValue_ka, "Georgian"_s);
	$var($String, metaValue_km, "Khmer"_s);
	$var($String, metaValue_kn, "Kannada"_s);
	$var($String, metaValue_ko, "Korean"_s);
	$var($String, metaValue_la, "Latin"_s);
	$var($String, metaValue_lo, "Lao"_s);
	$var($String, metaValue_ml, "Malayalam"_s);
	$var($String, metaValue_mn, "Mongolian"_s);
	$var($String, metaValue_or, "Odia"_s);
	$var($String, metaValue_si, "Sinhala"_s);
	$var($String, metaValue_su, "Sundanese"_s);
	$var($String, metaValue_ta, "Tamil"_s);
	$var($String, metaValue_te, "Telugu"_s);
	$var($String, metaValue_th, "Thai"_s);
	$var($String, metaValue_tl, "Tagalog"_s);
	$var($String, metaValue_ban, "Balinese"_s);
	$var($String, metaValue_bug, "Buginese"_s);
	$var($String, metaValue_ccp, "Chakma"_s);
	$var($String, metaValue_chr, "Cherokee"_s);
	$var($String, metaValue_cop, "Coptic"_s);
	$var($String, metaValue_got, "Gothic"_s);
	$var($String, metaValue_kpe, "Kpelle"_s);
	$var($String, metaValue_mak, "Makasar"_s);
	$var($String, metaValue_men, "Mende"_s);
	$var($String, metaValue_nqo, u"N\u2019Ko"_s);
	$var($String, metaValue_osa, "Osage"_s);
	$var($String, metaValue_peo, "Old Persian"_s);
	$var($String, metaValue_phn, "Phoenician"_s);
	$var($String, metaValue_saz, "Saurashtra"_s);
	$var($String, metaValue_ssy, "Saho"_s);
	$var($String, metaValue_syr, "Syriac"_s);
	$var($String, metaValue_uga, "Ugaritic"_s);
	$var($String, metaValue_vai, "Vai"_s);
	$var($String, metaValue_zbl, "Blissymbols"_s);
	$var($String, metaValue_key_cu, "Currency"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("Colognian"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandese"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Symbols"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("Atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.kr.punct"_s),
			$of("Punctuation"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of("Tai Tham Tham Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of("Emilian"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("Mentawai"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("Tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("Gniva/Njiva dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("Mingrelian"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("key.ss"_s),
			$of("Sentence Break Suppressions Type"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("Ancient Egyptian"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("Rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("Timne"_s)
		}),
		$$new($ObjectArray, {
			$of("key.sd"_s),
			$of("Region Subdivision"_s)
		}),
		$$new($ObjectArray, {
			$of("Medf"_s),
			$of("Medefaidrin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of("Khudawadi Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("Teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("Rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("Tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension Island"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotongan"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of("Barlavento dialect group of Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of("Sinhala Lith Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("United Arab Emirates"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("Flemish"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua & Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of("Mro Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Ethiopic Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("Gilaki"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Time Zone"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.lt1205"_s),
			$of("Lithuanian LST 1205 Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("Tengwar"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarctica"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Inscriptional Parthian"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("American Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("American English"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"\u00c5land Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("Myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("Eastern Armenian"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia & Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgium"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("Middle High German"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of("Old Sogdian"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"St. Barth\u00e9lemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("Kutenai"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Caribbean Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("key.s0"_s),
			$of("Transform Source"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvet Island"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("Visible Speech"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("Persian Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Hebrew Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kits"_s),
			$of("Khitan small script"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Cocos (Keeling) Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo - Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ss.standard"_s),
			$of("Suppress Sentence Breaks After Standard Abbreviations"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Central African Republic"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Congo - Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"C\u00f4te d\u2019Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cook Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("Kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Cameroon"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Colombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton Island"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Cura\u00e7ao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Christmas Island"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Cyprus"_s)
		}),
		$$new($ObjectArray, {
			$of("key.t0"_s),
			$of("Machine Translated"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("Balinese Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Czechia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.xml"_s),
			$of("Hex transform using XML syntax"_s)
		}),
		$$new($ObjectArray, {
			$of("key.rg"_s),
			$of("Region For Supplemental Data"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("Pau Cin Hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of("West Flemish"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"Classic Volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of("Sogdian"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Germany"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("Old High German"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Achinese"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of("Goan Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Devanagari Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("type.i0.pinyin"_s),
			$of("Pinyin Input Method"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("Armenian Lowercase Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominican Republic"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of("Main-Franconian"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Meitei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.iso"_s),
			$of("ISO Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.gost"_s),
			$of("CIS GOST Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("To Halfwidth"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta & Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("Chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("Papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Western Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("Palauan"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Chuukese"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("Chinook Jargon"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("Chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("Choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of("Mathematical Bold Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spain"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("European Union"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamite"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Gregorian Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Eurozone"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Gujarati Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.600dpi"_s),
			$of("600 dpi Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("cic"_s),
			$of("Chickasaw"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of("Tunisian Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falkland Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Micronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Locale Variant"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Faroe Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("France"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("Picard"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of("Dajnko alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Indian National Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("Romagnol"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Ancient Greek"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("Tsakhur"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Votic"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("United Kingdom"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Nigerian Pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("type.i0.wubi"_s),
			$of("Wubi Input Method"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("French Guiana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("Tai Le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("Afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Middle English"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Equatorial Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Greece"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("South Georgia & South Sandwich Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of("Pennsylvania German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.colemak"_s),
			$of("Colemak Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of("Mathematical Monospace Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("Tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("New Tai Lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.nutaaq"_s),
			$of("Inuktitut Nutaaq Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("key.x0"_s),
			$of("Private-Use Transform"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("Central Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("No linguistic content"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("Jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of("Talysh"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("Plautdietsch"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("Austrian German"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Heard & McDonald Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Swiss German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("Islamic Calendar (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("Riffian"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("Tamashek"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanyear"_s),
			$of("Japanese Calendar Gannen Year Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Canary Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of("Min Nan Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of("Adlam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("Kayah Li Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Neapolitan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("Ndyuka dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of("Sora Sompeng Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("Tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("Nabataean"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of("European Ordering Rules"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("British Indian Ocean Territory"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italy"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Mathematical Notation"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Thai Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.osx"_s),
			$of("macOS Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"V\u00f5ro"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of("Wayuu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Computer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Bangla Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of("Palatine German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.fw.thu"_s),
			$of("First Day of Week Is Thursday"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of("Cyrillic Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Islamic Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.perl"_s),
			$of("Hex transform using Perl syntax"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of("Serbian with Ekavian pronunciation"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("Frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("Late Middle French to 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("Nyasa Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Kannada Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("Siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("Swiss High German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of("Phonetic Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of("Ingrian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Buddhist Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latin America"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kyrgyzstan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Cambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Comoros"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("St. Kitts & Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("Inherited"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("Canadian French"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("North Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("South Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollard Phonetic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.h0.hybrid"_s),
			$of("Hybrid"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("Swiss French"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Cayman Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cyrillic"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lebanon"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("St. Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("Old Church Slavonic Cyrillic"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Gwich\u02bcin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Low German"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("Akkadian"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("Hmnp"_s),
			$of("Nyiakeng Puachue Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of("Central Yupik"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("Book Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lithuania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("Ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of("Alabama"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("Lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("Mahajani"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("Langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Morocco"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"N\u00fcshu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("St. Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("Lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshall Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Vai Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("North Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of("Mathematical Double-Struck Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Burma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Macao SAR China"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of("Gheg Albanian"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Northern Mariana Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("Chrs"_s),
			$of("Chorasmian"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of("Capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UN GEGN Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("Southern Altai"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldives"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Japanese Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Inscriptional Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Sub-Saharan Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Hebrew Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Dictionary Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("New Caledonia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles Romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.ascii"_s),
			$of("To ASCII"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("Turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("Unified Revised Orthography"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk Island"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("Taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Psalter Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norway"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.java"_s),
			$of("Hex transform using Java syntax"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of("Tsakonian"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("Tsimshian"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("Meroitic Cursive"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of("Portuguese-Brazilian Orthographic Convention of 1945"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romany"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.ta99"_s),
			$of("Tamil 99 Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.c11"_s),
			$of("Hex transform using C11 syntax"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Crimean Turkish"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Old English"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("Seselwa Creole French"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of("Nyiakeng Puachue Hmong Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of("Pahawh Hmong Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("sr_ME"_s),
			$of("Montenegrin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Islamic Calendar (tabular, civil epoch)"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kashubian"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("British English"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of("Muslim Tat"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("French Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua New Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Philippines"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.casefold"_s),
			$of("To Casefolded"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.charname"_s),
			$of("To Unicode Character Names"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poland"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("St. Pierre & Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palestinian Territories"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("Greek Lowercase Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.768dpi"_s),
			$of("768 dpi Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("Scottish Standard English"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of("Jamaican Creole English"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("Piedmontese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.zawgyi"_s),
			$of("To Zawgyi Myanmar Encoding"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niuean"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Outlying Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("Extremaduran"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lezghian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of("Ahom Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA Phonetics"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("Takri Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai Viet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of("Sotavento dialect group of Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Maka"_s),
			$of(metaValue_mak)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("world"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("Ao Naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("North America"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("South America"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of("Lingua Franca Nova"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of("Pontic"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("Elym"_s),
			$of("Elymaic"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of("New Tai Lue Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("Metelko alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("Manichaean"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Pohnpeian"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("Mandaean"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Solomon Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Western Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Central America"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Sweden"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Eastern Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Northern Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Strict Line Break Style"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Middle Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of("Myanmar Tai Laing Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Southern Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard & Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Americas"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("Woleai"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("Mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("Traditional Tamil Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of("Araona"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("South Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"S\u00e3o Tom\u00e9 & Pr\u00edncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of("Algerian Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Najdi Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("Yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of("Egyptian Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of("Moroccan Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("Yapese"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("Rotuman"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("US Measurement System"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Northern America"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks & Caicos Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("French Southern Territories"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of("American Sign Language"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailand"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(metaValue_TK)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Caribbean"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.satts"_s),
			$of("Standard Arabic Technical Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Search By Hangul Initial Consonant"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"Modern Volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.nfkc"_s),
			$of("To Unicode NFKC"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.nfkd"_s),
			$of("To Unicode NFKD"_s)
		}),
		$$new($ObjectArray, {
			$of("type.em.emoji"_s),
			$of("Prefer Emoji Presentation For Emoji Characters"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.101key"_s),
			$of("101-Key Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad & Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("type.d0.remove"_s),
			$of("To Empty String"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Asturian"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("Rusyn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.dvorakl"_s),
			$of("Dvorak Left-Handed Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("Roviana"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.dvorakr"_s),
			$of("Dvorak Right-Handed Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Unknown Script"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("Ligurian"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromanian"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Eastern Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.adlm"_s),
			$of("Adlam Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuvinian"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("Congo Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Southern Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Southeast Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of("Hakka Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinyin Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Southern Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("U.S. Outlying Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("Livonian"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("United Nations"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("United States"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.kr.symbol"_s),
			$of("Symbol"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Academic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Simplified Chinese Sort Order - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Prussian"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Central Atlas Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Stroke Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatican City"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"Old Proven\u00e7al"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St. Vincent & Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.unicode"_s),
			$of("Hex transform using Unicode syntax"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("British Virgin Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.patta"_s),
			$of("Thai Pattachote Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("U.S. Virgin Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("Soyo"_s),
			$of("Soyombo"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("Marc"_s),
			$of("Marchen"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("Nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("Old Norse"_s)
		}),
		$$new($ObjectArray, {
			$of("type.fw.sun"_s),
			$of("First Day of Week Is Sunday"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("Western Armenian"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis & Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Traditional Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Micronesian Region"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("Ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.alaloc"_s),
			$of("US ALA-LOC Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("Lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of("Novial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of("Financial Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("Kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of("Hepburn romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of("Previous Sort Order, for compatibility"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of("Meetei Mayek Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Wolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("Washo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.s0.npinyin"_s),
			$of("From Pinyin With Numeric Tones"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Pseudo-Accents"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.kv.punct"_s),
			$of("Ignore Symbols affects spaces and punctuation only"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of("Standard Orthography"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.segment"_s),
			$of("Segmented Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of("Brahmi Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Unwritten"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("Warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Standard Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of("Lombard"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.dvorak"_s),
			$of("Dvorak Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("Zanb"_s),
			$of("Zanabazar Square"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of("Balanka dialect of Anii"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.und"_s),
			$of("Unspecified Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("type.kv.space"_s),
			$of("Ignore Symbols affects spaces only"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("SignWriting"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of("Cham Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.mns"_s),
			$of("Mongolian National Standard Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.plain"_s),
			$of("Hex transform with no surrounding syntax"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("South Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of("Sundanese Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Loose Line Break Style"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Georgian Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("Zhuyin Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.percent"_s),
			$of("Hex transform using percent syntax"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of("Pinyin Romanization"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Unknown Region"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("Runic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Metric System"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601 Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Northern Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Telugu Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.isiri"_s),
			$of("Persian ISIRI Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("Louisiana Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Naxi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.kr.digit"_s),
			$of("Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lw.normal"_s),
			$of("Normal Line Breaks For Words"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of("Fiji Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("Simplified Chinese Financial Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Extended Arabic-Indic Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.fw.mon"_s),
			$of("First Day of Week Is Monday"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.el319"_s),
			$of("Greek 319 Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("Full-Width Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hittite"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("Mayan hieroglyphs"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.viqr"_s),
			$of("Vietnamese VIQR Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Northern Luri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.kr.space"_s),
			$of("Whitespace"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of("Emoji Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Classical Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ss.none"_s),
			$of("Sentence Breaks Without Abbreviation Handling"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("Islamic Calendar (Saudi Arabia, sighting)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Roman Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of("Sharada Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("Latgalian"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Samaritan Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("Caucasian Albanian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Scouse"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("Sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("Judeo-Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("To Pinyin With Numeric Tones"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Native Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("Ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("Aluku dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.null"_s),
			$of("No Change"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.diak"_s),
			$of("Dives Akuru Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.kv.currency"_s),
			$of("Ignore Symbols affects spaces, punctuation, all symbols"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of("Tirhuta Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("To Fullwidth"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("Luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("Nyamwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("Nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Baluchi"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slave"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of("Warang Citi Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of("Tornedalen Finnish"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("Bavarian"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("Bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ABL1943"_s),
			$of("Orthographic formulation of 1943"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("Judeo-Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("European Spanish"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Scots"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sicilian"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abkhazian"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("Nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("Batak Toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.el220"_s),
			$of("Greek 220 Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of("Chakma Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("Ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharic"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonese"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("Stolvizza/Solbica dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("Japanese syllabaries"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assamese"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("Sassarese Sardinian"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avaric"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("Southern Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("Rohg"_s),
			$of("Hanifi Rohingya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.va.posix"_s),
			$of("POSIX Compliant Locale"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Oseacco/Osojane dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of("Unifon phonetic alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Radical-Stroke Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarusian"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgarian"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of("Javanese Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnian"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of("Bhaiksuki"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("Seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.fw.sat"_s),
			$of("First Day of Week Is Saturday"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.lt1582"_s),
			$of("Lithuanian LST 1582 Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("Seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("Lao Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.chromeos"_s),
			$of("ChromeOS Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("Revised Orthography"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Corsican"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Czech"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Church Slavic"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("Nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Welsh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Ethiopic Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.lower"_s),
			$of("To Lowercase"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Danish"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("European Portuguese"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Standard Currency Format"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Beja"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of("Jutish"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("type.m0.din"_s),
			$of("German DIN Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.s0.hex"_s),
			$of("From Hexadecimal Codes"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Old Irish"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Mongolian Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Latin American Spanish"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("Betawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("Chinese Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of("Literary Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of("Samogitian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Greek Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.buckwalt"_s),
			$of("Buckwalter Arabic Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("Bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("Normal Line Break Style"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldavian"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("type.m0.iast"_s),
			$of("International Alphabet of Sanskrit Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("English"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.newa"_s),
			$of("Newa Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of("Badaga"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of("Laz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Traditional Chinese Sort Order - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanish"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estonian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han with Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Basque"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("Samaritan"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Tachelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Upper Sorbian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Simplified"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Western Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Traditional"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of("Chadian Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of("Xiang Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Finnish"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fijian"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Western Balochi"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Cantonese"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Faroese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("US BGN Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("French"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.azerty"_s),
			$of("AZERTY-Based Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Western Frisian"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Irish"_s)
		}),
		$$new($ObjectArray, {
			$of("Wcho"_s),
			$of("Wancho"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Scottish Gaelic"_s)
		}),
		$$new($ObjectArray, {
			$of("Gong"_s),
			$of("Gunjala Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.nfc"_s),
			$of("To Unicode NFC"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.nfd"_s),
			$of("To Unicode NFD"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galician"_s)
		}),
		$$new($ObjectArray, {
			$of("Gonm"_s),
			$of("Masaram Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Unknown language"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Ethiopic Amete Alem Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("Islamic Calendar (tabular, astronomical epoch)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of("Osmanya Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fcc"_s),
			$of("To Unicode FCC"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("Bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fcd"_s),
			$of("To Unicode FCD"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("Hiri Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Croatian"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haitian Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Hungarian"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("Cajun French"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("IPA Phonetics"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("Jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonesian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Tibetan Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Sichuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("Middle French"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of("Portuguese Language Orthographic Agreement of 1990"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("Old French"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("Arpitan"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Eastern Frisian"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("Banjar"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Northern Frisian"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("Icelandic"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italian"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of("Lower Silesian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.legacy"_s),
			$of("Legacy Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of("Old South Arabian"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("Dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of("Selayar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of("Lepcha Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("Kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Southern Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("type.t0.und"_s),
			$of("Unspecified Machine Translation"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shavian"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Madurese"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lule Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inari Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(metaValue_mak)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of("Wu Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Skolt Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Masai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.s0.zawgyi"_s),
			$of("From Zawgyi Myanmar Encoding"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("Cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Cornish"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kyrgyz"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hex"_s),
			$of("To Hexadecimal Codes"_s)
		}),
		$$new($ObjectArray, {
			$of("type.s0.ascii"_s),
			$of("From ASCII"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of("Multani"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of("Hatran"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luxembourgish"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Malayalam Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgish"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ewts"_s),
			$of("Extended Wylie Transliteration Scheme"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friulian"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Imperial Measurement System"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("Tai Tham Hora Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lithuanian"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Latvian"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lw.keepall"_s),
			$of("Prevent Line Breaks In All Words"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marshallese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.fw.fri"_s),
			$of("First Day of Week Is Friday"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Default Unicode Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Macedonian"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malay"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.kv.symbol"_s),
			$of("Ignore Symbols affects spaces, punctuation, non-currency symbols"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidays"_s),
			$of("Chinese Calendar Day-of-Month Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Burmese"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("Maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Lower Sorbian"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("Imperial Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("General-Purpose Search"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norwegian Bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("North Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.mcst"_s),
			$of("Korean MCST Transliteration"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.title"_s),
			$of("To Titlecase"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Dutch"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Norwegian Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Norwegian"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("South Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of("Modi Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Kara-Kalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("Kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Polytonic"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Occitan"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("Jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of("Early Modern English"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("Armenian Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.i0.handwrit"_s),
			$of("Handwriting Input Method"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("Kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of("Central Dusun"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of("Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of("ALA-LC Romanization, 1997 edition"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("Bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardian"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Sranan Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("Serer"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("The Lipovaz dialect of Resian"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("Kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of("Bakhtiari"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polish"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("Middle Dutch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of("Saurashtra Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Dangi Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.prprname"_s),
			$of("Personal name transliteration variant"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portuguese"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Middle Irish"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Brazilian Portuguese"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"Bohori\u010d alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("Tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Makhuwa-Meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Currency Format"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"N\u2019Ko Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Meta\u02bc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 Hour System (0\u201323)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.css"_s),
			$of("Hex transform using CSS syntax"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.publish"_s),
			$of("To Publishing Characters From ASCII"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 Hour System (1\u201324)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("Brahui"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Myanmar Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotec"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("Bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("Makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of("Saterland Frisian"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("Ethiopic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 Hour System (1\u201312)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 Hour System (0\u201311)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bhks"_s),
			$of("Bhaiksuki Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Romansh"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(metaValue_key_cu)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Romanian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.em.text"_s),
			$of("Prefer Text Presentation For Emoji Characters"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Odia Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Chinese Decimal Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russian"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("Akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Mi\'kmaq"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("Australian English"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of("Duployan shorthand"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("Unified Orthography"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardinian"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.kr.currency"_s),
			$of(metaValue_key_cu)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Northern Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("Serbo-Croatian"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("Kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("Sumerian"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slovak"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Slovenian"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("Arabic-Indic Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albanian"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serbian"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Accounting Currency Format"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Southern Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Natisone dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Swedish"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of("Wancho Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("key.d0"_s),
			$of("Transform Destination"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("Traditional Chinese Financial Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("Ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("Iban"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lw.breakall"_s),
			$of("Allow Line Breaks In All Words"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Central Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.s0.publish"_s),
			$of("From Publishing Punctuation To ASCII"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Western Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tajik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("Canadian English"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmen"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tongan"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("Bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("Japanese Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Turkish"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("Comorian"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Tahitian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("San Giorgio/Bila dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("key.i0"_s),
			$of("Input Method"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Eastern Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.rohg"_s),
			$of("Hanifi Rohingya digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of("Mathematical Sans-Serif Bold Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Northern Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Western Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uyghur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Old Italic"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("Kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Common"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukrainian"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of("Zeelandic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Coptic Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.fw"_s),
			$of("First day of week"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("Standardized Resian orthography"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("Kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("German orthography of 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("Low Saxon"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Varang Kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Minguo Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamese"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Khotanese"_s)
		}),
		$$new($ObjectArray, {
			$of("type.fw.tue"_s),
			$of("First Day of Week Is Tuesday"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Hour Cycle (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("Taraskievica orthography"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of("Khowar"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("Classical Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of("Mathematical Sans-Serif Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.android"_s),
			$of("Android Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"K\u02bciche\u02bc"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.windows"_s),
			$of("Windows Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of("Masaram Gondi digits"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of("Chimborazo Highland Quichua"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of("Newa"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("key.em"_s),
			$of("Emoji Presentation Style"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("Gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of("Gunjala Gondi digits"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("Gan Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of("Kirmanjki"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydian"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("Sumero-Akkadian Cuneiform"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Standard Moroccan Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("Modern Standard Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("Unified Canadian Aboriginal Syllabics"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.var"_s),
			$of("Keyboard Variant"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("Gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.dx"_s),
			$of("Dictionary Break Exclusions"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("type.k0.102key"_s),
			$of("102-Key Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("Manchu"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Fraktur Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Silesian"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("Anatolian Hieroglyphs"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("key.h0"_s),
			$of("Mixed-in"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("Gaelic Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Nand"_s),
			$of("Nandinagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("Simplified Chinese Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Traditional Chinese Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.accents"_s),
			$of("To Accented Characters From ASCII Sequence"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("Roman Lowercase Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Dogr"_s),
			$of("Dogra"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of("Pamaka dialect"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("Lycian"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("Medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of("Zoroastrian Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("Moon"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("key.kv"_s),
			$of("Highest Ignored"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("Early Modern French"_s)
		}),
		$$new($ObjectArray, {
			$of("key.m0"_s),
			$of("Transform Rules"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Traditional Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("Mexican Spanish"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("Western Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.qwerty"_s),
			$of("QWERTY-Based Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.qwertz"_s),
			$of("QWERTZ-Based Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("Ottoman Turkish"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("Estrangelo Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lw"_s),
			$of("Line Breaks In Words Setting"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Carian"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("Afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Old Permic"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Line Break Style"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Phonebook Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Monotonic"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.em.default"_s),
			$of("Use Default Presentation For Emoji Characters"_s)
		}),
		$$new($ObjectArray, {
			$of("key.k0"_s),
			$of("Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("Japanese Financial Numerals"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.upper"_s),
			$of("To Uppercase"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.xml10"_s),
			$of("Hex transform using XML decimal syntax"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of("Western Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("Eastern Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("Myanmar Shan Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Old North Arabian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("Ol Chiki Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Reformed Sort Order"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("type.k0.googlevk"_s),
			$of("Google Virtual Keyboard"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of("Egyptian demotic"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("Egyptian hieratic"_s)
		}),
		$$new($ObjectArray, {
			$of("Yezi"_s),
			$of("Yezidi"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmyrene"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("Egyptian hieroglyphs"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("Georgian Khutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("Simplified Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("Komi-Permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Old Hungarian"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("Traditional German orthography"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosraean"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of("Venetian"_s)
		}),
		$$new($ObjectArray, {
			$of("type.s0.accents"_s),
			$of("From Accented Characters To ASCII Sequence"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("Limbu Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Traditional Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("Veps"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Khmer Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Valencian"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Cypriot"_s)
		}),
		$$new($ObjectArray, {
			$of("Diak"_s),
			$of("Dives Akuru"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("Unified Turkic Latin Alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of("Serbian with Ijekavian pronunciation"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Gurmukhi Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("type.k0.extended"_s),
			$of("Keyboard With Many Extra Characters"_s)
		}),
		$$new($ObjectArray, {
			$of("type.fw.wed"_s),
			$of("First Day of Week Is Wednesday"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.digit"_s),
			$of("To Digit Form Of Accent"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Multiple languages"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Measurement System"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Muscogee"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitic"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertese"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("Common Orthography"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Carib"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("Cayuga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Tamil Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karachay-Balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Ingush"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of("Kinaray-a"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("Krio"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("Dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Karelian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of("Oxford English Dictionary spelling"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("Tulu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Numbers"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("type.i0.und"_s),
			$of("Unspecified Input Method"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("Bafia"_s)
		})
	}));
	return data;
}

LocaleNames_en::LocaleNames_en() {
}

$Class* LocaleNames_en::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_en, name, initialize, &_LocaleNames_en_ClassInfo_, allocate$LocaleNames_en);
	return class$;
}

$Class* LocaleNames_en::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun