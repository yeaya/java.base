#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$CurrencyNameProviderDelegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$CurrencyNameProviderDelegate_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$CurrencyNameProviderDelegate
//$ extends java.util.spi.CurrencyNameProvider
//$ implements sun.util.locale.provider.SPILocaleProviderAdapter$Delegate

#include <java/lang/Array.h>
#include <java/util/spi/CurrencyNameProvider.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter$Delegate.h>

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

class $import SPILocaleProviderAdapter$CurrencyNameProviderDelegate : public ::java::util::spi::CurrencyNameProvider, public ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate {
	$class(SPILocaleProviderAdapter$CurrencyNameProviderDelegate, $NO_CLASS_INIT, ::java::util::spi::CurrencyNameProvider, ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate)
public:
	SPILocaleProviderAdapter$CurrencyNameProviderDelegate();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::util::Map* getDelegateMap() override;
	virtual $String* getDisplayName($String* currencyCode, ::java::util::Locale* locale) override;
	virtual $String* getSymbol($String* currencyCode, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$CurrencyNameProviderDelegate_h_