#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$1_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$1_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$1
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

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class HostLocaleProviderAdapterImpl$1 : public ::sun::text::spi::JavaTimeDateTimePatternProvider {
	$class(HostLocaleProviderAdapterImpl$1, $NO_CLASS_INIT, ::sun::text::spi::JavaTimeDateTimePatternProvider)
public:
	HostLocaleProviderAdapterImpl$1();
	void init$();
	void appendN(char16_t c, int32_t n, ::java::lang::StringBuilder* sb);
	void convert($String* calendarType, char16_t letter, int32_t count, ::java::lang::StringBuilder* sb);
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	$String* getDateTimePattern(int32_t dateStyle, int32_t timeStyle, ::java::util::Locale* locale);
	virtual $String* getJavaTimeDateTimePattern(int32_t timeStyle, int32_t dateStyle, $String* calType, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	$String* toJavaTimeDateTimePattern($String* calendarType, $String* jrePattern);
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$1_h_