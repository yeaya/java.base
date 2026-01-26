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

$MethodInfo _HostLocaleProviderAdapterImpl$7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HostLocaleProviderAdapterImpl$7, init$, void)},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$7, getAvailableLocales, $LocaleArray*)},
	{"getInstance", "(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$7, getInstance, $Calendar*, $TimeZone*, $Locale*)},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$7, isSupportedLocale, bool, $Locale*)},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$7_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getCalendarProvider",
	"()Lsun/util/spi/CalendarProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$7_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$7_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$7",
	"sun.util.spi.CalendarProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$7_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$7_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$7($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$7));
}

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
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc($($$new($Calendar$Builder)->setLocale($($HostLocaleProviderAdapterImpl::getCalendarLocale(locale)))))->setTimeZone(zone)))->setInstant($System::currentTimeMillis())))->build();
}

HostLocaleProviderAdapterImpl$7::HostLocaleProviderAdapterImpl$7() {
}

$Class* HostLocaleProviderAdapterImpl$7::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$7, name, initialize, &_HostLocaleProviderAdapterImpl$7_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$7);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$7::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun