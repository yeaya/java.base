#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$4.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $AtomicReferenceArray = ::java::util::concurrent::atomic::AtomicReferenceArray;
using $HostLocaleProviderAdapter = ::sun::util::locale::provider::HostLocaleProviderAdapter;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$4::*)()>(&HostLocaleProviderAdapterImpl$4::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getNumberPattern", "(ILjava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(HostLocaleProviderAdapterImpl$4::*)(int32_t,$Locale*)>(&HostLocaleProviderAdapterImpl$4::getNumberPattern))},
	{"getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$4_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getNumberFormatProvider",
	"()Ljava/text/spi/NumberFormatProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$4_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$4",
	"java.text.spi.NumberFormatProvider",
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
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, getNumberPattern(1, locale));
	return $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale)));
}

$NumberFormat* HostLocaleProviderAdapterImpl$4::getIntegerInstance($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, getNumberPattern(3, locale));
	$var($DecimalFormat, format, $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale))));
	return $HostLocaleProviderAdapter::makeIntegerFormatter(format);
}

$NumberFormat* HostLocaleProviderAdapterImpl$4::getNumberInstance($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, getNumberPattern(0, locale));
	return $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale)));
}

$NumberFormat* HostLocaleProviderAdapterImpl$4::getPercentInstance($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, getNumberPattern(2, locale));
	return $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale)));
}

$String* HostLocaleProviderAdapterImpl$4::getNumberPattern(int32_t style, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReferenceArray, numberFormatPatterns, nullptr);
	$init($HostLocaleProviderAdapterImpl);
	$var($SoftReference, ref, $cast($SoftReference, $nc($HostLocaleProviderAdapterImpl::numberFormatPatternsMap)->get(locale)));
	if (ref == nullptr || ($assign(numberFormatPatterns, $cast($AtomicReferenceArray, $nc(ref)->get()))) == nullptr) {
		$assign(numberFormatPatterns, $new($AtomicReferenceArray, 4));
		$assign(ref, $new($SoftReference, numberFormatPatterns));
		$nc($HostLocaleProviderAdapterImpl::numberFormatPatternsMap)->put(locale, ref);
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
	$loadClass(HostLocaleProviderAdapterImpl$4, name, initialize, &_HostLocaleProviderAdapterImpl$4_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$4);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$4::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun