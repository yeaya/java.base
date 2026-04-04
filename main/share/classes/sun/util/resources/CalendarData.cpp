#include <sun/util/resources/CalendarData.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

void CalendarData::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"firstDayOfWeek"_s,
			"1"_s
		}),
		$$new($ObjectArray, {
			"minimalDaysInFirstWeek"_s,
			"1"_s
		})
	});
}

CalendarData::CalendarData() {
}

$Class* CalendarData::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.CalendarData",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarData);
	});
	return class$;
}

$Class* CalendarData::class$ = nullptr;

		} // resources
	} // util
} // sun