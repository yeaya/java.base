#ifndef _java_util_SimpleTimeZone_h_
#define _java_util_SimpleTimeZone_h_
//$ class java.util.SimpleTimeZone
//$ extends java.util.TimeZone

#include <java/lang/Array.h>
#include <java/util/TimeZone.h>

#pragma push_macro("DOM_MODE")
#undef DOM_MODE
#pragma push_macro("DOW_LE_DOM_MODE")
#undef DOW_LE_DOM_MODE
#pragma push_macro("MAX_RULE_NUM")
#undef MAX_RULE_NUM
#pragma push_macro("STANDARD_TIME")
#undef STANDARD_TIME
#pragma push_macro("DOW_GE_DOM_MODE")
#undef DOW_GE_DOM_MODE
#pragma push_macro("WALL_TIME")
#undef WALL_TIME
#pragma push_macro("ID")
#undef ID
#pragma push_macro("DOW_IN_MONTH_MODE")
#undef DOW_IN_MONTH_MODE
#pragma push_macro("UTC_TIME")
#undef UTC_TIME

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Date;
		class SimpleTimeZone$Cache;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class BaseCalendar;
			class BaseCalendar$Date;
			class Gregorian;
		}
	}
}

namespace java {
	namespace util {

class $export SimpleTimeZone : public ::java::util::TimeZone {
	$class(SimpleTimeZone, 0, ::java::util::TimeZone)
public:
	SimpleTimeZone();
	void init$(int32_t rawOffset, $String* ID);
	void init$(int32_t rawOffset, $String* ID, int32_t startMonth, int32_t startDay, int32_t startDayOfWeek, int32_t startTime, int32_t endMonth, int32_t endDay, int32_t endDayOfWeek, int32_t endTime);
	void init$(int32_t rawOffset, $String* ID, int32_t startMonth, int32_t startDay, int32_t startDayOfWeek, int32_t startTime, int32_t endMonth, int32_t endDay, int32_t endDayOfWeek, int32_t endTime, int32_t dstSavings);
	void init$(int32_t rawOffset, $String* ID, int32_t startMonth, int32_t startDay, int32_t startDayOfWeek, int32_t startTime, int32_t startTimeMode, int32_t endMonth, int32_t endDay, int32_t endDayOfWeek, int32_t endTime, int32_t endTimeMode, int32_t dstSavings);
	virtual $Object* clone() override;
	void decodeEndRule();
	void decodeRules();
	void decodeStartRule();
	virtual bool equals(Object$* obj) override;
	virtual int32_t getDSTSavings() override;
	int64_t getEnd(::sun::util::calendar::BaseCalendar* cal, ::sun::util::calendar::BaseCalendar$Date* cdate, int32_t year);
	virtual int32_t getOffset(int64_t date) override;
	virtual int32_t getOffset(int32_t era, int32_t year, int32_t month, int32_t day, int32_t dayOfWeek, int32_t millis) override;
	int32_t getOffset(::sun::util::calendar::BaseCalendar* cal, ::sun::util::calendar::BaseCalendar$Date* cdate, int32_t year, int64_t time);
	virtual int32_t getOffsets(int64_t date, $ints* offsets) override;
	virtual int32_t getRawOffset() override;
	int64_t getStart(::sun::util::calendar::BaseCalendar* cal, ::sun::util::calendar::BaseCalendar$Date* cdate, int32_t year);
	int64_t getTransition(::sun::util::calendar::BaseCalendar* cal, ::sun::util::calendar::BaseCalendar$Date* cdate, int32_t mode, int32_t year, int32_t month, int32_t dayOfMonth, int32_t dayOfWeek, int32_t timeOfDay);
	virtual bool hasSameRules(::java::util::TimeZone* other) override;
	virtual int32_t hashCode() override;
	virtual bool inDaylightTime(::java::util::Date* date) override;
	void invalidateCache();
	void makeRulesCompatible();
	virtual bool observesDaylightTime() override;
	$bytes* packRules();
	$ints* packTimes();
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void setDSTSavings(int32_t millisSavedDuringDST);
	virtual void setEndRule(int32_t endMonth, int32_t endDay, int32_t endDayOfWeek, int32_t endTime);
	virtual void setEndRule(int32_t endMonth, int32_t endDay, int32_t endTime);
	virtual void setEndRule(int32_t endMonth, int32_t endDay, int32_t endDayOfWeek, int32_t endTime, bool after);
	virtual void setRawOffset(int32_t offsetMillis) override;
	virtual void setStartRule(int32_t startMonth, int32_t startDay, int32_t startDayOfWeek, int32_t startTime);
	virtual void setStartRule(int32_t startMonth, int32_t startDay, int32_t startTime);
	virtual void setStartRule(int32_t startMonth, int32_t startDay, int32_t startDayOfWeek, int32_t startTime, bool after);
	virtual void setStartYear(int32_t year);
	virtual $String* toString() override;
	void unpackRules($bytes* rules);
	void unpackTimes($ints* times);
	virtual bool useDaylightTime() override;
	void writeObject(::java::io::ObjectOutputStream* stream);
	int32_t startMonth = 0;
	int32_t startDay = 0;
	int32_t startDayOfWeek = 0;
	int32_t startTime = 0;
	int32_t startTimeMode = 0;
	int32_t endMonth = 0;
	int32_t endDay = 0;
	int32_t endDayOfWeek = 0;
	int32_t endTime = 0;
	int32_t endTimeMode = 0;
	int32_t startYear = 0;
	int32_t rawOffset = 0;
	bool useDaylight = false;
	static const int32_t millisPerHour = 3600000; // 60 * 60 * 1000
	static const int32_t millisPerDay = 86400000; // 24 * millisPerHour
	$bytes* monthLength = nullptr;
	static $bytes* staticMonthLength;
	static $bytes* staticLeapMonthLength;
	int32_t startMode = 0;
	int32_t endMode = 0;
	int32_t dstSavings = 0;
	static ::sun::util::calendar::Gregorian* gcal;
	$volatile(::java::util::SimpleTimeZone$Cache*) cache = nullptr;
	static const int32_t DOM_MODE = 1;
	static const int32_t DOW_IN_MONTH_MODE = 2;
	static const int32_t DOW_GE_DOM_MODE = 3;
	static const int32_t DOW_LE_DOM_MODE = 4;
	static const int32_t WALL_TIME = 0;
	static const int32_t STANDARD_TIME = 1;
	static const int32_t UTC_TIME = 2;
	static const int64_t serialVersionUID = (int64_t)0xFA675D60D15EF5A6;
	static const int32_t currentSerialVersion = 2;
	int32_t serialVersionOnStream = 0;
	static const int32_t MAX_RULE_NUM = 6;
};

	} // util
} // java

#pragma pop_macro("DOM_MODE")
#pragma pop_macro("DOW_LE_DOM_MODE")
#pragma pop_macro("MAX_RULE_NUM")
#pragma pop_macro("STANDARD_TIME")
#pragma pop_macro("DOW_GE_DOM_MODE")
#pragma pop_macro("WALL_TIME")
#pragma pop_macro("ID")
#pragma pop_macro("DOW_IN_MONTH_MODE")
#pragma pop_macro("UTC_TIME")

#endif // _java_util_SimpleTimeZone_h_