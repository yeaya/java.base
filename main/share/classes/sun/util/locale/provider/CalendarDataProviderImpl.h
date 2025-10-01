#ifndef _sun_util_locale_provider_CalendarDataProviderImpl_h_
#define _sun_util_locale_provider_CalendarDataProviderImpl_h_
//$ class sun.util.locale.provider.CalendarDataProviderImpl
//$ extends java.util.spi.CalendarDataProvider
//$ implements sun.util.locale.provider.AvailableLanguageTags

#include <java/lang/Array.h>
#include <java/util/spi/CalendarDataProvider.h>
#include <sun/util/locale/provider/AvailableLanguageTags.h>

namespace java {
	namespace util {
		class Locale;
		class Set;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleProviderAdapter$Type;
			}
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $export CalendarDataProviderImpl : public ::java::util::spi::CalendarDataProvider, public ::sun::util::locale::provider::AvailableLanguageTags {
	$class(CalendarDataProviderImpl, $NO_CLASS_INIT, ::java::util::spi::CalendarDataProvider, ::sun::util::locale::provider::AvailableLanguageTags)
public:
	CalendarDataProviderImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	int32_t convertToCalendarData($String* src);
	virtual ::java::util::Set* getAvailableLanguageTags() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual int32_t getFirstDayOfWeek(::java::util::Locale* locale) override;
	virtual int32_t getMinimalDaysInFirstWeek(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_CalendarDataProviderImpl_h_