#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$9_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$9_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$9
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

class HostLocaleProviderAdapterImpl$9 : public ::java::util::spi::CurrencyNameProvider {
	$class(HostLocaleProviderAdapterImpl$9, $NO_CLASS_INIT, ::java::util::spi::CurrencyNameProvider)
public:
	HostLocaleProviderAdapterImpl$9();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual $String* getDisplayName($String* code, ::java::util::Locale* locale) override;
	virtual $String* getSymbol($String* code, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$9_h_