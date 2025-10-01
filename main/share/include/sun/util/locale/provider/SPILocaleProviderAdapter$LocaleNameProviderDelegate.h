#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$LocaleNameProviderDelegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$LocaleNameProviderDelegate_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$LocaleNameProviderDelegate
//$ extends java.util.spi.LocaleNameProvider
//$ implements sun.util.locale.provider.SPILocaleProviderAdapter$Delegate

#include <java/lang/Array.h>
#include <java/util/spi/LocaleNameProvider.h>
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

class $import SPILocaleProviderAdapter$LocaleNameProviderDelegate : public ::java::util::spi::LocaleNameProvider, public ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate {
	$class(SPILocaleProviderAdapter$LocaleNameProviderDelegate, $NO_CLASS_INIT, ::java::util::spi::LocaleNameProvider, ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate)
public:
	SPILocaleProviderAdapter$LocaleNameProviderDelegate();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::util::Map* getDelegateMap() override;
	virtual $String* getDisplayCountry($String* countryCode, ::java::util::Locale* locale) override;
	virtual $String* getDisplayLanguage($String* languageCode, ::java::util::Locale* locale) override;
	virtual $String* getDisplayScript($String* scriptCode, ::java::util::Locale* locale) override;
	virtual $String* getDisplayUnicodeExtensionKey($String* key, ::java::util::Locale* locale) override;
	virtual $String* getDisplayUnicodeExtensionType($String* extType, $String* key, ::java::util::Locale* locale) override;
	virtual $String* getDisplayVariant($String* variant, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$LocaleNameProviderDelegate_h_