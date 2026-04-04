#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$6.h>
#include <java/util/Locale.h>
#include <java/util/spi/CalendarDataProvider.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $CalendarDataProvider = ::java::util::spi::CalendarDataProvider;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

void HostLocaleProviderAdapterImpl$6::init$() {
	$CalendarDataProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$6::getAvailableLocales() {
	return $HostLocaleProviderAdapterImpl::getSupportedCalendarLocales();
}

bool HostLocaleProviderAdapterImpl$6::isSupportedLocale($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::isSupportedCalendarLocale(locale);
}

int32_t HostLocaleProviderAdapterImpl$6::getFirstDayOfWeek($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::getCalendarInt($($nc(locale)->toLanguageTag()), 0);
}

int32_t HostLocaleProviderAdapterImpl$6::getMinimalDaysInFirstWeek($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::getCalendarInt($($nc(locale)->toLanguageTag()), 1);
}

HostLocaleProviderAdapterImpl$6::HostLocaleProviderAdapterImpl$6() {
}

$Class* HostLocaleProviderAdapterImpl$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostLocaleProviderAdapterImpl$6, init$, void)},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$6, getAvailableLocales, $LocaleArray*)},
		{"getFirstDayOfWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$6, getFirstDayOfWeek, int32_t, $Locale*)},
		{"getMinimalDaysInFirstWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$6, getMinimalDaysInFirstWeek, int32_t, $Locale*)},
		{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$6, isSupportedLocale, bool, $Locale*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
		"getCalendarDataProvider",
		"()Ljava/util/spi/CalendarDataProvider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl$6",
		"java.util.spi.CalendarDataProvider",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
	};
	$loadClass(HostLocaleProviderAdapterImpl$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostLocaleProviderAdapterImpl$6);
	});
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$6::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun