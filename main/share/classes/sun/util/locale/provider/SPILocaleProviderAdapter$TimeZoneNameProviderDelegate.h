#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$TimeZoneNameProviderDelegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$TimeZoneNameProviderDelegate_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$TimeZoneNameProviderDelegate
//$ extends java.util.spi.TimeZoneNameProvider
//$ implements sun.util.locale.provider.SPILocaleProviderAdapter$Delegate

#include <java/lang/Array.h>
#include <java/util/spi/TimeZoneNameProvider.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter$Delegate.h>

#pragma push_macro("ID")
#undef ID

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

class $export SPILocaleProviderAdapter$TimeZoneNameProviderDelegate : public ::java::util::spi::TimeZoneNameProvider, public ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate {
	$class(SPILocaleProviderAdapter$TimeZoneNameProviderDelegate, $NO_CLASS_INIT, ::java::util::spi::TimeZoneNameProvider, ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate)
public:
	SPILocaleProviderAdapter$TimeZoneNameProviderDelegate();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::util::Map* getDelegateMap() override;
	virtual $String* getDisplayName($String* ID, bool daylight, int32_t style, ::java::util::Locale* locale) override;
	virtual $String* getGenericDisplayName($String* ID, int32_t style, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("ID")

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$TimeZoneNameProviderDelegate_h_