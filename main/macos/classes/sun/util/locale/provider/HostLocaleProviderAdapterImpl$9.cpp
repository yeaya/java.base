#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$9.h>

#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/spi/CurrencyNameProvider.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $CurrencyNameProvider = ::java::util::spi::CurrencyNameProvider;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HostLocaleProviderAdapterImpl$9, init$, void)},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$9, getAvailableLocales, $LocaleArray*)},
	{"getDisplayName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$9, getDisplayName, $String*, $String*, $Locale*)},
	{"getSymbol", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$9, getSymbol, $String*, $String*, $Locale*)},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$9, isSupportedLocale, bool, $Locale*)},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$9_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getCurrencyNameProvider",
	"()Ljava/util/spi/CurrencyNameProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$9_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$9",
	"java.util.spi.CurrencyNameProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$9_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$9_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$9($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$9));
}

void HostLocaleProviderAdapterImpl$9::init$() {
	$CurrencyNameProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$9::getAvailableLocales() {
	$init($HostLocaleProviderAdapterImpl);
	return $HostLocaleProviderAdapterImpl::supportedLocale;
}

bool HostLocaleProviderAdapterImpl$9::isSupportedLocale($Locale* locale) {
	$init($HostLocaleProviderAdapterImpl);
	return $nc($HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains($($nc(locale)->stripExtensions()));
}

$String* HostLocaleProviderAdapterImpl$9::getDisplayName($String* code, $Locale* locale) {
	return $HostLocaleProviderAdapterImpl::getDisplayString($($nc(locale)->toLanguageTag()), 4, code);
}

$String* HostLocaleProviderAdapterImpl$9::getSymbol($String* code, $Locale* locale) {
	return $HostLocaleProviderAdapterImpl::getDisplayString($($nc(locale)->toLanguageTag()), 5, code);
}

HostLocaleProviderAdapterImpl$9::HostLocaleProviderAdapterImpl$9() {
}

$Class* HostLocaleProviderAdapterImpl$9::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$9, name, initialize, &_HostLocaleProviderAdapterImpl$9_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$9);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$9::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun