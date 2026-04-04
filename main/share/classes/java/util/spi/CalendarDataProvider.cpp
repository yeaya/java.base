#include <java/util/spi/CalendarDataProvider.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace util {
		namespace spi {

void CalendarDataProvider::init$() {
	$LocaleServiceProvider::init$();
}

CalendarDataProvider::CalendarDataProvider() {
}

$Class* CalendarDataProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(CalendarDataProvider, init$, void)},
		{"getFirstDayOfWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CalendarDataProvider, getFirstDayOfWeek, int32_t, $Locale*)},
		{"getMinimalDaysInFirstWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CalendarDataProvider, getMinimalDaysInFirstWeek, int32_t, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.spi.CalendarDataProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarDataProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarDataProvider);
	});
	return class$;
}

$Class* CalendarDataProvider::class$ = nullptr;

		} // spi
	} // util
} // java