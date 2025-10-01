#ifndef _sun_util_cldr_CLDRCalendarDataProviderImpl_h_
#define _sun_util_cldr_CLDRCalendarDataProviderImpl_h_
//$ class sun.util.cldr.CLDRCalendarDataProviderImpl
//$ extends sun.util.locale.provider.CalendarDataProviderImpl

#include <sun/util/locale/provider/CalendarDataProviderImpl.h>

namespace java {
	namespace util {
		class Locale;
		class Map;
		class Optional;
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
		namespace cldr {

class $import CLDRCalendarDataProviderImpl : public ::sun::util::locale::provider::CalendarDataProviderImpl {
	$class(CLDRCalendarDataProviderImpl, 0, ::sun::util::locale::provider::CalendarDataProviderImpl)
public:
	CLDRCalendarDataProviderImpl();
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	static int32_t findValue($String* key, ::java::util::Locale* locale);
	virtual int32_t getFirstDayOfWeek(::java::util::Locale* locale) override;
	virtual int32_t getMinimalDaysInFirstWeek(::java::util::Locale* locale) override;
	static ::java::util::Optional* retrieveInteger($String* src, $String* region);
	static ::java::util::Map* firstDay;
	static ::java::util::Map* minDays;
};

		} // cldr
	} // util
} // sun

#endif // _sun_util_cldr_CLDRCalendarDataProviderImpl_h_