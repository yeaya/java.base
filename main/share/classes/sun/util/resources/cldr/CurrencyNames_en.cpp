#include <sun/util/resources/cldr/CurrencyNames_en.h>

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

$MethodInfo _CurrencyNames_en_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CurrencyNames_en::*)()>(&CurrencyNames_en::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CurrencyNames_en_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.CurrencyNames_en",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_MethodInfo_
};

$Object* allocate$CurrencyNames_en($Class* clazz) {
	return $of($alloc(CurrencyNames_en));
}

void CurrencyNames_en::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en::getContents() {
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"\u00a5"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("Andorran Peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("United Arab Emirates Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afghan Afghani (1927\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afghan Afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"Albanian Lek (1946\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Albanian Lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Armenian Dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Netherlands Antillean Guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Angolan Kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Angolan Kwanza (1977\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Angolan New Kwanza (1990\u20132000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Angolan Readjusted Kwanza (1995\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Argentine Austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"Argentine Peso Ley (1970\u20131983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"Argentine Peso (1881\u20131970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Argentine Peso (1983\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Argentine Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("Austrian Schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Australian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Aruban Florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Azerbaijani Manat (1993\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Azerbaijani Manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Bosnia-Herzegovina Dinar (1992\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Bosnia-Herzegovina Convertible Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Bosnia-Herzegovina New Dinar (1994\u20131997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Barbadian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Bangladeshi Taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("Belgian Franc (convertible)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Belgian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Belgian Franc (financial)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of("Bulgarian Hard Lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of("Bulgarian Socialist Lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Bulgarian Lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"Bulgarian Lev (1879\u20131952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bahraini Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Burundian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Bermudan Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Brunei Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Bolivian Boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"Bolivian Boliviano (1863\u20131963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("Bolivian Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Bolivian Mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Brazilian New Cruzeiro (1967\u20131986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Brazilian Cruzado (1986\u20131989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Brazilian Cruzeiro (1990\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Brazilian Real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Brazilian New Cruzado (1989\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Brazilian Cruzeiro (1993\u20131994)"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"Brazilian Cruzeiro (1942\u20131967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Bahamian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Bhutanese Ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("Burmese Kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Botswanan Pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Belarusian Ruble (1994\u20131999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Belarusian Ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Belarusian Ruble (2000\u20132016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Belize Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Canadian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Congolese Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("WIR Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Swiss Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("WIR Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of("Chilean Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("Chilean Unit of Account (UF)"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Chilean Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("Chinese Yuan (offshore)"_s)
		}),
		$$new($ObjectArray, {
			$of("cnx"_s),
			$of(u"Chinese People\u2019s Bank Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Chinese Yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Colombian Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("Colombian Real Value Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Costa Rican Col\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Serbian Dinar (2002\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of("Czechoslovak Hard Koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("Cuban Convertible Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Cuban Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Cape Verdean Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Cypriot Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Czech Koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of("East German Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("German Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Djiboutian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Danish Krone"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Dominican Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Algerian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Ecuadorian Sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("Ecuadorian Unit of Constant Value"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Estonian Kroon"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Egyptian Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Eritrean Nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of("Spanish Peseta (A account)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of("Spanish Peseta (convertible account)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("Spanish Peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Ethiopian Birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Finnish Markka"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Fijian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Falkland Islands Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("French Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("British Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("Georgian Kupon Larit"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Georgian Lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Ghanaian Cedi (1979\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Ghanaian Cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Gibraltar Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambian Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Guinean Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Guinean Syli"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("Equatorial Guinean Ekwele"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Greek Drachma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Guatemalan Quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("Portuguese Guinea Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Guinea-Bissau Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Guyanaese Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Hong Kong Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Honduran Lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("Croatian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Croatian Kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Haitian Gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Hungarian Forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Indonesian Rupiah"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Irish Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("Israeli Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"Israeli Shekel (1980\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("Israeli New Shekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Indian Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Iraqi Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Iranian Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"Icelandic Kr\u00f3na (1918\u20131981)"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Icelandic Kr\u00f3na"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Italian Lira"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Jamaican Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Jordanian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Japanese Yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Kenyan Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Kyrgystani Som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Cambodian Riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Comorian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("North Korean Won"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"South Korean Hwan (1953\u20131962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"South Korean Won (1945\u20131953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("South Korean Won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Kuwaiti Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Cayman Islands Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Kazakhstani Tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Laotian Kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Lebanese Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Sri Lankan Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Liberian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesotho Loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Lithuanian Litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("Lithuanian Talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("Luxembourgian Convertible Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("Luxembourgian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of("Luxembourg Financial Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Latvian Lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Latvian Ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Libyan Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Moroccan Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Moroccan Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of("Monegasque Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of("Moldovan Cupon"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Moldovan Leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Malagasy Ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Malagasy Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Macedonian Denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"Macedonian Denar (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("Malian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Myanmar Kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Mongolian Tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Macanese Pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Mauritanian Ouguiya (1973\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Mauritanian Ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Maltese Lira"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("Maltese Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Mauritian Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of(u"Maldivian Rupee (1947\u20131981)"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Maldivian Rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Malawian Kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Mexican Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Mexican Silver Peso (1861\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Mexican Investment Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Malaysian Ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Mozambican Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Mozambican Metical (1980\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mozambican Metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Namibian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nigerian Naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Nicaraguan C\u00f3rdoba (1988\u20131991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Nicaraguan C\u00f3rdoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Dutch Guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Norwegian Krone"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Nepalese Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("New Zealand Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Omani Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Panamanian Balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("Peruvian Inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Peruvian Sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Peruvian Sol (1863\u20131965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Papua New Guinean Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Philippine Piso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Pakistani Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Polish Zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Polish Zloty (1950\u20131995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("Portuguese Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Paraguayan Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Qatari Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("Rhodesian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Romanian Leu (1952\u20132006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Romanian Leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Serbian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Russian Ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Russian Ruble (1991\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Rwandan Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saudi Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Solomon Islands Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Seychellois Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Sudanese Dinar (1992\u20132007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sudanese Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Sudanese Pound (1957\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Swedish Krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Singapore Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("St. Helena Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Slovenian Tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Slovak Koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Sierra Leonean Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Somali Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Surinamese Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Surinamese Guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("South Sudanese Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"S\u00e3o Tom\u00e9 & Pr\u00edncipe Dobra (1977\u20132017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"S\u00e3o Tom\u00e9 & Pr\u00edncipe Dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("Soviet Rouble"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Salvadoran Col\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Syrian Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Swazi Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Thai Baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("Tajikistani Ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Tajikistani Somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Turkmenistani Manat (1993\u20132009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Turkmenistani Manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Tunisian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Tongan Pa\u02bbanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Timorese Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Turkish Lira (1922\u20132005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Turkish Lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Trinidad & Tobago Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("New Taiwan Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Tanzanian Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Ukrainian Hryvnia"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("Ukrainian Karbovanets"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Ugandan Shilling (1966\u20131987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Ugandan Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("US Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of("US Dollar (Next day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("US Dollar (Same day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("Uruguayan Peso (Indexed Units)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Uruguayan Peso (1975\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Uruguayan Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uyw"_s),
			$of("Uruguayan Nominal Wage Index Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Uzbekistani Som"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Venezuelan Bol\u00edvar (1871\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Venezuelan Bol\u00edvar (2008\u20132018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Venezuelan Bol\u00edvar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Vietnamese Dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"Vietnamese Dong (1978\u20131985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vanuatu Vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Samoan Tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Central African CFA Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Silver"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Gold"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("European Composite Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of("European Monetary Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("European Unit of Account (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("European Unit of Account (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("East Caribbean Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("Special Drawing Rights"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("European Currency Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("French Gold Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("French UIC-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("West African CFA Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Palladium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platinum"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("RINET Funds"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of("Sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("Testing Currency Code"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of("ADB Unit of Account"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Unknown Currency"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("Yemeni Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Yemeni Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Yugoslavian Hard Dinar (1966\u20131990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Yugoslavian New Dinar (1994\u20132002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Yugoslavian Convertible Dinar (1990\u20131992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"Yugoslavian Reformed Dinar (1992\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of("South African Rand (financial)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("South African Rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambian Kwacha (1968\u20132012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Zambian Kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Zairean New Zaire (1993\u20131998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Zairean Zaire (1971\u20131993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Zimbabwean Dollar (1980\u20132008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("Zimbabwean Dollar (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of("Zimbabwean Dollar (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_en::CurrencyNames_en() {
}

$Class* CurrencyNames_en::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en, name, initialize, &_CurrencyNames_en_ClassInfo_, allocate$CurrencyNames_en);
	return class$;
}

$Class* CurrencyNames_en::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun