#ifndef _java_util_GregorianCalendar_h_
#define _java_util_GregorianCalendar_h_
//$ class java.util.GregorianCalendar
//$ extends java.util.Calendar

#include <java/lang/Array.h>
#include <java/util/Calendar.h>

#pragma push_macro("AD")
#undef AD
#pragma push_macro("BC")
#undef BC
#pragma push_macro("BCE")
#undef BCE
#pragma push_macro("CE")
#undef CE
#pragma push_macro("DEFAULT_GREGORIAN_CUTOVER")
#undef DEFAULT_GREGORIAN_CUTOVER
#pragma push_macro("EPOCH_OFFSET")
#undef EPOCH_OFFSET
#pragma push_macro("EPOCH_YEAR")
#undef EPOCH_YEAR
#pragma push_macro("LEAP_MONTH_LENGTH")
#undef LEAP_MONTH_LENGTH
#pragma push_macro("LEAST_MAX_VALUES")
#undef LEAST_MAX_VALUES
#pragma push_macro("MAX_VALUES")
#undef MAX_VALUES
#pragma push_macro("MIN_VALUES")
#undef MIN_VALUES
#pragma push_macro("MONTH_LENGTH")
#undef MONTH_LENGTH
#pragma push_macro("ONE_DAY")
#undef ONE_DAY
#pragma push_macro("ONE_HOUR")
#undef ONE_HOUR
#pragma push_macro("ONE_MINUTE")
#undef ONE_MINUTE
#pragma push_macro("ONE_SECOND")
#undef ONE_SECOND
#pragma push_macro("ONE_WEEK")
#undef ONE_WEEK

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		class ZonedDateTime;
	}
}
namespace java {
	namespace util {
		class Date;
		class Locale;
		class TimeZone;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class BaseCalendar;
			class BaseCalendar$Date;
			class Era;
			class Gregorian;
			class JulianCalendar;
		}
	}
}

