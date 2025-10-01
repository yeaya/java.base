#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$6_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$6_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$6
//$ extends java.util.spi.CalendarNameProvider

#include <java/lang/Array.h>
#include <java/util/spi/CalendarNameProvider.h>

namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class HostLocaleProviderAdapterImpl$6 : public ::java::util::spi::CalendarNameProvider {
	$class(HostLocaleProviderAdapterImpl$6, $NO_CLASS_INIT, ::java::util::spi::CalendarNameProvider)
public:
	HostLocaleProviderAdapterImpl$6();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual $String* getDisplayName($String* calendarType, int32_t field, int32_t value, int32_t style, ::java::util::Locale* locale) override;
	virtual ::java::util::Map* getDisplayNames($String* calendarType, int32_t field, int32_t style, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$6_h_