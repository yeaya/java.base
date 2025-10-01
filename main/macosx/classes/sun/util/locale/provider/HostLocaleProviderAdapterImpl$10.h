#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$10_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$10_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$10
//$ extends java.util.spi.LocaleNameProvider

#include <java/lang/Array.h>
#include <java/util/spi/LocaleNameProvider.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class HostLocaleProviderAdapterImpl$10 : public ::java::util::spi::LocaleNameProvider {
	$class(HostLocaleProviderAdapterImpl$10, $NO_CLASS_INIT, ::java::util::spi::LocaleNameProvider)
public:
	HostLocaleProviderAdapterImpl$10();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual $String* getDisplayCountry($String* countryCode, ::java::util::Locale* locale) override;
	virtual $String* getDisplayLanguage($String* languageCode, ::java::util::Locale* locale) override;
	virtual $String* getDisplayScript($String* scriptCode, ::java::util::Locale* locale) override;
	virtual $String* getDisplayVariant($String* variantCode, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$10_h_