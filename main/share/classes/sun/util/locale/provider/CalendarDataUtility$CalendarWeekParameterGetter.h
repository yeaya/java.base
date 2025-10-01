#ifndef _sun_util_locale_provider_CalendarDataUtility$CalendarWeekParameterGetter_h_
#define _sun_util_locale_provider_CalendarDataUtility$CalendarWeekParameterGetter_h_
//$ class sun.util.locale.provider.CalendarDataUtility$CalendarWeekParameterGetter
//$ extends sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter

#include <java/lang/Array.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace java {
	namespace util {
		namespace spi {
			class CalendarDataProvider;
			class LocaleServiceProvider;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class CalendarDataUtility$CalendarWeekParameterGetter : public ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter {
	$class(CalendarDataUtility$CalendarWeekParameterGetter, 0, ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter)
public:
	CalendarDataUtility$CalendarWeekParameterGetter();
	void init$();
	virtual ::java::lang::Integer* getObject(::java::util::spi::CalendarDataProvider* calendarDataProvider, ::java::util::Locale* locale, $String* requestID, $ObjectArray* params);
	virtual $Object* getObject(::java::util::spi::LocaleServiceProvider* calendarDataProvider, ::java::util::Locale* locale, $String* requestID, $ObjectArray* params) override;
	static bool $assertionsDisabled;
	static ::sun::util::locale::provider::CalendarDataUtility$CalendarWeekParameterGetter* INSTANCE;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_util_locale_provider_CalendarDataUtility$CalendarWeekParameterGetter_h_