#ifndef _java_util_Formatter$DateTime_h_
#define _java_util_Formatter$DateTime_h_
//$ class java.util.Formatter$DateTime
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("AM_PM")
#undef AM_PM
#pragma push_macro("CENTURY")
#undef CENTURY
#pragma push_macro("DATE")
#undef DATE
#pragma push_macro("DATE_TIME")
#undef DATE_TIME
#pragma push_macro("DAY_OF_MONTH")
#undef DAY_OF_MONTH
#pragma push_macro("DAY_OF_MONTH_0")
#undef DAY_OF_MONTH_0
#pragma push_macro("DAY_OF_YEAR")
#undef DAY_OF_YEAR
#pragma push_macro("HOUR")
#undef HOUR
#pragma push_macro("HOUR_0")
#undef HOUR_0
#pragma push_macro("HOUR_OF_DAY")
#undef HOUR_OF_DAY
#pragma push_macro("HOUR_OF_DAY_0")
#undef HOUR_OF_DAY_0
#pragma push_macro("ISO_STANDARD_DATE")
#undef ISO_STANDARD_DATE
#pragma push_macro("MILLISECOND")
#undef MILLISECOND
#pragma push_macro("MILLISECOND_SINCE_EPOCH")
#undef MILLISECOND_SINCE_EPOCH
#pragma push_macro("MINUTE")
#undef MINUTE
#pragma push_macro("MONTH")
#undef MONTH
#pragma push_macro("NAME_OF_DAY")
#undef NAME_OF_DAY
#pragma push_macro("NAME_OF_DAY_ABBREV")
#undef NAME_OF_DAY_ABBREV
#pragma push_macro("NAME_OF_MONTH")
#undef NAME_OF_MONTH
#pragma push_macro("NAME_OF_MONTH_ABBREV")
#undef NAME_OF_MONTH_ABBREV
#pragma push_macro("NAME_OF_MONTH_ABBREV_X")
#undef NAME_OF_MONTH_ABBREV_X
#pragma push_macro("NANOSECOND")
#undef NANOSECOND
#pragma push_macro("SECOND")
#undef SECOND
#pragma push_macro("SECONDS_SINCE_EPOCH")
#undef SECONDS_SINCE_EPOCH
#pragma push_macro("TIME")
#undef TIME
#pragma push_macro("TIME_12_HOUR")
#undef TIME_12_HOUR
#pragma push_macro("TIME_24_HOUR")
#undef TIME_24_HOUR
#pragma push_macro("YEAR_2")
#undef YEAR_2
#pragma push_macro("YEAR_4")
#undef YEAR_4
#pragma push_macro("ZONE")
#undef ZONE
#pragma push_macro("ZONE_NUMERIC")
#undef ZONE_NUMERIC

namespace java {
	namespace util {

class Formatter$DateTime : public ::java::lang::Object {
	$class(Formatter$DateTime, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Formatter$DateTime();
	void init$();
	static bool isValid(char16_t c);
	static const char16_t HOUR_OF_DAY_0 = ((char16_t)72);
	static const char16_t HOUR_0 = ((char16_t)73);
	static const char16_t HOUR_OF_DAY = ((char16_t)107);
	static const char16_t HOUR = ((char16_t)108);
	static const char16_t MINUTE = ((char16_t)77);
	static const char16_t NANOSECOND = ((char16_t)78);
	static const char16_t MILLISECOND = ((char16_t)76);
	static const char16_t MILLISECOND_SINCE_EPOCH = ((char16_t)81);
	static const char16_t AM_PM = ((char16_t)112);
	static const char16_t SECONDS_SINCE_EPOCH = ((char16_t)115);
	static const char16_t SECOND = ((char16_t)83);
	static const char16_t TIME = ((char16_t)84);
	static const char16_t ZONE_NUMERIC = ((char16_t)122);
	static const char16_t ZONE = ((char16_t)90);
	static const char16_t NAME_OF_DAY_ABBREV = ((char16_t)97);
	static const char16_t NAME_OF_DAY = ((char16_t)65);
	static const char16_t NAME_OF_MONTH_ABBREV = ((char16_t)98);
	static const char16_t NAME_OF_MONTH = ((char16_t)66);
	static const char16_t CENTURY = ((char16_t)67);
	static const char16_t DAY_OF_MONTH_0 = ((char16_t)100);
	static const char16_t DAY_OF_MONTH = ((char16_t)101);
	static const char16_t NAME_OF_MONTH_ABBREV_X = ((char16_t)104);
	static const char16_t DAY_OF_YEAR = ((char16_t)106);
	static const char16_t MONTH = ((char16_t)109);
	static const char16_t YEAR_2 = ((char16_t)121);
	static const char16_t YEAR_4 = ((char16_t)89);
	static const char16_t TIME_12_HOUR = ((char16_t)114);
	static const char16_t TIME_24_HOUR = ((char16_t)82);
	static const char16_t DATE_TIME = ((char16_t)99);
	static const char16_t DATE = ((char16_t)68);
	static const char16_t ISO_STANDARD_DATE = ((char16_t)70);
};

	} // util
} // java

#pragma pop_macro("AM_PM")
#pragma pop_macro("CENTURY")
#pragma pop_macro("DATE")
#pragma pop_macro("DATE_TIME")
#pragma pop_macro("DAY_OF_MONTH")
#pragma pop_macro("DAY_OF_MONTH_0")
#pragma pop_macro("DAY_OF_YEAR")
#pragma pop_macro("HOUR")
#pragma pop_macro("HOUR_0")
#pragma pop_macro("HOUR_OF_DAY")
#pragma pop_macro("HOUR_OF_DAY_0")
#pragma pop_macro("ISO_STANDARD_DATE")
#pragma pop_macro("MILLISECOND")
#pragma pop_macro("MILLISECOND_SINCE_EPOCH")
#pragma pop_macro("MINUTE")
#pragma pop_macro("MONTH")
#pragma pop_macro("NAME_OF_DAY")
#pragma pop_macro("NAME_OF_DAY_ABBREV")
#pragma pop_macro("NAME_OF_MONTH")
#pragma pop_macro("NAME_OF_MONTH_ABBREV")
#pragma pop_macro("NAME_OF_MONTH_ABBREV_X")
#pragma pop_macro("NANOSECOND")
#pragma pop_macro("SECOND")
#pragma pop_macro("SECONDS_SINCE_EPOCH")
#pragma pop_macro("TIME")
#pragma pop_macro("TIME_12_HOUR")
#pragma pop_macro("TIME_24_HOUR")
#pragma pop_macro("YEAR_2")
#pragma pop_macro("YEAR_4")
#pragma pop_macro("ZONE")
#pragma pop_macro("ZONE_NUMERIC")

#endif // _java_util_Formatter$DateTime_h_