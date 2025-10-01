#ifndef _sun_util_locale_provider_CalendarDataUtility$CalendarFieldValueNamesMapGetter_h_
#define _sun_util_locale_provider_CalendarDataUtility$CalendarFieldValueNamesMapGetter_h_
//$ class sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNamesMapGetter
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
			class CalendarNameProvider;
			class LocaleServiceProvider;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class CalendarDataUtility$CalendarFieldValueNamesMapGetter : public ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter {
	$class(CalendarDataUtility$CalendarFieldValueNamesMapGetter, 0, ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter)
public:
	CalendarDataUtility$CalendarFieldValueNamesMapGetter();
	void init$();
	virtual ::java::util::Map* getObject(::java::util::spi::CalendarNameProvider* calendarNameProvider, ::java::util::Locale* locale, $String* requestID, $ObjectArray* params);
	virtual $Object* getObject(::java::util::spi::LocaleServiceProvider* calendarNameProvider, ::java::util::Locale* locale, $String* requestID, $ObjectArray* params) override;
	static bool $assertionsDisabled;
	static ::sun::util::locale::provider::CalendarDataUtility$CalendarFieldValueNamesMapGetter* INSTANCE;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_util_locale_provider_CalendarDataUtility$CalendarFieldValueNamesMapGetter_h_