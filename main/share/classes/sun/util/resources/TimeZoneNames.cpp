#include <sun/util/resources/TimeZoneNames.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ACT
#undef ADELAIDE
#undef AGT
#undef AKST
#undef AMT
#undef ARAST
#undef ARMT
#undef AST
#undef BDT
#undef BRISBANE
#undef BROKEN_HILL
#undef BRT
#undef BTT
#undef CAT
#undef CET
#undef CHAST
#undef CHUT
#undef CIT
#undef CLT
#undef CST
#undef CTT
#undef CUBA
#undef DARWIN
#undef DUBLIN
#undef EASTER
#undef EAT
#undef EET
#undef EGT
#undef EST
#undef EST_NSW
#undef FET
#undef GAMBIER
#undef GHMT
#undef GMT
#undef GMTBST
#undef GST
#undef HKT
#undef HST
#undef ICT
#undef IRKT
#undef IRT
#undef ISRAEL
#undef IST
#undef JST
#undef KRAT
#undef KST
#undef LORD_HOWE
#undef MHT
#undef MMT
#undef MSK
#undef MST
#undef MYT
#undef NORONHA
#undef NOVT
#undef NPT
#undef NST
#undef NZST
#undef PITCAIRN
#undef PKT
#undef PONT
#undef PST
#undef SAMOA
#undef SAST
#undef SBT
#undef SGT
#undef TASMANIA
#undef TMT
#undef TRT
#undef ULAT
#undef UTC
#undef UZT
#undef VICTORIA
#undef WAT
#undef WET
#undef WGT
#undef WIT
#undef WST_AUS
#undef WST_SAMOA
#undef XJT
#undef YAKT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

