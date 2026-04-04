#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$2.h>
#include <java/lang/ref/SoftReference.h>
#include <java/text/DateFormat.h>
#include <java/text/SimpleDateFormat.h>
#include <java/text/spi/DateFormatProvider.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/concurrent/atomic/AtomicReferenceArray.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $DateFormat = ::java::text::DateFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $DateFormatProvider = ::java::text::spi::DateFormatProvider;
using $Locale = ::java::util::Locale;
using $AtomicReferenceArray = ::java::util::concurrent::atomic::AtomicReferenceArray;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

void HostLocaleProviderAdapterImpl$2::init$() {
	$DateFormatProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$2::getAvailableLocales() {
	return $HostLocaleProviderAdapterImpl::getSupportedCalendarLocales();
}

bool HostLocaleProviderAdapterImpl$2::isSupportedLocale($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::isSupportedCalendarLocale(locale);
}

$DateFormat* HostLocaleProviderAdapterImpl$2::getDateInstance(int32_t style, $Locale* locale) {
	$useLocalObjectStack();
	$var($String, var$0, getDateTimePattern(style, -1, locale));
	return $new($SimpleDateFormat, var$0, $($HostLocaleProviderAdapterImpl::getCalendarLocale(locale)));
}

$DateFormat* HostLocaleProviderAdapterImpl$2::getTimeInstance(int32_t style, $Locale* locale) {
	$useLocalObjectStack();
	$var($String, var$0, getDateTimePattern(-1, style, locale));
	return $new($SimpleDateFormat, var$0, $($HostLocaleProviderAdapterImpl::getCalendarLocale(locale)));
}

$DateFormat* HostLocaleProviderAdapterImpl$2::getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, $Locale* locale) {
	$useLocalObjectStack();
	$var($String, var$0, getDateTimePattern(dateStyle, timeStyle, locale));
	return $new($SimpleDateFormat, var$0, $($HostLocaleProviderAdapterImpl::getCalendarLocale(locale)));
}

$String* HostLocaleProviderAdapterImpl$2::getDateTimePattern(int32_t dateStyle, int32_t timeStyle, $Locale* locale) {
	$useLocalObjectStack();
	$var($AtomicReferenceArray, dateFormatPatterns, nullptr);
	$init($HostLocaleProviderAdapterImpl);
	$var($SoftReference, ref, $cast($SoftReference, $nc($HostLocaleProviderAdapterImpl::dateFormatPatternsMap)->get(locale)));
	if (ref == nullptr || ($assign(dateFormatPatterns, $cast($AtomicReferenceArray, ref->get()))) == nullptr) {
		$assign(dateFormatPatterns, $new($AtomicReferenceArray, 5 * 5));
		$assign(ref, $new($SoftReference, dateFormatPatterns));
		$HostLocaleProviderAdapterImpl::dateFormatPatternsMap->put(locale, ref);
	}
	int32_t index = (dateStyle + 1) * 5 + timeStyle + 1;
	$var($String, pattern, $cast($String, $nc(dateFormatPatterns)->get(index)));
	if (pattern == nullptr) {
		$var($String, langTag, $nc(locale)->toLanguageTag());
		$var($String, var$0, $HostLocaleProviderAdapterImpl::getCalendarID(langTag));
		$assign(pattern, $HostLocaleProviderAdapterImpl::translateDateFormatLetters(var$0, $($HostLocaleProviderAdapterImpl::getDateTimePatternNative(dateStyle, timeStyle, langTag))));
		if (!dateFormatPatterns->compareAndSet(index, nullptr, pattern)) {
			$assign(pattern, $cast($String, dateFormatPatterns->get(index)));
		}
	}
	return pattern;
}

HostLocaleProviderAdapterImpl$2::HostLocaleProviderAdapterImpl$2() {
}

$Class* HostLocaleProviderAdapterImpl$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostLocaleProviderAdapterImpl$2, init$, void)},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$2, getAvailableLocales, $LocaleArray*)},
		{"getDateInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$2, getDateInstance, $DateFormat*, int32_t, $Locale*)},
		{"getDateTimeInstance", "(IILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$2, getDateTimeInstance, $DateFormat*, int32_t, int32_t, $Locale*)},
		{"getDateTimePattern", "(IILjava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(HostLocaleProviderAdapterImpl$2, getDateTimePattern, $String*, int32_t, int32_t, $Locale*)},
		{"getTimeInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$2, getTimeInstance, $DateFormat*, int32_t, $Locale*)},
		{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$2, isSupportedLocale, bool, $Locale*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
		"getDateFormatProvider",
		"()Ljava/text/spi/DateFormatProvider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.HostLocaleProviderAdapterImpl$2",
		"java.text.spi.DateFormatProvider",
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
	$loadClass(HostLocaleProviderAdapterImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostLocaleProviderAdapterImpl$2);
	});
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$2::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun