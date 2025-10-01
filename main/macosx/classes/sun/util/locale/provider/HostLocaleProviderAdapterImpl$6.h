#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$6_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$6_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$6
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

class HostLocaleProviderAdapterImpl$6 : public ::java::util::spi::CalendarDataProvider {
	$class(HostLocaleProviderAdapterImpl$6, $NO_CLASS_INIT, ::java::util::spi::CalendarDataProvider)
public:
	HostLocaleProviderAdapterImpl$6();
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

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$6_h_