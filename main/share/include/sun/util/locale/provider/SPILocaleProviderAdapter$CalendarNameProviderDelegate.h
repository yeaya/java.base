#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$CalendarNameProviderDelegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$CalendarNameProviderDelegate_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$CalendarNameProviderDelegate
//$ extends java.util.spi.CalendarNameProvider
//$ implements sun.util.locale.provider.SPILocaleProviderAdapter$Delegate

#include <java/lang/Array.h>
#include <java/util/spi/CalendarNameProvider.h>
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

class $import SPILocaleProviderAdapter$CalendarNameProviderDelegate : public ::java::util::spi::CalendarNameProvider, public ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate {
	$class(SPILocaleProviderAdapter$CalendarNameProviderDelegate, $NO_CLASS_INIT, ::java::util::spi::CalendarNameProvider, ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate)
public:
	SPILocaleProviderAdapter$CalendarNameProviderDelegate();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::util::Map* getDelegateMap() override;
	virtual $String* getDisplayName($String* calendarType, int32_t field, int32_t value, int32_t style, ::java::util::Locale* locale) override;
	virtual ::java::util::Map* getDisplayNames($String* calendarType, int32_t field, int32_t style, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$CalendarNameProviderDelegate_h_