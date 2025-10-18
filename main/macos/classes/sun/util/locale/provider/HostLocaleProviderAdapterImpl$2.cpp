#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$2.h>

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
using $Map = ::java::util::Map;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $AtomicReferenceArray = ::java::util::concurrent::atomic::AtomicReferenceArray;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$2::*)()>(&HostLocaleProviderAdapterImpl$2::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDateInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"getDateTimeInstance", "(IILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"getDateTimePattern", "(IILjava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(HostLocaleProviderAdapterImpl$2::*)(int32_t,int32_t,$Locale*)>(&HostLocaleProviderAdapterImpl$2::getDateTimePattern))},
	{"getTimeInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$2_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getDateFormatProvider",
	"()Ljava/text/spi/DateFormatProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$2_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$2",
	"java.text.spi.DateFormatProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$2_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$2_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$2($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$2));
}

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
	$var($String, var$0, getDateTimePattern(style, -1, locale));
	return $new($SimpleDateFormat, var$0, $($HostLocaleProviderAdapterImpl::getCalendarLocale(locale)));
}

$DateFormat* HostLocaleProviderAdapterImpl$2::getTimeInstance(int32_t style, $Locale* locale) {
	$var($String, var$0, getDateTimePattern(-1, style, locale));
	return $new($SimpleDateFormat, var$0, $($HostLocaleProviderAdapterImpl::getCalendarLocale(locale)));
}

$DateFormat* HostLocaleProviderAdapterImpl$2::getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, $Locale* locale) {
	$var($String, var$0, getDateTimePattern(dateStyle, timeStyle, locale));
	return $new($SimpleDateFormat, var$0, $($HostLocaleProviderAdapterImpl::getCalendarLocale(locale)));
}

$String* HostLocaleProviderAdapterImpl$2::getDateTimePattern(int32_t dateStyle, int32_t timeStyle, $Locale* locale) {
	$var($AtomicReferenceArray, dateFormatPatterns, nullptr);
	$init($HostLocaleProviderAdapterImpl);
	$var($SoftReference, ref, $cast($SoftReference, $nc($HostLocaleProviderAdapterImpl::dateFormatPatternsMap)->get(locale)));
	if (ref == nullptr || ($assign(dateFormatPatterns, $cast($AtomicReferenceArray, $nc(ref)->get()))) == nullptr) {
		$assign(dateFormatPatterns, $new($AtomicReferenceArray, 5 * 5));
		$assign(ref, $new($SoftReference, dateFormatPatterns));
		$nc($HostLocaleProviderAdapterImpl::dateFormatPatternsMap)->put(locale, ref);
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
	$loadClass(HostLocaleProviderAdapterImpl$2, name, initialize, &_HostLocaleProviderAdapterImpl$2_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$2);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$2::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun