#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$5.h>
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

void HostLocaleProviderAdapterImpl$5::init$() {
	$CalendarDataProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$5::getAvailableLocales() {
	return $HostLocaleProviderAdapterImpl::getSupportedCalendarLocales();
}

bool HostLocaleProviderAdapterImpl$5::isSupportedLocale($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::isSupportedCalendarLocale(locale);
}

int32_t HostLocaleProviderAdapterImpl$5::getFirstDayOfWeek($Locale* locale) {
	$useLocalObjectStack();
	int32_t first = $HostLocaleProviderAdapterImpl::getCalendarDataValue($($$nc($HostLocaleProviderAdapterImpl::removeExtensions(locale))->toLanguageTag()), 0);
	if (first != -1) {
		return (first + 1) % 7 + 1;
	} else {
		return 0;
	}
}

int32_t HostLocaleProviderAdapterImpl$5::getMinimalDaysInFirstWeek($Locale* locale) {
	$useLocalObjectStack();
	int32_t firstWeek = $HostLocaleProviderAdapterImpl::getCalendarDataValue($($$nc($HostLocaleProviderAdapterImpl::removeExtensions(locale))->toLanguageTag()), 1);
	int32_t var$0 = 0;
	switch (firstWeek) {
	case 1:
		var$0 = 7;
		break;
	case 2:
		var$0 = 4;
		break;
	default:
		var$0 = 1;
		break;
	}
	return var$0;
}

HostLocaleProviderAdapterImpl$5::HostLocaleProviderAdapterImpl$5() {
}

$Class* HostLocaleProviderAdapterImpl$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostLocaleProviderAdapterImpl$5, init$, void)},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$5, getAvailableLocales, $LocaleArray*)},
		{"getFirstDayOfWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$5, getFirstDayOfWeek, int32_t, $Locale*)},
		{"getMinimalDaysInFirstWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$5, getMinimalDaysInFirstWeek, int32_t, $Locale*)},
		{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$5, isSupportedLocale, bool, $Locale*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
		"getCalendarDataProvider",
		"()Ljava/util/spi/CalendarDataProvider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl$5",
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
	$loadClass(HostLocaleProviderAdapterImpl$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostLocaleProviderAdapterImpl$5);
	});
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$5::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun