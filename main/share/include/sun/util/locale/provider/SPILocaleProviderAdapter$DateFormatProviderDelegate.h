#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$DateFormatProviderDelegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$DateFormatProviderDelegate_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$DateFormatProviderDelegate
//$ extends java.text.spi.DateFormatProvider
//$ implements sun.util.locale.provider.SPILocaleProviderAdapter$Delegate

#include <java/lang/Array.h>
#include <java/text/spi/DateFormatProvider.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter$Delegate.h>

namespace java {
	namespace text {
		class DateFormat;
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

class $import SPILocaleProviderAdapter$DateFormatProviderDelegate : public ::java::text::spi::DateFormatProvider, public ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate {
	$class(SPILocaleProviderAdapter$DateFormatProviderDelegate, $NO_CLASS_INIT, ::java::text::spi::DateFormatProvider, ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate)
public:
	SPILocaleProviderAdapter$DateFormatProviderDelegate();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::DateFormat* getDateInstance(int32_t style, ::java::util::Locale* locale) override;
	virtual ::java::text::DateFormat* getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, ::java::util::Locale* locale) override;
	virtual ::java::util::Map* getDelegateMap() override;
	virtual ::java::text::DateFormat* getTimeInstance(int32_t style, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$DateFormatProviderDelegate_h_