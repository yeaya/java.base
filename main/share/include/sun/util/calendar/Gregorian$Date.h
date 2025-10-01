#ifndef _sun_util_calendar_Gregorian$Date_h_
#define _sun_util_calendar_Gregorian$Date_h_
//$ class sun.util.calendar.Gregorian$Date
//$ extends sun.util.calendar.BaseCalendar$Date

#include <sun/util/calendar/BaseCalendar$Date.h>

namespace java {
	namespace util {
		class TimeZone;
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $import Gregorian$Date : public ::sun::util::calendar::BaseCalendar$Date {
	$class(Gregorian$Date, $NO_CLASS_INIT, ::sun::util::calendar::BaseCalendar$Date)
public:
	Gregorian$Date();
	void init$();
	void init$(::java::util::TimeZone* zone);
	virtual int32_t getNormalizedYear() override;
	virtual void setNormalizedYear(int32_t normalizedYear) override;
};

		} // calendar
	} // util
} // sun

#endif // _sun_util_calendar_Gregorian$Date_h_