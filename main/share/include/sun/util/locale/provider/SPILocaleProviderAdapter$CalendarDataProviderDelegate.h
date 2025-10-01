#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$CalendarDataProviderDelegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$CalendarDataProviderDelegate_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$CalendarDataProviderDelegate
//$ extends java.util.spi.CalendarDataProvider
//$ implements sun.util.locale.provider.SPILocaleProviderAdapter$Delegate

#include <java/lang/Array.h>
#include <java/util/spi/CalendarDataProvider.h>
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

class $import SPILocaleProviderAdapter$CalendarDataProviderDelegate : public ::java::util::spi::CalendarDataProvider, public ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate {
	$class(SPILocaleProviderAdapter$CalendarDataProviderDelegate, $NO_CLASS_INIT, ::java::util::spi::CalendarDataProvider, ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate)
public:
	SPILocaleProviderAdapter$CalendarDataProviderDelegate();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::util::Map* getDelegateMap() override;
	virtual int32_t getFirstDayOfWeek(::java::util::Locale* locale) override;
	virtual int32_t getMinimalDaysInFirstWeek(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$CalendarDataProviderDelegate_h_