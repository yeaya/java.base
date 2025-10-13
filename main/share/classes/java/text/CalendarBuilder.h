#ifndef _java_text_CalendarBuilder_h_
#define _java_text_CalendarBuilder_h_
//$ class java.text.CalendarBuilder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COMPUTED")
#undef COMPUTED
#pragma push_macro("ISO_DAY_OF_WEEK")
#undef ISO_DAY_OF_WEEK
#pragma push_macro("MAX_FIELD")
#undef MAX_FIELD
#pragma push_macro("MINIMUM_USER_STAMP")
#undef MINIMUM_USER_STAMP
#pragma push_macro("UNSET")
#undef UNSET
#pragma push_macro("WEEK_YEAR")
#undef WEEK_YEAR

namespace java {
	namespace util {
		class Calendar;
	}
}

namespace java {
	namespace text {

class CalendarBuilder : public ::java::lang::Object {
	$class(CalendarBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CalendarBuilder();
	void init$();
	virtual ::java::text::CalendarBuilder* addYear(int32_t value);
	virtual ::java::text::CalendarBuilder* clear(int32_t index);
	virtual ::java::util::Calendar* establish(::java::util::Calendar* cal);
	virtual bool isSet(int32_t index);
	static bool isValidDayOfWeek(int32_t dayOfWeek);
	virtual ::java::text::CalendarBuilder* set(int32_t index, int32_t value);
	static int32_t toCalendarDayOfWeek(int32_t isoDayOfWeek);
	static int32_t toISODayOfWeek(int32_t calendarDayOfWeek);
	virtual $String* toString() override;
	static const int32_t UNSET = 0;
	static const int32_t COMPUTED = 1;
	static const int32_t MINIMUM_USER_STAMP = 2;
	static const int32_t MAX_FIELD = 18; // 17 + 1
	static const int32_t WEEK_YEAR = 17;
	static const int32_t ISO_DAY_OF_WEEK = 1000;
	$ints* field = nullptr;
	int32_t nextStamp = 0;
	int32_t maxFieldIndex = 0;
};

	} // text
} // java

#pragma pop_macro("COMPUTED")
#pragma pop_macro("ISO_DAY_OF_WEEK")
#pragma pop_macro("MAX_FIELD")
#pragma pop_macro("MINIMUM_USER_STAMP")
#pragma pop_macro("UNSET")
#pragma pop_macro("WEEK_YEAR")

#endif // _java_text_CalendarBuilder_h_