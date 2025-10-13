#ifndef _sun_util_calendar_JulianCalendar_h_
#define _sun_util_calendar_JulianCalendar_h_
//$ class sun.util.calendar.JulianCalendar
//$ extends sun.util.calendar.BaseCalendar

#include <java/lang/Array.h>
#include <sun/util/calendar/BaseCalendar.h>

#pragma push_macro("BCE")
#undef BCE
#pragma push_macro("CE")
#undef CE
#pragma push_macro("JULIAN_EPOCH")
#undef JULIAN_EPOCH

namespace java {
	namespace util {
		class TimeZone;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class BaseCalendar$Date;
			class CalendarDate;
			class Era;
		}
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $export JulianCalendar : public ::sun::util::calendar::BaseCalendar {
	$class(JulianCalendar, 0, ::sun::util::calendar::BaseCalendar)
public:
	JulianCalendar();
	using ::sun::util::calendar::BaseCalendar::getFixedDate;
	using ::sun::util::calendar::BaseCalendar::isLeapYear;
	void init$();
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate() override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis) override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis, ::sun::util::calendar::CalendarDate* date) override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis, ::java::util::TimeZone* zone) override;
	virtual void getCalendarDateFromFixedDate(::sun::util::calendar::CalendarDate* date, int64_t fixedDate) override;
	virtual int32_t getDayOfWeek(::sun::util::calendar::CalendarDate* date) override;
	virtual int64_t getFixedDate(int32_t jyear, int32_t month, int32_t dayOfMonth, ::sun::util::calendar::BaseCalendar$Date* cache) override;
	virtual $String* getName() override;
	virtual int32_t getYearFromFixedDate(int64_t fixedDate) override;
	virtual bool isLeapYear(int32_t jyear) override;
	virtual ::sun::util::calendar::CalendarDate* newCalendarDate() override;
	virtual ::sun::util::calendar::CalendarDate* newCalendarDate(::java::util::TimeZone* zone) override;
	static bool $assertionsDisabled;
	static const int32_t BCE = 0;
	static const int32_t CE = 1;
	static $Array<::sun::util::calendar::Era>* eras;
	static const int32_t JULIAN_EPOCH = (-1);
};

		} // calendar
	} // util
} // sun

#pragma pop_macro("BCE")
#pragma pop_macro("CE")
#pragma pop_macro("JULIAN_EPOCH")

#endif // _sun_util_calendar_JulianCalendar_h_