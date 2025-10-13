#ifndef _java_util_Calendar_h_
#define _java_util_Calendar_h_
//$ class java.util.Calendar
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable,java.lang.Comparable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Comparable.h>

#pragma push_macro("ALL_FIELDS")
#undef ALL_FIELDS
#pragma push_macro("ALL_STYLES")
#undef ALL_STYLES
#pragma push_macro("AM")
#undef AM
#pragma push_macro("AM_PM")
#undef AM_PM
#pragma push_macro("AM_PM_MASK")
#undef AM_PM_MASK
#pragma push_macro("APRIL")
#undef APRIL
#pragma push_macro("AUGUST")
#undef AUGUST
#pragma push_macro("COMPUTED")
#undef COMPUTED
#pragma push_macro("DATE")
#undef DATE
#pragma push_macro("DATE_MASK")
#undef DATE_MASK
#pragma push_macro("DAY_OF_MONTH")
#undef DAY_OF_MONTH
#pragma push_macro("DAY_OF_MONTH_MASK")
#undef DAY_OF_MONTH_MASK
#pragma push_macro("DAY_OF_WEEK")
#undef DAY_OF_WEEK
#pragma push_macro("DAY_OF_WEEK_IN_MONTH")
#undef DAY_OF_WEEK_IN_MONTH
#pragma push_macro("DAY_OF_WEEK_IN_MONTH_MASK")
#undef DAY_OF_WEEK_IN_MONTH_MASK
#pragma push_macro("DAY_OF_WEEK_MASK")
#undef DAY_OF_WEEK_MASK
#pragma push_macro("DAY_OF_YEAR")
#undef DAY_OF_YEAR
#pragma push_macro("DAY_OF_YEAR_MASK")
#undef DAY_OF_YEAR_MASK
#pragma push_macro("DECEMBER")
#undef DECEMBER
#pragma push_macro("DST_OFFSET")
#undef DST_OFFSET
#pragma push_macro("DST_OFFSET_MASK")
#undef DST_OFFSET_MASK
#pragma push_macro("ERA")
#undef ERA
#pragma push_macro("ERA_MASK")
#undef ERA_MASK
#pragma push_macro("FEBRUARY")
#undef FEBRUARY
#pragma push_macro("FIELD_COUNT")
#undef FIELD_COUNT
#pragma push_macro("FIELD_NAME")
#undef FIELD_NAME
#pragma push_macro("FRIDAY")
#undef FRIDAY
#pragma push_macro("HOUR")
#undef HOUR
#pragma push_macro("HOUR_MASK")
#undef HOUR_MASK
#pragma push_macro("HOUR_OF_DAY")
#undef HOUR_OF_DAY
#pragma push_macro("HOUR_OF_DAY_MASK")
#undef HOUR_OF_DAY_MASK
#pragma push_macro("JANUARY")
#undef JANUARY
#pragma push_macro("JULY")
#undef JULY
#pragma push_macro("JUNE")
#undef JUNE
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("LONG_FORMAT")
#undef LONG_FORMAT
#pragma push_macro("LONG_STANDALONE")
#undef LONG_STANDALONE
#pragma push_macro("MARCH")
#undef MARCH
#pragma push_macro("MAY")
#undef MAY
#pragma push_macro("MILLISECOND")
#undef MILLISECOND
#pragma push_macro("MILLISECOND_MASK")
#undef MILLISECOND_MASK
#pragma push_macro("MINIMUM_USER_STAMP")
#undef MINIMUM_USER_STAMP
#pragma push_macro("MINUTE")
#undef MINUTE
#pragma push_macro("MINUTE_MASK")
#undef MINUTE_MASK
#pragma push_macro("MONDAY")
#undef MONDAY
#pragma push_macro("MONTH")
#undef MONTH
#pragma push_macro("MONTH_MASK")
#undef MONTH_MASK
#pragma push_macro("NARROW_FORMAT")
#undef NARROW_FORMAT
#pragma push_macro("NARROW_STANDALONE")
#undef NARROW_STANDALONE
#pragma push_macro("NOVEMBER")
#undef NOVEMBER
#pragma push_macro("OCTOBER")
#undef OCTOBER
#pragma push_macro("PM")
#undef PM
#pragma push_macro("SATURDAY")
#undef SATURDAY
#pragma push_macro("SECOND")
#undef SECOND
#pragma push_macro("SECOND_MASK")
#undef SECOND_MASK
#pragma push_macro("SEPTEMBER")
#undef SEPTEMBER
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("SHORT_FORMAT")
#undef SHORT_FORMAT
#pragma push_macro("SHORT_STANDALONE")
#undef SHORT_STANDALONE
#pragma push_macro("STANDALONE_MASK")
#undef STANDALONE_MASK
#pragma push_macro("SUNDAY")
#undef SUNDAY
#pragma push_macro("THURSDAY")
#undef THURSDAY
#pragma push_macro("TUESDAY")
#undef TUESDAY
#pragma push_macro("UNDECIMBER")
#undef UNDECIMBER
#pragma push_macro("UNSET")
#undef UNSET
#pragma push_macro("WEDNESDAY")
#undef WEDNESDAY
#pragma push_macro("WEEK_OF_MONTH")
#undef WEEK_OF_MONTH
#pragma push_macro("WEEK_OF_MONTH_MASK")
#undef WEEK_OF_MONTH_MASK
#pragma push_macro("WEEK_OF_YEAR")
#undef WEEK_OF_YEAR
#pragma push_macro("WEEK_OF_YEAR_MASK")
#undef WEEK_OF_YEAR_MASK
#pragma push_macro("YEAR")
#undef YEAR
#pragma push_macro("YEAR_MASK")
#undef YEAR_MASK
#pragma push_macro("ZONE_OFFSET")
#undef ZONE_OFFSET
#pragma push_macro("ZONE_OFFSET_MASK")
#undef ZONE_OFFSET_MASK

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace text {
		class DateFormatSymbols;
	}
}
namespace java {
	namespace time {
		class Instant;
	}
}
namespace java {
	namespace util {
		class Date;
		class Locale;
		class Map;
		class Set;
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

namespace java {
	namespace util {

class $export Calendar : public ::java::io::Serializable, public ::java::lang::Cloneable, public ::java::lang::Comparable {
	$class(Calendar, 0, ::java::io::Serializable, ::java::lang::Cloneable, ::java::lang::Comparable)
public:
	Calendar();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$();
	void init$(::java::util::TimeZone* zone, ::java::util::Locale* aLocale);
	virtual void add(int32_t field, int32_t amount) {}
	void adjustStamp();
	virtual bool after(Object$* when);
	static int32_t aggregateStamp(int32_t stamp_a, int32_t stamp_b);
	static void appendValue(::java::lang::StringBuilder* sb, $String* item, bool valid, int64_t value);
	virtual bool before(Object$* when);
	virtual bool checkDisplayNameParams(int32_t field, int32_t style, int32_t minStyle, int32_t maxStyle, ::java::util::Locale* locale, int32_t fieldMask);
	void clear();
	void clear(int32_t field);
	virtual $Object* clone() override;
	virtual int32_t compareTo(::java::util::Calendar* anotherCalendar);
	int32_t compareTo(int64_t t);
	virtual int32_t compareTo(Object$* anotherCalendar) override;
	virtual void complete();
	virtual void computeFields() {}
	virtual void computeTime() {}
	static ::java::util::Calendar* createCalendar(::java::util::TimeZone* zone, ::java::util::Locale* aLocale);
	static ::java::util::TimeZone* defaultTimeZone(::java::util::Locale* l);
	virtual bool equals(Object$* obj) override;
	virtual int32_t get(int32_t field);
	virtual int32_t getActualMaximum(int32_t field);
	virtual int32_t getActualMinimum(int32_t field);
	static ::java::util::Set* getAvailableCalendarTypes();
	static $Array<::java::util::Locale>* getAvailableLocales();
	virtual int32_t getBaseStyle(int32_t style);
	virtual $String* getCalendarType();
	virtual $String* getDisplayName(int32_t field, int32_t style, ::java::util::Locale* locale);
	virtual ::java::util::Map* getDisplayNames(int32_t field, int32_t style, ::java::util::Locale* locale);
	::java::util::Map* getDisplayNamesImpl(int32_t field, int32_t style, ::java::util::Locale* locale);
	static $String* getFieldName(int32_t field);
	$StringArray* getFieldStrings(int32_t field, int32_t style, ::java::text::DateFormatSymbols* symbols);
	virtual int32_t getFirstDayOfWeek();
	virtual int32_t getGreatestMinimum(int32_t field) {return 0;}
	static ::java::util::Calendar* getInstance();
	static ::java::util::Calendar* getInstance(::java::util::TimeZone* zone);
	static ::java::util::Calendar* getInstance(::java::util::Locale* aLocale);
	static ::java::util::Calendar* getInstance(::java::util::TimeZone* zone, ::java::util::Locale* aLocale);
	virtual int32_t getLeastMaximum(int32_t field) {return 0;}
	virtual int32_t getMaximum(int32_t field) {return 0;}
	static int64_t getMillisOf(::java::util::Calendar* calendar);
	virtual int32_t getMinimalDaysInFirstWeek();
	virtual int32_t getMinimum(int32_t field) {return 0;}
	int32_t getSetStateFields();
	::java::util::Date* getTime();
	virtual int64_t getTimeInMillis();
	virtual ::java::util::TimeZone* getTimeZone();
	virtual int32_t getWeekYear();
	virtual int32_t getWeeksInWeekYear();
	virtual ::java::util::TimeZone* getZone();
	virtual int32_t hashCode() override;
	int32_t internalGet(int32_t field);
	void internalSet(int32_t field, int32_t value);
	void invalidateWeekFields();
	bool isExternallySet(int32_t field);
	static bool isFieldSet(int32_t fieldMask, int32_t field);
	bool isFullyNormalized();
	virtual bool isLenient();
	bool isNarrowFormatStyle(int32_t style);
	bool isNarrowStyle(int32_t style);
	bool isPartiallyNormalized();
	bool isSet(int32_t field);
	bool isStandaloneStyle(int32_t style);
	virtual bool isWeekDateSupported();
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void roll(int32_t field, bool up) {}
	virtual void roll(int32_t field, int32_t amount);
	int32_t selectFields();
	virtual void set(int32_t field, int32_t value);
	void set(int32_t year, int32_t month, int32_t date);
	void set(int32_t year, int32_t month, int32_t date, int32_t hourOfDay, int32_t minute);
	void set(int32_t year, int32_t month, int32_t date, int32_t hourOfDay, int32_t minute, int32_t second);
	void setFieldsComputed(int32_t fieldMask);
	void setFieldsNormalized(int32_t fieldMask);
	virtual void setFirstDayOfWeek(int32_t value);
	virtual void setLenient(bool lenient);
	virtual void setMinimalDaysInFirstWeek(int32_t value);
	void setTime(::java::util::Date* date);
	virtual void setTimeInMillis(int64_t millis);
	virtual void setTimeZone(::java::util::TimeZone* value);
	void setUnnormalized();
	void setWeekCountData(::java::util::Locale* desiredLocale);
	virtual void setWeekDate(int32_t weekYear, int32_t weekOfYear, int32_t dayOfWeek);
	virtual void setZoneShared(bool shared);
	::java::time::Instant* toInstant();
	int32_t toStandaloneStyle(int32_t style);
	virtual $String* toString() override;
	void updateTime();
	void writeObject(::java::io::ObjectOutputStream* stream);
	static bool $assertionsDisabled;
	static const int32_t ERA = 0;
	static const int32_t YEAR = 1;
	static const int32_t MONTH = 2;
	static const int32_t WEEK_OF_YEAR = 3;
	static const int32_t WEEK_OF_MONTH = 4;
	static const int32_t DATE = 5;
	static const int32_t DAY_OF_MONTH = 5;
	static const int32_t DAY_OF_YEAR = 6;
	static const int32_t DAY_OF_WEEK = 7;
	static const int32_t DAY_OF_WEEK_IN_MONTH = 8;
	static const int32_t AM_PM = 9;
	static const int32_t HOUR = 10;
	static const int32_t HOUR_OF_DAY = 11;
	static const int32_t MINUTE = 12;
	static const int32_t SECOND = 13;
	static const int32_t MILLISECOND = 14;
	static const int32_t ZONE_OFFSET = 15;
	static const int32_t DST_OFFSET = 16;
	static const int32_t FIELD_COUNT = 17;
	static const int32_t SUNDAY = 1;
	static const int32_t MONDAY = 2;
	static const int32_t TUESDAY = 3;
	static const int32_t WEDNESDAY = 4;
	static const int32_t THURSDAY = 5;
	static const int32_t FRIDAY = 6;
	static const int32_t SATURDAY = 7;
	static const int32_t JANUARY = 0;
	static const int32_t FEBRUARY = 1;
	static const int32_t MARCH = 2;
	static const int32_t APRIL = 3;
	static const int32_t MAY = 4;
	static const int32_t JUNE = 5;
	static const int32_t JULY = 6;
	static const int32_t AUGUST = 7;
	static const int32_t SEPTEMBER = 8;
	static const int32_t OCTOBER = 9;
	static const int32_t NOVEMBER = 10;
	static const int32_t DECEMBER = 11;
	static const int32_t UNDECIMBER = 12;
	static const int32_t AM = 0;
	static const int32_t PM = 1;
	static const int32_t ALL_STYLES = 0;
	static const int32_t STANDALONE_MASK = 32768;
	static const int32_t SHORT = 1;
	static const int32_t LONG = 2;
	static const int32_t NARROW_FORMAT = 4;
	static const int32_t NARROW_STANDALONE = 32772; // NARROW_FORMAT | STANDALONE_MASK
	static const int32_t SHORT_FORMAT = 1;
	static const int32_t LONG_FORMAT = 2;
	static const int32_t SHORT_STANDALONE = 32769; // SHORT | STANDALONE_MASK
	static const int32_t LONG_STANDALONE = 32770; // LONG | STANDALONE_MASK
	$ints* fields = nullptr;
	$booleans* isSet$ = nullptr;
	$ints* stamp = nullptr;
	int64_t time = 0;
	bool isTimeSet = false;
	bool areFieldsSet = false;
	bool areAllFieldsSet = false;
	bool lenient = false;
	::java::util::TimeZone* zone = nullptr;
	bool sharedZone = false;
	int32_t firstDayOfWeek = 0;
	int32_t minimalDaysInFirstWeek = 0;
	static ::java::util::concurrent::ConcurrentMap* cachedLocaleData;
	static const int32_t UNSET = 0;
	static const int32_t COMPUTED = 1;
	static const int32_t MINIMUM_USER_STAMP = 2;
	static const int32_t ALL_FIELDS = 131071; // (1 << FIELD_COUNT) - 1
	int32_t nextStamp = 0;
	static const int32_t currentSerialVersion = 1;
	int32_t serialVersionOnStream = 0;
	static const int64_t serialVersionUID = (int64_t)0xE6EA4D1EC8DC5B8E;
	static const int32_t ERA_MASK = (1 << ERA);
	static const int32_t YEAR_MASK = (1 << YEAR);
	static const int32_t MONTH_MASK = (1 << MONTH);
	static const int32_t WEEK_OF_YEAR_MASK = (1 << WEEK_OF_YEAR);
	static const int32_t WEEK_OF_MONTH_MASK = (1 << WEEK_OF_MONTH);
	static const int32_t DAY_OF_MONTH_MASK = (1 << DAY_OF_MONTH);
	static const int32_t DATE_MASK = DAY_OF_MONTH_MASK;
	static const int32_t DAY_OF_YEAR_MASK = (1 << DAY_OF_YEAR);
	static const int32_t DAY_OF_WEEK_MASK = (1 << DAY_OF_WEEK);
	static const int32_t DAY_OF_WEEK_IN_MONTH_MASK = (1 << DAY_OF_WEEK_IN_MONTH);
	static const int32_t AM_PM_MASK = (1 << AM_PM);
	static const int32_t HOUR_MASK = (1 << HOUR);
	static const int32_t HOUR_OF_DAY_MASK = (1 << HOUR_OF_DAY);
	static const int32_t MINUTE_MASK = (1 << MINUTE);
	static const int32_t SECOND_MASK = (1 << SECOND);
	static const int32_t MILLISECOND_MASK = (1 << MILLISECOND);
	static const int32_t ZONE_OFFSET_MASK = (1 << ZONE_OFFSET);
	static const int32_t DST_OFFSET_MASK = (1 << DST_OFFSET);
	static $StringArray* FIELD_NAME;
};

	} // util
} // java

#pragma pop_macro("ALL_FIELDS")
#pragma pop_macro("ALL_STYLES")
#pragma pop_macro("AM")
#pragma pop_macro("AM_PM")
#pragma pop_macro("AM_PM_MASK")
#pragma pop_macro("APRIL")
#pragma pop_macro("AUGUST")
#pragma pop_macro("COMPUTED")
#pragma pop_macro("DATE")
#pragma pop_macro("DATE_MASK")
#pragma pop_macro("DAY_OF_MONTH")
#pragma pop_macro("DAY_OF_MONTH_MASK")
#pragma pop_macro("DAY_OF_WEEK")
#pragma pop_macro("DAY_OF_WEEK_IN_MONTH")
#pragma pop_macro("DAY_OF_WEEK_IN_MONTH_MASK")
#pragma pop_macro("DAY_OF_WEEK_MASK")
#pragma pop_macro("DAY_OF_YEAR")
#pragma pop_macro("DAY_OF_YEAR_MASK")
#pragma pop_macro("DECEMBER")
#pragma pop_macro("DST_OFFSET")
#pragma pop_macro("DST_OFFSET_MASK")
#pragma pop_macro("ERA")
#pragma pop_macro("ERA_MASK")
#pragma pop_macro("FEBRUARY")
#pragma pop_macro("FIELD_COUNT")
#pragma pop_macro("FIELD_NAME")
#pragma pop_macro("FRIDAY")
#pragma pop_macro("HOUR")
#pragma pop_macro("HOUR_MASK")
#pragma pop_macro("HOUR_OF_DAY")
#pragma pop_macro("HOUR_OF_DAY_MASK")
#pragma pop_macro("JANUARY")
#pragma pop_macro("JULY")
#pragma pop_macro("JUNE")
#pragma pop_macro("LONG")
#pragma pop_macro("LONG_FORMAT")
#pragma pop_macro("LONG_STANDALONE")
#pragma pop_macro("MARCH")
#pragma pop_macro("MAY")
#pragma pop_macro("MILLISECOND")
#pragma pop_macro("MILLISECOND_MASK")
#pragma pop_macro("MINIMUM_USER_STAMP")
#pragma pop_macro("MINUTE")
#pragma pop_macro("MINUTE_MASK")
#pragma pop_macro("MONDAY")
#pragma pop_macro("MONTH")
#pragma pop_macro("MONTH_MASK")
#pragma pop_macro("NARROW_FORMAT")
#pragma pop_macro("NARROW_STANDALONE")
#pragma pop_macro("NOVEMBER")
#pragma pop_macro("OCTOBER")
#pragma pop_macro("PM")
#pragma pop_macro("SATURDAY")
#pragma pop_macro("SECOND")
#pragma pop_macro("SECOND_MASK")
#pragma pop_macro("SEPTEMBER")
#pragma pop_macro("SHORT")
#pragma pop_macro("SHORT_FORMAT")
#pragma pop_macro("SHORT_STANDALONE")
#pragma pop_macro("STANDALONE_MASK")
#pragma pop_macro("SUNDAY")
#pragma pop_macro("THURSDAY")
#pragma pop_macro("TUESDAY")
#pragma pop_macro("UNDECIMBER")
#pragma pop_macro("UNSET")
#pragma pop_macro("WEDNESDAY")
#pragma pop_macro("WEEK_OF_MONTH")
#pragma pop_macro("WEEK_OF_MONTH_MASK")
#pragma pop_macro("WEEK_OF_YEAR")
#pragma pop_macro("WEEK_OF_YEAR_MASK")
#pragma pop_macro("YEAR")
#pragma pop_macro("YEAR_MASK")
#pragma pop_macro("ZONE_OFFSET")
#pragma pop_macro("ZONE_OFFSET_MASK")

#endif // _java_util_Calendar_h_