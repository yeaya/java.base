#ifndef _sun_util_locale_provider_CalendarProviderImpl_h_
#define _sun_util_locale_provider_CalendarProviderImpl_h_
//$ class sun.util.locale.provider.CalendarProviderImpl
//$ extends sun.util.spi.CalendarProvider
//$ implements sun.util.locale.provider.AvailableLanguageTags

#include <java/lang/Array.h>
#include <sun/util/locale/provider/AvailableLanguageTags.h>
#include <sun/util/spi/CalendarProvider.h>

namespace java {
	namespace util {
		class Calendar;
		class Locale;
		class Set;
		class TimeZone;
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

class $export CalendarProviderImpl : public ::sun::util::spi::CalendarProvider, public ::sun::util::locale::provider::AvailableLanguageTags {
	$class(CalendarProviderImpl, $NO_CLASS_INIT, ::sun::util::spi::CalendarProvider, ::sun::util::locale::provider::AvailableLanguageTags)
public:
	CalendarProviderImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	virtual ::java::util::Set* getAvailableLanguageTags() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::util::Calendar* getInstance(::java::util::TimeZone* zone, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_CalendarProviderImpl_h_