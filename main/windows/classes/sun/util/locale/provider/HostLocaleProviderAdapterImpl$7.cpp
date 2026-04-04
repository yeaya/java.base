#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$7.h>
#include <java/util/Calendar$Builder.h>
#include <java/util/Calendar.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <sun/util/spi/CalendarProvider.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Calendar = ::java::util::Calendar;
using $Calendar$Builder = ::java::util::Calendar$Builder;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;
using $CalendarProvider = ::sun::util::spi::CalendarProvider;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

void HostLocaleProviderAdapterImpl$7::init$() {
	$CalendarProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$7::getAvailableLocales() {
	return $HostLocaleProviderAdapterImpl::getSupportedCalendarLocales();
}

bool HostLocaleProviderAdapterImpl$7::isSupportedLocale($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::isSupportedCalendarLocale(locale);
}

$Calendar* HostLocaleProviderAdapterImpl$7::getInstance($TimeZone* zone, $Locale* locale) {
	$useLocalObjectStack();
	return $$nc($$nc($$nc($$new($Calendar$Builder)->setLocale($($HostLocaleProviderAdapterImpl::getCalendarLocale(locale))))->setTimeZone(zone))->setInstant($System::currentTimeMillis()))->build();
}

HostLocaleProviderAdapterImpl$7::HostLocaleProviderAdapterImpl$7() {
}

$Class* HostLocaleProviderAdapterImpl$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostLocaleProviderAdapterImpl$7, init$, void)},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$7, getAvailableLocales, $LocaleArray*)},
		{"getInstance", "(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$7, getInstance, $Calendar*, $TimeZone*, $Locale*)},
		{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$7, isSupportedLocale, bool, $Locale*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
		"getCalendarProvider",
		"()Lsun/util/spi/CalendarProvider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl$7",
		"sun.util.spi.CalendarProvider",
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
	$loadClass(HostLocaleProviderAdapterImpl$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostLocaleProviderAdapterImpl$7);
	});
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$7::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun