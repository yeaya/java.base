#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$4.h>
#include <java/lang/ref/SoftReference.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/spi/DecimalFormatSymbolsProvider.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $DecimalFormatSymbolsProvider = ::java::text::spi::DecimalFormatSymbolsProvider;
using $Locale = ::java::util::Locale;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

void HostLocaleProviderAdapterImpl$4::init$() {
	$DecimalFormatSymbolsProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$4::getAvailableLocales() {
	return $HostLocaleProviderAdapterImpl::getSupportedNativeDigitLocales();
}

bool HostLocaleProviderAdapterImpl$4::isSupportedLocale($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::isSupportedNativeDigitLocale(locale);
}

$DecimalFormatSymbols* HostLocaleProviderAdapterImpl$4::getInstance($Locale* locale) {
	$useLocalObjectStack();
	$var($DecimalFormatSymbols, dfs, nullptr);
	$init($HostLocaleProviderAdapterImpl);
	$var($SoftReference, ref, $cast($SoftReference, $nc($HostLocaleProviderAdapterImpl::decimalFormatSymbolsCache)->get(locale)));
	if (ref == nullptr || ($assign(dfs, $cast($DecimalFormatSymbols, ref->get()))) == nullptr) {
		$assign(dfs, $new($DecimalFormatSymbols, $($HostLocaleProviderAdapterImpl::getNumberLocale(locale))));
		$var($String, langTag, $$nc($HostLocaleProviderAdapterImpl::removeExtensions(locale))->toLanguageTag());
		dfs->setInternationalCurrencySymbol($($HostLocaleProviderAdapterImpl::getInternationalCurrencySymbol(langTag, $(dfs->getInternationalCurrencySymbol()))));
		dfs->setCurrencySymbol($($HostLocaleProviderAdapterImpl::getCurrencySymbol(langTag, $(dfs->getCurrencySymbol()))));
		dfs->setDecimalSeparator($HostLocaleProviderAdapterImpl::getDecimalSeparator(langTag, dfs->getDecimalSeparator()));
		dfs->setGroupingSeparator($HostLocaleProviderAdapterImpl::getGroupingSeparator(langTag, dfs->getGroupingSeparator()));
		dfs->setInfinity($($HostLocaleProviderAdapterImpl::getInfinity(langTag, $(dfs->getInfinity()))));
		dfs->setMinusSign($HostLocaleProviderAdapterImpl::getMinusSign(langTag, dfs->getMinusSign()));
		dfs->setMonetaryDecimalSeparator($HostLocaleProviderAdapterImpl::getMonetaryDecimalSeparator(langTag, dfs->getMonetaryDecimalSeparator()));
		dfs->setNaN($($HostLocaleProviderAdapterImpl::getNaN(langTag, $(dfs->getNaN()))));
		dfs->setPercent($HostLocaleProviderAdapterImpl::getPercent(langTag, dfs->getPercent()));
		dfs->setPerMill($HostLocaleProviderAdapterImpl::getPerMill(langTag, dfs->getPerMill()));
		dfs->setZeroDigit($HostLocaleProviderAdapterImpl::getZeroDigit(langTag, dfs->getZeroDigit()));
		$assign(ref, $new($SoftReference, dfs));
		$HostLocaleProviderAdapterImpl::decimalFormatSymbolsCache->put(locale, ref);
	}
	return $cast($DecimalFormatSymbols, $nc(dfs)->clone());
}

HostLocaleProviderAdapterImpl$4::HostLocaleProviderAdapterImpl$4() {
}

$Class* HostLocaleProviderAdapterImpl$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostLocaleProviderAdapterImpl$4, init$, void)},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$4, getAvailableLocales, $LocaleArray*)},
		{"getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$4, getInstance, $DecimalFormatSymbols*, $Locale*)},
		{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$4, isSupportedLocale, bool, $Locale*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
		"getDecimalFormatSymbolsProvider",
		"()Ljava/text/spi/DecimalFormatSymbolsProvider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl$4",
		"java.text.spi.DecimalFormatSymbolsProvider",
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
	$loadClass(HostLocaleProviderAdapterImpl$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostLocaleProviderAdapterImpl$4);
	});
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$4::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun