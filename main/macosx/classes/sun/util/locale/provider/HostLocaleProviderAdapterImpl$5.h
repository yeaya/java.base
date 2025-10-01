#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$5_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$5_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$5
//$ extends java.text.spi.DecimalFormatSymbolsProvider

#include <java/lang/Array.h>
#include <java/text/spi/DecimalFormatSymbolsProvider.h>

namespace java {
	namespace text {
		class DecimalFormatSymbols;
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

class HostLocaleProviderAdapterImpl$5 : public ::java::text::spi::DecimalFormatSymbolsProvider {
	$class(HostLocaleProviderAdapterImpl$5, $NO_CLASS_INIT, ::java::text::spi::DecimalFormatSymbolsProvider)
public:
	HostLocaleProviderAdapterImpl$5();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::DecimalFormatSymbols* getInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$5_h_