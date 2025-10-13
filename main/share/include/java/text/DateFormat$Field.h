#ifndef _java_text_DateFormat$Field_h_
#define _java_text_DateFormat$Field_h_
//$ class java.text.DateFormat$Field
//$ extends java.text.Format$Field

#include <java/lang/Array.h>
#include <java/text/Format$Field.h>

#pragma push_macro("AM_PM")
#undef AM_PM
#pragma push_macro("DAY_OF_MONTH")
#undef DAY_OF_MONTH
#pragma push_macro("DAY_OF_WEEK")
#undef DAY_OF_WEEK
#pragma push_macro("DAY_OF_WEEK_IN_MONTH")
#undef DAY_OF_WEEK_IN_MONTH
#pragma push_macro("DAY_OF_YEAR")
#undef DAY_OF_YEAR
#pragma push_macro("ERA")
#undef ERA
#pragma push_macro("HOUR0")
#undef HOUR0
#pragma push_macro("HOUR1")
#undef HOUR1
#pragma push_macro("HOUR_OF_DAY0")
#undef HOUR_OF_DAY0
#pragma push_macro("HOUR_OF_DAY1")
#undef HOUR_OF_DAY1
#pragma push_macro("MILLISECOND")
#undef MILLISECOND
#pragma push_macro("MINUTE")
#undef MINUTE
#pragma push_macro("MONTH")
#undef MONTH
#pragma push_macro("SECOND")
#undef SECOND
#pragma push_macro("TIME_ZONE")
#undef TIME_ZONE
#pragma push_macro("WEEK_OF_MONTH")
#undef WEEK_OF_MONTH
#pragma push_macro("WEEK_OF_YEAR")
#undef WEEK_OF_YEAR
#pragma push_macro("YEAR")
#undef YEAR

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace text {

class $import DateFormat$Field : public ::java::text::Format$Field {
	$class(DateFormat$Field, 0, ::java::text::Format$Field)
public:
	DateFormat$Field();
	void init$($String* name, int32_t calendarField);
	virtual int32_t getCalendarField();
	static ::java::text::DateFormat$Field* ofCalendarField(int32_t calendarField);
	virtual $Object* readResolve() override;
	static const int64_t serialVersionUID = (int64_t)0x6744FC81F123E710;
	static ::java::util::Map* instanceMap;
	static $Array<::java::text::DateFormat$Field>* calendarToFieldMapping;
	int32_t calendarField = 0;
	static ::java::text::DateFormat$Field* ERA;
	static ::java::text::DateFormat$Field* YEAR;
	static ::java::text::DateFormat$Field* MONTH;
	static ::java::text::DateFormat$Field* DAY_OF_MONTH;
	static ::java::text::DateFormat$Field* HOUR_OF_DAY1;
	static ::java::text::DateFormat$Field* HOUR_OF_DAY0;
	static ::java::text::DateFormat$Field* MINUTE;
	static ::java::text::DateFormat$Field* SECOND;
	static ::java::text::DateFormat$Field* MILLISECOND;
	static ::java::text::DateFormat$Field* DAY_OF_WEEK;
	static ::java::text::DateFormat$Field* DAY_OF_YEAR;
	static ::java::text::DateFormat$Field* DAY_OF_WEEK_IN_MONTH;
	static ::java::text::DateFormat$Field* WEEK_OF_YEAR;
	static ::java::text::DateFormat$Field* WEEK_OF_MONTH;
	static ::java::text::DateFormat$Field* AM_PM;
	static ::java::text::DateFormat$Field* HOUR1;
	static ::java::text::DateFormat$Field* HOUR0;
	static ::java::text::DateFormat$Field* TIME_ZONE;
};

	} // text
} // java

#pragma pop_macro("AM_PM")
#pragma pop_macro("DAY_OF_MONTH")
#pragma pop_macro("DAY_OF_WEEK")
#pragma pop_macro("DAY_OF_WEEK_IN_MONTH")
#pragma pop_macro("DAY_OF_YEAR")
#pragma pop_macro("ERA")
#pragma pop_macro("HOUR0")
#pragma pop_macro("HOUR1")
#pragma pop_macro("HOUR_OF_DAY0")
#pragma pop_macro("HOUR_OF_DAY1")
#pragma pop_macro("MILLISECOND")
#pragma pop_macro("MINUTE")
#pragma pop_macro("MONTH")
#pragma pop_macro("SECOND")
#pragma pop_macro("TIME_ZONE")
#pragma pop_macro("WEEK_OF_MONTH")
#pragma pop_macro("WEEK_OF_YEAR")
#pragma pop_macro("YEAR")

#endif // _java_text_DateFormat$Field_h_