#ifndef _sun_util_calendar_ZoneInfoFile$ZoneOffsetTransitionRule_h_
#define _sun_util_calendar_ZoneInfoFile$ZoneOffsetTransitionRule_h_
//$ class sun.util.calendar.ZoneInfoFile$ZoneOffsetTransitionRule
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class DataInput;
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $export ZoneInfoFile$ZoneOffsetTransitionRule : public ::java::lang::Object {
	$class(ZoneInfoFile$ZoneOffsetTransitionRule, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ZoneInfoFile$ZoneOffsetTransitionRule();
	void init$(::java::io::DataInput* in);
	static int64_t adjust(int64_t epochDay, int32_t dow, int32_t relative);
	virtual int64_t getTransitionEpochSecond(int32_t year);
	static bool isLeapYear(int32_t year);
	static int32_t lengthOfMonth(int32_t year, int32_t month);
	static int64_t nextOrSame(int64_t epochDay, int32_t dayOfWeek);
	static int64_t previousOrSame(int64_t epochDay, int32_t dayOfWeek);
	static int64_t toEpochDay(int32_t year, int32_t month, int32_t day);
	int32_t month = 0;
	int8_t dom = 0;
	int32_t dow = 0;
	int32_t secondOfDay = 0;
	bool timeEndOfDay = false;
	int32_t timeDefinition = 0;
	int32_t standardOffset = 0;
	int32_t offsetBefore = 0;
	int32_t offsetAfter = 0;
};

		} // calendar
	} // util
} // sun

#endif // _sun_util_calendar_ZoneInfoFile$ZoneOffsetTransitionRule_h_