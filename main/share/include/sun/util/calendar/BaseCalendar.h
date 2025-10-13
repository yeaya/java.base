#ifndef _sun_util_calendar_BaseCalendar_h_
#define _sun_util_calendar_BaseCalendar_h_
//$ class sun.util.calendar.BaseCalendar
//$ extends sun.util.calendar.AbstractCalendar

#include <java/lang/Array.h>
#include <sun/util/calendar/AbstractCalendar.h>

#pragma push_macro("ACCUMULATED_DAYS_IN_MONTH")
#undef ACCUMULATED_DAYS_IN_MONTH
#pragma push_macro("ACCUMULATED_DAYS_IN_MONTH_LEAP")
#undef ACCUMULATED_DAYS_IN_MONTH_LEAP
#pragma push_macro("APRIL")
#undef APRIL
#pragma push_macro("AUGUST")
#undef AUGUST
#pragma push_macro("BASE_YEAR")
#undef BASE_YEAR
#pragma push_macro("DAYS_IN_MONTH")
#undef DAYS_IN_MONTH
#pragma push_macro("DECEMBER")
#undef DECEMBER
#pragma push_macro("FEBRUARY")
#undef FEBRUARY
#pragma push_macro("FIXED_DATES")
#undef FIXED_DATES
#pragma push_macro("FRIDAY")
#undef FRIDAY
#pragma push_macro("JANUARY")
#undef JANUARY
#pragma push_macro("JULY")
#undef JULY
#pragma push_macro("JUNE")
#undef JUNE
#pragma push_macro("MARCH")
#undef MARCH
#pragma push_macro("MAY")
#undef MAY
#pragma push_macro("MONDAY")
#undef MONDAY
#pragma push_macro("NOVEMBER")
#undef NOVEMBER
#pragma push_macro("OCTOBER")
#undef OCTOBER
#pragma push_macro("SATURDAY")
#undef SATURDAY
#pragma push_macro("SEPTEMBER")
#undef SEPTEMBER
#pragma push_macro("SUNDAY")
#undef SUNDAY
#pragma push_macro("THURSDAY")
#undef THURSDAY
#pragma push_macro("TUESDAY")
#undef TUESDAY
#pragma push_macro("WEDNESDAY")
#undef WEDNESDAY

namespace sun {
	namespace util {
		namespace calendar {
			class BaseCalendar$Date;
			class CalendarDate;
		}
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $import BaseCalendar : public ::sun::util::calendar::AbstractCalendar {
	$class(BaseCalendar, 0, ::sun::util::calendar::AbstractCalendar)
public:
	BaseCalendar();
	void init$();
	virtual void getCalendarDateFromFixedDate(::sun::util::calendar::CalendarDate* date, int64_t fixedDate) override;
	virtual int32_t getDayOfWeek(::sun::util::calendar::CalendarDate* date);
	static int32_t getDayOfWeekFromFixedDate(int64_t fixedDate);
	virtual int64_t getDayOfYear(::sun::util::calendar::CalendarDate* date);
	int64_t getDayOfYear(int32_t year, int32_t month, int32_t dayOfMonth);
	virtual int64_t getFixedDate(::sun::util::calendar::CalendarDate* date) override;
	virtual int64_t getFixedDate(int32_t year, int32_t month, int32_t dayOfMonth, ::sun::util::calendar::BaseCalendar$Date* cache);
	int32_t getGregorianYearFromFixedDate(int64_t fixedDate);
	virtual int32_t getMonthLength(::sun::util::calendar::CalendarDate* date) override;
	int32_t getMonthLength(int32_t year, int32_t month);
	virtual int32_t getYearFromFixedDate(int64_t fixedDate);
	virtual int32_t getYearLength(::sun::util::calendar::CalendarDate* date) override;
	virtual int32_t getYearLengthInMonths(::sun::util::calendar::CalendarDate* date) override;
	virtual bool isLeapYear(::sun::util::calendar::CalendarDate* date) override;
	virtual bool isLeapYear(int32_t normalizedYear);
	virtual bool normalize(::sun::util::calendar::CalendarDate* date) override;
	virtual void normalizeMonth(::sun::util::calendar::CalendarDate* date);
	virtual bool validate(::sun::util::calendar::CalendarDate* date) override;
	static bool $assertionsDisabled;
	static const int32_t JANUARY = 1;
	static const int32_t FEBRUARY = 2;
	static const int32_t MARCH = 3;
	static const int32_t APRIL = 4;
	static const int32_t MAY = 5;
	static const int32_t JUNE = 6;
	static const int32_t JULY = 7;
	static const int32_t AUGUST = 8;
	static const int32_t SEPTEMBER = 9;
	static const int32_t OCTOBER = 10;
	static const int32_t NOVEMBER = 11;
	static const int32_t DECEMBER = 12;
	static const int32_t SUNDAY = 1;
	static const int32_t MONDAY = 2;
	static const int32_t TUESDAY = 3;
	static const int32_t WEDNESDAY = 4;
	static const int32_t THURSDAY = 5;
	static const int32_t FRIDAY = 6;
	static const int32_t SATURDAY = 7;
	static const int32_t BASE_YEAR = 1970;
	static $ints* FIXED_DATES;
	static $ints* DAYS_IN_MONTH;
	static $ints* ACCUMULATED_DAYS_IN_MONTH;
	static $ints* ACCUMULATED_DAYS_IN_MONTH_LEAP;
};

		} // calendar
	} // util
} // sun

#pragma pop_macro("ACCUMULATED_DAYS_IN_MONTH")
#pragma pop_macro("ACCUMULATED_DAYS_IN_MONTH_LEAP")
#pragma pop_macro("APRIL")
#pragma pop_macro("AUGUST")
#pragma pop_macro("BASE_YEAR")
#pragma pop_macro("DAYS_IN_MONTH")
#pragma pop_macro("DECEMBER")
#pragma pop_macro("FEBRUARY")
#pragma pop_macro("FIXED_DATES")
#pragma pop_macro("FRIDAY")
#pragma pop_macro("JANUARY")
#pragma pop_macro("JULY")
#pragma pop_macro("JUNE")
#pragma pop_macro("MARCH")
#pragma pop_macro("MAY")
#pragma pop_macro("MONDAY")
#pragma pop_macro("NOVEMBER")
#pragma pop_macro("OCTOBER")
#pragma pop_macro("SATURDAY")
#pragma pop_macro("SEPTEMBER")
#pragma pop_macro("SUNDAY")
#pragma pop_macro("THURSDAY")
#pragma pop_macro("TUESDAY")
#pragma pop_macro("WEDNESDAY")

#endif // _sun_util_calendar_BaseCalendar_h_