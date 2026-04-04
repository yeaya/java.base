#include <sun/util/cldr/CLDRBaseLocaleDataMetaInfo.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <sun/util/cldr/CLDRBaseLocaleDataMetaInfo$TZCanonicalIDMapHolder.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <jcpp.h>

#undef CLDR
#undef ROOT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $CLDRBaseLocaleDataMetaInfo$TZCanonicalIDMapHolder = ::sun::util::cldr::CLDRBaseLocaleDataMetaInfo$TZCanonicalIDMapHolder;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;

namespace sun {
	namespace util {
		namespace cldr {

$Map* CLDRBaseLocaleDataMetaInfo::resourceNameToLocales = nullptr;
$Map* CLDRBaseLocaleDataMetaInfo::parentLocalesMap = nullptr;
$Map* CLDRBaseLocaleDataMetaInfo::languageAliasMap = nullptr;

void CLDRBaseLocaleDataMetaInfo::init$() {
}

$LocaleProviderAdapter$Type* CLDRBaseLocaleDataMetaInfo::getType() {
	$init($LocaleProviderAdapter$Type);
	return $LocaleProviderAdapter$Type::CLDR;
}

$String* CLDRBaseLocaleDataMetaInfo::availableLanguageTags($String* category) {
	return $cast($String, CLDRBaseLocaleDataMetaInfo::resourceNameToLocales->getOrDefault(category, ""_s));
}

$Map* CLDRBaseLocaleDataMetaInfo::getLanguageAliasMap() {
	return CLDRBaseLocaleDataMetaInfo::languageAliasMap;
}

$Map* CLDRBaseLocaleDataMetaInfo::tzCanonicalIDs() {
	$init($CLDRBaseLocaleDataMetaInfo$TZCanonicalIDMapHolder);
	return $CLDRBaseLocaleDataMetaInfo$TZCanonicalIDMapHolder::tzCanonicalIDMap;
}

$Map* CLDRBaseLocaleDataMetaInfo::parentLocales() {
	return CLDRBaseLocaleDataMetaInfo::parentLocalesMap;
}

void CLDRBaseLocaleDataMetaInfo::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(CLDRBaseLocaleDataMetaInfo::resourceNameToLocales, $new($HashMap));
	$assignStatic(CLDRBaseLocaleDataMetaInfo::parentLocalesMap, $new($HashMap));
	$assignStatic(CLDRBaseLocaleDataMetaInfo::languageAliasMap, $new($HashMap));
	{
		CLDRBaseLocaleDataMetaInfo::resourceNameToLocales->put("AvailableLocales"_s, " en en-Latn-US en-US en-US-POSIX"_s);
		CLDRBaseLocaleDataMetaInfo::parentLocalesMap->put($($Locale::forLanguageTag("es-419"_s)), $$new($StringArray, {
			""_s,
			"es-AR"_s,
			"es-BO"_s,
			"es-BR"_s,
			"es-BZ"_s,
			"es-CL"_s,
			"es-CO"_s,
			"es-CR"_s,
			"es-CU"_s,
			"es-DO"_s,
			"es-EC"_s,
			"es-GT"_s,
			"es-HN"_s,
			"es-MX"_s,
			"es-NI"_s,
			"es-PA"_s,
			"es-PE"_s,
			"es-PR"_s,
			"es-PY"_s,
			"es-SV"_s,
			"es-US"_s,
			"es-UY"_s,
			"es-VE"_s
		}));
		CLDRBaseLocaleDataMetaInfo::parentLocalesMap->put($Locale::ROOT, $$new($StringArray, {
			""_s,
			"az-Arab"_s,
			"az-Cyrl"_s,
			"blt-Latn"_s,
			"bm-Nkoo"_s,
			"bs-Cyrl"_s,
			"byn-Latn"_s,
			"cu-Glag"_s,
			"dje-Arab"_s,
			"dyo-Arab"_s,
			"en-Dsrt"_s,
			"en-Shaw"_s,
			"ff-Adlm"_s,
			"ff-Arab"_s,
			"ha-Arab"_s,
			"hi-Latn"_s,
			"iu-Latn"_s,
			"kk-Arab"_s,
			"ks-Deva"_s,
			"ku-Arab"_s,
			"ky-Arab"_s,
			"ky-Latn"_s,
			"ml-Arab"_s,
			"mn-Mong"_s,
			"mni-Mtei"_s,
			"ms-Arab"_s,
			"pa-Arab"_s,
			"sat-Deva"_s,
			"sd-Deva"_s,
			"sd-Khoj"_s,
			"sd-Sind"_s,
			"shi-Latn"_s,
			"so-Arab"_s,
			"sr-Latn"_s,
			"sw-Arab"_s,
			"tg-Arab"_s,
			"ug-Cyrl"_s,
			"uz-Arab"_s,
			"uz-Cyrl"_s,
			"vai-Latn"_s,
			"wo-Arab"_s,
			"yo-Arab"_s,
			"yue-Hans"_s,
			"zh-Hant"_s
		}));
		CLDRBaseLocaleDataMetaInfo::parentLocalesMap->put($($Locale::forLanguageTag("zh-Hant-HK"_s)), $$new($StringArray, {
			""_s,
			"zh-Hant-MO"_s
		}));
		CLDRBaseLocaleDataMetaInfo::parentLocalesMap->put($($Locale::forLanguageTag("en-001"_s)), $$new($StringArray, {
			""_s,
			"en-150"_s,
			"en-AG"_s,
			"en-AI"_s,
			"en-AU"_s,
			"en-BB"_s,
			"en-BM"_s,
			"en-BS"_s,
			"en-BW"_s,
			"en-BZ"_s,
			"en-CA"_s,
			"en-CC"_s,
			"en-CK"_s,
			"en-CM"_s,
			"en-CX"_s,
			"en-CY"_s,
			"en-DG"_s,
			"en-DM"_s,
			"en-ER"_s,
			"en-FJ"_s,
			"en-FK"_s,
			"en-FM"_s,
			"en-GB"_s,
			"en-GD"_s,
			"en-GG"_s,
			"en-GH"_s,
			"en-GI"_s,
			"en-GM"_s,
			"en-GY"_s,
			"en-HK"_s,
			"en-IE"_s,
			"en-IL"_s,
			"en-IM"_s,
			"en-IN"_s,
			"en-IO"_s,
			"en-JE"_s,
			"en-JM"_s,
			"en-KE"_s,
			"en-KI"_s,
			"en-KN"_s,
			"en-KY"_s,
			"en-LC"_s,
			"en-LR"_s,
			"en-LS"_s,
			"en-MG"_s,
			"en-MO"_s,
			"en-MS"_s,
			"en-MT"_s,
			"en-MU"_s,
			"en-MW"_s,
			"en-MY"_s,
			"en-NA"_s,
			"en-NF"_s,
			"en-NG"_s,
			"en-NR"_s,
			"en-NU"_s,
			"en-NZ"_s,
			"en-PG"_s,
			"en-PH"_s,
			"en-PK"_s,
			"en-PN"_s,
			"en-PW"_s,
			"en-RW"_s,
			"en-SB"_s,
			"en-SC"_s,
			"en-SD"_s,
			"en-SG"_s,
			"en-SH"_s,
			"en-SL"_s,
			"en-SS"_s,
			"en-SX"_s,
			"en-SZ"_s,
			"en-TC"_s,
			"en-TK"_s,
			"en-TO"_s,
			"en-TT"_s,
			"en-TV"_s,
			"en-TZ"_s,
			"en-UG"_s,
			"en-VC"_s,
			"en-VG"_s,
			"en-VU"_s,
			"en-WS"_s,
			"en-ZA"_s,
			"en-ZM"_s,
			"en-ZW"_s
		}));
		CLDRBaseLocaleDataMetaInfo::parentLocalesMap->put($($Locale::forLanguageTag("pt-PT"_s)), $$new($StringArray, {
			""_s,
			"pt-AO"_s,
			"pt-CH"_s,
			"pt-CV"_s,
			"pt-FR"_s,
			"pt-GQ"_s,
			"pt-GW"_s,
			"pt-LU"_s,
			"pt-MO"_s,
			"pt-MZ"_s,
			"pt-ST"_s,
			"pt-TL"_s
		}));
		CLDRBaseLocaleDataMetaInfo::parentLocalesMap->put($($Locale::forLanguageTag("no"_s)), $$new($StringArray, {
			""_s,
			"nb"_s,
			"nn"_s
		}));
		CLDRBaseLocaleDataMetaInfo::parentLocalesMap->put($($Locale::forLanguageTag("en-150"_s)), $$new($StringArray, {
			""_s,
			"en-AT"_s,
			"en-BE"_s,
			"en-CH"_s,
			"en-DE"_s,
			"en-DK"_s,
			"en-FI"_s,
			"en-NL"_s,
			"en-SE"_s,
			"en-SI"_s
		}));
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zh-cmn-Hant"_s, "zh-Hant"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("mwj"_s, "vaj"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zh-cmn-Hans"_s, "zh-Hans"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("tdu"_s, "dtp"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("pmc"_s, "huw"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-PT"_s, "psr"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("leg"_s, "enl"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ccq"_s, "rki"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sca"_s, "hle"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("scc"_s, "sr"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("und-nynorsk"_s, "und"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-CH-DE"_s, "sgg"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("und-arevmda"_s, "und"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("en-GB-oed"_s, "en-GB-oxendict"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("pmu"_s, "phr"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("baz"_s, "nvo"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("jar"_s, "jgk"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("yos"_s, "zom"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("mgx"_s, "jbk"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("scr"_s, "hr"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("gli"_s, "kzk"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ktr"_s, "dtp"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("dwl"_s, "dbt"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("myd"_s, "aog"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-klingon"_s, "tlh"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kdv"_s, "zkd"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-pwn"_s, "pwn"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("myt"_s, "mry"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sum"_s, "ulw"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sul"_s, "sgd"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zh-gan"_s, "gan"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("aam"_s, "aas"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-navajo"_s, "nv"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("btb"_s, "beb"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("tgg"_s, "bjp"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zh-yue"_s, "yue"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sh"_s, "sr-Latn"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ppa"_s, "bfy"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-CO"_s, "csn"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-default"_s, "en-x-i-default"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kvs"_s, "gdj"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("und-xiang"_s, "und"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("thc"_s, "tpo"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ibi"_s, "opa"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("nln"_s, "azd"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-BE-FR"_s, "sfb"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ppr"_s, "lcq"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("asd"_s, "snz"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("nlr"_s, "nrk"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-enochian"_s, "und-x-i-enochian"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-BR"_s, "bzs"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("tl"_s, "fil"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ybd"_s, "rki"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-SE"_s, "swl"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-DK"_s, "dsl"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("thw"_s, "ola"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kwq"_s, "yam"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("thx"_s, "oyb"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kgc"_s, "tdf"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kgd"_s, "ncq"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("jeg"_s, "oyb"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kgh"_s, "kml"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("lii"_s, "raq"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("dit"_s, "dif"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("tid"_s, "itd"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-DE"_s, "gsg"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("tie"_s, "ras"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kxe"_s, "tvd"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgl"_s, "isk"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kxl"_s, "kru"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("djl"_s, "dze"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("elp"_s, "amq"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("hrr"_s, "jal"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-US"_s, "ase"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("adp"_s, "dz"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("und-hakka"_s, "und"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("aue"_s, "ktz"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("nns"_s, "nbr"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("pry"_s, "prt"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("xba"_s, "cax"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("xrq"_s, "dmw"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("nnx"_s, "ngv"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("cel-gaulish"_s, "xtg"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("dkl"_s, "aqd"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-FR"_s, "fsl"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("bgm"_s, "bcg"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zh-min"_s, "nan-x-zh-min"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("xsj"_s, "suj"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("tkk"_s, "twm"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("yuu"_s, "yug"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kzh"_s, "dgl"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kzj"_s, "dtp"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-ES"_s, "ssp"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("gav"_s, "dev"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("pcr"_s, "adx"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("yen"_s, "ynq"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kzt"_s, "dtp"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("bhk"_s, "fbl"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-GR"_s, "gss"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("gbc"_s, "wny"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("cjr"_s, "mom"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("llo"_s, "ngt"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("mnt"_s, "wnn"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-hak"_s, "hak"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-GB"_s, "bfi"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("unp"_s, "wro"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("aa-saaho"_s, "ssy"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("cka"_s, "cmr"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("tlw"_s, "weo"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("und-hepburn-heploc"_s, "und-alalc97"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("mof"_s, "xnt"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("agp"_s, "apf"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("lmm"_s, "rmx"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("nad"_s, "xny"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("uok"_s, "ema"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("skk"_s, "oyb"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("und-bokmal"_s, "und"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("puz"_s, "pub"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("tmp"_s, "tyj"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("bjd"_s, "drl"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("gti"_s, "nyc"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-ZA"_s, "sfs"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zir"_s, "scv"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-IT"_s, "ise"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("bjq"_s, "bzc"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("tne"_s, "kak"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("tnf"_s, "fa-AF"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("nbf"_s, "nru"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-IE"_s, "isg"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("bkb"_s, "ebk"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("und-arevela"_s, "und"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zh-min-nan"_s, "nan"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zh-guoyu"_s, "zh"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-mingo"_s, "see-x-i-mingo"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("cmk"_s, "xch"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ayx"_s, "nun"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-JP"_s, "jsl"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("hy-arevmda"_s, "hyw"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-BE-NL"_s, "vgt"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("nbx"_s, "ekc"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("guv"_s, "duz"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("oun"_s, "vaj"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ais"_s, "ami"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("jw"_s, "jv"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("und-aaland"_s, "und-AX"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("izi"_s, "eza"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ncp"_s, "kdz"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("cnr"_s, "sr-ME"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("yiy"_s, "yrm"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("nts"_s, "pij"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("art-lojban"_s, "jbo"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("und-lojban"_s, "und"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-lux"_s, "lb"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("gfx"_s, "vaj"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zh-hakka"_s, "hak"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-ami"_s, "ami"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zh-xiang"_s, "hsn"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("koj"_s, "kwv"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("daf"_s, "dnj"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("coy"_s, "pij"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ggo"_s, "esg"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ggn"_s, "gvr"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("mst"_s, "mry"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("xia"_s, "acn"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("dap"_s, "njz"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ggr"_s, "gtu"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-tay"_s, "tay"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("rmr"_s, "emx"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("drh"_s, "mn"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("mo"_s, "ro"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("drr"_s, "kzk"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-MX"_s, "mfs"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("wgw"_s, "wgb"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("drw"_s, "fa-AF"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ill"_s, "ilm"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("kpp"_s, "jkm"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-tsu"_s, "tsu"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ilw"_s, "gal"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("cqu"_s, "quh"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("tsf"_s, "taj"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zh-wuu"_s, "wuu"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-NL"_s, "dse"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("yma"_s, "lrr"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("gio"_s, "aou"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("meg"_s, "cir"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-NO"_s, "nsi"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("xkh"_s, "waw"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sgn-NI"_s, "ncs"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("zh-cmn"_s, "zh"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("ymt"_s, "mtm"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-bnn"_s, "bnn"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("i-tao"_s, "tao"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("sap"_s, "aqt"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("wit"_s, "nol"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("wiw"_s, "nwo"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("krm"_s, "bmf"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("nxu"_s, "bpp"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("dud"_s, "uth"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("duj"_s, "dwu"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("mwd"_s, "dmw"_s);
		CLDRBaseLocaleDataMetaInfo::languageAliasMap->put("und-saaho"_s, "und"_s);
	}
}

CLDRBaseLocaleDataMetaInfo::CLDRBaseLocaleDataMetaInfo() {
}

$Class* CLDRBaseLocaleDataMetaInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"resourceNameToLocales", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CLDRBaseLocaleDataMetaInfo, resourceNameToLocales)},
		{"parentLocalesMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;[Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CLDRBaseLocaleDataMetaInfo, parentLocalesMap)},
		{"languageAliasMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CLDRBaseLocaleDataMetaInfo, languageAliasMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CLDRBaseLocaleDataMetaInfo, init$, void)},
		{"availableLanguageTags", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CLDRBaseLocaleDataMetaInfo, availableLanguageTags, $String*, $String*)},
		{"getLanguageAliasMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $virtualMethod(CLDRBaseLocaleDataMetaInfo, getLanguageAliasMap, $Map*)},
		{"getType", "()Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC, $virtualMethod(CLDRBaseLocaleDataMetaInfo, getType, $LocaleProviderAdapter$Type*)},
		{"parentLocales", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;[Ljava/lang/String;>;", $PUBLIC, $virtualMethod(CLDRBaseLocaleDataMetaInfo, parentLocales, $Map*)},
		{"tzCanonicalIDs", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $virtualMethod(CLDRBaseLocaleDataMetaInfo, tzCanonicalIDs, $Map*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.cldr.CLDRBaseLocaleDataMetaInfo$TZCanonicalIDMapHolder", "sun.util.cldr.CLDRBaseLocaleDataMetaInfo", "TZCanonicalIDMapHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.cldr.CLDRBaseLocaleDataMetaInfo",
		"java.lang.Object",
		"sun.util.locale.provider.LocaleDataMetaInfo",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.util.cldr.CLDRBaseLocaleDataMetaInfo$TZCanonicalIDMapHolder"
	};
	$loadClass(CLDRBaseLocaleDataMetaInfo, name, initialize, &classInfo$$, CLDRBaseLocaleDataMetaInfo::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CLDRBaseLocaleDataMetaInfo);
	});
	return class$;
}

$Class* CLDRBaseLocaleDataMetaInfo::class$ = nullptr;

		} // cldr
	} // util
} // sun