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
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$4::*)()>(&HostLocaleProviderAdapterImpl$4::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$4_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getDecimalFormatSymbolsProvider",
	"()Ljava/text/spi/DecimalFormatSymbolsProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$4_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$4",
	"java.text.spi.DecimalFormatSymbolsProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$4_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$4_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$4($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$4));
}

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
	$useLocalCurrentObjectStackCache();
	$var($DecimalFormatSymbols, dfs, nullptr);
	$init($HostLocaleProviderAdapterImpl);
	$var($SoftReference, ref, $cast($SoftReference, $nc($HostLocaleProviderAdapterImpl::decimalFormatSymbolsCache)->get(locale)));
	if (ref == nullptr || ($assign(dfs, $cast($DecimalFormatSymbols, $nc(ref)->get()))) == nullptr) {
		$assign(dfs, $new($DecimalFormatSymbols, $($HostLocaleProviderAdapterImpl::getNumberLocale(locale))));
		$var($String, langTag, $nc($($HostLocaleProviderAdapterImpl::removeExtensions(locale)))->toLanguageTag());
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
		$nc($HostLocaleProviderAdapterImpl::decimalFormatSymbolsCache)->put(locale, ref);
	}
	return $cast($DecimalFormatSymbols, $nc(dfs)->clone());
}

HostLocaleProviderAdapterImpl$4::HostLocaleProviderAdapterImpl$4() {
}

$Class* HostLocaleProviderAdapterImpl$4::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$4, name, initialize, &_HostLocaleProviderAdapterImpl$4_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$4);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$4::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun