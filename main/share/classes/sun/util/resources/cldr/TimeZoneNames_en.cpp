#include <sun/util/resources/cldr/TimeZoneNames_en.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ETC_UTC
#undef GMT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

void TimeZoneNames_en::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en::getContents() {
	$useLocalObjectStack();
	$var($StringArray, GMT, $new($StringArray, {
		"Greenwich Mean Time"_s,
		"GMT"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Acre, $new($StringArray, {
		"Acre Standard Time"_s,
		""_s,
		"Acre Summer Time"_s,
		""_s,
		"Acre Time"_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		"Apia Standard Time"_s,
		""_s,
		"Apia Daylight Time"_s,
		""_s,
		"Apia Time"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		"Cook Islands Standard Time"_s,
		""_s,
		"Cook Islands Half Summer Time"_s,
		""_s,
		"Cook Islands Time"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		"Cuba Standard Time"_s,
		""_s,
		"Cuba Daylight Time"_s,
		""_s,
		"Cuba Time"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		"Fiji Standard Time"_s,
		""_s,
		"Fiji Summer Time"_s,
		""_s,
		"Fiji Time"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		"Gulf Standard Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		"Hovd Standard Time"_s,
		""_s,
		"Hovd Summer Time"_s,
		""_s,
		"Hovd Time"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		"Iran Standard Time"_s,
		""_s,
		"Iran Daylight Time"_s,
		""_s,
		"Iran Time"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		"Niue Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		"Omsk Standard Time"_s,
		""_s,
		"Omsk Summer Time"_s,
		""_s,
		"Omsk Time"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		"Peru Standard Time"_s,
		""_s,
		"Peru Summer Time"_s,
		""_s,
		"Peru Time"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		"Chuuk Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		"Wake Island Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Casey, $new($StringArray, {
		"Casey Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		"Chile Standard Time"_s,
		""_s,
		"Chile Summer Time"_s,
		""_s,
		"Chile Time"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		"China Standard Time"_s,
		""_s,
		"China Daylight Time"_s,
		""_s,
		"China Time"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		"Cocos Islands Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		"Davis Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		"India Standard Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		"Japan Standard Time"_s,
		""_s,
		"Japan Daylight Time"_s,
		""_s,
		"Japan Time"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		"Korean Standard Time"_s,
		""_s,
		"Korean Daylight Time"_s,
		""_s,
		"Korean Time"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		"Nauru Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		"Nepal Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		"Palau Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		"Samoa Standard Time"_s,
		""_s,
		"Samoa Daylight Time"_s,
		""_s,
		"Samoa Time"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		"Syowa Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		"Tonga Standard Time"_s,
		""_s,
		"Tonga Summer Time"_s,
		""_s,
		"Tonga Time"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		"Alaska Standard Time"_s,
		"AKST"_s,
		"Alaska Daylight Time"_s,
		"AKDT"_s,
		"Alaska Time"_s,
		"AKT"_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		"Amazon Standard Time"_s,
		""_s,
		"Amazon Summer Time"_s,
		""_s,
		"Amazon Time"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		"Anadyr Standard Time"_s,
		""_s,
		"Anadyr Summer Time"_s,
		""_s,
		"Anadyr Time"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		"Azores Standard Time"_s,
		""_s,
		"Azores Summer Time"_s,
		""_s,
		"Azores Time"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		"Bhutan Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		"Brunei Darussalam Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		"Easter Island Standard Time"_s,
		""_s,
		"Easter Island Summer Time"_s,
		""_s,
		"Easter Island Time"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		"Guyana Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		"Israel Standard Time"_s,
		""_s,
		"Israel Daylight Time"_s,
		""_s,
		"Israel Time"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		"Kosrae Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		"Mawson Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		"Moscow Standard Time"_s,
		""_s,
		"Moscow Summer Time"_s,
		""_s,
		"Moscow Time"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		"Ponape Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		"Samara Standard Time"_s,
		""_s,
		"Samara Summer Time"_s,
		""_s,
		"Samara Time"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		"Tahiti Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		"Taipei Standard Time"_s,
		""_s,
		"Taipei Daylight Time"_s,
		""_s,
		"Taipei Time"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		"Tuvalu Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		"Vostok Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		"Wallis & Futuna Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		"Arabian Standard Time"_s,
		""_s,
		"Arabian Daylight Time"_s,
		""_s,
		"Arabian Time"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		"Armenia Standard Time"_s,
		""_s,
		"Armenia Summer Time"_s,
		""_s,
		"Armenia Time"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		"Bolivia Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		"Chatham Standard Time"_s,
		""_s,
		"Chatham Daylight Time"_s,
		""_s,
		"Chatham Time"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		"Coordinated Universal Time"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		"Ecuador Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		"Gambier Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		"Georgia Standard Time"_s,
		""_s,
		"Georgia Summer Time"_s,
		""_s,
		"Georgia Time"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		"Irkutsk Standard Time"_s,
		""_s,
		"Irkutsk Summer Time"_s,
		""_s,
		"Irkutsk Time"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		"Magadan Standard Time"_s,
		""_s,
		"Magadan Summer Time"_s,
		""_s,
		"Magadan Time"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		"Myanmar Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		"Norfolk Island Standard Time"_s,
		""_s,
		"Norfolk Island Daylight Time"_s,
		""_s,
		"Norfolk Island Time"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		"Fernando de Noronha Standard Time"_s,
		""_s,
		"Fernando de Noronha Summer Time"_s,
		""_s,
		"Fernando de Noronha Time"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"Réunion Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		"Rothera Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		"Solomon Islands Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		"Tokelau Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		"Uruguay Standard Time"_s,
		""_s,
		"Uruguay Summer Time"_s,
		""_s,
		"Uruguay Time"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		"Vanuatu Standard Time"_s,
		""_s,
		"Vanuatu Summer Time"_s,
		""_s,
		"Vanuatu Time"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		"Yakutsk Standard Time"_s,
		""_s,
		"Yakutsk Summer Time"_s,
		""_s,
		"Yakutsk Time"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		"Atlantic Standard Time"_s,
		"AST"_s,
		"Atlantic Daylight Time"_s,
		"ADT"_s,
		"Atlantic Time"_s,
		"AT"_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		"Brasilia Standard Time"_s,
		""_s,
		"Brasilia Summer Time"_s,
		""_s,
		"Brasilia Time"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		"Chamorro Standard Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		"Colombia Standard Time"_s,
		""_s,
		"Colombia Summer Time"_s,
		""_s,
		"Colombia Time"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		"Falkland Islands Standard Time"_s,
		""_s,
		"Falkland Islands Summer Time"_s,
		""_s,
		"Falkland Islands Time"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		"Malaysia Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		"Maldives Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		"Ulaanbaatar Standard Time"_s,
		""_s,
		"Ulaanbaatar Summer Time"_s,
		""_s,
		"Ulaanbaatar Time"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		"Pakistan Standard Time"_s,
		""_s,
		"Pakistan Summer Time"_s,
		""_s,
		"Pakistan Time"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		"Paraguay Standard Time"_s,
		""_s,
		"Paraguay Summer Time"_s,
		""_s,
		"Paraguay Time"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		"Pitcairn Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		"Sakhalin Standard Time"_s,
		""_s,
		"Sakhalin Summer Time"_s,
		""_s,
		"Sakhalin Time"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		"Suriname Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		"Argentina Standard Time"_s,
		""_s,
		"Argentina Summer Time"_s,
		""_s,
		"Argentina Time"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		"Christmas Island Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		"Galapagos Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		"Hong Kong Standard Time"_s,
		""_s,
		"Hong Kong Summer Time"_s,
		""_s,
		"Hong Kong Time"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		"Indochina Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		"Petropavlovsk-Kamchatski Standard Time"_s,
		""_s,
		"Petropavlovsk-Kamchatski Summer Time"_s,
		""_s,
		"Petropavlovsk-Kamchatski Time"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		"Kyrgyzstan Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		"Lord Howe Standard Time"_s,
		""_s,
		"Lord Howe Daylight Time"_s,
		""_s,
		"Lord Howe Time"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		"Marquesas Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		"Mauritius Standard Time"_s,
		""_s,
		"Mauritius Summer Time"_s,
		""_s,
		"Mauritius Time"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		"Singapore Standard Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		"Venezuela Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		"Volgograd Standard Time"_s,
		""_s,
		"Volgograd Summer Time"_s,
		""_s,
		"Volgograd Time"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		"Azerbaijan Standard Time"_s,
		""_s,
		"Azerbaijan Summer Time"_s,
		""_s,
		"Azerbaijan Time"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		"Bangladesh Standard Time"_s,
		""_s,
		"Bangladesh Summer Time"_s,
		""_s,
		"Bangladesh Time"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		"Cape Verde Standard Time"_s,
		""_s,
		"Cape Verde Summer Time"_s,
		""_s,
		"Cape Verde Time"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		"East Timor Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		"Seychelles Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		"Tajikistan Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		"Uzbekistan Standard Time"_s,
		""_s,
		"Uzbekistan Summer Time"_s,
		""_s,
		"Uzbekistan Time"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		"Afghanistan Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		"Krasnoyarsk Standard Time"_s,
		""_s,
		"Krasnoyarsk Summer Time"_s,
		""_s,
		"Krasnoyarsk Time"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		"New Zealand Standard Time"_s,
		""_s,
		"New Zealand Daylight Time"_s,
		""_s,
		"New Zealand Time"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		"Novosibirsk Standard Time"_s,
		""_s,
		"Novosibirsk Summer Time"_s,
		""_s,
		"Novosibirsk Time"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		"Philippine Standard Time"_s,
		""_s,
		"Philippine Summer Time"_s,
		""_s,
		"Philippine Time"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		"Vladivostok Standard Time"_s,
		""_s,
		"Vladivostok Summer Time"_s,
		""_s,
		"Vladivostok Time"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		"Indian Ocean Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		"Line Islands Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		"Newfoundland Standard Time"_s,
		""_s,
		"Newfoundland Daylight Time"_s,
		""_s,
		"Newfoundland Time"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		"Turkmenistan Standard Time"_s,
		""_s,
		"Turkmenistan Summer Time"_s,
		""_s,
		"Turkmenistan Time"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		"French Guiana Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		"New Caledonia Standard Time"_s,
		""_s,
		"New Caledonia Summer Time"_s,
		""_s,
		"New Caledonia Time"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		"South Georgia Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		"Yekaterinburg Standard Time"_s,
		""_s,
		"Yekaterinburg Summer Time"_s,
		""_s,
		"Yekaterinburg Time"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		"Central Africa Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		"East Africa Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		"West Africa Standard Time"_s,
		""_s,
		"West Africa Summer Time"_s,
		""_s,
		"West Africa Time"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"Dumont-d’Urville Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		"Central European Standard Time"_s,
		""_s,
		"Central European Summer Time"_s,
		""_s,
		"Central European Time"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		"Eastern European Standard Time"_s,
		""_s,
		"Eastern European Summer Time"_s,
		""_s,
		"Eastern European Time"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		"Western European Standard Time"_s,
		""_s,
		"Western European Summer Time"_s,
		""_s,
		"Western European Time"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		"Mexican Pacific Standard Time"_s,
		""_s,
		"Mexican Pacific Daylight Time"_s,
		""_s,
		"Mexican Pacific Time"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		"South Africa Standard Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		"Central Standard Time"_s,
		"CST"_s,
		"Central Daylight Time"_s,
		"CDT"_s,
		"Central Time"_s,
		"CT"_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		"Eastern Standard Time"_s,
		"EST"_s,
		"Eastern Daylight Time"_s,
		"EDT"_s,
		"Eastern Time"_s,
		"ET"_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		"Pacific Standard Time"_s,
		"PST"_s,
		"Pacific Daylight Time"_s,
		"PDT"_s,
		"Pacific Time"_s,
		"PT"_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		"French Southern & Antarctic Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		"Gilbert Islands Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		"Hawaii-Aleutian Standard Time"_s,
		"HAST"_s,
		"Hawaii-Aleutian Daylight Time"_s,
		"HADT"_s,
		"Hawaii-Aleutian Time"_s,
		"HAT"_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		"Phoenix Islands Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		"St. Pierre & Miquelon Standard Time"_s,
		""_s,
		"St. Pierre & Miquelon Daylight Time"_s,
		""_s,
		"St. Pierre & Miquelon Time"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		"Mountain Standard Time"_s,
		"MST"_s,
		"Mountain Daylight Time"_s,
		"MDT"_s,
		"Mountain Time"_s,
		"MT"_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		"Marshall Islands Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		"Northwest Mexico Standard Time"_s,
		""_s,
		"Northwest Mexico Daylight Time"_s,
		""_s,
		"Northwest Mexico Time"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		"Papua New Guinea Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		"Australian Central Standard Time"_s,
		""_s,
		"Australian Central Daylight Time"_s,
		""_s,
		"Central Australia Time"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		"Australian Eastern Standard Time"_s,
		""_s,
		"Australian Eastern Daylight Time"_s,
		""_s,
		"Eastern Australia Time"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		"Australian Western Standard Time"_s,
		""_s,
		"Australian Western Daylight Time"_s,
		""_s,
		"Western Australia Time"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		"East Greenland Standard Time"_s,
		""_s,
		"East Greenland Summer Time"_s,
		""_s,
		"East Greenland Time"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		"West Greenland Standard Time"_s,
		""_s,
		"West Greenland Summer Time"_s,
		""_s,
		"West Greenland Time"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		"Central Indonesia Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		"Eastern Indonesia Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		"Western Indonesia Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		"East Kazakhstan Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		"West Kazakhstan Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		"Australian Central Western Standard Time"_s,
		""_s,
		"Australian Central Western Daylight Time"_s,
		""_s,
		"Australian Central Western Time"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"America/Los_Angeles"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"America/Denver"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Phoenix"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Chicago"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/New_York"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indianapolis"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Honolulu"_s,
			$$new($StringArray, {
				"Hawaii-Aleutian Standard Time"_s,
				"HST"_s,
				"Hawaii-Aleutian Daylight Time"_s,
				"HDT"_s,
				"Hawaii-Aleutian Time"_s,
				"HST"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Anchorage"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Halifax"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Sitka"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/St_Johns"_s,
			Newfoundland
		}),
		$$new($ObjectArray, {
			"Europe/Paris"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Jerusalem"_s,
			Israel
		}),
		$$new($ObjectArray, {
			"Asia/Tokyo"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"Europe/Bucharest"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Shanghai"_s,
			China
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			ETC_UTC
		}),
		$$new($ObjectArray, {
			"ACT"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"AET"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"ART"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"AST"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"BET"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"BST"_s,
			Bangladesh
		}),
		$$new($ObjectArray, {
			"CAT"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"CNT"_s,
			Newfoundland
		}),
		$$new($ObjectArray, {
			"CST"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"CTT"_s,
			China
		}),
		$$new($ObjectArray, {
			"EAT"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"ECT"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"JST"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"MIT"_s,
			Apia
		}),
		$$new($ObjectArray, {
			"NET"_s,
			Armenia
		}),
		$$new($ObjectArray, {
			"NST"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"PLT"_s,
			Pakistan
		}),
		$$new($ObjectArray, {
			"PNT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"PRT"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"PST"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"SST"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"EST5EDT"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Etc/GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Etc/UTC"_s,
			ETC_UTC
		}),
		$$new($ObjectArray, {
			"MST7MDT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"PST8PDT"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"Asia/Aden"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Baku"_s,
			Azerbaijan
		}),
		$$new($ObjectArray, {
			"Asia/Dili"_s,
			East_Timor
		}),
		$$new($ObjectArray, {
			"Asia/Gaza"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Hovd"_s,
			Hovd
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			Omsk
		}),
		$$new($ObjectArray, {
			"Asia/Oral"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Amman"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Chita"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Dhaka"_s,
			Bangladesh
		}),
		$$new($ObjectArray, {
			"Asia/Dubai"_s,
			Gulf
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			Afghanistan
		}),
		$$new($ObjectArray, {
			"Asia/Macau"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Qatar"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Seoul"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Africa/Juba"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Lome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Almaty"_s,
			Kazakhstan_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Anadyr"_s,
			Anadyr
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Atyrau"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Beirut"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			Brunei
		}),
		$$new($ObjectArray, {
			"Asia/Harbin"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Hebron"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Kuwait"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Manila"_s,
			Philippines
		}),
		$$new($ObjectArray, {
			"Asia/Muscat"_s,
			Gulf
		}),
		$$new($ObjectArray, {
			"Asia/Riyadh"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Saigon"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Asia/Taipei"_s,
			Taipei
		}),
		$$new($ObjectArray, {
			"Asia/Tehran"_s,
			Iran
		}),
		$$new($ObjectArray, {
			"Europe/Kiev"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Oslo"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Riga"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Rome"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			Seychelles
		}),
		$$new($ObjectArray, {
			"Pacific/Yap"_s,
			Truk
		}),
		$$new($ObjectArray, {
			"Africa/Accra"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Cairo"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Ceuta"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Africa/Dakar"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Lagos"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Tunis"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"America/Adak"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			Peru
		}),
		$$new($ObjectArray, {
			"America/Nome"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Asia/Baghdad"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Bahrain"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Bangkok"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Asia/Bishkek"_s,
			Kyrgystan
		}),
		$$new($ObjectArray, {
			"Asia/Colombo"_s,
			India
		}),
		$$new($ObjectArray, {
			"Asia/Irkutsk"_s,
			Irkutsk
		}),
		$$new($ObjectArray, {
			"Asia/Jakarta"_s,
			Indonesia_Western
		}),
		$$new($ObjectArray, {
			"Asia/Karachi"_s,
			Pakistan
		}),
		$$new($ObjectArray, {
			"Asia/Kuching"_s,
			Malaysia
		}),
		$$new($ObjectArray, {
			"Asia/Magadan"_s,
			Magadan
		}),
		$$new($ObjectArray, {
			"Asia/Nicosia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Rangoon"_s,
			Myanmar
		}),
		$$new($ObjectArray, {
			"Asia/Tbilisi"_s,
			Georgia
		}),
		$$new($ObjectArray, {
			"Asia/Thimphu"_s,
			Bhutan
		}),
		$$new($ObjectArray, {
			"Asia/Yakutsk"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Yerevan"_s,
			Armenia
		}),
		$$new($ObjectArray, {
			"Europe/Malta"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Minsk"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Sofia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Vaduz"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			Cocos
		}),
		$$new($ObjectArray, {
			"Pacific/Apia"_s,
			Apia
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			Fiji
		}),
		$$new($ObjectArray, {
			"Pacific/Guam"_s,
			Chamorro
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			Niue
		}),
		$$new($ObjectArray, {
			"Pacific/Truk"_s,
			Truk
		}),
		$$new($ObjectArray, {
			"Pacific/Wake"_s,
			Wake
		}),
		$$new($ObjectArray, {
			"SystemV/AST4"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"SystemV/CST6"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/EST5"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"SystemV/MST7"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"SystemV/PST8"_s,
			Pitcairn
		}),
		$$new($ObjectArray, {
			"SystemV/YST9"_s,
			Gambier
		}),
		$$new($ObjectArray, {
			"Africa/Asmera"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Bamako"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bangui"_s,
			Africa_Western
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
			"Africa/Douala"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Harare"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Kigali"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Luanda"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Lusaka"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Malabo"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Maputo"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Maseru"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"Africa/Niamey"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"America/Aruba"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Bahia"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Belem"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Boise"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Jujuy"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Thule"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"Asia/Ashgabat"_s,
			Turkmenistan
		}),
		$$new($ObjectArray, {
			"Asia/Calcutta"_s,
			India
		}),
		$$new($ObjectArray, {
			"Asia/Damascus"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Dushanbe"_s,
			Tajikistan
		}),
		$$new($ObjectArray, {
			"Asia/Jayapura"_s,
			Indonesia_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Katmandu"_s,
			Nepal
		}),
		$$new($ObjectArray, {
			"Asia/Khandyga"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Makassar"_s,
			Indonesia_Central
		}),
		$$new($ObjectArray, {
			"Asia/Qostanay"_s,
			Kazakhstan_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Sakhalin"_s,
			Sakhalin
		}),
		$$new($ObjectArray, {
			"Asia/Tashkent"_s,
			Uzbekistan
		}),
		$$new($ObjectArray, {
			"Asia/Ust-Nera"_s,
			Vladivostok
		}),
		$$new($ObjectArray, {
			"Europe/Athens"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Berlin"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Dublin"_s,
			$$new($StringArray, {
				"Greenwich Mean Time"_s,
				"GMT"_s,
				"Irish Standard Time"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Jersey"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Lisbon"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Europe/London"_s,
			$$new($StringArray, {
				"Greenwich Mean Time"_s,
				"GMT"_s,
				"British Summer Time"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Madrid"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Monaco"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Moscow"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Prague"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Samara"_s,
			Samara
		}),
		$$new($ObjectArray, {
			"Europe/Skopje"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Tirane"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Vienna"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Warsaw"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Zagreb"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Zurich"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Chagos"_s,
			Indian_Ocean
		}),
		$$new($ObjectArray, {
			"Indian/Comoro"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Efate"_s,
			Vanuatu
		}),
		$$new($ObjectArray, {
			"Pacific/Nauru"_s,
			Nauru
		}),
		$$new($ObjectArray, {
			"Pacific/Palau"_s,
			Palau
		}),
		$$new($ObjectArray, {
			"SystemV/HST10"_s,
			$$new($StringArray, {
				"Hawaii-Aleutian Standard Time"_s,
				"HST"_s,
				"Hawaii-Aleutian Daylight Time"_s,
				"HDT"_s,
				"Hawaii-Aleutian Time"_s,
				"HST"_s
			})
		}),
		$$new($ObjectArray, {
			"Africa/Abidjan"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Algiers"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Africa/Conakry"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Kampala"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Mbabane"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"Africa/Nairobi"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Tripoli"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"America/Belize"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Bogota"_s,
			Colombia
		}),
		$$new($ObjectArray, {
			"America/Cancun"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Cayman"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Cuiaba"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Dawson"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			Guyana
		}),
		$$new($ObjectArray, {
			"America/Havana"_s,
			Cuba
		}),
		$$new($ObjectArray, {
			"America/Inuvik"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Juneau"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/La_Paz"_s,
			Bolivia
		}),
		$$new($ObjectArray, {
			"America/Maceio"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Manaus"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Merida"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Nassau"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Panama"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Recife"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Regina"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Asia/Chongqing"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Hong_Kong"_s,
			Hong_Kong
		}),
		$$new($ObjectArray, {
			"Asia/Kamchatka"_s,
			Kamchatka
		}),
		$$new($ObjectArray, {
			"Asia/Pontianak"_s,
			Indonesia_Western
		}),
		$$new($ObjectArray, {
			"Asia/Pyongyang"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Asia/Qyzylorda"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Samarkand"_s,
			Uzbekistan
		}),
		$$new($ObjectArray, {
			"Asia/Singapore"_s,
			Singapore
		}),
		$$new($ObjectArray, {
			"Asia/Vientiane"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Europe/Andorra"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Belfast"_s,
			$$new($StringArray, {
				"Greenwich Mean Time"_s,
				"GMT"_s,
				"British Summer Time"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Tallinn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Vatican"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Vilnius"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Mayotte"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Reunion"_s,
			Reunion
		}),
		$$new($ObjectArray, {
			"Pacific/Easter"_s,
			Easter
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			Kosrae
		}),
		$$new($ObjectArray, {
			"Pacific/Majuro"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Midway"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			New_Caledonia
		}),
		$$new($ObjectArray, {
			"Pacific/Ponape"_s,
			Ponape
		}),
		$$new($ObjectArray, {
			"Pacific/Saipan"_s,
			Chamorro
		}),
		$$new($ObjectArray, {
			"Pacific/Tahiti"_s,
			Tahiti
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			Gilbert_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			Wallis
		}),
		$$new($ObjectArray, {
			"Africa/Blantyre"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Djibouti"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Freetown"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Gaborone"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Khartoum"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Kinshasa"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Monrovia"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Ndjamena"_s,
			Africa_Western
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
			"Africa/Windhoek"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"America/Antigua"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Caracas"_s,
			Venezuela
		}),
		$$new($ObjectArray, {
			"America/Cayenne"_s,
			French_Guiana
		}),
		$$new($ObjectArray, {
			"America/Cordoba"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Creston"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Curacao"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Detroit"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Godthab"_s,
			Greenland_Western
		}),
		$$new($ObjectArray, {
			"America/Grenada"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Iqaluit"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Jamaica"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Managua"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Marigot"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Mendoza"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Moncton"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Nipigon"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Noronha"_s,
			Noronha
		}),
		$$new($ObjectArray, {
			"America/Ojinaga"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Tijuana"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"America/Toronto"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Tortola"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Yakutat"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Asia/Choibalsan"_s,
			Mongolia
		}),
		$$new($ObjectArray, {
			"Asia/Phnom_Penh"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Atlantic/Azores"_s,
			Azores
		}),
		$$new($ObjectArray, {
			"Atlantic/Canary"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Atlantic/Faeroe"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Australia/Eucla"_s,
			Australia_CentralWestern
		}),
		$$new($ObjectArray, {
			"Australia/Perth"_s,
			Australia_Western
		}),
		$$new($ObjectArray, {
			"Europe/Belgrade"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Brussels"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Budapest"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Busingen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Chisinau"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Guernsey"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Helsinki"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Sarajevo"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Uzhgorod"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			Maldives
		}),
		$$new($ObjectArray, {
			"Pacific/Chatham"_s,
			Chatham
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			Tokelau
		}),
		$$new($ObjectArray, {
			"Pacific/Gambier"_s,
			Gambier
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			Norfolk
		}),
		$$new($ObjectArray, {
			"SystemV/AST4ADT"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"SystemV/CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/EST5EDT"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"SystemV/MST7MDT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"SystemV/PST8PDT"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"SystemV/YST9YDT"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Africa/Bujumbura"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Mogadishu"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"America/Anguilla"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Asuncion"_s,
			Paraguay
		}),
		$$new($ObjectArray, {
			"America/Barbados"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Dominica"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Edmonton"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Eirunepe"_s,
			Acre
		}),
		$$new($ObjectArray, {
			"America/Mazatlan"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Miquelon"_s,
			Pierre_Miquelon
		}),
		$$new($ObjectArray, {
			"America/Montreal"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Resolute"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Santarem"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Santiago"_s,
			Chile
		}),
		$$new($ObjectArray, {
			"America/Shiprock"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/St_Kitts"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/St_Lucia"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Winnipeg"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Antarctica/Casey"_s,
			Casey
		}),
		$$new($ObjectArray, {
			"Antarctica/Davis"_s,
			Davis
		}),
		$$new($ObjectArray, {
			"Antarctica/Syowa"_s,
			Syowa
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Krasnoyarsk"_s,
			Krasnoyarsk
		}),
		$$new($ObjectArray, {
			"Asia/Novosibirsk"_s,
			Novosibirsk
		}),
		$$new($ObjectArray, {
			"Asia/Ulaanbaatar"_s,
			Mongolia
		}),
		$$new($ObjectArray, {
			"Asia/Vladivostok"_s,
			Vladivostok
		}),
		$$new($ObjectArray, {
			"Atlantic/Bermuda"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"Atlantic/Madeira"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Atlantic/Stanley"_s,
			Falkland
		}),
		$$new($ObjectArray, {
			"Australia/Currie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Darwin"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Hobart"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Sydney"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Amsterdam"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Gibraltar"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Ljubljana"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Mariehamn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Podgorica"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Stockholm"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Volgograd"_s,
			Volgograd
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			Christmas
		}),
		$$new($ObjectArray, {
			"Indian/Kerguelen"_s,
			French_Southern
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			Mauritius
		}),
		$$new($ObjectArray, {
			"Pacific/Auckland"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			Tuvalu
		}),
		$$new($ObjectArray, {
			"Pacific/Johnston"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"Pacific/Pitcairn"_s,
			Pitcairn
		}),
		$$new($ObjectArray, {
			"Africa/Libreville"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Lubumbashi"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Nouakchott"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Porto-Novo"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"America/Araguaina"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Boa_Vista"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Catamarca"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Chihuahua"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Fortaleza"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Glace_Bay"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Goose_Bay"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Guatemala"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Guayaquil"_s,
			Ecuador
		}),
		$$new($ObjectArray, {
			"America/Matamoros"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Menominee"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Monterrey"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Sao_Paulo"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/St_Thomas"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Vancouver"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			Mawson
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			Vostok
		}),
		$$new($ObjectArray, {
			"Asia/Kuala_Lumpur"_s,
			Malaysia
		}),
		$$new($ObjectArray, {
			"Asia/Novokuznetsk"_s,
			Krasnoyarsk
		}),
		$$new($ObjectArray, {
			"Europe/Bratislava"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Copenhagen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Luxembourg"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/San_Marino"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Simferopol"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Zaporozhye"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			Phoenix_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			Galapagos
		}),
		$$new($ObjectArray, {
			"Pacific/Kwajalein"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Marquesas"_s,
			Marquesas
		}),
		$$new($ObjectArray, {
			"Pacific/Pago_Pago"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			Cook
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			Tonga
		}),
		$$new($ObjectArray, {
			"Africa/Addis_Ababa"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Brazzaville"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Ouagadougou"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Costa_Rica"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Grand_Turk"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Guadeloupe"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Hermosillo"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Kralendijk"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Louisville"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Martinique"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Metlakatla"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Montevideo"_s,
			Uruguay
		}),
		$$new($ObjectArray, {
			"America/Montserrat"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Paramaribo"_s,
			Suriname
		}),
		$$new($ObjectArray, {
			"America/Rio_Branco"_s,
			Acre
		}),
		$$new($ObjectArray, {
			"America/St_Vincent"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Whitehorse"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"Antarctica/McMurdo"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Antarctica/Rothera"_s,
			Rothera
		}),
		$$new($ObjectArray, {
			"Asia/Yekaterinburg"_s,
			Yekaterinburg
		}),
		$$new($ObjectArray, {
			"Atlantic/Jan_Mayen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Atlantic/Reykjavik"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Atlantic/St_Helena"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Australia/Adelaide"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Brisbane"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Lindeman"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Isle_of_Man"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Kaliningrad"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Kiritimati"_s,
			Line_Islands
		}),
		$$new($ObjectArray, {
			"Africa/Johannesburg"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"America/El_Salvador"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Fort_Nelson"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Mexico_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Pangnirtung"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Porto_Velho"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Puerto_Rico"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Rainy_River"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Tegucigalpa"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Thunder_Bay"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Yellowknife"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"Arctic/Longyearbyen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Atlantic/Cape_Verde"_s,
			Cape_Verde
		}),
		$$new($ObjectArray, {
			"Australia/Lord_Howe"_s,
			Lord_Howe
		}),
		$$new($ObjectArray, {
			"Australia/Melbourne"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Antananarivo"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Guadalcanal"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"Africa/Dar_es_Salaam"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"America/Blanc-Sablon"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Buenos_Aires"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Campo_Grande"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Danmarkshavn"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Dawson_Creek"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Indiana/Knox"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Rankin_Inlet"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Santa_Isabel"_s,
			Mexico_Northwest
		}),
		$$new($ObjectArray, {
			"America/Scoresbysund"_s,
			Greenland_Eastern
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Port_Moresby"_s,
			Papua_New_Guinea
		}),
		$$new($ObjectArray, {
			"America/Cambridge_Bay"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Coral_Harbour"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vevay"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Lower_Princes"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Port_of_Spain"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Santo_Domingo"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/St_Barthelemy"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Swift_Current"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Antarctica/South_Pole"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Australia/Broken_Hill"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"America/Bahia_Banderas"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Port-au-Prince"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Atlantic/South_Georgia"_s,
			South_Georgia
		}),
		$$new($ObjectArray, {
			"America/Argentina/Salta"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Marengo"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Winamac"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Argentina/Tucuman"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/Ushuaia"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Tell_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vincennes"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			DumontDUrville
		}),
		$$new($ObjectArray, {
			"America/Argentina/La_Rioja"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Juan"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Luis"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Petersburg"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Kentucky/Monticello"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Beulah"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Center"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			"Ho Chi Minh City"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			"Unknown City"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kiev"_s,
			"Kiev"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qostanay"_s,
			"Kostanay"_s
		}),
		$$new($ObjectArray, {
			"America/Argentina/Rio_Gallegos"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/New_Salem"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Reunion"_s,
			u"Réunion"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Sao_Tome"_s,
			u"São Tomé"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Curacao"_s,
			u"Curaçao"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			"Uzhhorod"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Asuncion"_s,
			u"Asunción"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Barthelemy"_s,
			u"St. Barthélemy"_s
		})
	}));
	return data;
}

TimeZoneNames_en::TimeZoneNames_en() {
}

$Class* TimeZoneNames_en::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.TimeZoneNames_en",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_en, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_en);
	});
	return class$;
}

$Class* TimeZoneNames_en::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun