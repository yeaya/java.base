#ifndef _java_util_Calendar$Builder_h_
#define _java_util_Calendar$Builder_h_
//$ class java.util.Calendar$Builder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NFIELDS")
#undef NFIELDS
#pragma push_macro("WEEK_YEAR")
#undef WEEK_YEAR

namespace java {
	namespace util {
		class Calendar;
		class Date;
		class Locale;
		class TimeZone;
	}
}

namespace java {
	namespace util {

class $import Calendar$Builder : public ::java::lang::Object {
	$class(Calendar$Builder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Calendar$Builder();
	void init$();
	void allocateFields();
	virtual ::java::util::Calendar* build();
	void internalSet(int32_t field, int32_t value);
	bool isInstantSet();
	bool isSet(int32_t index);
	bool isValidWeekParameter(int32_t value);
	virtual ::java::util::Calendar$Builder* set(int32_t field, int32_t value);
	virtual ::java::util::Calendar$Builder* setCalendarType($String* type);
	virtual ::java::util::Calendar$Builder* setDate(int32_t year, int32_t month, int32_t dayOfMonth);
	virtual ::java::util::Calendar$Builder* setFields($ints* fieldValuePairs);
	virtual ::java::util::Calendar$Builder* setInstant(int64_t instant);
	virtual ::java::util::Calendar$Builder* setInstant(::java::util::Date* instant);
	virtual ::java::util::Calendar$Builder* setLenient(bool lenient);
	virtual ::java::util::Calendar$Builder* setLocale(::java::util::Locale* locale);
	virtual ::java::util::Calendar$Builder* setTimeOfDay(int32_t hourOfDay, int32_t minute, int32_t second);
	virtual ::java::util::Calendar$Builder* setTimeOfDay(int32_t hourOfDay, int32_t minute, int32_t second, int32_t millis);
	virtual ::java::util::Calendar$Builder* setTimeZone(::java::util::TimeZone* zone);
	virtual ::java::util::Calendar$Builder* setWeekDate(int32_t weekYear, int32_t weekOfYear, int32_t dayOfWeek);
	virtual ::java::util::Calendar$Builder* setWeekDefinition(int32_t firstDayOfWeek, int32_t minimalDaysInFirstWeek);
	static const int32_t NFIELDS = 18; // 17 + 1
	static const int32_t WEEK_YEAR = 17;
	int64_t instant = 0;
	$ints* fields = nullptr;
	int32_t nextStamp = 0;
	int32_t maxFieldIndex = 0;
	$String* type = nullptr;
	::java::util::TimeZone* zone = nullptr;
	bool lenient = false;
	::java::util::Locale* locale = nullptr;
	int32_t firstDayOfWeek = 0;
	int32_t minimalDaysInFirstWeek = 0;
};

	} // util
} // java

#pragma pop_macro("NFIELDS")
#pragma pop_macro("WEEK_YEAR")

#endif // _java_util_Calendar$Builder_h_