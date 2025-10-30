#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$1.h>

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

#undef LONG
#undef SHORT

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

$MethodInfo _HostLocaleProviderAdapterImpl$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$1::*)()>(&HostLocaleProviderAdapterImpl$1::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDateInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"getDateTimeInstance", "(IILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"getDateTimePatterns", "(Ljava/util/Locale;)Ljava/util/concurrent/atomic/AtomicReferenceArray;", "(Ljava/util/Locale;)Ljava/util/concurrent/atomic/AtomicReferenceArray<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$AtomicReferenceArray*(HostLocaleProviderAdapterImpl$1::*)($Locale*)>(&HostLocaleProviderAdapterImpl$1::getDateTimePatterns))},
	{"getTimeInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$1_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getDateFormatProvider",
	"()Ljava/text/spi/DateFormatProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$1_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$1",
	"java.text.spi.DateFormatProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$1_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$1_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$1($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$1));
}

void HostLocaleProviderAdapterImpl$1::init$() {
	$DateFormatProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$1::getAvailableLocales() {
	return $HostLocaleProviderAdapterImpl::getSupportedCalendarLocales();
}

bool HostLocaleProviderAdapterImpl$1::isSupportedLocale($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::isSupportedCalendarLocale(locale);
}

$DateFormat* HostLocaleProviderAdapterImpl$1::getDateInstance(int32_t style, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReferenceArray, patterns, getDateTimePatterns(locale));
	$var($String, var$0, $cast($String, $nc(patterns)->get(style / 2)));
	return $new($SimpleDateFormat, var$0, $($HostLocaleProviderAdapterImpl::getCalendarLocale(locale)));
}

$DateFormat* HostLocaleProviderAdapterImpl$1::getTimeInstance(int32_t style, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReferenceArray, patterns, getDateTimePatterns(locale));
	$var($String, var$0, $cast($String, $nc(patterns)->get(style / 2 + 2)));
	return $new($SimpleDateFormat, var$0, $($HostLocaleProviderAdapterImpl::getCalendarLocale(locale)));
}

$DateFormat* HostLocaleProviderAdapterImpl$1::getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReferenceArray, patterns, getDateTimePatterns(locale));
	$var($String, pattern, $$new($StringBuilder, $cast($String, $($nc(patterns)->get(dateStyle / 2))))->append(" "_s)->append($cast($String, $($nc(patterns)->get(timeStyle / 2 + 2))))->toString());
	return $new($SimpleDateFormat, pattern, $($HostLocaleProviderAdapterImpl::getCalendarLocale(locale)));
}

$AtomicReferenceArray* HostLocaleProviderAdapterImpl$1::getDateTimePatterns($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReferenceArray, patterns, nullptr);
	$init($HostLocaleProviderAdapterImpl);
	$var($SoftReference, ref, $cast($SoftReference, $nc($HostLocaleProviderAdapterImpl::dateFormatCache)->get(locale)));
	if (ref == nullptr || ($assign(patterns, $cast($AtomicReferenceArray, $nc(ref)->get()))) == nullptr) {
		$var($String, langtag, $nc($($HostLocaleProviderAdapterImpl::removeExtensions(locale)))->toLanguageTag());
		$assign(patterns, $new($AtomicReferenceArray, 4));
		patterns->compareAndSet(0, nullptr, $($HostLocaleProviderAdapterImpl::convertDateTimePattern($($HostLocaleProviderAdapterImpl::getDateTimePattern($DateFormat::LONG, -1, langtag)))));
		patterns->compareAndSet(1, nullptr, $($HostLocaleProviderAdapterImpl::convertDateTimePattern($($HostLocaleProviderAdapterImpl::getDateTimePattern($DateFormat::SHORT, -1, langtag)))));
		patterns->compareAndSet(2, nullptr, $($HostLocaleProviderAdapterImpl::convertDateTimePattern($($HostLocaleProviderAdapterImpl::getDateTimePattern(-1, $DateFormat::LONG, langtag)))));
		patterns->compareAndSet(3, nullptr, $($HostLocaleProviderAdapterImpl::convertDateTimePattern($($HostLocaleProviderAdapterImpl::getDateTimePattern(-1, $DateFormat::SHORT, langtag)))));
		$assign(ref, $new($SoftReference, patterns));
		$nc($HostLocaleProviderAdapterImpl::dateFormatCache)->put(locale, ref);
	}
	return patterns;
}

HostLocaleProviderAdapterImpl$1::HostLocaleProviderAdapterImpl$1() {
}

$Class* HostLocaleProviderAdapterImpl$1::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$1, name, initialize, &_HostLocaleProviderAdapterImpl$1_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$1);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$1::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun