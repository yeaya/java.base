#ifndef _sun_util_calendar_BaseCalendar$Date_h_
#define _sun_util_calendar_BaseCalendar$Date_h_
//$ class sun.util.calendar.BaseCalendar$Date
//$ extends sun.util.calendar.CalendarDate

#include <sun/util/calendar/CalendarDate.h>

namespace java {
	namespace util {
		class TimeZone;
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $import BaseCalendar$Date : public ::sun::util::calendar::CalendarDate {
	$class(BaseCalendar$Date, $NO_CLASS_INIT, ::sun::util::calendar::CalendarDate)
public:
	BaseCalendar$Date();
	void init$();
	void init$(::java::util::TimeZone* zone);
	virtual int64_t getCachedJan1();
	virtual int32_t getCachedYear();
	virtual int32_t getNormalizedYear() {return 0;}
	bool hit(int32_t year);
	bool hit(int64_t fixedDate);
	virtual void setCache(int32_t year, int64_t jan1, int32_t len);
	virtual ::sun::util::calendar::BaseCalendar$Date* setNormalizedDate(int32_t normalizedYear, int32_t month, int32_t dayOfMonth);
	virtual void setNormalizedYear(int32_t normalizedYear) {}
	int32_t cachedYear = 0;
	int64_t cachedFixedDateJan1 = 0;
	int64_t cachedFixedDateNextJan1 = 0;
};

		} // calendar
	} // util
} // sun

#endif // _sun_util_calendar_BaseCalendar$Date_h_