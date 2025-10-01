#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate
//$ extends java.text.spi.DateFormatSymbolsProvider
//$ implements sun.util.locale.provider.SPILocaleProviderAdapter$Delegate

#include <java/lang/Array.h>
#include <java/text/spi/DateFormatSymbolsProvider.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter$Delegate.h>

namespace java {
	namespace text {
		class DateFormatSymbols;
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

class $export SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate : public ::java::text::spi::DateFormatSymbolsProvider, public ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate {
	$class(SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate, $NO_CLASS_INIT, ::java::text::spi::DateFormatSymbolsProvider, ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate)
public:
	SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::util::Map* getDelegateMap() override;
	virtual ::java::text::DateFormatSymbols* getInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate_h_