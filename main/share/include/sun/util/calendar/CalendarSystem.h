#ifndef _sun_util_calendar_CalendarSystem_h_
#define _sun_util_calendar_CalendarSystem_h_
//$ class sun.util.calendar.CalendarSystem
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GREGORIAN_INSTANCE")
#undef GREGORIAN_INSTANCE
#pragma push_macro("PACKAGE_NAME")
#undef PACKAGE_NAME

namespace java {
	namespace util {
		class TimeZone;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class CalendarDate;
			class Era;
			class Gregorian;
		}
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $import CalendarSystem : public ::java::lang::Object {
	$class(CalendarSystem, 0, ::java::lang::Object)
public:
	CalendarSystem();
	void init$();
	static ::sun::util::calendar::CalendarSystem* forName($String* calendarName);
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate() {return nullptr;}
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis) {return nullptr;}
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis, ::sun::util::calendar::CalendarDate* date) {return nullptr;}
	virtual ::sun::util::calendar::CalendarDate* getCalendarDate(int64_t millis, ::java::util::TimeZone* zone) {return nullptr;}
	virtual ::sun::util::calendar::Era* getEra($String* eraName) {return nullptr;}
	virtual $Array<::sun::util::calendar::Era>* getEras() {return nullptr;}
	static ::sun::util::calendar::Gregorian* getGregorianCalendar();
	virtual int32_t getMonthLength(::sun::util::calendar::CalendarDate* date) {return 0;}
	virtual $String* getName() {return nullptr;}
	virtual ::sun::util::calendar::CalendarDate* getNthDayOfWeek(int32_t nth, int32_t dayOfWeek, ::sun::util::calendar::CalendarDate* date) {return nullptr;}
	virtual int64_t getTime(::sun::util::calendar::CalendarDate* date) {return 0;}
	virtual int32_t getWeekLength() {return 0;}
	virtual int32_t getYearLength(::sun::util::calendar::CalendarDate* date) {return 0;}
	virtual int32_t getYearLengthInMonths(::sun::util::calendar::CalendarDate* date) {return 0;}
	static void initNames();
	virtual ::sun::util::calendar::CalendarDate* newCalendarDate() {return nullptr;}
	virtual ::sun::util::calendar::CalendarDate* newCalendarDate(::java::util::TimeZone* zone) {return nullptr;}
	virtual bool normalize(::sun::util::calendar::CalendarDate* date) {return false;}
	virtual void setEra(::sun::util::calendar::CalendarDate* date, $String* eraName) {}
	virtual ::sun::util::calendar::CalendarDate* setTimeOfDay(::sun::util::calendar::CalendarDate* date, int32_t timeOfDay) {return nullptr;}
	virtual bool validate(::sun::util::calendar::CalendarDate* date) {return false;}
	static $volatile(bool) initialized;
	static ::java::util::concurrent::ConcurrentMap* names;
	static ::java::util::concurrent::ConcurrentMap* calendars;
	static $String* PACKAGE_NAME;
	static $StringArray* namePairs;
	static ::sun::util::calendar::Gregorian* GREGORIAN_INSTANCE;
};

		} // calendar
	} // util
} // sun

#pragma pop_macro("GREGORIAN_INSTANCE")
#pragma pop_macro("PACKAGE_NAME")

#endif // _sun_util_calendar_CalendarSystem_h_