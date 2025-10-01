#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$10_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$10_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$10
//$ extends sun.text.spi.JavaTimeDateTimePatternProvider

#include <java/lang/Array.h>
#include <sun/text/spi/JavaTimeDateTimePatternProvider.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReferenceArray;
			}
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class HostLocaleProviderAdapterImpl$10 : public ::sun::text::spi::JavaTimeDateTimePatternProvider {
	$class(HostLocaleProviderAdapterImpl$10, $NO_CLASS_INIT, ::sun::text::spi::JavaTimeDateTimePatternProvider)
public:
	HostLocaleProviderAdapterImpl$10();
	void init$();
	void appendN(char16_t c, int32_t n, ::java::lang::StringBuilder* sb);
	void convert($String* calendarType, char16_t letter, int32_t count, ::java::lang::StringBuilder* sb);
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	::java::util::concurrent::atomic::AtomicReferenceArray* getDateTimePatterns(::java::util::Locale* locale);
	virtual $String* getJavaTimeDateTimePattern(int32_t timeStyle, int32_t dateStyle, $String* calType, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	$String* toJavaTimeDateTimePattern($String* calendarType, $String* jrePattern);
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$10_h_