#ifndef _sun_util_calendar_JulianCalendar$Date_h_
#define _sun_util_calendar_JulianCalendar$Date_h_
//$ class sun.util.calendar.JulianCalendar$Date
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
			class Era;
		}
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $export JulianCalendar$Date : public ::sun::util::calendar::BaseCalendar$Date {
	$class(JulianCalendar$Date, $NO_CLASS_INIT, ::sun::util::calendar::BaseCalendar$Date)
public:
	JulianCalendar$Date();
	void init$();
	void init$(::java::util::TimeZone* zone);
	virtual int32_t getNormalizedYear() override;
	virtual ::sun::util::calendar::JulianCalendar$Date* setEra(::sun::util::calendar::Era* era) override;
	virtual void setKnownEra(::sun::util::calendar::Era* era);
	virtual void setNormalizedYear(int32_t year) override;
	virtual $String* toString() override;
};

		} // calendar
	} // util
} // sun

#endif // _sun_util_calendar_JulianCalendar$Date_h_