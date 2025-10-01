#ifndef _sun_util_calendar_ZoneInfo_h_
#define _sun_util_calendar_ZoneInfo_h_
//$ class sun.util.calendar.ZoneInfo
//$ extends java.util.TimeZone

#include <java/lang/Array.h>
#include <java/util/TimeZone.h>

#pragma push_macro("STANDARD_TIME")
#undef STANDARD_TIME
#pragma push_macro("WALL_TIME")
#undef WALL_TIME
#pragma push_macro("ID")
#undef ID
#pragma push_macro("OFFSET_MASK")
#undef OFFSET_MASK
#pragma push_macro("TRANSITION_NSHIFT")
#undef TRANSITION_NSHIFT
#pragma push_macro("DST_MASK")
#undef DST_MASK
#pragma push_macro("DST_NSHIFT")
#undef DST_NSHIFT
#pragma push_macro("UTC_TIME")
#undef UTC_TIME
#pragma push_macro("ABBR_MASK")
#undef ABBR_MASK

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Date;
		class Map;
		class SimpleTimeZone;
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $export ZoneInfo : public ::java::util::TimeZone {
	$class(ZoneInfo, $NO_CLASS_INIT, ::java::util::TimeZone)
public:
	ZoneInfo();
	void init$();
	void init$($String* ID, int32_t rawOffset);
	void init$($String* ID, int32_t rawOffset, int32_t dstSavings, int32_t checksum, $longs* transitions, $ints* offsets, $ints* simpleTimeZoneParams, bool willGMTOffsetChange);
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	static ::java::util::Map* getAliasTable();
	static $StringArray* getAvailableIDs();
	static $StringArray* getAvailableIDs(int32_t rawOffset);
	virtual int32_t getDSTSavings() override;
	int32_t getLastRawOffset();
	::java::util::SimpleTimeZone* getLastRule();
	virtual ::java::util::SimpleTimeZone* getLastRuleInstance();
	virtual int32_t getOffset(int64_t date) override;
	virtual int32_t getOffset(int32_t era, int32_t year, int32_t month, int32_t day, int32_t dayOfWeek, int32_t milliseconds) override;
	virtual int32_t getOffsets(int64_t utc, $ints* offsets) override;
	int32_t getOffsets(int64_t date, $ints* offsets, int32_t type);
	virtual int32_t getOffsetsByStandard(int64_t standard, $ints* offsets);
	virtual int32_t getOffsetsByWall(int64_t wall, $ints* offsets);
	virtual int32_t getRawOffset() override;
	static ::java::util::TimeZone* getTimeZone($String* ID);
	int32_t getTransitionIndex(int64_t date, int32_t type);
	virtual bool hasSameRules(::java::util::TimeZone* other) override;
	virtual int32_t hashCode() override;
	virtual bool inDaylightTime(::java::util::Date* date) override;
	virtual bool isDirty();
	virtual bool observesDaylightTime() override;
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void setRawOffset(int32_t offsetMillis) override;
	virtual $String* toString() override;
	virtual bool useDaylightTime() override;
	static const int32_t UTC_TIME = 0;
	static const int32_t STANDARD_TIME = 1;
	static const int32_t WALL_TIME = 2;
	static const int64_t OFFSET_MASK = (int64_t)15;
	static const int64_t DST_MASK = (int64_t)240;
	static const int32_t DST_NSHIFT = 4;
	static const int64_t ABBR_MASK = (int64_t)3840;
	static const int32_t TRANSITION_NSHIFT = 12;
	int32_t rawOffset = 0;
	int32_t rawOffsetDiff = 0;
	int32_t checksum = 0;
	int32_t dstSavings = 0;
	$longs* transitions = nullptr;
	$ints* offsets = nullptr;
	$ints* simpleTimeZoneParams = nullptr;
	bool willGMTOffsetChange = false;
	bool dirty = false;
	static const int64_t serialVersionUID = (int64_t)0x24D1D3CE001D719B;
	::java::util::SimpleTimeZone* lastRule = nullptr;
};

		} // calendar
	} // util
} // sun

#pragma pop_macro("STANDARD_TIME")
#pragma pop_macro("WALL_TIME")
#pragma pop_macro("ID")
#pragma pop_macro("OFFSET_MASK")
#pragma pop_macro("TRANSITION_NSHIFT")
#pragma pop_macro("DST_MASK")
#pragma pop_macro("DST_NSHIFT")
#pragma pop_macro("UTC_TIME")
#pragma pop_macro("ABBR_MASK")

#endif // _sun_util_calendar_ZoneInfo_h_