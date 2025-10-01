#ifndef _sun_util_calendar_Gregorian_h_
#define _sun_util_calendar_Gregorian_h_
//$ class sun.util.calendar.Gregorian
//$ extends sun.util.calendar.BaseCalendar

#include <sun/util/calendar/BaseCalendar.h>

namespace java {
	namespace util {
		class TimeZone;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class CalendarDate;
		}
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $import Gregorian : public ::sun::util::calendar::BaseCalendar {
	$class(Gregorian, $NO_CLASS_INIT, ::sun::util::calendar::BaseCalendar)
public:
	Gregorian();
	void init$();
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate() override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis) override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis, ::sun::util::calendar::CalendarDate* date) override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis, ::java::util::TimeZone* zone) override;
	virtual $String* getName() override;
	virtual ::sun::util::calendar::CalendarDate* newCalendarDate() override;
	virtual ::sun::util::calendar::CalendarDate* newCalendarDate(::java::util::TimeZone* zone) override;
};

		} // calendar
	} // util
} // sun

#endif // _sun_util_calendar_Gregorian_h_