#ifndef _sun_util_locale_provider_TimeZoneNameUtility$TimeZoneNameGetter_h_
#define _sun_util_locale_provider_TimeZoneNameUtility$TimeZoneNameGetter_h_
//$ class sun.util.locale.provider.TimeZoneNameUtility$TimeZoneNameGetter
//$ extends sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter

#include <java/lang/Array.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace spi {
			class LocaleServiceProvider;
			class TimeZoneNameProvider;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class TimeZoneNameUtility$TimeZoneNameGetter : public ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter {
	$class(TimeZoneNameUtility$TimeZoneNameGetter, 0, ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter)
public:
	TimeZoneNameUtility$TimeZoneNameGetter();
	void init$();
	static $String* examineAliases(::java::util::spi::TimeZoneNameProvider* tznp, ::java::util::Locale* locale, $String* requestID, $String* tzid, int32_t style, ::java::util::Map* aliases);
	static $String* getName(::java::util::spi::TimeZoneNameProvider* timeZoneNameProvider, ::java::util::Locale* locale, $String* requestID, int32_t style, $String* tzid);
	virtual $String* getObject(::java::util::spi::TimeZoneNameProvider* timeZoneNameProvider, ::java::util::Locale* locale, $String* requestID, $ObjectArray* params);
	virtual $Object* getObject(::java::util::spi::LocaleServiceProvider* timeZoneNameProvider, ::java::util::Locale* locale, $String* requestID, $ObjectArray* params) override;
	static bool $assertionsDisabled;
	static ::sun::util::locale::provider::TimeZoneNameUtility$TimeZoneNameGetter* INSTANCE;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_util_locale_provider_TimeZoneNameUtility$TimeZoneNameGetter_h_