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

$MethodInfo _CalendarDataProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(CalendarDataProvider, init$, void)},
	{"getFirstDayOfWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CalendarDataProvider, getFirstDayOfWeek, int32_t, $Locale*)},
	{"getMinimalDaysInFirstWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CalendarDataProvider, getMinimalDaysInFirstWeek, int32_t, $Locale*)},
	{}
};

$ClassInfo _CalendarDataProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.spi.CalendarDataProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_CalendarDataProvider_MethodInfo_
};

$Object* allocate$CalendarDataProvider($Class* clazz) {
	return $of($alloc(CalendarDataProvider));
}

void CalendarDataProvider::init$() {
	$LocaleServiceProvider::init$();
}

CalendarDataProvider::CalendarDataProvider() {
}

$Class* CalendarDataProvider::load$($String* name, bool initialize) {
	$loadClass(CalendarDataProvider, name, initialize, &_CalendarDataProvider_ClassInfo_, allocate$CalendarDataProvider);
	return class$;
}

$Class* CalendarDataProvider::class$ = nullptr;

		} // spi
	} // util
} // java