#include <sun/util/spi/CalendarProvider.h>
#include <java/util/Calendar.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Calendar = ::java::util::Calendar;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace sun {
	namespace util {
		namespace spi {

void CalendarProvider::init$() {
	$LocaleServiceProvider::init$();
}

CalendarProvider::CalendarProvider() {
}

$Class* CalendarProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(CalendarProvider, init$, void)},
		{"getInstance", "(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CalendarProvider, getInstance, $Calendar*, $TimeZone*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.util.spi.CalendarProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarProvider);
	});
	return class$;
}

$Class* CalendarProvider::class$ = nullptr;

		} // spi
	} // util
} // sun