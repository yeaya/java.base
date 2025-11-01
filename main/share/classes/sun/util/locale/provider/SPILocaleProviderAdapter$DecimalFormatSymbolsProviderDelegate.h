#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate
//$ extends java.text.spi.DecimalFormatSymbolsProvider
//$ implements sun.util.locale.provider.SPILocaleProviderAdapter$Delegate

#include <java/lang/Array.h>
#include <java/text/spi/DecimalFormatSymbolsProvider.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter$Delegate.h>

namespace java {
	namespace text {
		class DecimalFormatSymbols;
	}
}
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

class $export SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate : public ::java::text::spi::DecimalFormatSymbolsProvider, public ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate {
	$class(SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate, $NO_CLASS_INIT, ::java::text::spi::DecimalFormatSymbolsProvider, ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate)
public:
	SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::util::Map* getDelegateMap() override;
	virtual ::java::text::DecimalFormatSymbols* getInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate_h_