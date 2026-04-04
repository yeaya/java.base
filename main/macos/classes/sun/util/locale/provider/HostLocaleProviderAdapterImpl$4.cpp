#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$4.h>
#include <java/lang/ref/SoftReference.h>
#include <java/text/DecimalFormat.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/NumberFormat.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/concurrent/atomic/AtomicReferenceArray.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapter.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $DecimalFormat = ::java::text::DecimalFormat;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $NumberFormat = ::java::text::NumberFormat;
using $NumberFormatProvider = ::java::text::spi::NumberFormatProvider;
using $Locale = ::java::util::Locale;
using $AtomicReferenceArray = ::java::util::concurrent::atomic::AtomicReferenceArray;
using $HostLocaleProviderAdapter = ::sun::util::locale::provider::HostLocaleProviderAdapter;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

void HostLocaleProviderAdapterImpl$4::init$() {
	$NumberFormatProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$4::getAvailableLocales() {
	$init($HostLocaleProviderAdapterImpl);
	return $HostLocaleProviderAdapterImpl::supportedLocale;
}

bool HostLocaleProviderAdapterImpl$4::isSupportedLocale($Locale* locale) {
	$init($HostLocaleProviderAdapterImpl);
	return $nc($HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains($($nc(locale)->stripExtensions()));
}

$NumberFormat* HostLocaleProviderAdapterImpl$4::getCurrencyInstance($Locale* locale) {
	$useLocalObjectStack();
	$var($String, var$0, getNumberPattern(1, locale));
	return $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale)));
}

$NumberFormat* HostLocaleProviderAdapterImpl$4::getIntegerInstance($Locale* locale) {
	$useLocalObjectStack();
	$var($String, var$0, getNumberPattern(3, locale));
	$var($DecimalFormat, format, $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale))));
	return $HostLocaleProviderAdapter::makeIntegerFormatter(format);
}

$NumberFormat* HostLocaleProviderAdapterImpl$4::getNumberInstance($Locale* locale) {
	$useLocalObjectStack();
	$var($String, var$0, getNumberPattern(0, locale));
	return $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale)));
}

$NumberFormat* HostLocaleProviderAdapterImpl$4::getPercentInstance($Locale* locale) {
	$useLocalObjectStack();
	$var($String, var$0, getNumberPattern(2, locale));
	return $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale)));
}

$String* HostLocaleProviderAdapterImpl$4::getNumberPattern(int32_t style, $Locale* locale) {
	$useLocalObjectStack();
	$var($AtomicReferenceArray, numberFormatPatterns, nullptr);
	$init($HostLocaleProviderAdapterImpl);
	$var($SoftReference, ref, $cast($SoftReference, $nc($HostLocaleProviderAdapterImpl::numberFormatPatternsMap)->get(locale)));
	if (ref == nullptr || ($assign(numberFormatPatterns, $cast($AtomicReferenceArray, ref->get()))) == nullptr) {
		$assign(numberFormatPatterns, $new($AtomicReferenceArray, 4));
		$assign(ref, $new($SoftReference, numberFormatPatterns));
		$HostLocaleProviderAdapterImpl::numberFormatPatternsMap->put(locale, ref);
	}
	$var($String, pattern, $cast($String, $nc(numberFormatPatterns)->get(style)));
	if (pattern == nullptr) {
		$assign(pattern, $HostLocaleProviderAdapterImpl::getNumberPatternNative(style, $($nc(locale)->toLanguageTag())));
		if (!numberFormatPatterns->compareAndSet(style, nullptr, pattern)) {
			$assign(pattern, $cast($String, numberFormatPatterns->get(style)));
		}
	}
	return pattern;
}

HostLocaleProviderAdapterImpl$4::HostLocaleProviderAdapterImpl$4() {
}

$Class* HostLocaleProviderAdapterImpl$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostLocaleProviderAdapterImpl$4, init$, void)},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$4, getAvailableLocales, $LocaleArray*)},
		{"getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$4, getCurrencyInstance, $NumberFormat*, $Locale*)},
		{"getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$4, getIntegerInstance, $NumberFormat*, $Locale*)},
		{"getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$4, getNumberInstance, $NumberFormat*, $Locale*)},
		{"getNumberPattern", "(ILjava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(HostLocaleProviderAdapterImpl$4, getNumberPattern, $String*, int32_t, $Locale*)},
		{"getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$4, getPercentInstance, $NumberFormat*, $Locale*)},
		{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$4, isSupportedLocale, bool, $Locale*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
		"getNumberFormatProvider",
		"()Ljava/text/spi/NumberFormatProvider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl$4",
		"java.text.spi.NumberFormatProvider",
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