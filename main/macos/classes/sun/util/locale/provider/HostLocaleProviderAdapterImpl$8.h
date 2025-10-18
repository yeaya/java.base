#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$8_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$8_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$8
//$ extends sun.util.spi.CalendarProvider

#include <java/lang/Array.h>
#include <sun/util/spi/CalendarProvider.h>

namespace java {
	namespace util {
		class Calendar;
		class Locale;
		class TimeZone;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class HostLocaleProviderAdapterImpl$8 : public ::sun::util::spi::CalendarProvider {
	$class(HostLocaleProviderAdapterImpl$8, $NO_CLASS_INIT, ::sun::util::spi::CalendarProvider)
public:
	HostLocaleProviderAdapterImpl$8();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::util::Calendar* getInstance(::java::util::TimeZone* zone, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$8_h_