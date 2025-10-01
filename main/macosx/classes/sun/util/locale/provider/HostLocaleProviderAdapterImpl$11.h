#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$11_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$11_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$11
//$ extends java.util.spi.TimeZoneNameProvider

#include <java/lang/Array.h>
#include <java/util/spi/TimeZoneNameProvider.h>

#pragma push_macro("ID")
#undef ID

namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class HostLocaleProviderAdapterImpl$11 : public ::java::util::spi::TimeZoneNameProvider {
	$class(HostLocaleProviderAdapterImpl$11, $NO_CLASS_INIT, ::java::util::spi::TimeZoneNameProvider)
public:
	HostLocaleProviderAdapterImpl$11();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual $String* getDisplayName($String* ID, bool daylight, int32_t style, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("ID")

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$11_h_