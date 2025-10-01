#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$3_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$3_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$3
//$ extends java.text.spi.DateFormatSymbolsProvider

#include <java/lang/Array.h>
#include <java/text/spi/DateFormatSymbolsProvider.h>

namespace java {
	namespace text {
		class DateFormatSymbols;
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

class HostLocaleProviderAdapterImpl$3 : public ::java::text::spi::DateFormatSymbolsProvider {
	$class(HostLocaleProviderAdapterImpl$3, $NO_CLASS_INIT, ::java::text::spi::DateFormatSymbolsProvider)
public:
	HostLocaleProviderAdapterImpl$3();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::DateFormatSymbols* getInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$3_h_