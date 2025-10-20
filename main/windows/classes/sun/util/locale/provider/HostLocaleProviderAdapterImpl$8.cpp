#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$8.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Currency.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/spi/CurrencyNameProvider.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Currency = ::java::util::Currency;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $CurrencyNameProvider = ::java::util::spi::CurrencyNameProvider;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$8::*)()>(&HostLocaleProviderAdapterImpl$8::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDisplayName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSymbol", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$8_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getCurrencyNameProvider",
	"()Ljava/util/spi/CurrencyNameProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$8_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$8",
	"java.util.spi.CurrencyNameProvider",
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
	$CurrencyNameProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$8::getAvailableLocales() {
	$init($HostLocaleProviderAdapterImpl);
	return $HostLocaleProviderAdapterImpl::supportedLocale;
}

bool HostLocaleProviderAdapterImpl$8::isSupportedLocale($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$init($HostLocaleProviderAdapterImpl);
	bool var$0 = $nc($HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains($($nc(locale)->stripExtensions()));
	return var$0 && $nc($($nc(locale)->getLanguage()))->equals($HostLocaleProviderAdapterImpl::nativeDisplayLanguage);
}

$String* HostLocaleProviderAdapterImpl$8::getSymbol($String* currencyCode, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($nc($($nc($($Currency::getInstance(locale)))->getCurrencyCode()))->equals(currencyCode)) {
			return $HostLocaleProviderAdapterImpl::getDisplayString($($nc(locale)->toLanguageTag()), 1, currencyCode);
		}
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	return nullptr;
}

$String* HostLocaleProviderAdapterImpl$8::getDisplayName($String* currencyCode, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($nc($($nc($($Currency::getInstance(locale)))->getCurrencyCode()))->equals(currencyCode)) {
			return $HostLocaleProviderAdapterImpl::getDisplayString($($nc(locale)->toLanguageTag()), 0, currencyCode);
		}
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	return nullptr;
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