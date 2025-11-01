#ifndef _sun_util_locale_provider_CalendarNameProviderImpl_h_
#define _sun_util_locale_provider_CalendarNameProviderImpl_h_
//$ class sun.util.locale.provider.CalendarNameProviderImpl
//$ extends java.util.spi.CalendarNameProvider
//$ implements sun.util.locale.provider.AvailableLanguageTags

#include <java/lang/Array.h>
#include <java/util/spi/CalendarNameProvider.h>
#include <sun/util/locale/provider/AvailableLanguageTags.h>

#pragma push_macro("REST_OF_STYLES")
#undef REST_OF_STYLES

namespace java {
	namespace util {
		class Locale;
		class Map;
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

class $import CalendarNameProviderImpl : public ::java::util::spi::CalendarNameProvider, public ::sun::util::locale::provider::AvailableLanguageTags {
	$class(CalendarNameProviderImpl, 0, ::java::util::spi::CalendarNameProvider, ::sun::util::locale::provider::AvailableLanguageTags)
public:
	CalendarNameProviderImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	virtual ::java::util::Set* getAvailableLanguageTags() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	static int32_t getBaseStyle(int32_t style);
	virtual $String* getDisplayName($String* calendarType, int32_t field, int32_t value, int32_t style, ::java::util::Locale* locale) override;
	virtual $String* getDisplayNameImpl($String* calendarType, int32_t field, int32_t value, int32_t style, ::java::util::Locale* locale, bool javatime);
	virtual ::java::util::Map* getDisplayNames($String* calendarType, int32_t field, int32_t style, ::java::util::Locale* locale) override;
	::java::util::Map* getDisplayNamesImpl($String* calendarType, int32_t field, int32_t style, ::java::util::Locale* locale, bool javatime);
	virtual $String* getJavaTimeDisplayName($String* calendarType, int32_t field, int32_t value, int32_t style, ::java::util::Locale* locale);
	virtual ::java::util::Map* getJavaTimeDisplayNames($String* calendarType, int32_t field, int32_t style, ::java::util::Locale* locale);
	$String* getResourceKey($String* type, int32_t field, int32_t style, bool javatime);
	static $String* getResourceKeyFor(::sun::util::locale::provider::LocaleProviderAdapter$Type* adapterType, $String* type, int32_t field, int32_t style, bool javatime);
	bool hasDuplicates($StringArray* strings);
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	static $String* toStyleName(int32_t baseStyle);
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
	static $ints* REST_OF_STYLES;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("REST_OF_STYLES")

#endif // _sun_util_locale_provider_CalendarNameProviderImpl_h_