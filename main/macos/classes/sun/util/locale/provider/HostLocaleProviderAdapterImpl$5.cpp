#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$5.h>

#include <java/lang/ref/SoftReference.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/spi/DecimalFormatSymbolsProvider.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
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
using $Set = ::java::util::Set;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$5::*)()>(&HostLocaleProviderAdapterImpl$5::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$5_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getDecimalFormatSymbolsProvider",
	"()Ljava/text/spi/DecimalFormatSymbolsProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$5_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$5",
	"java.text.spi.DecimalFormatSymbolsProvider",
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
	$DecimalFormatSymbolsProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$5::getAvailableLocales() {
	$init($HostLocaleProviderAdapterImpl);
	return $HostLocaleProviderAdapterImpl::supportedLocale;
}

bool HostLocaleProviderAdapterImpl$5::isSupportedLocale($Locale* locale) {
	$init($HostLocaleProviderAdapterImpl);
	return $nc($HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains($($nc(locale)->stripExtensions()));
}

$DecimalFormatSymbols* HostLocaleProviderAdapterImpl$5::getInstance($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($DecimalFormatSymbols, decimalFormatSymbols, nullptr);
	$init($HostLocaleProviderAdapterImpl);
	$var($SoftReference, ref, $cast($SoftReference, $nc($HostLocaleProviderAdapterImpl::decimalFormatSymbolsMap)->get(locale)));
	if (ref == nullptr || ($assign(decimalFormatSymbols, $cast($DecimalFormatSymbols, $nc(ref)->get()))) == nullptr) {
		$assign(decimalFormatSymbols, $new($DecimalFormatSymbols, locale));
		$var($String, langTag, $nc(locale)->toLanguageTag());
		decimalFormatSymbols->setInternationalCurrencySymbol($($HostLocaleProviderAdapterImpl::getInternationalCurrencySymbol(langTag, $(decimalFormatSymbols->getInternationalCurrencySymbol()))));
		decimalFormatSymbols->setCurrencySymbol($($HostLocaleProviderAdapterImpl::getCurrencySymbol(langTag, $(decimalFormatSymbols->getCurrencySymbol()))));
		decimalFormatSymbols->setDecimalSeparator($HostLocaleProviderAdapterImpl::getDecimalSeparator(langTag, decimalFormatSymbols->getDecimalSeparator()));
		decimalFormatSymbols->setGroupingSeparator($HostLocaleProviderAdapterImpl::getGroupingSeparator(langTag, decimalFormatSymbols->getGroupingSeparator()));
		decimalFormatSymbols->setInfinity($($HostLocaleProviderAdapterImpl::getInfinity(langTag, $(decimalFormatSymbols->getInfinity()))));
		decimalFormatSymbols->setMinusSign($HostLocaleProviderAdapterImpl::getMinusSign(langTag, decimalFormatSymbols->getMinusSign()));
		decimalFormatSymbols->setMonetaryDecimalSeparator($HostLocaleProviderAdapterImpl::getMonetaryDecimalSeparator(langTag, decimalFormatSymbols->getMonetaryDecimalSeparator()));
		decimalFormatSymbols->setNaN($($HostLocaleProviderAdapterImpl::getNaN(langTag, $(decimalFormatSymbols->getNaN()))));
		decimalFormatSymbols->setPercent($HostLocaleProviderAdapterImpl::getPercent(langTag, decimalFormatSymbols->getPercent()));
		decimalFormatSymbols->setPerMill($HostLocaleProviderAdapterImpl::getPerMill(langTag, decimalFormatSymbols->getPerMill()));
		decimalFormatSymbols->setZeroDigit($HostLocaleProviderAdapterImpl::getZeroDigit(langTag, decimalFormatSymbols->getZeroDigit()));
		decimalFormatSymbols->setExponentSeparator($($HostLocaleProviderAdapterImpl::getExponentSeparator(langTag, $(decimalFormatSymbols->getExponentSeparator()))));
		$assign(ref, $new($SoftReference, decimalFormatSymbols));
		$nc($HostLocaleProviderAdapterImpl::decimalFormatSymbolsMap)->put(locale, ref);
	}
	return $cast($DecimalFormatSymbols, $nc(decimalFormatSymbols)->clone());
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