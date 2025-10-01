#ifndef _sun_util_calendar_AbstractCalendar_h_
#define _sun_util_calendar_AbstractCalendar_h_
//$ class sun.util.calendar.AbstractCalendar
//$ extends sun.util.calendar.CalendarSystem

#include <java/lang/Array.h>
#include <sun/util/calendar/CalendarSystem.h>

#pragma push_macro("SECOND_IN_MILLIS")
#undef SECOND_IN_MILLIS
#pragma push_macro("EPOCH_OFFSET")
#undef EPOCH_OFFSET
#pragma push_macro("MINUTE_IN_MILLIS")
#undef MINUTE_IN_MILLIS
#pragma push_macro("DAY_IN_MILLIS")
#undef DAY_IN_MILLIS
#pragma push_macro("HOUR_IN_MILLIS")
#undef HOUR_IN_MILLIS

namespace java {
	namespace util {
		class TimeZone;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class CalendarDate;
			class Era;
		}
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $import AbstractCalendar : public ::sun::util::calendar::CalendarSystem {
	$class(AbstractCalendar, $NO_CLASS_INIT, ::sun::util::calendar::CalendarSystem)
public:
	AbstractCalendar();
	void init$();
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate() override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis) override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis, ::java::util::TimeZone* zone) override;
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis, ::sun::util::calendar::CalendarDate* date) override;
	virtual void getCalendarDateFromFixedDate(::sun::util::calendar::CalendarDate* date, int64_t fixedDate) {}
	static int64_t getDayOfWeekDateAfter(int64_t fixedDate, int32_t dayOfWeek);
	static int64_t getDayOfWeekDateBefore(int64_t fixedDate, int32_t dayOfWeek);
	static int64_t getDayOfWeekDateOnOrBefore(int64_t fixedDate, int32_t dayOfWeek);
	virtual ::sun::util::calendar::Era* getEra($String* eraName) override;
	virtual $Array<::sun::util::calendar::Era>* getEras() override;
	virtual int64_t getFixedDate(::sun::util::calendar::CalendarDate* date) {return 0;}
	virtual ::sun::util::calendar::CalendarDate* getNthDayOfWeek(int32_t nth, int32_t dayOfWeek, ::sun::util::calendar::CalendarDate* date) override;
	virtual int64_t getTime(::sun::util::calendar::CalendarDate* date) override;
	virtual int64_t getTimeOfDay(::sun::util::calendar::CalendarDate* date);
	virtual int64_t getTimeOfDayValue(::sun::util::calendar::CalendarDate* date);
	virtual int32_t getWeekLength() override;
	virtual bool isLeapYear(::sun::util::calendar::CalendarDate* date) {return false;}
	virtual int32_t normalizeTime(::sun::util::calendar::CalendarDate* date);
	virtual void setEra(::sun::util::calendar::CalendarDate* date, $String* eraName) override;
	virtual void setEras($Array<::sun::util::calendar::Era>* eras);
	virtual ::sun::util::calendar::CalendarDate* setTimeOfDay(::sun::util::calendar::CalendarDate* cdate, int32_t fraction) override;
	virtual bool validateTime(::sun::util::calendar::CalendarDate* date);
	static const int32_t SECOND_IN_MILLIS = 1000;
	static const int32_t MINUTE_IN_MILLIS = 60000; // SECOND_IN_MILLIS * 60
	static const int32_t HOUR_IN_MILLIS = 3600000; // MINUTE_IN_MILLIS * 60
	static const int32_t DAY_IN_MILLIS = 86400000; // HOUR_IN_MILLIS * 24
	static const int32_t EPOCH_OFFSET = 0x000AF93B;
	$Array<::sun::util::calendar::Era>* eras = nullptr;
};

		} // calendar
	} // util
} // sun

#pragma pop_macro("SECOND_IN_MILLIS")
#pragma pop_macro("EPOCH_OFFSET")
#pragma pop_macro("MINUTE_IN_MILLIS")
#pragma pop_macro("DAY_IN_MILLIS")
#pragma pop_macro("HOUR_IN_MILLIS")

#endif // _sun_util_calendar_AbstractCalendar_h_