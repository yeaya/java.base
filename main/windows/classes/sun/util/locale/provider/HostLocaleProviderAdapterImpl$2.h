#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$2_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$2_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$2
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

class HostLocaleProviderAdapterImpl$2 : public ::java::text::spi::DateFormatSymbolsProvider {
	$class(HostLocaleProviderAdapterImpl$2, $NO_CLASS_INIT, ::java::text::spi::DateFormatSymbolsProvider)
public:
	HostLocaleProviderAdapterImpl$2();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::DateFormatSymbols* getInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$2_h_