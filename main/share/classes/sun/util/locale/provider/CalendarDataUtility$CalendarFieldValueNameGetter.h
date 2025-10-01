#ifndef _sun_util_locale_provider_CalendarDataUtility$CalendarFieldValueNameGetter_h_
#define _sun_util_locale_provider_CalendarDataUtility$CalendarFieldValueNameGetter_h_
//$ class sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNameGetter
//$ extends sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter

#include <java/lang/Array.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace util {
		class Locale;
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

class CalendarDataUtility$CalendarFieldValueNameGetter : public ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter {
	$class(CalendarDataUtility$CalendarFieldValueNameGetter, 0, ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter)
public:
	CalendarDataUtility$CalendarFieldValueNameGetter();
	void init$();
	virtual $String* getObject(::java::util::spi::CalendarNameProvider* calendarNameProvider, ::java::util::Locale* locale, $String* requestID, $ObjectArray* params);
	virtual $Object* getObject(::java::util::spi::LocaleServiceProvider* calendarNameProvider, ::java::util::Locale* locale, $String* requestID, $ObjectArray* params) override;
	static bool $assertionsDisabled;
	static ::sun::util::locale::provider::CalendarDataUtility$CalendarFieldValueNameGetter* INSTANCE;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_util_locale_provider_CalendarDataUtility$CalendarFieldValueNameGetter_h_