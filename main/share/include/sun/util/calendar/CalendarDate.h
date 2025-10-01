#ifndef _sun_util_calendar_CalendarDate_h_
#define _sun_util_calendar_CalendarDate_h_
//$ class sun.util.calendar.CalendarDate
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>

#pragma push_macro("TIME_UNDEFINED")
#undef TIME_UNDEFINED
#pragma push_macro("FIELD_UNDEFINED")
#undef FIELD_UNDEFINED
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE

namespace java {
	namespace util {
		class Locale;
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

class $import CalendarDate : public ::java::lang::Cloneable {
	$class(CalendarDate, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	CalendarDate();
	void init$();
	void init$(::java::util::TimeZone* zone);
	virtual ::sun::util::calendar::CalendarDate* addDate(int32_t year, int32_t month, int32_t dayOfMonth);
	virtual ::sun::util::calendar::CalendarDate* addDayOfMonth(int32_t n);
	virtual ::sun::util::calendar::CalendarDate* addHours(int32_t n);
	virtual ::sun::util::calendar::CalendarDate* addMillis(int32_t n);
	virtual ::sun::util::calendar::CalendarDate* addMinutes(int32_t n);
	virtual ::sun::util::calendar::CalendarDate* addMonth(int32_t n);
	virtual ::sun::util::calendar::CalendarDate* addSeconds(int32_t n);
	virtual ::sun::util::calendar::CalendarDate* addTimeOfDay(int32_t hours, int32_t minutes, int32_t seconds, int32_t millis);
	virtual ::sun::util::calendar::CalendarDate* addYear(int32_t n);
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int32_t getDayOfMonth();
	virtual int32_t getDayOfWeek();
	virtual int32_t getDaylightSaving();
	virtual ::sun::util::calendar::Era* getEra();
	virtual int32_t getHours();
	virtual int32_t getMillis();
	virtual int32_t getMinutes();
	virtual int32_t getMonth();
	virtual int32_t getSeconds();
	virtual int64_t getTimeOfDay();
	virtual int32_t getYear();
	virtual ::java::util::TimeZone* getZone();
	virtual int32_t getZoneOffset();
	virtual int32_t hashCode() override;
	virtual bool isDaylightTime();
	virtual bool isLeapYear();
	virtual bool isNormalized();
	virtual bool isSameDate(::sun::util::calendar::CalendarDate* date);
	virtual bool isStandardTime();
	virtual ::sun::util::calendar::CalendarDate* setDate(int32_t year, int32_t month, int32_t dayOfMonth);
	virtual ::sun::util::calendar::CalendarDate* setDayOfMonth(int32_t date);
	virtual void setDayOfWeek(int32_t dayOfWeek);
	virtual void setDaylightSaving(int32_t daylightSaving);
	virtual ::sun::util::calendar::CalendarDate* setEra(::sun::util::calendar::Era* era);
	virtual ::sun::util::calendar::CalendarDate* setHours(int32_t hours);
	virtual void setLeapYear(bool leapYear);
	virtual void setLocale(::java::util::Locale* loc);
	virtual ::sun::util::calendar::CalendarDate* setMillis(int32_t millis);
	virtual ::sun::util::calendar::CalendarDate* setMinutes(int32_t minutes);
	virtual ::sun::util::calendar::CalendarDate* setMonth(int32_t month);
	virtual void setNormalized(bool normalized);
	virtual ::sun::util::calendar::CalendarDate* setSeconds(int32_t seconds);
	virtual void setStandardTime(bool standardTime);
	virtual ::sun::util::calendar::CalendarDate* setTimeOfDay(int32_t hours, int32_t minutes, int32_t seconds, int32_t millis);
	virtual void setTimeOfDay(int64_t fraction);
	virtual ::sun::util::calendar::CalendarDate* setYear(int32_t year);
	virtual ::sun::util::calendar::CalendarDate* setZone(::java::util::TimeZone* zoneinfo);
	virtual void setZoneOffset(int32_t offset);
	virtual $String* toString() override;
	static const int32_t FIELD_UNDEFINED = ::java::lang::Integer::MIN_VALUE;
	static const int64_t TIME_UNDEFINED = ::java::lang::Long::MIN_VALUE;
	::sun::util::calendar::Era* era = nullptr;
	int32_t year = 0;
	int32_t month = 0;
	int32_t dayOfMonth = 0;
	int32_t dayOfWeek = 0;
	bool leapYear = false;
	int32_t hours = 0;
	int32_t minutes = 0;
	int32_t seconds = 0;
	int32_t millis = 0;
	int64_t fraction = 0;
	bool normalized = false;
	::java::util::TimeZone* zoneinfo = nullptr;
	int32_t zoneOffset = 0;
	int32_t daylightSaving = 0;
	bool forceStandardTime = false;
	::java::util::Locale* locale = nullptr;
};

		} // calendar
	} // util
} // sun

#pragma pop_macro("TIME_UNDEFINED")
#pragma pop_macro("FIELD_UNDEFINED")
#pragma pop_macro("MIN_VALUE")

#endif // _sun_util_calendar_CalendarDate_h_