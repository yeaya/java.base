#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$11.h>

#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/spi/TimeZoneNameProvider.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <jcpp.h>

#undef ID

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $TimeZoneNameProvider = ::java::util::spi::TimeZoneNameProvider;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$11_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HostLocaleProviderAdapterImpl$11, init$, void)},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$11, getAvailableLocales, $LocaleArray*)},
	{"getDisplayName", "(Ljava/lang/String;ZILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$11, getDisplayName, $String*, $String*, bool, int32_t, $Locale*)},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$11, isSupportedLocale, bool, $Locale*)},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$11_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getTimeZoneNameProvider",
	"()Ljava/util/spi/TimeZoneNameProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$11_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$11", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$11_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$11",
	"java.util.spi.TimeZoneNameProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$11_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$11_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$11($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$11));
}

void HostLocaleProviderAdapterImpl$11::init$() {
	$TimeZoneNameProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$11::getAvailableLocales() {
	$init($HostLocaleProviderAdapterImpl);
	return $HostLocaleProviderAdapterImpl::supportedLocale;
}

bool HostLocaleProviderAdapterImpl$11::isSupportedLocale($Locale* locale) {
	$init($HostLocaleProviderAdapterImpl);
	return $nc($HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains($($nc(locale)->stripExtensions()));
}

$String* HostLocaleProviderAdapterImpl$11::getDisplayName($String* ID, bool daylight, int32_t style, $Locale* locale) {
	return $HostLocaleProviderAdapterImpl::getTimeZoneDisplayString($($nc(locale)->toLanguageTag()), style * 2 + (daylight ? 1 : 0), ID);
}

HostLocaleProviderAdapterImpl$11::HostLocaleProviderAdapterImpl$11() {
}

$Class* HostLocaleProviderAdapterImpl$11::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$11, name, initialize, &_HostLocaleProviderAdapterImpl$11_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$11);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$11::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun