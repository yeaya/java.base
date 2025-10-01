#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$5_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$5_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$5
//$ extends java.util.spi.CalendarDataProvider

#include <java/lang/Array.h>
#include <java/util/spi/CalendarDataProvider.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class HostLocaleProviderAdapterImpl$5 : public ::java::util::spi::CalendarDataProvider {
	$class(HostLocaleProviderAdapterImpl$5, $NO_CLASS_INIT, ::java::util::spi::CalendarDataProvider)
public:
	HostLocaleProviderAdapterImpl$5();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual int32_t getFirstDayOfWeek(::java::util::Locale* locale) override;
	virtual int32_t getMinimalDaysInFirstWeek(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$5_h_