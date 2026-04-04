#include <sun/util/resources/cldr/TimeZoneNames.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ETC_UTC

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

void TimeZoneNames::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames::getContents() {
	$useLocalObjectStack();
	$var($StringArray, ETC_UTC, $new($StringArray, {
		""_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"UTC"_s,
			ETC_UTC
		}),
		$$new($ObjectArray, {
			"Etc/UTC"_s,
			ETC_UTC
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Macau"_s,
			"Macao"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			"Ho Chi Minh"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			"Unknown"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Rangoon"_s,
			"Yangon"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Truk"_s,
			"Chuuk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Asmera"_s,
			"Asmara"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Calcutta"_s,
			"Kolkata"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Katmandu"_s,
			"Kathmandu"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Ponape"_s,
			"Pohnpei"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Godthab"_s,
			"Nuuk"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			"Faroe"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Johns"_s,
			u"St. John’s"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Kitts"_s,
			"St. Kitts"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Lucia"_s,
			"St. Lucia"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			"St. Thomas"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Vincent"_s,
			"St. Vincent"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/St_Helena"_s,
			"St. Helena"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Knox"_s,
			"Knox, Indiana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Scoresbysund"_s,
			"Ittoqqortoormiit"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Coral_Harbour"_s,
			"Atikokan"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vevay"_s,
			"Vevay, Indiana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lower_Princes"_s,
			u"Lower Prince’s Quarter"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Barthelemy"_s,
			"St. Barthelemy"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Marengo"_s,
			"Marengo, Indiana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Winamac"_s,
			"Winamac, Indiana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Tell_City"_s,
			"Tell City, Indiana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vincennes"_s,
			"Vincennes, Indiana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/DumontDUrville"_s,
			u"Dumont d’Urville"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Petersburg"_s,
			"Petersburg, Indiana"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kentucky/Monticello"_s,
			"Monticello, Kentucky"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Beulah"_s,
			"Beulah, North Dakota"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Center"_s,
			"Center, North Dakota"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/New_Salem"_s,
			"New Salem, North Dakota"_s
		})
	}));
	return data;
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
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.TimeZoneNames",
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

			} // cldr
		} // resources
	} // util
} // sun