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

$MethodInfo _TimeZoneNames_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.TimeZoneNames",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_MethodInfo_
};

$Object* allocate$TimeZoneNames($Class* clazz) {
	return $of($alloc(TimeZoneNames));
}

void TimeZoneNames::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("Etc/UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Macau"_s),
			$of("Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Saigon"_s),
			$of("Ho Chi Minh"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of("Unknown"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Rangoon"_s),
			$of("Yangon"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Truk"_s),
			$of("Chuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Asmera"_s),
			$of("Asmara"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Calcutta"_s),
			$of("Kolkata"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Katmandu"_s),
			$of("Kathmandu"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Ponape"_s),
			$of("Pohnpei"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Godthab"_s),
			$of("Nuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of("Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"St. John’s"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Kitts"_s),
			$of("St. Kitts"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Lucia"_s),
			$of("St. Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Thomas"_s),
			$of("St. Thomas"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Vincent"_s),
			$of("St. Vincent"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/St_Helena"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Knox"_s),
			$of("Knox, Indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Scoresbysund"_s),
			$of("Ittoqqortoormiit"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Coral_Harbour"_s),
			$of("Atikokan"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vevay"_s),
			$of("Vevay, Indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lower_Princes"_s),
			$of(u"Lower Prince’s Quarter"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of("St. Barthelemy"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Marengo"_s),
			$of("Marengo, Indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Winamac"_s),
			$of("Winamac, Indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Tell_City"_s),
			$of("Tell City, Indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vincennes"_s),
			$of("Vincennes, Indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"Dumont d’Urville"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Petersburg"_s),
			$of("Petersburg, Indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kentucky/Monticello"_s),
			$of("Monticello, Kentucky"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of("Beulah, North Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of("Center, North Dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of("New Salem, North Dakota"_s)
		})
	}));
	return data;
}

TimeZoneNames::TimeZoneNames() {
}

$Class* TimeZoneNames::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames, name, initialize, &_TimeZoneNames_ClassInfo_, allocate$TimeZoneNames);
	return class$;
}

$Class* TimeZoneNames::class$ = nullptr;

			} // cldr
		} // resources
	} // util
} // sun