#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$8_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$8_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$8
//$ extends java.util.spi.CurrencyNameProvider

#include <java/lang/Array.h>
#include <java/util/spi/CurrencyNameProvider.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class HostLocaleProviderAdapterImpl$8 : public ::java::util::spi::CurrencyNameProvider {
	$class(HostLocaleProviderAdapterImpl$8, $NO_CLASS_INIT, ::java::util::spi::CurrencyNameProvider)
public:
	HostLocaleProviderAdapterImpl$8();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual $String* getDisplayName($String* currencyCode, ::java::util::Locale* locale) override;
	virtual $String* getSymbol($String* currencyCode, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$8_h_