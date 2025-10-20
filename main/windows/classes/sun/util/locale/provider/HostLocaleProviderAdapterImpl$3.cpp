#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$3.h>

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
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $AtomicReferenceArray = ::java::util::concurrent::atomic::AtomicReferenceArray;
using $HostLocaleProviderAdapter = ::sun::util::locale::provider::HostLocaleProviderAdapter;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$3::*)()>(&HostLocaleProviderAdapterImpl$3::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getNumberPatterns", "(Ljava/util/Locale;)Ljava/util/concurrent/atomic/AtomicReferenceArray;", "(Ljava/util/Locale;)Ljava/util/concurrent/atomic/AtomicReferenceArray<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$AtomicReferenceArray*(HostLocaleProviderAdapterImpl$3::*)($Locale*)>(&HostLocaleProviderAdapterImpl$3::getNumberPatterns))},
	{"getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$3_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getNumberFormatProvider",
	"()Ljava/text/spi/NumberFormatProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$3_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$3",
	"java.text.spi.NumberFormatProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$3_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$3_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$3($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$3));
}

void HostLocaleProviderAdapterImpl$3::init$() {
	$NumberFormatProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$3::getAvailableLocales() {
	return $HostLocaleProviderAdapterImpl::getSupportedNativeDigitLocales();
}

bool HostLocaleProviderAdapterImpl$3::isSupportedLocale($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::isSupportedNativeDigitLocale(locale);
}

$NumberFormat* HostLocaleProviderAdapterImpl$3::getCurrencyInstance($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReferenceArray, patterns, getNumberPatterns(locale));
	$var($String, var$0, $cast($String, $nc(patterns)->get(1)));
	return $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale)));
}

$NumberFormat* HostLocaleProviderAdapterImpl$3::getIntegerInstance($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReferenceArray, patterns, getNumberPatterns(locale));
	$var($String, var$0, $cast($String, $nc(patterns)->get(3)));
	$var($DecimalFormat, format, $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale))));
	return $HostLocaleProviderAdapter::makeIntegerFormatter(format);
}

$NumberFormat* HostLocaleProviderAdapterImpl$3::getNumberInstance($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReferenceArray, patterns, getNumberPatterns(locale));
	$var($String, var$0, $cast($String, $nc(patterns)->get(0)));
	return $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale)));
}

$NumberFormat* HostLocaleProviderAdapterImpl$3::getPercentInstance($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReferenceArray, patterns, getNumberPatterns(locale));
	$var($String, var$0, $cast($String, $nc(patterns)->get(2)));
	return $new($DecimalFormat, var$0, $($DecimalFormatSymbols::getInstance(locale)));
}

$AtomicReferenceArray* HostLocaleProviderAdapterImpl$3::getNumberPatterns($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReferenceArray, patterns, nullptr);
	$init($HostLocaleProviderAdapterImpl);
	$var($SoftReference, ref, $cast($SoftReference, $nc($HostLocaleProviderAdapterImpl::numberFormatCache)->get(locale)));
	if (ref == nullptr || ($assign(patterns, $cast($AtomicReferenceArray, $nc(ref)->get()))) == nullptr) {
		$var($String, langtag, $nc(locale)->toLanguageTag());
		$assign(patterns, $new($AtomicReferenceArray, 3 + 1));
		for (int32_t i = 0; i <= 3; ++i) {
			patterns->compareAndSet(i, nullptr, $($HostLocaleProviderAdapterImpl::getNumberPattern(i, langtag)));
		}
		$assign(ref, $new($SoftReference, patterns));
		$nc($HostLocaleProviderAdapterImpl::numberFormatCache)->put(locale, ref);
	}
	return patterns;
}

HostLocaleProviderAdapterImpl$3::HostLocaleProviderAdapterImpl$3() {
}

$Class* HostLocaleProviderAdapterImpl$3::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$3, name, initialize, &_HostLocaleProviderAdapterImpl$3_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$3);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$3::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun