#ifndef _sun_util_locale_provider_CalendarDataUtility_h_
#define _sun_util_locale_provider_CalendarDataUtility_h_
//$ class sun.util.locale.provider.CalendarDataUtility
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FIRST_DAY_OF_WEEK")
#undef FIRST_DAY_OF_WEEK
#pragma push_macro("MINIMAL_DAYS_IN_FIRST_WEEK")
#undef MINIMAL_DAYS_IN_FIRST_WEEK
#pragma push_macro("OVERRIDE_BUILDER")
#undef OVERRIDE_BUILDER

namespace java {
	namespace util {
		class Locale;
		class Locale$Builder;
		class Map;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $import CalendarDataUtility : public ::java::lang::Object {
	$class(CalendarDataUtility, 0, ::java::lang::Object)
public:
	CalendarDataUtility();
	void init$();
	static ::java::util::Locale* findRegionOverride(::java::util::Locale* l);
	static $String* normalizeCalendarType($String* requestID);
	static $String* retrieveFieldValueName($String* id, int32_t field, int32_t value, int32_t style, ::java::util::Locale* locale);
	static ::java::util::Map* retrieveFieldValueNames($String* id, int32_t field, int32_t style, ::java::util::Locale* locale);
	static int32_t retrieveFirstDayOfWeek(::java::util::Locale* locale);
	static $String* retrieveJavaTimeFieldValueName($String* id, int32_t field, int32_t value, int32_t style, ::java::util::Locale* locale);
	static ::java::util::Map* retrieveJavaTimeFieldValueNames($String* id, int32_t field, int32_t style, ::java::util::Locale* locale);
	static int32_t retrieveMinimalDaysInFirstWeek(::java::util::Locale* locale);
	static $String* FIRST_DAY_OF_WEEK;
	static $String* MINIMAL_DAYS_IN_FIRST_WEEK;
	static ::java::util::Locale$Builder* OVERRIDE_BUILDER;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("FIRST_DAY_OF_WEEK")
#pragma pop_macro("MINIMAL_DAYS_IN_FIRST_WEEK")
#pragma pop_macro("OVERRIDE_BUILDER")

#endif // _sun_util_locale_provider_CalendarDataUtility_h_