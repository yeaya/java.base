#ifndef _sun_util_locale_provider_TimeZoneNameProviderImpl_h_
#define _sun_util_locale_provider_TimeZoneNameProviderImpl_h_
//$ class sun.util.locale.provider.TimeZoneNameProviderImpl
//$ extends java.util.spi.TimeZoneNameProvider

#include <java/lang/Array.h>
#include <java/util/spi/TimeZoneNameProvider.h>

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

class $import TimeZoneNameProviderImpl : public ::java::util::spi::TimeZoneNameProvider {
	$class(TimeZoneNameProviderImpl, 0, ::java::util::spi::TimeZoneNameProvider)
public:
	TimeZoneNameProviderImpl();
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual $String* getDisplayName($String* id, bool daylight, int32_t style, ::java::util::Locale* locale) override;
	virtual $StringArray* getDisplayNameArray($String* id, ::java::util::Locale* locale);
	virtual $String* getGenericDisplayName($String* id, int32_t style, ::java::util::Locale* locale) override;
	virtual $Array<::java::lang::String, 2>* getZoneStrings(::java::util::Locale* locale);
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	static bool $assertionsDisabled;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_TimeZoneNameProviderImpl_h_