#ifndef _sun_util_calendar_ImmutableGregorianDate_h_
#define _sun_util_calendar_ImmutableGregorianDate_h_
//$ class sun.util.calendar.ImmutableGregorianDate
//$ extends sun.util.calendar.BaseCalendar$Date

#include <sun/util/calendar/BaseCalendar$Date.h>

namespace java {
	namespace util {
		class Locale;
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

class $export ImmutableGregorianDate : public ::sun::util::calendar::BaseCalendar$Date {
	$class(ImmutableGregorianDate, $NO_CLASS_INIT, ::sun::util::calendar::BaseCalendar$Date)
public:
	ImmutableGregorianDate();
	void init$(::sun::util::calendar::BaseCalendar$Date* date);
	virtual ::sun::util::calendar::CalendarDate* addDate(int32_t year, int32_t month, int32_t dayOfMonth) override;
	virtual ::sun::util::calendar::CalendarDate* addDayOfMonth(int32_t n) override;
	virtual ::sun::util::calendar::CalendarDate* addHours(int32_t n) override;
	virtual ::sun::util::calendar::CalendarDate* addMillis(int32_t n) override;
	virtual ::sun::util::calendar::CalendarDate* addMinutes(int32_t n) override;
	virtual ::sun::util::calendar::CalendarDate* addMonth(int32_t n) override;
	virtual ::sun::util::calendar::CalendarDate* addSeconds(int32_t n) override;
	virtual ::sun::util::calendar::CalendarDate* addTimeOfDay(int32_t hours, int32_t minutes, int32_t seconds, int32_t millis) override;
	virtual ::sun::util::calendar::CalendarDate* addYear(int32_t n) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int32_t getDayOfMonth() override;
	virtual int32_t getDayOfWeek() override;
	virtual int32_t getDaylightSaving() override;
	virtual ::sun::util::calendar::Era* getEra() override;
	virtual int32_t getHours() override;
	virtual int32_t getMillis() override;
	virtual int32_t getMinutes() override;
	virtual int32_t getMonth() override;
	virtual int32_t getNormalizedYear() override;
	virtual int32_t getSeconds() override;
	virtual int64_t getTimeOfDay() override;
	virtual int32_t getYear() override;
	virtual ::java::util::TimeZone* getZone() override;
	virtual int32_t getZoneOffset() override;
	virtual int32_t hashCode() override;
	virtual bool isDaylightTime() override;
	virtual bool isLeapYear() override;
	virtual bool isNormalized() override;
	virtual bool isSameDate(::sun::util::calendar::CalendarDate* date) override;
	virtual bool isStandardTime() override;
	virtual ::sun::util::calendar::CalendarDate* setDate(int32_t year, int32_t month, int32_t dayOfMonth) override;
	virtual ::sun::util::calendar::CalendarDate* setDayOfMonth(int32_t date) override;
	virtual void setDayOfWeek(int32_t dayOfWeek) override;
	virtual void setDaylightSaving(int32_t daylightSaving) override;
	virtual ::sun::util::calendar::CalendarDate* setEra(::sun::util::calendar::Era* era) override;
	virtual ::sun::util::calendar::CalendarDate* setHours(int32_t hours) override;
	virtual void setLeapYear(bool leapYear) override;
	virtual void setLocale(::java::util::Locale* loc) override;
	virtual ::sun::util::calendar::CalendarDate* setMillis(int32_t millis) override;
	virtual ::sun::util::calendar::CalendarDate* setMinutes(int32_t minutes) override;
	virtual ::sun::util::calendar::CalendarDate* setMonth(int32_t month) override;
	virtual void setNormalized(bool normalized) override;
	virtual void setNormalizedYear(int32_t normalizedYear) override;
	virtual ::sun::util::calendar::CalendarDate* setSeconds(int32_t seconds) override;
	virtual void setStandardTime(bool standardTime) override;
	virtual ::sun::util::calendar::CalendarDate* setTimeOfDay(int32_t hours, int32_t minutes, int32_t seconds, int32_t millis) override;
	virtual void setTimeOfDay(int64_t fraction) override;
	virtual ::sun::util::calendar::CalendarDate* setYear(int32_t year) override;
	virtual ::sun::util::calendar::CalendarDate* setZone(::java::util::TimeZone* zoneinfo) override;
	virtual void setZoneOffset(int32_t offset) override;
	virtual $String* toString() override;
	void unsupported();
	::sun::util::calendar::BaseCalendar$Date* date = nullptr;
};

		} // calendar
	} // util
} // sun

#endif // _sun_util_calendar_ImmutableGregorianDate_h_