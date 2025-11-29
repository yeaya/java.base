#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$1.h>

#include <java/lang/ref/SoftReference.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/concurrent/atomic/AtomicReferenceArray.h>
#include <sun/text/spi/JavaTimeDateTimePatternProvider.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Locale = ::java::util::Locale;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $AtomicReferenceArray = ::java::util::concurrent::atomic::AtomicReferenceArray;
using $JavaTimeDateTimePatternProvider = ::sun::text::spi::JavaTimeDateTimePatternProvider;
using $HostLocaleProviderAdapterImpl = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapterImpl$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostLocaleProviderAdapterImpl$1::*)()>(&HostLocaleProviderAdapterImpl$1::init$))},
	{"appendN", "(CILjava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(static_cast<void(HostLocaleProviderAdapterImpl$1::*)(char16_t,int32_t,$StringBuilder*)>(&HostLocaleProviderAdapterImpl$1::appendN))},
	{"convert", "(Ljava/lang/String;CILjava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(static_cast<void(HostLocaleProviderAdapterImpl$1::*)($String*,char16_t,int32_t,$StringBuilder*)>(&HostLocaleProviderAdapterImpl$1::convert))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDateTimePattern", "(IILjava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(HostLocaleProviderAdapterImpl$1::*)(int32_t,int32_t,$Locale*)>(&HostLocaleProviderAdapterImpl$1::getDateTimePattern))},
	{"getJavaTimeDateTimePattern", "(IILjava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"toJavaTimeDateTimePattern", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(HostLocaleProviderAdapterImpl$1::*)($String*,$String*)>(&HostLocaleProviderAdapterImpl$1::toJavaTimeDateTimePattern))},
	{}
};

$EnclosingMethodInfo _HostLocaleProviderAdapterImpl$1_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"getJavaTimeDateTimePatternProvider",
	"()Lsun/text/spi/JavaTimeDateTimePatternProvider;"
};

$InnerClassInfo _HostLocaleProviderAdapterImpl$1_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$1",
	"sun.text.spi.JavaTimeDateTimePatternProvider",
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
	$JavaTimeDateTimePatternProvider::init$();
}

$LocaleArray* HostLocaleProviderAdapterImpl$1::getAvailableLocales() {
	return $HostLocaleProviderAdapterImpl::getSupportedCalendarLocales();
}

bool HostLocaleProviderAdapterImpl$1::isSupportedLocale($Locale* locale) {
	return $HostLocaleProviderAdapterImpl::isSupportedCalendarLocale(locale);
}

$String* HostLocaleProviderAdapterImpl$1::getJavaTimeDateTimePattern(int32_t timeStyle, int32_t dateStyle, $String* calType, $Locale* locale) {
	return toJavaTimeDateTimePattern(calType, $(getDateTimePattern(dateStyle, timeStyle, locale)));
}

$String* HostLocaleProviderAdapterImpl$1::getDateTimePattern(int32_t dateStyle, int32_t timeStyle, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
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

$String* HostLocaleProviderAdapterImpl$1::toJavaTimeDateTimePattern($String* calendarType, $String* jrePattern) {
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

void HostLocaleProviderAdapterImpl$1::convert($String* calendarType, char16_t letter, int32_t count, $StringBuilder* sb) {
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

void HostLocaleProviderAdapterImpl$1::appendN(char16_t c, int32_t n, $StringBuilder* sb) {
	for (int32_t i = 0; i < n; ++i) {
		$nc(sb)->append(c);
	}
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