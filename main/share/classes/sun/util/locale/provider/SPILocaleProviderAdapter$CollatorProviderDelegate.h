#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$CollatorProviderDelegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$CollatorProviderDelegate_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$CollatorProviderDelegate
//$ extends java.text.spi.CollatorProvider
//$ implements sun.util.locale.provider.SPILocaleProviderAdapter$Delegate

#include <java/lang/Array.h>
#include <java/text/spi/CollatorProvider.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter$Delegate.h>

namespace java {
	namespace text {
		class Collator;
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

class $export SPILocaleProviderAdapter$CollatorProviderDelegate : public ::java::text::spi::CollatorProvider, public ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate {
	$class(SPILocaleProviderAdapter$CollatorProviderDelegate, $NO_CLASS_INIT, ::java::text::spi::CollatorProvider, ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate)
public:
	SPILocaleProviderAdapter$CollatorProviderDelegate();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::util::Map* getDelegateMap() override;
	virtual ::java::text::Collator* getInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$CollatorProviderDelegate_h_