namespace java {
	namespace util {

class $export GregorianCalendar : public ::java::util::Calendar {
	$class(GregorianCalendar, 0, ::java::util::Calendar)
public:
	GregorianCalendar();
	void init$();
	void init$(::java::util::TimeZone* zone);
	void init$(::java::util::Locale* aLocale);
	void init$(::java::util::TimeZone* zone, ::java::util::Locale* aLocale);
	void init$(int32_t year, int32_t month, int32_t dayOfMonth);
	void init$(int32_t year, int32_t month, int32_t dayOfMonth, int32_t hourOfDay, int32_t minute);
	void init$(int32_t year, int32_t month, int32_t dayOfMonth, int32_t hourOfDay, int32_t minute, int32_t second);
	void init$(int32_t year, int32_t month, int32_t dayOfMonth, int32_t hourOfDay, int32_t minute, int32_t second, int32_t millis);
	void init$(::java::util::TimeZone* zone, ::java::util::Locale* locale, bool flag);
	int32_t actualMonthLength();
	virtual void add(int32_t field, int32_t amount) override;
	virtual $Object* clone() override;
	virtual void computeFields() override;
	int32_t computeFields(int32_t fieldMask, int32_t tzMask);
	virtual void computeTime() override;
	virtual bool equals(Object$* obj) override;
	static ::java::util::GregorianCalendar* from(::java::time::ZonedDateTime* zdt);
	virtual int32_t getActualMaximum(int32_t field) override;
	virtual int32_t getActualMinimum(int32_t field) override;
	::sun::util::calendar::BaseCalendar$Date* getCalendarDate(int64_t fd);
	virtual $String* getCalendarType() override;
	int64_t getCurrentFixedDate();
	::sun::util::calendar::BaseCalendar* getCutoverCalendarSystem();
	int64_t getFixedDate(::sun::util::calendar::BaseCalendar* cal, int32_t year, int32_t fieldMask);
	int64_t getFixedDateJan1(::sun::util::calendar::BaseCalendar$Date* date, int64_t fixedDate);
	int64_t getFixedDateMonth1(::sun::util::calendar::BaseCalendar$Date* date, int64_t fixedDate);
	virtual int32_t getGreatestMinimum(int32_t field) override;
	::java::util::Date* getGregorianChange();
	::sun::util::calendar::BaseCalendar$Date* getGregorianCutoverDate();
	static ::sun::util::calendar::BaseCalendar* getJulianCalendarSystem();
	::sun::util::calendar::BaseCalendar$Date* getLastJulianDate();
	virtual int32_t getLeastMaximum(int32_t field) override;
	virtual int32_t getMaximum(int32_t field) override;
	virtual int32_t getMinimum(int32_t field) override;
	::java::util::GregorianCalendar* getNormalizedCalendar();
	static int32_t getRolledValue(int32_t value, int32_t amount, int32_t min, int32_t max);
	virtual ::java::util::TimeZone* getTimeZone() override;
	int32_t getWeekNumber(int64_t fixedDay1, int64_t fixedDate);
	virtual int32_t getWeekYear() override;
	virtual int32_t getWeeksInWeekYear() override;
	int64_t getYearOffsetInMillis();
	virtual int32_t hashCode() override;
	int32_t internalGetEra();
	bool isCutoverYear(int32_t normalizedYear);
	virtual bool isLeapYear(int32_t year);
	virtual bool isWeekDateSupported() override;
	int32_t monthLength(int32_t month, int32_t year);
	int32_t monthLength(int32_t month);
	void pinDayOfMonth();
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void roll(int32_t field, bool up) override;
	virtual void roll(int32_t field, int32_t amount) override;
	virtual void setGregorianChange(::java::util::Date* date);
	void setGregorianChange(int64_t cutoverTime);
	virtual void setTimeZone(::java::util::TimeZone* zone) override;
	virtual void setWeekDate(int32_t weekYear, int32_t weekOfYear, int32_t dayOfWeek) override;
	virtual ::java::time::ZonedDateTime* toZonedDateTime();
	int32_t yearLength(int32_t year);
	int32_t yearLength();
	static bool $assertionsDisabled;
	static const int32_t BC = 0;
	static const int32_t BCE = 0;
	static const int32_t AD = 1;
	static const int32_t CE = 1;
	static const int32_t EPOCH_OFFSET = 0x000AF93B;
	static const int32_t EPOCH_YEAR = 1970;
	static $ints* MONTH_LENGTH;
	static $ints* LEAP_MONTH_LENGTH;
	static const int32_t ONE_SECOND = 1000;
	static const int32_t ONE_MINUTE = 60000; // 60 * ONE_SECOND
	static const int32_t ONE_HOUR = 3600000; // 60 * ONE_MINUTE
	static const int64_t ONE_DAY = 86400000; // 24 * ONE_HOUR
	static const int64_t ONE_WEEK = 604800000; // 7 * ONE_DAY
	static $ints* MIN_VALUES;
	static $ints* LEAST_MAX_VALUES;
	static $ints* MAX_VALUES;
	static const int64_t serialVersionUID = (int64_t)0x8F3DD7D6E5B0D0C1;
	static ::sun::util::calendar::Gregorian* gcal;
	static ::sun::util::calendar::JulianCalendar* jcal;
	static $Array<::sun::util::calendar::Era>* jeras;
	static const int64_t DEFAULT_GREGORIAN_CUTOVER = (int64_t)0xFFFFF4E2F964AC00;
	int64_t gregorianCutover = 0;
	int64_t gregorianCutoverDate = 0;
	int32_t gregorianCutoverYear = 0;
	int32_t gregorianCutoverYearJulian = 0;
	::sun::util::calendar::BaseCalendar$Date* gdate = nullptr;
	::sun::util::calendar::BaseCalendar$Date* cdate = nullptr;
	::sun::util::calendar::BaseCalendar* calsys = nullptr;
	$ints* zoneOffsets = nullptr;
	$ints* originalFields = nullptr;
	int64_t cachedFixedDate = 0;
};

	} // util
} // java

#pragma pop_macro("AD")
#pragma pop_macro("BC")
#pragma pop_macro("BCE")
#pragma pop_macro("CE")
#pragma pop_macro("DEFAULT_GREGORIAN_CUTOVER")
#pragma pop_macro("EPOCH_OFFSET")
#pragma pop_macro("EPOCH_YEAR")
#pragma pop_macro("LEAP_MONTH_LENGTH")
#pragma pop_macro("LEAST_MAX_VALUES")
#pragma pop_macro("MAX_VALUES")
#pragma pop_macro("MIN_VALUES")
#pragma pop_macro("MONTH_LENGTH")
#pragma pop_macro("ONE_DAY")
#pragma pop_macro("ONE_HOUR")
#pragma pop_macro("ONE_MINUTE")
#pragma pop_macro("ONE_SECOND")
#pragma pop_macro("ONE_WEEK")

#endif // _java_util_GregorianCalendar_h_