#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$8.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _HostLocaleProviderAdapterImpl$8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$8::*)()>(&HostLocaleProviderAdapterImpl$8::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getInstance", "(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$8_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getCalendarProvider",
	"()Lsun/util/spi/CalendarProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$8_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$8",
	"sun.util.spi.CalendarProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$8_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$8_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$8($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$8));
}

void HostLocaleProviderAdapterImpl$8::init$() {
	$CalendarProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$8::getAvailableLocales() {
	return $HostLocaleProviderAdapterImpl::getSupportedCalendarLocales();
}

bool HostLocaleProviderAdapterImpl$8::isSupportedLocale($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::isSupportedCalendarLocale(locale);
}

$Calendar* HostLocaleProviderAdapterImpl$8::getInstance($TimeZone* zone, $Locale* locale) {
	return $nc($($nc($($nc($($nc($($$new($Calendar$Builder)->setLocale(locale)))->setCalendarType($($HostLocaleProviderAdapterImpl::getCalendarID($($nc(locale)->toLanguageTag()))))))->setTimeZone(zone)))->setInstant($System::currentTimeMillis())))->build();
}

HostLocaleProviderAdapterImpl$8::HostLocaleProviderAdapterImpl$8() {
}

$Class* HostLocaleProviderAdapterImpl$8::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$8, name, initialize, &_HostLocaleProviderAdapterImpl$8_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$8);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$8::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun