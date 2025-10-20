#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$5.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _HostLocaleProviderAdapterImpl$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$5::*)()>(&HostLocaleProviderAdapterImpl$5::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getFirstDayOfWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC},
	{"getMinimalDaysInFirstWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$5_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getCalendarDataProvider",
	"()Ljava/util/spi/CalendarDataProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$5_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$5",
	"java.util.spi.CalendarDataProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$5_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$5_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$5($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$5));
}

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
	$useLocalCurrentObjectStackCache();
	int32_t first = $HostLocaleProviderAdapterImpl::getCalendarDataValue($($nc($($HostLocaleProviderAdapterImpl::removeExtensions(locale)))->toLanguageTag()), 0);
	if (first != -1) {
		return (first + 1) % 7 + 1;
	} else {
		return 0;
	}
}

int32_t HostLocaleProviderAdapterImpl$5::getMinimalDaysInFirstWeek($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	int32_t firstWeek = $HostLocaleProviderAdapterImpl::getCalendarDataValue($($nc($($HostLocaleProviderAdapterImpl::removeExtensions(locale)))->toLanguageTag()), 1);

	int32_t var$0 = 0;
	switch (firstWeek) {
	case 1:
		{
			var$0 = 7;
			break;
		}
	case 2:
		{
			var$0 = 4;
			break;
		}
	default:
		{
			var$0 = 1;
			break;
		}
	}
	return var$0;
}

HostLocaleProviderAdapterImpl$5::HostLocaleProviderAdapterImpl$5() {
}

$Class* HostLocaleProviderAdapterImpl$5::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$5, name, initialize, &_HostLocaleProviderAdapterImpl$5_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$5);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$5::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun