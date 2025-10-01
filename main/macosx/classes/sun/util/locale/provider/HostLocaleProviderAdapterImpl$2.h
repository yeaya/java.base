#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$2_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$2_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$2
//$ extends java.text.spi.DateFormatProvider

#include <java/lang/Array.h>
#include <java/text/spi/DateFormatProvider.h>

namespace java {
	namespace text {
		class DateFormat;
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

class HostLocaleProviderAdapterImpl$2 : public ::java::text::spi::DateFormatProvider {
	$class(HostLocaleProviderAdapterImpl$2, $NO_CLASS_INIT, ::java::text::spi::DateFormatProvider)
public:
	HostLocaleProviderAdapterImpl$2();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::DateFormat* getDateInstance(int32_t style, ::java::util::Locale* locale) override;
	virtual ::java::text::DateFormat* getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, ::java::util::Locale* locale) override;
	$String* getDateTimePattern(int32_t dateStyle, int32_t timeStyle, ::java::util::Locale* locale);
	virtual ::java::text::DateFormat* getTimeInstance(int32_t style, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$2_h_