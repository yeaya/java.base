#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$NumberFormatProviderDelegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$NumberFormatProviderDelegate_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$NumberFormatProviderDelegate
//$ extends java.text.spi.NumberFormatProvider
//$ implements sun.util.locale.provider.SPILocaleProviderAdapter$Delegate

#include <java/lang/Array.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter$Delegate.h>

namespace java {
	namespace text {
		class NumberFormat;
		class NumberFormat$Style;
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

class $export SPILocaleProviderAdapter$NumberFormatProviderDelegate : public ::java::text::spi::NumberFormatProvider, public ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate {
	$class(SPILocaleProviderAdapter$NumberFormatProviderDelegate, $NO_CLASS_INIT, ::java::text::spi::NumberFormatProvider, ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate)
public:
	SPILocaleProviderAdapter$NumberFormatProviderDelegate();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::NumberFormat* getCompactNumberInstance(::java::util::Locale* locale, ::java::text::NumberFormat$Style* style) override;
	virtual ::java::text::NumberFormat* getCurrencyInstance(::java::util::Locale* locale) override;
	virtual ::java::util::Map* getDelegateMap() override;
	virtual ::java::text::NumberFormat* getIntegerInstance(::java::util::Locale* locale) override;
	virtual ::java::text::NumberFormat* getNumberInstance(::java::util::Locale* locale) override;
	virtual ::java::text::NumberFormat* getPercentInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$NumberFormatProviderDelegate_h_