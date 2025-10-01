#include <sun/util/resources/LocaleNames.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _LocaleNames_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames::*)()>(&LocaleNames::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.LocaleNames",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_MethodInfo_
};

$Object* allocate$LocaleNames($Class* clazz) {
	return $of($alloc(LocaleNames));
}

void LocaleNames::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("%%B"_s),
			$of(u"Bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EURO"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NY"_s),
			$of("Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("World"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("North America"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("South America"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Oceania"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Western Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Central America"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Eastern Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Northern Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Middle Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Southern Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Americas"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Northern America"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Caribbean"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Eastern Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Southern Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Southeast Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Southern Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasia"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesia"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Micronesian Region"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polynesia"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Central Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Western Asia"_s)
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
			$of("154"_s),
			$of("Northern Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Western Europe"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latin America"_s)
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
			$of("AF"_s),
			$of("Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua & Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
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
			$of("AN"_s),
			$of("Netherlands Antilles"_s)
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
			$of("AX"_s),
			$of(u"\u00c5land Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("Imperial Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("Armenian"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("Avestan"_s)
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
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgium"_s)
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
			$of("Bali"_s),
			$of("Balinese"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("Bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of("Blissymbols"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("Buginese"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Cocos (Keeling) Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Congo - Kinshasa"_s)
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
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of("Serbia and Montenegro"_s)
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
			$of("CZ"_s),
			$of("Czechia"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of("Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("Unified Canadian Aboriginal Syllabics"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Carian"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("Cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("Cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("Coptic"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Cypriot"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Cyrillic"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("Old Church Slavonic Cyrillic"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Germany"_s)
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
			$of("DM"_s),
			$of("Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominican Republic"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("DisplayNamePattern"_s),
			$of("{0,choice,0#|1#{1}|2#{1} ({2})}"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of("Duployan shorthand"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonia"_s)
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
			$of("Egyd"_s),
			$of("Egyptian demotic"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of("Egyptian hieratic"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("Egyptian hieroglyphs"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("Ethiopic"_s)
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
			$of("FO"_s),
			$of("Faroe Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("France"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("United Kingdom"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
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
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Greenland"_s)
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
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("Georgian Khutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("Georgian"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitic"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("Gothic"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("Greek"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmukhi"_s)
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
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Han"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Simplified"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Traditional"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of("Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("Japanese syllabaries"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Old Hungarian"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
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
			$of("Inds"_s),
			$of("Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Old Italic"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("Javanese"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
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
			$of("KN"_s),
			$of("St. Kitts & Nevis"_s)
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
			$of("KW"_s),
			$of("Kuwait"_s)
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
			$of("Kali"_s),
			$of("Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("Korean"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of("Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("Kaithi"_s)
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
			$of("LC"_s),
			$of("St. Lucia"_s)
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
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
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
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Fraktur Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("Gaelic Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of("{0},{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of("{0}:{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("Lycian"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydian"_s)
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
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("St. Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshall Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("North Macedonia"_s)
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
			$of("MO"_s),
			$of("Macao SAR China"_s)
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
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
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
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("Mandaean"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("Manichaean"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("Mayan hieroglyphs"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("Meroitic Cursive"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitic"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("Mongolian"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("Moon"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Meitei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("New Caledonia"_s)
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
			$of("NI"_s),
			$of("Nicaragua"_s)
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
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Old North Arabian"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("Nabataean"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Naxi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"N\u2019Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
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
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poland"_s)
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
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmyrene"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Old Permic"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Inscriptional Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Psalter Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("Book Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of("Phoenician"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollard Phonetic"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Inscriptional Parthian"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"R\u00e9union"_s)
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
			$of("RU"_s),
			$of("Russia"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("Runic"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Solomon Islands"_s)
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
			$of("SE"_s),
			$of("Sweden"_s)
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
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard & Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
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
			$of("SR"_s),
			$of("Suriname"_s)
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
			$of("SV"_s),
			$of("El Salvador"_s)
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
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("Samaritan"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of("Old South Arabian"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("SignWriting"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shavian"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("Sundanese"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("Estrangelo Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("Western Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("Eastern Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks & Caicos Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("French Southern Territories"_s)
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
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
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
			$of("TR"_s),
			$of("Turkey"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad & Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("Tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("Tai Le"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("New Tai Lue"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai Viet"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("Tengwar"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("Tibetan"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("U.S. Outlying Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("United States"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("Ugaritic"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatican City"_s)
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
			$of("VG"_s),
			$of("British Virgin Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("U.S. Virgin Islands"_s)
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
			$of("Vaii"_s),
			$of("Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("Visible Speech"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis & Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Varang Kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("Old Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("Sumero-Akkadian Cuneiform"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("South Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("Inherited"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Mathematical Notation"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Symbols"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Unwritten"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Common"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Unknown Script"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("aar"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abkhazian"_s)
		}),
		$$new($ObjectArray, {
			$of("abk"_s),
			$of("Abkhazian"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Achinese"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adyghe"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("Avestan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of("Afro-Asiatic"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("Afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("afr"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("aka"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("Akkadian"_s)
		}),
		$$new($ObjectArray, {
			$of("alb"_s),
			$of("Albanian"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("alg"_s),
			$of("Algonquian"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("Southern Altai"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharic"_s)
		}),
		$$new($ObjectArray, {
			$of("amh"_s),
			$of("Amharic"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonese"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Old English"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("apa"_s),
			$of("Apache"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("arg"_s),
			$of("Aragonese"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of("Armenian"_s)
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
			$of("art"_s),
			$of("Artificial"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assamese"_s)
		}),
		$$new($ObjectArray, {
			$of("asm"_s),
			$of("Assamese"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Asturian"_s)
		}),
		$$new($ObjectArray, {
			$of("ath"_s),
			$of("Athapascan"_s)
		}),
		$$new($ObjectArray, {
			$of("aus"_s),
			$of("Australian"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avaric"_s)
		}),
		$$new($ObjectArray, {
			$of("ava"_s),
			$of("Avaric"_s)
		}),
		$$new($ObjectArray, {
			$of("ave"_s),
			$of("Avestan"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("aym"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("aze"_s),
			$of("Azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("Banda"_s)
		}),
		$$new($ObjectArray, {
			$of("bai"_s),
			$of("Bamileke"_s)
		}),
		$$new($ObjectArray, {
			$of("bak"_s),
			$of("Bashkir"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Baluchi"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("Balinese"_s)
		}),
		$$new($ObjectArray, {
			$of("baq"_s),
			$of("Basque"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("bat"_s),
			$of("Baltic"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarusian"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Beja"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Belarusian"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("ben"_s),
			$of("Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("ber"_s),
			$of("Berber"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgarian"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of("Bihari"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bih"_s),
			$of("Bihari"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("Bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("bis"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("bnt"_s),
			$of("Bantu"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibetan"_s)
		}),
		$$new($ObjectArray, {
			$of("bos"_s),
			$of("Bosnian"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of("Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnian"_s)
		}),
		$$new($ObjectArray, {
			$of("btk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Buriat"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Buginese"_s)
		}),
		$$new($ObjectArray, {
			$of("bul"_s),
			$of("Bulgarian"_s)
		}),
		$$new($ObjectArray, {
			$of("bur"_s),
			$of("Burmese"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("cai"_s),
			$of("Central American Indian"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Carib"_s)
		}),
		$$new($ObjectArray, {
			$of("cat"_s),
			$of("Catalan"_s)
		}),
		$$new($ObjectArray, {
			$of("cau"_s),
			$of("Caucasian"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("cel"_s),
			$of("Celtic"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("cha"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("Chibcha"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Chagatai"_s)
		}),
		$$new($ObjectArray, {
			$of("chi"_s),
			$of("Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Chuukese"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("Chinook Jargon"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("Choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("Chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("chu"_s),
			$of("Church Slavic"_s)
		}),
		$$new($ObjectArray, {
			$of("chv"_s),
			$of("Chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("cmc"_s),
			$of("Chamic"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Corsican"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Coptic"_s)
		}),
		$$new($ObjectArray, {
			$of("cor"_s),
			$of("Cornish"_s)
		}),
		$$new($ObjectArray, {
			$of("cos"_s),
			$of("Corsican"_s)
		}),
		$$new($ObjectArray, {
			$of("cpe"_s),
			$of("Creoles and pidgins, English based"_s)
		}),
		$$new($ObjectArray, {
			$of("cpf"_s),
			$of("Creoles and pidgins, French-based"_s)
		}),
		$$new($ObjectArray, {
			$of("cpp"_s),
			$of("Creoles and pidgins, Portuguese-based"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cre"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Crimean Turkish"_s)
		}),
		$$new($ObjectArray, {
			$of("crp"_s),
			$of("Creoles and pidgins"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Czech"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kashubian"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Church Slavic"_s)
		}),
		$$new($ObjectArray, {
			$of("cus"_s),
			$of("Cushitic"_s)
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
			$of("cze"_s),
			$of("Czech"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Danish"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("dan"_s),
			$of("Danish"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Dargwa"_s)
		}),
		$$new($ObjectArray, {
			$of("day"_s),
			$of("Land Dayak"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("German"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slave"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Dinka"_s)
		}),
		$$new($ObjectArray, {
			$of("div"_s),
			$of("Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("Dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("dra"_s),
			$of("Dravidian"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Lower Sorbian"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of("Middle Dutch"_s)
		}),
		$$new($ObjectArray, {
			$of("dut"_s),
			$of("Dutch"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("dzo"_s),
			$of("Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("Ancient Egyptian"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Greek"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamite"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("English"_s)
		}),
		$$new($ObjectArray, {
			$of("eng"_s),
			$of("English"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of("Middle English"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("epo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanish"_s)
		}),
		$$new($ObjectArray, {
			$of("est"_s),
			$of("Estonian"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estonian"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Basque"_s)
		}),
		$$new($ObjectArray, {
			$of("ewe"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fao"_s),
			$of("Faroese"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Finnish"_s)
		}),
		$$new($ObjectArray, {
			$of("fij"_s),
			$of("Fijian"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("fin"_s),
			$of("Finnish"_s)
		}),
		$$new($ObjectArray, {
			$of("fiu"_s),
			$of("Finno-Ugrian"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fijian"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Faroese"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("French"_s)
		}),
		$$new($ObjectArray, {
			$of("fre"_s),
			$of("French"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of("Middle French"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("Old French"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Northern Frisian"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Eastern Frisian"_s)
		}),
		$$new($ObjectArray, {
			$of("fry"_s),
			$of("Western Frisian"_s)
		}),
		$$new($ObjectArray, {
			$of("ful"_s),
			$of("Fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friulian"_s)
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
			$of("gaa"_s),
			$of("Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("Gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Scottish Gaelic"_s)
		}),
		$$new($ObjectArray, {
			$of("gem"_s),
			$of("Germanic"_s)
		}),
		$$new($ObjectArray, {
			$of("geo"_s),
			$of("Georgian"_s)
		}),
		$$new($ObjectArray, {
			$of("ger"_s),
			$of("German"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertese"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galician"_s)
		}),
		$$new($ObjectArray, {
			$of("gla"_s),
			$of("Gaelic"_s)
		}),
		$$new($ObjectArray, {
			$of("gle"_s),
			$of("Irish"_s)
		}),
		$$new($ObjectArray, {
			$of("glg"_s),
			$of("Galician"_s)
		}),
		$$new($ObjectArray, {
			$of("glv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of("Middle High German"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("Old High German"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of("Gothic"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Ancient Greek"_s)
		}),
		$$new($ObjectArray, {
			$of("gre"_s),
			$of("Greek, Modern (1453-)"_s)
		}),
		$$new($ObjectArray, {
			$of("grn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Swiss German"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("guj"_s),
			$of("Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Manx"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Gwich\u02bcin"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("hat"_s),
			$of("Haitian"_s)
		}),
		$$new($ObjectArray, {
			$of("hau"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiian"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("heb"_s),
			$of("Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("her"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("him"_s),
			$of("Himachali"_s)
		}),
		$$new($ObjectArray, {
			$of("hin"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hittite"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("hmo"_s),
			$of("Hiri Motu"_s)
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
			$of("hrv"_s),
			$of("Croatian"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Upper Sorbian"_s)
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
			$of("hun"_s),
			$of("Hungarian"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Armenian"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("Iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ibo"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ice"_s),
			$of("Icelandic"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonesian"_s)
		}),
		$$new($ObjectArray, {
			$of("ido"_s),
			$of("Ido"_s)
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
			$of("iii"_s),
			$of("Sichuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("ijo"_s),
			$of("Ijo"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("iku"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ile"_s),
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of("Indonesian"_s)
		}),
		$$new($ObjectArray, {
			$of("ina"_s),
			$of("Interlingua (International Auxiliary Language Association)"_s)
		}),
		$$new($ObjectArray, {
			$of("inc"_s),
			$of("Indic"_s)
		}),
		$$new($ObjectArray, {
			$of("ind"_s),
			$of("Indonesian"_s)
		}),
		$$new($ObjectArray, {
			$of("ine"_s),
			$of("Indo-European"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Ingush"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("ipk"_s),
			$of("Inupiaq"_s)
		}),
		$$new($ObjectArray, {
			$of("ira"_s),
			$of("Iranian"_s)
		}),
		$$new($ObjectArray, {
			$of("iro"_s),
			$of("Iroquoian"_s)
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
			$of("ita"_s),
			$of("Italian"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("jav"_s),
			$of("Javanese"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of("Yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("jpn"_s),
			$of("Japanese"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of("Judeo-Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of("Judeo-Arabic"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Javanese"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("Georgian"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Kara-Kalpak"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("Kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kal"_s),
			$of("Kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("kan"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("kar"_s),
			$of("Karen"_s)
		}),
		$$new($ObjectArray, {
			$of("kas"_s),
			$of("Kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("kau"_s),
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("Kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("kaz"_s),
			$of("Kazakh"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardian"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi"_s)
		}),
		$$new($ObjectArray, {
			$of("khi"_s),
			$of("Khoisan"_s)
		}),
		$$new($ObjectArray, {
			$of("khm"_s),
			$of("Central Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Khotanese"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("kik"_s),
			$of("Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("kin"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kir"_s),
			$of("Kirghiz"_s)
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
			$of("km"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Korean"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("kom"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kon"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("kor"_s),
			$of("Korean"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosraean"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karachay-Balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Karelian"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of("Kru"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Kurukh"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("kua"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("Kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("kur"_s),
			$of("Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("Kutenai"_s)
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
			$of("la"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("Ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("Lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("Lamba"_s)
		}),
		$$new($ObjectArray, {
			$of("lao"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("lat"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("lav"_s),
			$of("Latvian"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luxembourgish"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lezghian"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgish"_s)
		}),
		$$new($ObjectArray, {
			$of("lim"_s),
			$of("Limburgan"_s)
		}),
		$$new($ObjectArray, {
			$of("lin"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lit"_s),
			$of("Lithuanian"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lithuanian"_s)
		}),
		$$new($ObjectArray, {
			$of("ltz"_s),
			$of("Luxembourgish"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("lub"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lug"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("Luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Mizo"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Latvian"_s)
		}),
		$$new($ObjectArray, {
			$of("mac"_s),
			$of("Macedonian"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Madurese"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mah"_s),
			$of("Marshallese"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("mal"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("mao"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("map"_s),
			$of("Austronesian"_s)
		}),
		$$new($ObjectArray, {
			$of("mar"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Masai"_s)
		}),
		$$new($ObjectArray, {
			$of("may"_s),
			$of("Malay"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Middle Irish"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marshallese"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Mi\'kmaq"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("mis"_s),
			$of("Uncoded"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Macedonian"_s)
		}),
		$$new($ObjectArray, {
			$of("mkh"_s),
			$of("Mon-Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mlg"_s),
			$of("Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mlt"_s),
			$of("Maltese"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Mongolian"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("Manchu"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("mno"_s),
			$of("Manobo"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of("Moldavian"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohawk"_s)
		}),
		$$new($ObjectArray, {
			$of("mon"_s),
			$of("Mongolian"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mossi"_s)
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
			$of("mul"_s),
			$of("Multiple languages"_s)
		}),
		$$new($ObjectArray, {
			$of("mun"_s),
			$of("Munda"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Muscogee"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandese"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marwari"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Burmese"_s)
		}),
		$$new($ObjectArray, {
			$of("myn"_s),
			$of("Mayan"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("nah"_s),
			$of("Nahuatl"_s)
		}),
		$$new($ObjectArray, {
			$of("nai"_s),
			$of("North American Indian"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Neapolitan"_s)
		}),
		$$new($ObjectArray, {
			$of("nau"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("nav"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norwegian Bokm\u00e5l"_s)
		}),
		$$new($ObjectArray, {
			$of("nbl"_s),
			$of("Ndebele, South"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("North Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nde"_s),
			$of("Ndebele, North"_s)
		}),
		$$new($ObjectArray, {
			$of("ndo"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Low German"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("nep"_s),
			$of("Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of("Niger-Kordofanian"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niuean"_s)
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
			$of("nno"_s),
			$of("Norwegian Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Norwegian"_s)
		}),
		$$new($ObjectArray, {
			$of("nob"_s),
			$of(u"Bokm\u00e5l, Norwegian"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("Nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("Old Norse"_s)
		}),
		$$new($ObjectArray, {
			$of("nor"_s),
			$of("Norwegian"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"N\u2019Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("South Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Northern Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("nub"_s),
			$of("Nubian"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navajo"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Classical Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("nya"_s),
			$of("Chichewa"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("Nyamwezi"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("Nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Occitan"_s)
		}),
		$$new($ObjectArray, {
			$of("oci"_s),
			$of("Occitan (post 1500)"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("oji"_s),
			$of("Ojibwa"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Odia"_s)
		}),
		$$new($ObjectArray, {
			$of("ori"_s),
			$of("Oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("orm"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("Osage"_s)
		}),
		$$new($ObjectArray, {
			$of("oss"_s),
			$of("Ossetian"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of("Ottoman Turkish"_s)
		}),
		$$new($ObjectArray, {
			$of("oto"_s),
			$of("Otomian"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("paa"_s),
			$of("Papuan"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("pan"_s),
			$of("Panjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("Papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("Palauan"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of("Old Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("per"_s),
			$of("Persian"_s)
		}),
		$$new($ObjectArray, {
			$of("phi"_s),
			$of("Philippine"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("Phoenician"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polish"_s)
		}),
		$$new($ObjectArray, {
			$of("pli"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pol"_s),
			$of("Polish"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Pohnpeian"_s)
		}),
		$$new($ObjectArray, {
			$of("por"_s),
			$of("Portuguese"_s)
		}),
		$$new($ObjectArray, {
			$of("pra"_s),
			$of("Prakrit"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"Old Proven\u00e7al"_s)
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
			$of("pus"_s),
			$of("Pushto; Pashto"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("que"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("Rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("Rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotongan"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Romansh"_s)
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
			$of("roa"_s),
			$of("Romance"_s)
		}),
		$$new($ObjectArray, {
			$of("roh"_s),
			$of("Romansh"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romany"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russian"_s)
		}),
		$$new($ObjectArray, {
			$of("rum"_s),
			$of("Romanian"_s)
		}),
		$$new($ObjectArray, {
			$of("run"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromanian"_s)
		}),
		$$new($ObjectArray, {
			$of("rus"_s),
			$of("Russian"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandawe"_s)
		}),
		$$new($ObjectArray, {
			$of("sag"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Sakha"_s)
		}),
		$$new($ObjectArray, {
			$of("sai"_s),
			$of("South American Indian"_s)
		}),
		$$new($ObjectArray, {
			$of("sal"_s),
			$of("Salishan"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of("Samaritan Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("san"_s),
			$of("Sanskrit"_s)
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
			$of("sc"_s),
			$of("Sardinian"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sicilian"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Scots"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Northern Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selkup"_s)
		}),
		$$new($ObjectArray, {
			$of("sem"_s),
			$of("Semitic"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Old Irish"_s)
		}),
		$$new($ObjectArray, {
			$of("sgn"_s),
			$of("Sign"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("sin"_s),
			$of("Sinhala"_s)
		}),
		$$new($ObjectArray, {
			$of("sio"_s),
			$of("Siouan"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Sino-Tibetan"_s)
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
			$of("sla"_s),
			$of("Slavic"_s)
		}),
		$$new($ObjectArray, {
			$of("slo"_s),
			$of("Slovak"_s)
		}),
		$$new($ObjectArray, {
			$of("slv"_s),
			$of("Slovenian"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Southern Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("sme"_s),
			$of("Northern Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("smi"_s),
			$of("Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lule Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inari Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("smo"_s),
			$of("Samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Skolt Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("sna"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("snd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdien"_s)
		}),
		$$new($ObjectArray, {
			$of("som"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("son"_s),
			$of("Songhai"_s)
		}),
		$$new($ObjectArray, {
			$of("sot"_s),
			$of("Sotho, Southern"_s)
		}),
		$$new($ObjectArray, {
			$of("spa"_s),
			$of("Spanish"_s)
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
			$of("srd"_s),
			$of("Sardinian"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Sranan Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("srp"_s),
			$of("Serbian"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("Serer"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("ssa"_s),
			$of("Nilo-Saharan"_s)
		}),
		$$new($ObjectArray, {
			$of("ssw"_s),
			$of("Swati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Southern Sotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Sundanese"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("sun"_s),
			$of("Sundanese"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("Sumerian"_s)
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
			$of("swa"_s),
			$of("Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("swe"_s),
			$of("Swedish"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("Classical Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("tah"_s),
			$of("Tahitian"_s)
		}),
		$$new($ObjectArray, {
			$of("tai"_s),
			$of("Tai"_s)
		}),
		$$new($ObjectArray, {
			$of("tam"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("tat"_s),
			$of("Tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("tel"_s),
			$of("Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("Timne"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("Tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tajik"_s)
		}),
		$$new($ObjectArray, {
			$of("tgk"_s),
			$of("Tajik"_s)
		}),
		$$new($ObjectArray, {
			$of("tgl"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("tha"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("tib"_s),
			$of("Tibetan"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("tir"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmen"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("Tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("Tamashek"_s)
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
			$of("tog"_s),
			$of("Nyasa Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("ton"_s),
			$of("Tonga (Tonga Islands)"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Turkish"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("Tsimshian"_s)
		}),
		$$new($ObjectArray, {
			$of("tsn"_s),
			$of("Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("tso"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("tuk"_s),
			$of("Turkmen"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("tup"_s),
			$of("Tupi"_s)
		}),
		$$new($ObjectArray, {
			$of("tur"_s),
			$of("Turkish"_s)
		}),
		$$new($ObjectArray, {
			$of("tut"_s),
			$of("Altaic"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("twi"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Tahitian"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuvinian"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uyghur"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("Ugaritic"_s)
		}),
		$$new($ObjectArray, {
			$of("uig"_s),
			$of("Uighur"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukrainian"_s)
		}),
		$$new($ObjectArray, {
			$of("ukr"_s),
			$of("Ukrainian"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Unknown language"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("urd"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("uzb"_s),
			$of("Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("ven"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamese"_s)
		}),
		$$new($ObjectArray, {
			$of("vie"_s),
			$of("Vietnamese"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("vol"_s),
			$of(u"Volap\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Votic"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("wak"_s),
			$of("Wakashan"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Wolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("Washo"_s)
		}),
		$$new($ObjectArray, {
			$of("wel"_s),
			$of("Welsh"_s)
		}),
		$$new($ObjectArray, {
			$of("wen"_s),
			$of("Sorbian"_s)
		}),
		$$new($ObjectArray, {
			$of("wln"_s),
			$of("Walloon"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("wol"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("Kalmyk"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("xho"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("Yao"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("Yapese"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("yid"_s),
			$of("Yiddish"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("yor"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("ypk"_s),
			$of("Yupik"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotec"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("Blissymbols"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("zha"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("znd"_s),
			$of("Zande"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("zul"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("No linguistic content"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zaza"_s)
		})
	});
}

LocaleNames::LocaleNames() {
}

$Class* LocaleNames::load$($String* name, bool initialize) {
	$loadClass(LocaleNames, name, initialize, &_LocaleNames_ClassInfo_, allocate$LocaleNames);
	return class$;
}

$Class* LocaleNames::class$ = nullptr;

		} // resources
	} // util
} // sun