void TimeZoneNames::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames::getContents() {
	$useLocalObjectStack();
	$var($StringArray, ACT, $new($StringArray, {
		"Acre Time"_s,
		"ACT"_s,
		"Acre Summer Time"_s,
		"ACST"_s,
		"Acre Time"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		"Australian Central Standard Time (South Australia)"_s,
		"ACST"_s,
		"Australian Central Daylight Time (South Australia)"_s,
		"ACDT"_s,
		"Australian Central Time (South Australia)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		"Argentine Time"_s,
		"ART"_s,
		"Argentine Summer Time"_s,
		"ARST"_s,
		"Argentine Time"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		"Alaska Standard Time"_s,
		"AKST"_s,
		"Alaska Daylight Time"_s,
		"AKDT"_s,
		"Alaska Time"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		"Amazon Time"_s,
		"AMT"_s,
		"Amazon Summer Time"_s,
		"AMST"_s,
		"Amazon Time"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		"Arabia Standard Time"_s,
		"AST"_s,
		"Arabia Daylight Time"_s,
		"ADT"_s,
		"Arabia Time"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		"Armenia Time"_s,
		"AMT"_s,
		"Armenia Summer Time"_s,
		"AMST"_s,
		"Armenia Time"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		"Atlantic Standard Time"_s,
		"AST"_s,
		"Atlantic Daylight Time"_s,
		"ADT"_s,
		"Atlantic Time"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		"Bangladesh Time"_s,
		"BDT"_s,
		"Bangladesh Summer Time"_s,
		"BDST"_s,
		"Bangladesh Time"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		"Australian Eastern Standard Time (Queensland)"_s,
		"AEST"_s,
		"Australian Eastern Daylight Time (Queensland)"_s,
		"AEDT"_s,
		"Australian Eastern Time (Queensland)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		"Australian Central Standard Time (South Australia/New South Wales)"_s,
		"ACST"_s,
		"Australian Central Daylight Time (South Australia/New South Wales)"_s,
		"ACDT"_s,
		"Australian Central Time (South Australia/New South Wales)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		"Brasilia Time"_s,
		"BRT"_s,
		"Brasilia Summer Time"_s,
		"BRST"_s,
		"Brasilia Time"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		"Bhutan Time"_s,
		"BTT"_s,
		"Bhutan Summer Time"_s,
		"BTST"_s,
		"Bhutan Time"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		"Central African Time"_s,
		"CAT"_s,
		"Central African Summer Time"_s,
		"CAST"_s,
		"Central Africa Time"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		"Central European Time"_s,
		"CET"_s,
		"Central European Summer Time"_s,
		"CEST"_s,
		"Central European Time"_s,
		"CET"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		"Chatham Standard Time"_s,
		"CHAST"_s,
		"Chatham Daylight Time"_s,
		"CHADT"_s,
		"Chatham Time"_s,
		"CHAT"_s
	}));
	$var($StringArray, CHUT, $new($StringArray, {
		"Chuuk Time"_s,
		"CHUT"_s,
		"Chuuk Summer Time"_s,
		"CHUST"_s,
		"Chuuk Time"_s,
		"CHUT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		"Central Indonesia Time"_s,
		"WITA"_s,
		"Central Indonesia Summer Time"_s,
		"CIST"_s,
		"Central Indonesia Time"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		"Chile Time"_s,
		"CLT"_s,
		"Chile Summer Time"_s,
		"CLST"_s,
		"Chile Time"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		"Central Standard Time"_s,
		"CST"_s,
		"Central Daylight Time"_s,
		"CDT"_s,
		"Central Time"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		"China Standard Time"_s,
		"CST"_s,
		"China Daylight Time"_s,
		"CDT"_s,
		"China Time"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		"Cuba Standard Time"_s,
		"CST"_s,
		"Cuba Daylight Time"_s,
		"CDT"_s,
		"Cuba Time"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		"Australian Central Standard Time (Northern Territory)"_s,
		"ACST"_s,
		"Australian Central Daylight Time (Northern Territory)"_s,
		"ACDT"_s,
		"Australian Central Time (Northern Territory)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		"Greenwich Mean Time"_s,
		"GMT"_s,
		"Irish Summer Time"_s,
		"IST"_s,
		"Irish Time"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		"Eastern African Time"_s,
		"EAT"_s,
		"Eastern African Summer Time"_s,
		"EAST"_s,
		"Eastern Africa Time"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		"Easter Is. Time"_s,
		"EAST"_s,
		"Easter Is. Summer Time"_s,
		"EASST"_s,
		"Easter Is. Time"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		"Eastern European Time"_s,
		"EET"_s,
		"Eastern European Summer Time"_s,
		"EEST"_s,
		"Eastern European Time"_s,
		"EET"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		"Eastern Greenland Time"_s,
		"EGT"_s,
		"Eastern Greenland Summer Time"_s,
		"EGST"_s,
		"Eastern Greenland Time"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		"Eastern Standard Time"_s,
		"EST"_s,
		"Eastern Daylight Time"_s,
		"EDT"_s,
		"Eastern Time"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		"Australian Eastern Standard Time (New South Wales)"_s,
		"AEST"_s,
		"Australian Eastern Daylight Time (New South Wales)"_s,
		"AEDT"_s,
		"Australian Eastern Time (New South Wales)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		"Further-eastern European Time"_s,
		"FET"_s,
		"Further-eastern European Summer Time"_s,
		"FEST"_s,
		"Further-eastern European Time"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		"Ghana Mean Time"_s,
		"GMT"_s,
		"Ghana Summer Time"_s,
		"GHST"_s,
		"Ghana Mean Time"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		"Gambier Time"_s,
		"GAMT"_s,
		"Gambier Summer Time"_s,
		"GAMST"_s,
		"Gambier Time"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		"Greenwich Mean Time"_s,
		"GMT"_s,
		"Greenwich Mean Time"_s,
		"GMT"_s,
		"Greenwich Mean Time"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		"Greenwich Mean Time"_s,
		"GMT"_s,
		"British Summer Time"_s,
		"BST"_s,
		"British Time"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		"Gulf Standard Time"_s,
		"GST"_s,
		"Gulf Daylight Time"_s,
		"GDT"_s,
		"Gulf Time"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		"Hong Kong Time"_s,
		"HKT"_s,
		"Hong Kong Summer Time"_s,
		"HKST"_s,
		"Hong Kong Time"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		"Hawaii Standard Time"_s,
		"HST"_s,
		"Hawaii Daylight Time"_s,
		"HDT"_s,
		"Hawaii Time"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		"Indochina Time"_s,
		"ICT"_s,
		"Indochina Summer Time"_s,
		"ICST"_s,
		"Indochina Time"_s,
		"ICT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		"Iran Standard Time"_s,
		"IRST"_s,
		"Iran Daylight Time"_s,
		"IRDT"_s,
		"Iran Time"_s,
		"IRT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		"Irkutsk Time"_s,
		"IRKT"_s,
		"Irkutsk Summer Time"_s,
		"IRKST"_s,
		"Irkutsk Time"_s,
		"IRKT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		"Israel Standard Time"_s,
		"IST"_s,
		"Israel Daylight Time"_s,
		"IDT"_s,
		"Israel Time"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		"India Standard Time"_s,
		"IST"_s,
		"India Daylight Time"_s,
		"IDT"_s,
		"India Time"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		"Japan Standard Time"_s,
		"JST"_s,
		"Japan Daylight Time"_s,
		"JDT"_s,
		"Japan Time"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		"Krasnoyarsk Time"_s,
		"KRAT"_s,
		"Krasnoyarsk Summer Time"_s,
		"KRAST"_s,
		"Krasnoyarsk Time"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		"Korea Standard Time"_s,
		"KST"_s,
		"Korea Daylight Time"_s,
		"KDT"_s,
		"Korea Time"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		"Lord Howe Standard Time"_s,
		"LHST"_s,
		"Lord Howe Daylight Time"_s,
		"LHDT"_s,
		"Lord Howe Time"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		"Marshall Islands Time"_s,
		"MHT"_s,
		"Marshall Islands Summer Time"_s,
		"MHST"_s,
		"Marshall Islands Time"_s,
		"MHT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		"Myanmar Time"_s,
		"MMT"_s,
		"Myanmar Summer Time"_s,
		"MMST"_s,
		"Myanmar Time"_s,
		"MMT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		"Moscow Standard Time"_s,
		"MSK"_s,
		"Moscow Daylight Time"_s,
		"MSD"_s,
		"Moscow Time"_s,
		"MT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		"Mountain Standard Time"_s,
		"MST"_s,
		"Mountain Daylight Time"_s,
		"MDT"_s,
		"Mountain Time"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		"Malaysia Time"_s,
		"MYT"_s,
		"Malaysia Summer Time"_s,
		"MYST"_s,
		"Malaysia Time"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		"Fernando de Noronha Time"_s,
		"FNT"_s,
		"Fernando de Noronha Summer Time"_s,
		"FNST"_s,
		"Fernando de Noronha Time"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		"Novosibirsk Time"_s,
		"NOVT"_s,
		"Novosibirsk Summer Time"_s,
		"NOVST"_s,
		"Novosibirsk Time"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		"Nepal Time"_s,
		"NPT"_s,
		"Nepal Summer Time"_s,
		"NPST"_s,
		"Nepal Time"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		"Newfoundland Standard Time"_s,
		"NST"_s,
		"Newfoundland Daylight Time"_s,
		"NDT"_s,
		"Newfoundland Time"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		"New Zealand Standard Time"_s,
		"NZST"_s,
		"New Zealand Daylight Time"_s,
		"NZDT"_s,
		"New Zealand Time"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		"Pitcairn Standard Time"_s,
		"PST"_s,
		"Pitcairn Daylight Time"_s,
		"PDT"_s,
		"Pitcairn Time"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		"Pakistan Time"_s,
		"PKT"_s,
		"Pakistan Summer Time"_s,
		"PKST"_s,
		"Pakistan Time"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		"Pohnpei Time"_s,
		"PONT"_s,
		"Pohnpei Summer Time"_s,
		"PONST"_s,
		"Ponape Time"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		"Pacific Standard Time"_s,
		"PST"_s,
		"Pacific Daylight Time"_s,
		"PDT"_s,
		"Pacific Time"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		"South Africa Standard Time"_s,
		"SAST"_s,
		"South Africa Summer Time"_s,
		"SAST"_s,
		"South Africa Time"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		"Solomon Is. Time"_s,
		"SBT"_s,
		"Solomon Is. Summer Time"_s,
		"SBST"_s,
		"Solomon Is. Time"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		"Singapore Time"_s,
		"SGT"_s,
		"Singapore Summer Time"_s,
		"SGST"_s,
		"Singapore Time"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		"Australian Eastern Standard Time (Tasmania)"_s,
		"AEST"_s,
		"Australian Eastern Daylight Time (Tasmania)"_s,
		"AEDT"_s,
		"Australian Eastern Time (Tasmania)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		"Turkmenistan Time"_s,
		"TMT"_s,
		"Turkmenistan Summer Time"_s,
		"TMST"_s,
		"Turkmenistan Time"_s,
		"TMT"_s
	}));
	$var($StringArray, TRT, $new($StringArray, {
		"Turkey Time"_s,
		"TRT"_s,
		"Turkey Summer Time"_s,
		"TRST"_s,
		"Turkey Time"_s,
		"TRT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		"Ulaanbaatar Time"_s,
		"ULAT"_s,
		"Ulaanbaatar Summer Time"_s,
		"ULAST"_s,
		"Ulaanbaatar Time"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		"Western African Time"_s,
		"WAT"_s,
		"Western African Summer Time"_s,
		"WAST"_s,
		"Western African Time"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		"Western European Time"_s,
		"WET"_s,
		"Western European Summer Time"_s,
		"WEST"_s,
		"Western European Time"_s,
		"WET"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		"West Indonesia Time"_s,
		"WIB"_s,
		"West Indonesia Summer Time"_s,
		"WIST"_s,
		"West Indonesia Time"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		"Australian Western Standard Time"_s,
		"AWST"_s,
		"Australian Western Daylight Time"_s,
		"AWDT"_s,
		"Australian Western Time"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		"Samoa Standard Time"_s,
		"SST"_s,
		"Samoa Daylight Time"_s,
		"SDT"_s,
		"Samoa Time"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		"West Samoa Standard Time"_s,
		"WSST"_s,
		"West Samoa Daylight Time"_s,
		"WSDT"_s,
		"West Samoa Time"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		"Chamorro Standard Time"_s,
		"ChST"_s,
		"Chamorro Daylight Time"_s,
		"ChDT"_s,
		"Chamorro Time"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		"Australian Eastern Standard Time (Victoria)"_s,
		"AEST"_s,
		"Australian Eastern Daylight Time (Victoria)"_s,
		"AEDT"_s,
		"Australian Eastern Time (Victoria)"_s,
		"AET"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		"Western Greenland Time"_s,
		"WGT"_s,
		"Western Greenland Summer Time"_s,
		"WGST"_s,
		"Western Greenland Time"_s,
		"WGT"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		"Coordinated Universal Time"_s,
		"UTC"_s,
		"Coordinated Universal Time"_s,
		"UTC"_s,
		"Coordinated Universal Time"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		"Uzbekistan Time"_s,
		"UZT"_s,
		"Uzbekistan Summer Time"_s,
		"UZST"_s,
		"Uzbekistan Time"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		"Xinjiang Standard Time"_s,
		"XJT"_s,
		"Xinjiang Daylight Time"_s,
		"XJDT"_s,
		"Xinjiang Time"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		"Yakutsk Time"_s,
		"YAKT"_s,
		"Yakutsk Summer Time"_s,
		"YAKST"_s,
		"Yakutsk Time"_s,
		"YAKT"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"America/Los_Angeles"_s,
			PST
		}),
		$$new($ObjectArray, {
			"PST"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Denver"_s,
			MST
		}),
		$$new($ObjectArray, {
			"MST"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Phoenix"_s,
			MST
		}),
		$$new($ObjectArray, {
			"PNT"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Chicago"_s,
			CST
		}),
		$$new($ObjectArray, {
			"CST"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/New_York"_s,
			EST
		}),
		$$new($ObjectArray, {
			"EST"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indianapolis"_s,
			EST
		}),
		$$new($ObjectArray, {
			"IET"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Pacific/Honolulu"_s,
			HST
		}),
		$$new($ObjectArray, {
			"HST"_s,
			HST
		}),
		$$new($ObjectArray, {
			"America/Anchorage"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"AST"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Halifax"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Sitka"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/St_Johns"_s,
			NST
		}),
		$$new($ObjectArray, {
			"CNT"_s,
			NST
		}),
		$$new($ObjectArray, {
			"Europe/Paris"_s,
			CET
		}),
		$$new($ObjectArray, {
			"ECT"_s,
			CET
		}),
		$$new($ObjectArray, {
			"GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Casablanca"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Asia/Jerusalem"_s,
			ISRAEL
		}),
		$$new($ObjectArray, {
			"Asia/Tokyo"_s,
			JST
		}),
		$$new($ObjectArray, {
			"JST"_s,
			JST
		}),
		$$new($ObjectArray, {
			"Europe/Bucharest"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Shanghai"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"CTT"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"ACT"_s,
			DARWIN
		}),
		$$new($ObjectArray, {
			"AET"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"AGT"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"ART"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Africa/Abidjan"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Accra"_s,
			GHMT
		}),
		$$new($ObjectArray, {
			"Africa/Addis_Ababa"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Algiers"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Africa/Asmara"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Asmera"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Bamako"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bangui"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Banjul"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bissau"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Blantyre"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Brazzaville"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Bujumbura"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Cairo"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Africa/Ceuta"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Africa/Conakry"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Dakar"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Dar_es_Salaam"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Djibouti"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Douala"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/El_Aaiun"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Africa/Freetown"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Gaborone"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Harare"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Johannesburg"_s,
			SAST
		}),
		$$new($ObjectArray, {
			"Africa/Juba"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Kampala"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Khartoum"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Kigali"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Kinshasa"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Lagos"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Libreville"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Lome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Luanda"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Lubumbashi"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Lusaka"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Malabo"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Maputo"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"Africa/Maseru"_s,
			SAST
		}),
		$$new($ObjectArray, {
			"Africa/Mbabane"_s,
			SAST
		}),
		$$new($ObjectArray, {
			"Africa/Mogadishu"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Monrovia"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Nairobi"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Africa/Ndjamena"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Niamey"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Nouakchott"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Ouagadougou"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Porto-Novo"_s,
			WAT
		}),
		$$new($ObjectArray, {
			"Africa/Sao_Tome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Timbuktu"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Tripoli"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Africa/Tunis"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Africa/Windhoek"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"America/Adak"_s,
			HST
		}),
		$$new($ObjectArray, {
			"America/Anguilla"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Antigua"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Araguaina"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Buenos_Aires"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Catamarca"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/ComodRivadavia"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Cordoba"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Jujuy"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/La_Rioja"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Mendoza"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Rio_Gallegos"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Salta"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Juan"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Luis"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Tucuman"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Argentina/Ushuaia"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Aruba"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Asuncion"_s,
			$$new($StringArray, {
				"Paraguay Time"_s,
				"PYT"_s,
				"Paraguay Summer Time"_s,
				"PYST"_s,
				"Paraguay Time"_s,
				"PYT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Atikokan"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Atka"_s,
			HST
		}),
		$$new($ObjectArray, {
			"America/Bahia"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Bahia_Banderas"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Barbados"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Belem"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Belize"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Blanc-Sablon"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Boa_Vista"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Bogota"_s,
			$$new($StringArray, {
				"Colombia Time"_s,
				"COT"_s,
				"Colombia Summer Time"_s,
				"COST"_s,
				"Colombia Time"_s,
				"COT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Boise"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Buenos_Aires"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Cambridge_Bay"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Campo_Grande"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Cancun"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Caracas"_s,
			$$new($StringArray, {
				"Venezuela Time"_s,
				"VET"_s,
				"Venezuela Summer Time"_s,
				"VEST"_s,
				"Venezuela Time"_s,
				"VET"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Catamarca"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Cayenne"_s,
			$$new($StringArray, {
				"French Guiana Time"_s,
				"GFT"_s,
				"French Guiana Summer Time"_s,
				"GFST"_s,
				"French Guiana Time"_s,
				"GFT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Cayman"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Chihuahua"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Creston"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Coral_Harbour"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Cordoba"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Costa_Rica"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Cuiaba"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Curacao"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Danmarkshavn"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Dawson"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Dawson_Creek"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Detroit"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Dominica"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Edmonton"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Eirunepe"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"America/El_Salvador"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Ensenada"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Fort_Nelson"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Fort_Wayne"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Fortaleza"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Glace_Bay"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Godthab"_s,
			WGT
		}),
		$$new($ObjectArray, {
			"America/Goose_Bay"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Grand_Turk"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Grenada"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Guadeloupe"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Guatemala"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Guayaquil"_s,
			$$new($StringArray, {
				"Ecuador Time"_s,
				"ECT"_s,
				"Ecuador Summer Time"_s,
				"ECST"_s,
				"Ecuador Time"_s,
				"ECT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			$$new($StringArray, {
				"Guyana Time"_s,
				"GYT"_s,
				"Guyana Summer Time"_s,
				"GYST"_s,
				"Guyana Time"_s,
				"GYT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Havana"_s,
			CUBA
		}),
		$$new($ObjectArray, {
			"America/Hermosillo"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Indianapolis"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Knox"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Marengo"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Petersburg"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Tell_City"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vevay"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vincennes"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Indiana/Winamac"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Inuvik"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Iqaluit"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Jamaica"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Jujuy"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Juneau"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Kentucky/Louisville"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Kentucky/Monticello"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Knox_IN"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Kralendijk"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/La_Paz"_s,
			$$new($StringArray, {
				"Bolivia Time"_s,
				"BOT"_s,
				"Bolivia Summer Time"_s,
				"BOST"_s,
				"Bolivia Time"_s,
				"BOT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			$$new($StringArray, {
				"Peru Time"_s,
				"PET"_s,
				"Peru Summer Time"_s,
				"PEST"_s,
				"Peru Time"_s,
				"PET"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Louisville"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Lower_Princes"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Maceio"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Managua"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Manaus"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Marigot"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Martinique"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Matamoros"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Mazatlan"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Mendoza"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Menominee"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Merida"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Metlakatla"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Mexico_City"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Miquelon"_s,
			$$new($StringArray, {
				"Pierre & Miquelon Standard Time"_s,
				"PMST"_s,
				"Pierre & Miquelon Daylight Time"_s,
				"PMDT"_s,
				"Pierre & Miquelon Time"_s,
				"PMT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Moncton"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Montevideo"_s,
			$$new($StringArray, {
				"Uruguay Time"_s,
				"UYT"_s,
				"Uruguay Summer Time"_s,
				"UYST"_s,
				"Uruguay Time"_s,
				"UYT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Monterrey"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Montreal"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Montserrat"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Nassau"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Nipigon"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Nome"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Noronha"_s,
			NORONHA
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Beulah"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Center"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/New_Salem"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Nuuk"_s,
			WGT
		}),
		$$new($ObjectArray, {
			"America/Ojinaga"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Panama"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Pangnirtung"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Paramaribo"_s,
			$$new($StringArray, {
				"Suriname Time"_s,
				"SRT"_s,
				"Suriname Summer Time"_s,
				"SRST"_s,
				"Suriname Time"_s,
				"SRT"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Port-au-Prince"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Port_of_Spain"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Porto_Acre"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"America/Porto_Velho"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"America/Puerto_Rico"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Punta_Arenas"_s,
			$$new($StringArray, {
				"Punta Arenas Standard Time"_s,
				"GMT-03:00"_s,
				"Punta Arenas Standard Time"_s,
				"GMT-03:00"_s,
				"Punta Arenas Time"_s,
				"GMT-03:00"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Rainy_River"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Rankin_Inlet"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Recife"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Regina"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Resolute"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Rio_Branco"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"America/Rosario"_s,
			AGT
		}),
		$$new($ObjectArray, {
			"America/Santa_Isabel"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Santarem"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Santiago"_s,
			CLT
		}),
		$$new($ObjectArray, {
			"America/Santo_Domingo"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Sao_Paulo"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"America/Scoresbysund"_s,
			EGT
		}),
		$$new($ObjectArray, {
			"America/Shiprock"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/St_Barthelemy"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Kitts"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Lucia"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Thomas"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/St_Vincent"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Swift_Current"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Tegucigalpa"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Thule"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Thunder_Bay"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Tijuana"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Toronto"_s,
			EST
		}),
		$$new($ObjectArray, {
			"America/Tortola"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Vancouver"_s,
			PST
		}),
		$$new($ObjectArray, {
			"America/Virgin"_s,
			AST
		}),
		$$new($ObjectArray, {
			"America/Whitehorse"_s,
			MST
		}),
		$$new($ObjectArray, {
			"America/Winnipeg"_s,
			CST
		}),
		$$new($ObjectArray, {
			"America/Yakutat"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"America/Yellowknife"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Antarctica/Casey"_s,
			WST_AUS
		}),
		$$new($ObjectArray, {
			"Antarctica/Davis"_s,
			$$new($StringArray, {
				"Davis Time"_s,
				"DAVT"_s,
				"Davis Summer Time"_s,
				"DAVST"_s,
				"Davis Time"_s,
				"DAVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			$$new($StringArray, {
				"Dumont-d\'Urville Time"_s,
				"DDUT"_s,
				"Dumont-d\'Urville Summer Time"_s,
				"DDUST"_s,
				"Dumont-d\'Urville Time"_s,
				"DDUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			$$new($StringArray, {
				"Macquarie Island Standard Time"_s,
				"MIST"_s,
				"Macquarie Island Daylight Time"_s,
				"MIDT"_s,
				"Macquarie Island Time"_s,
				"MIST"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			$$new($StringArray, {
				"Mawson Time"_s,
				"MAWT"_s,
				"Mawson Summer Time"_s,
				"MAWST"_s,
				"Mawson Time"_s,
				"MAWT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/McMurdo"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"Antarctica/Palmer"_s,
			CLT
		}),
		$$new($ObjectArray, {
			"Antarctica/Rothera"_s,
			$$new($StringArray, {
				"Rothera Time"_s,
				"ROTT"_s,
				"Rothera Summer Time"_s,
				"ROTST"_s,
				"Rothera Time"_s,
				"ROTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/South_Pole"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"Antarctica/Syowa"_s,
			$$new($StringArray, {
				"Syowa Time"_s,
				"SYOT"_s,
				"Syowa Summer Time"_s,
				"SYOST"_s,
				"Syowa Time"_s,
				"SYOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			$$new($StringArray, {
				"Coordinated Universal Time"_s,
				"UTC"_s,
				"Central European Summer Time"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			})
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			$$new($StringArray, {
				"Vostok Time"_s,
				"VOST"_s,
				"Vostok Summer Time"_s,
				"VOSST"_s,
				"Vostok Time"_s,
				"VOST"_s
			})
		}),
		$$new($ObjectArray, {
			"Arctic/Longyearbyen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Asia/Aden"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Almaty"_s,
			$$new($StringArray, {
				"Alma-Ata Time"_s,
				"ALMT"_s,
				"Alma-Ata Summer Time"_s,
				"ALMST"_s,
				"Alma-Ata Time"_s,
				"ALMT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Amman"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Anadyr"_s,
			$$new($StringArray, {
				"Anadyr Time"_s,
				"ANAT"_s,
				"Anadyr Summer Time"_s,
				"ANAST"_s,
				"Anadyr Time"_s,
				"ANAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			$$new($StringArray, {
				"Aqtau Time"_s,
				"AQTT"_s,
				"Aqtau Summer Time"_s,
				"AQTST"_s,
				"Aqtau Time"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			$$new($StringArray, {
				"Aqtobe Time"_s,
				"AQTT"_s,
				"Aqtobe Summer Time"_s,
				"AQTST"_s,
				"Aqtobe Time"_s,
				"AQTT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Ashgabat"_s,
			TMT
		}),
		$$new($ObjectArray, {
			"Asia/Ashkhabad"_s,
			TMT
		}),
		$$new($ObjectArray, {
			"Asia/Baghdad"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Bahrain"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Barnaul"_s,
			$$new($StringArray, {
				"Barnaul Standard Time"_s,
				"GMT+07:00"_s,
				"Barnaul Daylight Time"_s,
				"GMT+07:00"_s,
				"Barnaul Time"_s,
				"GMT+07:00"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Baku"_s,
			$$new($StringArray, {
				"Azerbaijan Time"_s,
				"AZT"_s,
				"Azerbaijan Summer Time"_s,
				"AZST"_s,
				"Azerbaijan Time"_s,
				"AZT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Bangkok"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Beirut"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Bishkek"_s,
			$$new($StringArray, {
				"Kirgizstan Time"_s,
				"KGT"_s,
				"Kirgizstan Summer Time"_s,
				"KGST"_s,
				"Kirgizstan Time"_s,
				"KGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			$$new($StringArray, {
				"Brunei Time"_s,
				"BNT"_s,
				"Brunei Summer Time"_s,
				"BNST"_s,
				"Brunei Time"_s,
				"BNT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Calcutta"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Asia/Chita"_s,
			YAKT
		}),
		$$new($ObjectArray, {
			"Asia/Choibalsan"_s,
			$$new($StringArray, {
				"Choibalsan Time"_s,
				"CHOT"_s,
				"Choibalsan Summer Time"_s,
				"CHOST"_s,
				"Choibalsan Time"_s,
				"CHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Chongqing"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Chungking"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Colombo"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Asia/Dacca"_s,
			BDT
		}),
		$$new($ObjectArray, {
			"Asia/Dhaka"_s,
			BDT
		}),
		$$new($ObjectArray, {
			"Asia/Dili"_s,
			$$new($StringArray, {
				"Timor-Leste Time"_s,
				"TLT"_s,
				"Timor-Leste Summer Time"_s,
				"TLST"_s,
				"Timor-Leste Time"_s,
				"TLT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Damascus"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Dubai"_s,
			GST
		}),
		$$new($ObjectArray, {
			"Asia/Dushanbe"_s,
			$$new($StringArray, {
				"Tajikistan Time"_s,
				"TJT"_s,
				"Tajikistan Summer Time"_s,
				"TJST"_s,
				"Tajikistan Time"_s,
				"TJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Famagusta"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Gaza"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Harbin"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Hebron"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Ho_Chi_Minh"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Hong_Kong"_s,
			HKT
		}),
		$$new($ObjectArray, {
			"Asia/Hovd"_s,
			$$new($StringArray, {
				"Hovd Time"_s,
				"HOVT"_s,
				"Hovd Summer Time"_s,
				"HOVST"_s,
				"Hovd Time"_s,
				"HOVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Irkutsk"_s,
			IRKT
		}),
		$$new($ObjectArray, {
			"Asia/Istanbul"_s,
			TRT
		}),
		$$new($ObjectArray, {
			"Asia/Jakarta"_s,
			WIT
		}),
		$$new($ObjectArray, {
			"Asia/Jayapura"_s,
			$$new($StringArray, {
				"East Indonesia Time"_s,
				"WIT"_s,
				"East Indonesia Summer Time"_s,
				"EIST"_s,
				"East Indonesia Time"_s,
				"WIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			$$new($StringArray, {
				"Afghanistan Time"_s,
				"AFT"_s,
				"Afghanistan Summer Time"_s,
				"AFST"_s,
				"Afghanistan Time"_s,
				"AFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			$$new($StringArray, {
				"Petropavlovsk-Kamchatski Time"_s,
				"PETT"_s,
				"Petropavlovsk-Kamchatski Summer Time"_s,
				"PETST"_s,
				"Petropavlovsk-Kamchatski Time"_s,
				"PETT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Karachi"_s,
			PKT
		}),
		$$new($ObjectArray, {
			"Asia/Kashgar"_s,
			XJT
		}),
		$$new($ObjectArray, {
			"Asia/Kathmandu"_s,
			NPT
		}),
		$$new($ObjectArray, {
			"Asia/Katmandu"_s,
			NPT
		}),
		$$new($ObjectArray, {
			"Asia/Khandyga"_s,
			YAKT
		}),
		$$new($ObjectArray, {
			"Asia/Kolkata"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Asia/Krasnoyarsk"_s,
			KRAT
		}),
		$$new($ObjectArray, {
			"Asia/Kuala_Lumpur"_s,
			MYT
		}),
		$$new($ObjectArray, {
			"Asia/Kuching"_s,
			MYT
		}),
		$$new($ObjectArray, {
			"Asia/Kuwait"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Macao"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Macau"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Magadan"_s,
			$$new($StringArray, {
				"Magadan Time"_s,
				"MAGT"_s,
				"Magadan Summer Time"_s,
				"MAGST"_s,
				"Magadan Time"_s,
				"MAGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Makassar"_s,
			CIT
		}),
		$$new($ObjectArray, {
			"Asia/Manila"_s,
			$$new($StringArray, {
				"Philippines Standard Time"_s,
				"PST"_s,
				"Philippines Daylight Time"_s,
				"PDT"_s,
				"Philippines Time"_s,
				"PT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Muscat"_s,
			GST
		}),
		$$new($ObjectArray, {
			"Asia/Nicosia"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Asia/Novokuznetsk"_s,
			KRAT
		}),
		$$new($ObjectArray, {
			"Asia/Novosibirsk"_s,
			NOVT
		}),
		$$new($ObjectArray, {
			"Asia/Oral"_s,
			$$new($StringArray, {
				"Oral Time"_s,
				"ORAT"_s,
				"Oral Summer Time"_s,
				"ORAST"_s,
				"Oral Time"_s,
				"ORAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			$$new($StringArray, {
				"Omsk Time"_s,
				"OMST"_s,
				"Omsk Summer Time"_s,
				"OMSST"_s,
				"Omsk Time"_s,
				"OMST"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Phnom_Penh"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Pontianak"_s,
			WIT
		}),
		$$new($ObjectArray, {
			"Asia/Pyongyang"_s,
			KST
		}),
		$$new($ObjectArray, {
			"Asia/Qatar"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Qostanay"_s,
			$$new($StringArray, {
				"Kostanay Standard Time"_s,
				"QOST"_s,
				"Kostanay Summer Time"_s,
				"QOSST"_s,
				"Kostanay Time"_s,
				"QOST"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Qyzylorda"_s,
			$$new($StringArray, {
				"Qyzylorda Time"_s,
				"QYZT"_s,
				"Qyzylorda Summer Time"_s,
				"QYZST"_s,
				"Qyzylorda Time"_s,
				"QYZT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Rangoon"_s,
			MMT
		}),
		$$new($ObjectArray, {
			"Asia/Riyadh"_s,
			ARAST
		}),
		$$new($ObjectArray, {
			"Asia/Saigon"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Sakhalin"_s,
			$$new($StringArray, {
				"Sakhalin Time"_s,
				"SAKT"_s,
				"Sakhalin Summer Time"_s,
				"SAKST"_s,
				"Sakhalin Time"_s,
				"SAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Samarkand"_s,
			UZT
		}),
		$$new($ObjectArray, {
			"Asia/Seoul"_s,
			KST
		}),
		$$new($ObjectArray, {
			"Asia/Singapore"_s,
			SGT
		}),
		$$new($ObjectArray, {
			"Asia/Srednekolymsk"_s,
			$$new($StringArray, {
				"Srednekolymsk Time"_s,
				"SRET"_s,
				"Srednekolymsk Daylight Time"_s,
				"SREDT"_s,
				"Srednekolymsk Time"_s,
				"SRET"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Taipei"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"Asia/Tel_Aviv"_s,
			ISRAEL
		}),
		$$new($ObjectArray, {
			"Asia/Tashkent"_s,
			UZT
		}),
		$$new($ObjectArray, {
			"Asia/Tbilisi"_s,
			$$new($StringArray, {
				"Georgia Time"_s,
				"GET"_s,
				"Georgia Summer Time"_s,
				"GEST"_s,
				"Georgia Time"_s,
				"GET"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Tehran"_s,
			IRT
		}),
		$$new($ObjectArray, {
			"Asia/Thimbu"_s,
			BTT
		}),
		$$new($ObjectArray, {
			"Asia/Thimphu"_s,
			BTT
		}),
		$$new($ObjectArray, {
			"Asia/Tomsk"_s,
			$$new($StringArray, {
				"Tomsk Standard Time"_s,
				"GMT+07:00"_s,
				"Tomsk Daylight Time"_s,
				"GMT+07:00"_s,
				"Tomsk Time"_s,
				"GMT+07:00"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Ujung_Pandang"_s,
			CIT
		}),
		$$new($ObjectArray, {
			"Asia/Ulaanbaatar"_s,
			ULAT
		}),
		$$new($ObjectArray, {
			"Asia/Ulan_Bator"_s,
			ULAT
		}),
		$$new($ObjectArray, {
			"Asia/Urumqi"_s,
			XJT
		}),
		$$new($ObjectArray, {
			"Asia/Ust-Nera"_s,
			$$new($StringArray, {
				"Ust-Nera Time"_s,
				"VLAT"_s,
				"Ust-Nera Summer Time"_s,
				"VLAST"_s,
				"Ust-Nera Time"_s,
				"VLAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Vientiane"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"Asia/Vladivostok"_s,
			$$new($StringArray, {
				"Vladivostok Time"_s,
				"VLAT"_s,
				"Vladivostok Summer Time"_s,
				"VLAST"_s,
				"Vladivostok Time"_s,
				"VLAT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Yakutsk"_s,
			YAKT
		}),
		$$new($ObjectArray, {
			"Asia/Yangon"_s,
			MMT
		}),
		$$new($ObjectArray, {
			"Asia/Yekaterinburg"_s,
			$$new($StringArray, {
				"Yekaterinburg Time"_s,
				"YEKT"_s,
				"Yekaterinburg Summer Time"_s,
				"YEKST"_s,
				"Yekaterinburg Time"_s,
				"YEKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Asia/Yerevan"_s,
			ARMT
		}),
		$$new($ObjectArray, {
			"Atlantic/Azores"_s,
			$$new($StringArray, {
				"Azores Time"_s,
				"AZOT"_s,
				"Azores Summer Time"_s,
				"AZOST"_s,
				"Azores Time"_s,
				"AZOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Atlantic/Bermuda"_s,
			AST
		}),
		$$new($ObjectArray, {
			"Atlantic/Canary"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Cape_Verde"_s,
			$$new($StringArray, {
				"Cape Verde Time"_s,
				"CVT"_s,
				"Cape Verde Summer Time"_s,
				"CVST"_s,
				"Cape Verde Time"_s,
				"CVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Atlantic/Faeroe"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Faroe"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Jan_Mayen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Atlantic/Madeira"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Atlantic/Reykjavik"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Atlantic/South_Georgia"_s,
			$$new($StringArray, {
				"South Georgia Standard Time"_s,
				"GST"_s,
				"South Georgia Daylight Time"_s,
				"GDT"_s,
				"South Georgia Time"_s,
				"GT"_s
			})
		}),
		$$new($ObjectArray, {
			"Atlantic/St_Helena"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Atlantic/Stanley"_s,
			$$new($StringArray, {
				"Falkland Is. Time"_s,
				"FKT"_s,
				"Falkland Is. Summer Time"_s,
				"FKST"_s,
				"Falkland Is. Time"_s,
				"FKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Australia/ACT"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Adelaide"_s,
			ADELAIDE
		}),
		$$new($ObjectArray, {
			"Australia/Brisbane"_s,
			BRISBANE
		}),
		$$new($ObjectArray, {
			"Australia/Broken_Hill"_s,
			BROKEN_HILL
		}),
		$$new($ObjectArray, {
			"Australia/Canberra"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Currie"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Darwin"_s,
			DARWIN
		}),
		$$new($ObjectArray, {
			"Australia/Eucla"_s,
			$$new($StringArray, {
				"Australian Central Western Standard Time"_s,
				"ACWST"_s,
				"Australian Central Western Daylight Time"_s,
				"ACWDT"_s,
				"Australian Central Western Time"_s,
				"ACWT"_s
			})
		}),
		$$new($ObjectArray, {
			"Australia/Hobart"_s,
			TASMANIA
		}),
		$$new($ObjectArray, {
			"Australia/LHI"_s,
			LORD_HOWE
		}),
		$$new($ObjectArray, {
			"Australia/Lindeman"_s,
			BRISBANE
		}),
		$$new($ObjectArray, {
			"Australia/Lord_Howe"_s,
			LORD_HOWE
		}),
		$$new($ObjectArray, {
			"Australia/Melbourne"_s,
			VICTORIA
		}),
		$$new($ObjectArray, {
			"Australia/North"_s,
			DARWIN
		}),
		$$new($ObjectArray, {
			"Australia/NSW"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Perth"_s,
			WST_AUS
		}),
		$$new($ObjectArray, {
			"Australia/Queensland"_s,
			BRISBANE
		}),
		$$new($ObjectArray, {
			"Australia/South"_s,
			ADELAIDE
		}),
		$$new($ObjectArray, {
			"Australia/Sydney"_s,
			EST_NSW
		}),
		$$new($ObjectArray, {
			"Australia/Tasmania"_s,
			TASMANIA
		}),
		$$new($ObjectArray, {
			"Australia/Victoria"_s,
			VICTORIA
		}),
		$$new($ObjectArray, {
			"Australia/West"_s,
			WST_AUS
		}),
		$$new($ObjectArray, {
			"Australia/Yancowinna"_s,
			BROKEN_HILL
		}),
		$$new($ObjectArray, {
			"BET"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"BST"_s,
			BDT
		}),
		$$new($ObjectArray, {
			"Brazil/Acre"_s,
			ACT
		}),
		$$new($ObjectArray, {
			"Brazil/DeNoronha"_s,
			NORONHA
		}),
		$$new($ObjectArray, {
			"Brazil/East"_s,
			BRT
		}),
		$$new($ObjectArray, {
			"Brazil/West"_s,
			AMT
		}),
		$$new($ObjectArray, {
			"Canada/Atlantic"_s,
			AST
		}),
		$$new($ObjectArray, {
			"Canada/Central"_s,
			CST
		}),
		$$new($ObjectArray, {
			"Canada/Eastern"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Canada/Mountain"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Canada/Newfoundland"_s,
			NST
		}),
		$$new($ObjectArray, {
			"Canada/Pacific"_s,
			PST
		}),
		$$new($ObjectArray, {
			"Canada/Yukon"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Canada/Saskatchewan"_s,
			CST
		}),
		$$new($ObjectArray, {
			"CAT"_s,
			CAT
		}),
		$$new($ObjectArray, {
			"CET"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Chile/Continental"_s,
			CLT
		}),
		$$new($ObjectArray, {
			"Chile/EasterIsland"_s,
			EASTER
		}),
		$$new($ObjectArray, {
			"CST6CDT"_s,
			CST
		}),
		$$new($ObjectArray, {
			"Cuba"_s,
			CUBA
		}),
		$$new($ObjectArray, {
			"EAT"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"EET"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Egypt"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Eire"_s,
			DUBLIN
		}),
		$$new($ObjectArray, {
			"EST5EDT"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Etc/Greenwich"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Etc/UCT"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Etc/Universal"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Etc/UTC"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Etc/Zulu"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Europe/Amsterdam"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Andorra"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Astrakhan"_s,
			$$new($StringArray, {
				"Astrakhan Standard Time"_s,
				"GMT+04:00"_s,
				"Astrakhan Standard Time"_s,
				"GMT+04:00"_s,
				"Astrakhan Time"_s,
				"GMT+04:00"_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Athens"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Belfast"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Belgrade"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Berlin"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Bratislava"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Brussels"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Budapest"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Busingen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Chisinau"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Copenhagen"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Dublin"_s,
			DUBLIN
		}),
		$$new($ObjectArray, {
			"Europe/Gibraltar"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Guernsey"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Helsinki"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Isle_of_Man"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Istanbul"_s,
			TRT
		}),
		$$new($ObjectArray, {
			"Europe/Jersey"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Kaliningrad"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Kiev"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Kirov"_s,
			$$new($StringArray, {
				"Kirov Standard Time"_s,
				"GMT+03:00"_s,
				"Kirov Daylight Time"_s,
				"GMT+03:00"_s,
				"Kirov Time"_s,
				"GMT+03:00"_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Lisbon"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Europe/Ljubljana"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/London"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Europe/Luxembourg"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Madrid"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Malta"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Mariehamn"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Minsk"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Monaco"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Moscow"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Nicosia"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Oslo"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Podgorica"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Prague"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Riga"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Rome"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Samara"_s,
			$$new($StringArray, {
				"Samara Time"_s,
				"SAMT"_s,
				"Samara Summer Time"_s,
				"SAMST"_s,
				"Samara Time"_s,
				"SAMT"_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/San_Marino"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Sarajevo"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Saratov"_s,
			$$new($StringArray, {
				"Saratov Standard Time"_s,
				"GMT+04:00"_s,
				"Saratov Standard Time"_s,
				"GMT+04:00"_s,
				"Saratov Time"_s,
				"GMT+04:00"_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Simferopol"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Skopje"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Sofia"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Stockholm"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Tallinn"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Tirane"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Tiraspol"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Ulyanovsk"_s,
			$$new($StringArray, {
				"Ulyanovsk Standard Time"_s,
				"GMT+04:00"_s,
				"Ulyanovsk Standard Time"_s,
				"GMT+04:00"_s,
				"Ulyanovsk Time"_s,
				"GMT+04:00"_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Uzhgorod"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Vaduz"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Vatican"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Vienna"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Vilnius"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Volgograd"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"Europe/Warsaw"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Zagreb"_s,
			CET
		}),
		$$new($ObjectArray, {
			"Europe/Zaporozhye"_s,
			EET
		}),
		$$new($ObjectArray, {
			"Europe/Zurich"_s,
			CET
		}),
		$$new($ObjectArray, {
			"GB"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"GB-Eire"_s,
			GMTBST
		}),
		$$new($ObjectArray, {
			"Greenwich"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Hongkong"_s,
			HKT
		}),
		$$new($ObjectArray, {
			"Iceland"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Iran"_s,
			IRT
		}),
		$$new($ObjectArray, {
			"IST"_s,
			IST
		}),
		$$new($ObjectArray, {
			"Indian/Antananarivo"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Indian/Chagos"_s,
			$$new($StringArray, {
				"Indian Ocean Territory Time"_s,
				"IOT"_s,
				"Indian Ocean Territory Summer Time"_s,
				"IOST"_s,
				"Indian Ocean Territory Time"_s,
				"IOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			$$new($StringArray, {
				"Christmas Island Time"_s,
				"CXT"_s,
				"Christmas Island Summer Time"_s,
				"CXST"_s,
				"Christmas Island Time"_s,
				"CIT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			$$new($StringArray, {
				"Cocos Islands Time"_s,
				"CCT"_s,
				"Cocos Islands Summer Time"_s,
				"CCST"_s,
				"Cocos Islands Time"_s,
				"CCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Comoro"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Indian/Kerguelen"_s,
			$$new($StringArray, {
				"French Southern & Antarctic Lands Time"_s,
				"TFT"_s,
				"French Southern & Antarctic Lands Summer Time"_s,
				"TFST"_s,
				"French Southern & Antarctic Lands Time"_s,
				"TFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			$$new($StringArray, {
				"Seychelles Time"_s,
				"SCT"_s,
				"Seychelles Summer Time"_s,
				"SCST"_s,
				"Seychelles Time"_s,
				"SCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			$$new($StringArray, {
				"Maldives Time"_s,
				"MVT"_s,
				"Maldives Summer Time"_s,
				"MVST"_s,
				"Maldives Time"_s,
				"MVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			$$new($StringArray, {
				"Mauritius Time"_s,
				"MUT"_s,
				"Mauritius Summer Time"_s,
				"MUST"_s,
				"Mauritius Time"_s,
				"MUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Indian/Mayotte"_s,
			EAT
		}),
		$$new($ObjectArray, {
			"Indian/Reunion"_s,
			$$new($StringArray, {
				"Reunion Time"_s,
				"RET"_s,
				"Reunion Summer Time"_s,
				"REST"_s,
				"Reunion Time"_s,
				"RET"_s
			})
		}),
		$$new($ObjectArray, {
			"Israel"_s,
			ISRAEL
		}),
		$$new($ObjectArray, {
			"Jamaica"_s,
			EST
		}),
		$$new($ObjectArray, {
			"Japan"_s,
			JST
		}),
		$$new($ObjectArray, {
			"Kwajalein"_s,
			MHT
		}),
		$$new($ObjectArray, {
			"Libya"_s,
			EET
		}),
		$$new($ObjectArray, {
			"MET"_s,
			$$new($StringArray, {
				"Middle Europe Time"_s,
				"MET"_s,
				"Middle Europe Summer Time"_s,
				"MEST"_s,
				"Middle Europe Time"_s,
				"MET"_s
			})
		}),
		$$new($ObjectArray, {
			"Mexico/BajaNorte"_s,
			PST
		}),
		$$new($ObjectArray, {
			"Mexico/BajaSur"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Mexico/General"_s,
			CST
		}),
		$$new($ObjectArray, {
			"MIT"_s,
			WST_SAMOA
		}),
		$$new($ObjectArray, {
			"MST7MDT"_s,
			MST
		}),
		$$new($ObjectArray, {
			"Navajo"_s,
			MST
		}),
		$$new($ObjectArray, {
			"NET"_s,
			ARMT
		}),
		$$new($ObjectArray, {
			"NST"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"NZ"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"NZ-CHAT"_s,
			CHAST
		}),
		$$new($ObjectArray, {
			"PLT"_s,
			PKT
		}),
		$$new($ObjectArray, {
			"Portugal"_s,
			WET
		}),
		$$new($ObjectArray, {
			"PRT"_s,
			AST
		}),
		$$new($ObjectArray, {
			"Pacific/Apia"_s,
			WST_SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Auckland"_s,
			NZST
		}),
		$$new($ObjectArray, {
			"Pacific/Bougainville"_s,
			$$new($StringArray, {
				"Bougainville Standard Time"_s,
				"BST"_s,
				"Bougainville Daylight Time"_s,
				"BST"_s,
				"Bougainville Time"_s,
				"BT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Chatham"_s,
			CHAST
		}),
		$$new($ObjectArray, {
			"Pacific/Chuuk"_s,
			CHUT
		}),
		$$new($ObjectArray, {
			"Pacific/Easter"_s,
			EASTER
		}),
		$$new($ObjectArray, {
			"Pacific/Efate"_s,
			$$new($StringArray, {
				"Vanuatu Time"_s,
				"VUT"_s,
				"Vanuatu Summer Time"_s,
				"VUST"_s,
				"Vanuatu Time"_s,
				"VUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			$$new($StringArray, {
				"Phoenix Is. Time"_s,
				"PHOT"_s,
				"Phoenix Is. Summer Time"_s,
				"PHOST"_s,
				"Phoenix Is. Time"_s,
				"PHOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			$$new($StringArray, {
				"Tokelau Time"_s,
				"TKT"_s,
				"Tokelau Summer Time"_s,
				"TKST"_s,
				"Tokelau Time"_s,
				"TKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			$$new($StringArray, {
				"Fiji Time"_s,
				"FJT"_s,
				"Fiji Summer Time"_s,
				"FJST"_s,
				"Fiji Time"_s,
				"FJT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			$$new($StringArray, {
				"Tuvalu Time"_s,
				"TVT"_s,
				"Tuvalu Summer Time"_s,
				"TVST"_s,
				"Tuvalu Time"_s,
				"TVT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			$$new($StringArray, {
				"Galapagos Time"_s,
				"GALT"_s,
				"Galapagos Summer Time"_s,
				"GALST"_s,
				"Galapagos Time"_s,
				"GALT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Gambier"_s,
			GAMBIER
		}),
		$$new($ObjectArray, {
			"Pacific/Guadalcanal"_s,
			SBT
		}),
		$$new($ObjectArray, {
			"Pacific/Guam"_s,
			ChST
		}),
		$$new($ObjectArray, {
			"Pacific/Johnston"_s,
			HST
		}),
		$$new($ObjectArray, {
			"Pacific/Kiritimati"_s,
			$$new($StringArray, {
				"Line Is. Time"_s,
				"LINT"_s,
				"Line Is. Summer Time"_s,
				"LINST"_s,
				"Line Is. Time"_s,
				"LINT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			$$new($StringArray, {
				"Kosrae Time"_s,
				"KOST"_s,
				"Kosrae Summer Time"_s,
				"KOSST"_s,
				"Kosrae Time"_s,
				"KOST"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Kwajalein"_s,
			MHT
		}),
		$$new($ObjectArray, {
			"Pacific/Majuro"_s,
			MHT
		}),
		$$new($ObjectArray, {
			"Pacific/Marquesas"_s,
			$$new($StringArray, {
				"Marquesas Time"_s,
				"MART"_s,
				"Marquesas Summer Time"_s,
				"MARST"_s,
				"Marquesas Time"_s,
				"MART"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Midway"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Nauru"_s,
			$$new($StringArray, {
				"Nauru Time"_s,
				"NRT"_s,
				"Nauru Summer Time"_s,
				"NRST"_s,
				"Nauru Time"_s,
				"NRT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			$$new($StringArray, {
				"Niue Time"_s,
				"NUT"_s,
				"Niue Summer Time"_s,
				"NUST"_s,
				"Niue Time"_s,
				"NUT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			$$new($StringArray, {
				"Norfolk Time"_s,
				"NFT"_s,
				"Norfolk Summer Time"_s,
				"NFST"_s,
				"Norfolk Time"_s,
				"NFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			$$new($StringArray, {
				"New Caledonia Time"_s,
				"NCT"_s,
				"New Caledonia Summer Time"_s,
				"NCST"_s,
				"New Caledonia Time"_s,
				"NCT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Pago_Pago"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Palau"_s,
			$$new($StringArray, {
				"Palau Time"_s,
				"PWT"_s,
				"Palau Summer Time"_s,
				"PWST"_s,
				"Palau Time"_s,
				"PWT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Pitcairn"_s,
			PITCAIRN
		}),
		$$new($ObjectArray, {
			"Pacific/Pohnpei"_s,
			PONT
		}),
		$$new($ObjectArray, {
			"Pacific/Ponape"_s,
			PONT
		}),
		$$new($ObjectArray, {
			"Pacific/Port_Moresby"_s,
			$$new($StringArray, {
				"Papua New Guinea Time"_s,
				"PGT"_s,
				"Papua New Guinea Summer Time"_s,
				"PGST"_s,
				"Papua New Guinea Time"_s,
				"PGT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			$$new($StringArray, {
				"Cook Is. Time"_s,
				"CKT"_s,
				"Cook Is. Summer Time"_s,
				"CKHST"_s,
				"Cook Is. Time"_s,
				"CKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Saipan"_s,
			ChST
		}),
		$$new($ObjectArray, {
			"Pacific/Samoa"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"Pacific/Tahiti"_s,
			$$new($StringArray, {
				"Tahiti Time"_s,
				"TAHT"_s,
				"Tahiti Summer Time"_s,
				"TAHST"_s,
				"Tahiti Time"_s,
				"TAHT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			$$new($StringArray, {
				"Gilbert Is. Time"_s,
				"GILT"_s,
				"Gilbert Is. Summer Time"_s,
				"GILST"_s,
				"Gilbert Is. Time"_s,
				"GILT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			$$new($StringArray, {
				"Tonga Time"_s,
				"TOT"_s,
				"Tonga Summer Time"_s,
				"TOST"_s,
				"Tonga Time"_s,
				"TOT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Truk"_s,
			CHUT
		}),
		$$new($ObjectArray, {
			"Pacific/Wake"_s,
			$$new($StringArray, {
				"Wake Time"_s,
				"WAKT"_s,
				"Wake Summer Time"_s,
				"WAKST"_s,
				"Wake Time"_s,
				"WAKT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			$$new($StringArray, {
				"Wallis & Futuna Time"_s,
				"WFT"_s,
				"Wallis & Futuna Summer Time"_s,
				"WFST"_s,
				"Wallis & Futuna Time"_s,
				"WFT"_s
			})
		}),
		$$new($ObjectArray, {
			"Pacific/Yap"_s,
			CHUT
		}),
		$$new($ObjectArray, {
			"Poland"_s,
			CET
		}),
		$$new($ObjectArray, {
			"PRC"_s,
			CTT
		}),
		$$new($ObjectArray, {
			"PST8PDT"_s,
			PST
		}),
		$$new($ObjectArray, {
			"ROK"_s,
			KST
		}),
		$$new($ObjectArray, {
			"Singapore"_s,
			SGT
		}),
		$$new($ObjectArray, {
			"SST"_s,
			SBT
		}),
		$$new($ObjectArray, {
			"SystemV/AST4"_s,
			AST
		}),
		$$new($ObjectArray, {
			"SystemV/AST4ADT"_s,
			AST
		}),
		$$new($ObjectArray, {
			"SystemV/CST6"_s,
			CST
		}),
		$$new($ObjectArray, {
			"SystemV/CST6CDT"_s,
			CST
		}),
		$$new($ObjectArray, {
			"SystemV/EST5"_s,
			EST
		}),
		$$new($ObjectArray, {
			"SystemV/EST5EDT"_s,
			EST
		}),
		$$new($ObjectArray, {
			"SystemV/HST10"_s,
			HST
		}),
		$$new($ObjectArray, {
			"SystemV/MST7"_s,
			MST
		}),
		$$new($ObjectArray, {
			"SystemV/MST7MDT"_s,
			MST
		}),
		$$new($ObjectArray, {
			"SystemV/PST8"_s,
			PST
		}),
		$$new($ObjectArray, {
			"SystemV/PST8PDT"_s,
			PST
		}),
		$$new($ObjectArray, {
			"SystemV/YST9"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"SystemV/YST9YDT"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"Turkey"_s,
			TRT
		}),
		$$new($ObjectArray, {
			"UCT"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"Universal"_s,
			UTC
		}),
		$$new($ObjectArray, {
			"US/Alaska"_s,
			AKST
		}),
		$$new($ObjectArray, {
			"US/Aleutian"_s,
			HST
		}),
		$$new($ObjectArray, {
			"US/Arizona"_s,
			MST
		}),
		$$new($ObjectArray, {
			"US/Central"_s,
			CST
		}),
		$$new($ObjectArray, {
			"US/Eastern"_s,
			EST
		}),
		$$new($ObjectArray, {
			"US/Hawaii"_s,
			HST
		}),
		$$new($ObjectArray, {
			"US/Indiana-Starke"_s,
			CST
		}),
		$$new($ObjectArray, {
			"US/East-Indiana"_s,
			EST
		}),
		$$new($ObjectArray, {
			"US/Michigan"_s,
			EST
		}),
		$$new($ObjectArray, {
			"US/Mountain"_s,
			MST
		}),
		$$new($ObjectArray, {
			"US/Pacific"_s,
			PST
		}),
		$$new($ObjectArray, {
			"US/Samoa"_s,
			SAMOA
		}),
		$$new($ObjectArray, {
			"VST"_s,
			ICT
		}),
		$$new($ObjectArray, {
			"W-SU"_s,
			MSK
		}),
		$$new($ObjectArray, {
			"WET"_s,
			WET
		}),
		$$new($ObjectArray, {
			"Zulu"_s,
			UTC
		})
	});
}

TimeZoneNames::TimeZoneNames() {
}

$Class* TimeZoneNames::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.TimeZoneNames",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames);
	});
	return class$;
}

$Class* TimeZoneNames::class$ = nullptr;

		} // resources
	} // util
} // sun