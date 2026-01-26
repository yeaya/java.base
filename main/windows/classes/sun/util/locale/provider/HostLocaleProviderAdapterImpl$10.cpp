#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$10.h>

#include <java/lang/ref/SoftReference.h>
#include <java/text/DateFormat.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/concurrent/atomic/AtomicReferenceArray.h>
#include <sun/text/spi/JavaTimeDateTimePatternProvider.h>
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
using $Locale = ::java::util::Locale;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $AtomicReferenceArray = ::java::util::concurrent::atomic::AtomicReferenceArray;
using $JavaTimeDateTimePatternProvider = ::sun::text::spi::JavaTimeDateTimePatternProvider;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$10_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HostLocaleProviderAdapterImpl$10, init$, void)},
	{"appendN", "(CILjava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(HostLocaleProviderAdapterImpl$10, appendN, void, char16_t, int32_t, $StringBuilder*)},
	{"convert", "(Ljava/lang/String;CILjava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(HostLocaleProviderAdapterImpl$10, convert, void, $String*, char16_t, int32_t, $StringBuilder*)},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$10, getAvailableLocales, $LocaleArray*)},
	{"getDateTimePatterns", "(Ljava/util/Locale;)Ljava/util/concurrent/atomic/AtomicReferenceArray;", "(Ljava/util/Locale;)Ljava/util/concurrent/atomic/AtomicReferenceArray<Ljava/lang/String;>;", $PRIVATE, $method(HostLocaleProviderAdapterImpl$10, getDateTimePatterns, $AtomicReferenceArray*, $Locale*)},
	{"getJavaTimeDateTimePattern", "(IILjava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$10, getJavaTimeDateTimePattern, $String*, int32_t, int32_t, $String*, $Locale*)},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(HostLocaleProviderAdapterImpl$10, isSupportedLocale, bool, $Locale*)},
	{"toJavaTimeDateTimePattern", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(HostLocaleProviderAdapterImpl$10, toJavaTimeDateTimePattern, $String*, $String*, $String*)},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$10_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getJavaTimeDateTimePatternProvider",
	"()Lsun/text/spi/JavaTimeDateTimePatternProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$10_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$10_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$10",
	"sun.text.spi.JavaTimeDateTimePatternProvider",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl$10_MethodInfo_,
	nullptr,
	&_HostLocaleProviderAdapterImpl$10_EnclosingMethodInfo_,
	_HostLocaleProviderAdapterImpl$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl"
};

$Object* allocate$HostLocaleProviderAdapterImpl$10($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl$10));
}

void HostLocaleProviderAdapterImpl$10::init$() {
	$JavaTimeDateTimePatternProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$10::getAvailableLocales() {
	return $HostLocaleProviderAdapterImpl::getSupportedCalendarLocales();
}

bool HostLocaleProviderAdapterImpl$10::isSupportedLocale($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::isSupportedCalendarLocale(locale);
}

$String* HostLocaleProviderAdapterImpl$10::getJavaTimeDateTimePattern(int32_t timeStyle, int32_t dateStyle, $String* calType, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReferenceArray, patterns, getDateTimePatterns(locale));
	$var($String, datePattern, dateStyle != -1 ? $cast($String, $nc(patterns)->get(dateStyle / 2)) : ""_s);
	$var($String, timePattern, timeStyle != -1 ? $cast($String, patterns->get(timeStyle / 2 + 2)) : ""_s);
	$var($String, delim, dateStyle != -1 && timeStyle != -1 ? " "_s : ""_s);
	return toJavaTimeDateTimePattern(calType, $$str({datePattern, delim, timePattern}));
}

$AtomicReferenceArray* HostLocaleProviderAdapterImpl$10::getDateTimePatterns($Locale* locale) {
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

$String* HostLocaleProviderAdapterImpl$10::toJavaTimeDateTimePattern($String* calendarType, $String* jrePattern) {
	int32_t length = $nc(jrePattern)->length();
	$var($StringBuilder, sb, $new($StringBuilder, length));
	bool inQuote = false;
	int32_t count = 0;
	char16_t lastLetter = (char16_t)0;
	for (int32_t i = 0; i < length; ++i) {
		char16_t c = jrePattern->charAt(i);
		if (c == u'\'') {
			if ((i + 1) < length) {
				char16_t nextc = jrePattern->charAt(i + 1);
				if (nextc == u'\'') {
					++i;
					if (count != 0) {
						convert(calendarType, lastLetter, count, sb);
						lastLetter = (char16_t)0;
						count = 0;
					}
					sb->append("\'\'"_s);
					continue;
				}
			}
			if (!inQuote) {
				if (count != 0) {
					convert(calendarType, lastLetter, count, sb);
					lastLetter = (char16_t)0;
					count = 0;
				}
				inQuote = true;
			} else {
				inQuote = false;
			}
			sb->append(c);
			continue;
		}
		if (inQuote) {
			sb->append(c);
			continue;
		}
		if (!(c >= u'a' && c <= u'z' || c >= u'A' && c <= u'Z')) {
			if (count != 0) {
				convert(calendarType, lastLetter, count, sb);
				lastLetter = (char16_t)0;
				count = 0;
			}
			sb->append(c);
			continue;
		}
		if (lastLetter == 0 || lastLetter == c) {
			lastLetter = c;
			++count;
			continue;
		}
		convert(calendarType, lastLetter, count, sb);
		lastLetter = c;
		count = 1;
	}
	if (inQuote) {
		return nullptr;
	}
	if (count != 0) {
		convert(calendarType, lastLetter, count, sb);
	}
	return sb->toString();
}

void HostLocaleProviderAdapterImpl$10::convert($String* calendarType, char16_t letter, int32_t count, $StringBuilder* sb) {
	switch (letter) {
	case u'G':
		{
			if ($nc(calendarType)->equals("japanese"_s)) {
				if (count >= 4) {
					count = 1;
				} else {
					count = 5;
				}
			} else if (!calendarType->equals("iso8601"_s)) {
				if (count >= 4) {
					count = 4;
				} else {
					count = 1;
				}
			}
			break;
		}
	case u'y':
		{
			if ($nc(calendarType)->equals("japanese"_s) && count >= 4) {
				count = 1;
			}
			break;
		}
	default:
		{
			if (count > 4) {
				count = 4;
			}
			break;
		}
	}
	appendN(letter, count, sb);
}

void HostLocaleProviderAdapterImpl$10::appendN(char16_t c, int32_t n, $StringBuilder* sb) {
	for (int32_t i = 0; i < n; ++i) {
		$nc(sb)->append(c);
	}
}

HostLocaleProviderAdapterImpl$10::HostLocaleProviderAdapterImpl$10() {
}

$Class* HostLocaleProviderAdapterImpl$10::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl$10, name, initialize, &_HostLocaleProviderAdapterImpl$10_ClassInfo_, allocate$HostLocaleProviderAdapterImpl$10);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl$10::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun