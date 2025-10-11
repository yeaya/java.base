#ifndef _sun_util_calendar_ZoneInfoFile_h_
#define _sun_util_calendar_ZoneInfoFile_h_
//$ class sun.util.calendar.ZoneInfoFile
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SECONDS_PER_DAY")
#undef SECONDS_PER_DAY
#pragma push_macro("CURRT")
#undef CURRT
#pragma push_macro("LASTYEAR")
#undef LASTYEAR
#pragma push_macro("OFFSET_MASK")
#undef OFFSET_MASK
#pragma push_macro("TRANSITION_NSHIFT")
#undef TRANSITION_NSHIFT
#pragma push_macro("DAYS_PER_CYCLE")
#undef DAYS_PER_CYCLE
#pragma push_macro("DST_MASK")
#undef DST_MASK
#pragma push_macro("DST_NSHIFT")
#undef DST_NSHIFT
#pragma push_macro("USE_OLDMAPPING")
#undef USE_OLDMAPPING

namespace java {
	namespace io {
		class DataInput;
		class DataInputStream;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class ZoneInfo;
			class ZoneInfoFile$ZoneOffsetTransitionRule;
		}
	}
}

namespace sun {
	namespace util {
		namespace calendar {

class $import ZoneInfoFile : public ::java::lang::Object {
	$class(ZoneInfoFile, 0, ::java::lang::Object)
public:
	ZoneInfoFile();
	void init$();
	static void addOldMapping();
	static int32_t addTrans($longs* transitions, int32_t nTrans, $ints* offsets, int32_t nOffsets, int64_t trans, int32_t offset, int32_t stdOffset);
	static ::java::util::Map* getAliasMap();
	static ::sun::util::calendar::ZoneInfo* getCustomTimeZone($String* originalId, int32_t gmtOffset);
	static int32_t getStandardOffset($longs* standardTransitions, $ints* standardOffsets, int64_t epochSec);
	static $String* getVersion();
	static int32_t getYear(int64_t epochSecond, int32_t offset);
	static $StringArray* getZoneIds();
	static $StringArray* getZoneIds(int32_t rawOffset);
	static ::sun::util::calendar::ZoneInfo* getZoneInfo($String* zoneId);
	static ::sun::util::calendar::ZoneInfo* getZoneInfo(::java::io::DataInput* in, $String* zoneId);
	static ::sun::util::calendar::ZoneInfo* getZoneInfo($String* zoneId, $longs* standardTransitions, $ints* standardOffsets, $longs* savingsInstantTransitions, $ints* wallOffsets, $Array<::sun::util::calendar::ZoneInfoFile$ZoneOffsetTransitionRule>* lastRules);
	static ::sun::util::calendar::ZoneInfo* getZoneInfo0($String* zoneId);
	static int32_t indexOf($ints* offsets, int32_t from, int32_t nOffsets, int32_t offset);
	static void load(::java::io::DataInputStream* dis);
	static int64_t readEpochSec(::java::io::DataInput* in);
	static int32_t readOffset(::java::io::DataInput* in);
	static $String* toCustomID(int32_t gmtOffset);
	static bool useOldMapping();
	static $String* versionId;
	static ::java::util::Map* zones;
	static ::java::util::Map* aliases;
	static $Array<int8_t, 2>* ruleArray;
	static $StringArray* regions;
	static $ints* indices;
	static bool USE_OLDMAPPING;
	static $Array<::java::lang::String, 2>* oldMappings;
	static const int64_t UTC1900 = (int64_t)0xFFFFFFFF7C558180;
	static const int64_t UTC2037 = (int64_t)2145916799;
	static const int64_t LDT2037 = (int64_t)2114380800;
	static int64_t CURRT;
	static const int32_t SECONDS_PER_DAY = 0x00015180;
	static const int32_t DAYS_PER_CYCLE = 0x00023AB1;
	static const int64_t DAYS_0000_TO_1970 = 719528; // (DAYS_PER_CYCLE * (int64_t)5) - ((int64_t)30 * (int64_t)365 + (int64_t)7)
	static $ints* toCalendarDOW;
	static $ints* toSTZTime;
	static const int64_t OFFSET_MASK = (int64_t)15;
	static const int64_t DST_MASK = (int64_t)240;
	static const int32_t DST_NSHIFT = 4;
	static const int32_t TRANSITION_NSHIFT = 12;
	static const int32_t LASTYEAR = 2037;
};

		} // calendar
	} // util
} // sun

#pragma pop_macro("SECONDS_PER_DAY")
#pragma pop_macro("CURRT")
#pragma pop_macro("LASTYEAR")
#pragma pop_macro("OFFSET_MASK")
#pragma pop_macro("TRANSITION_NSHIFT")
#pragma pop_macro("DAYS_PER_CYCLE")
#pragma pop_macro("DST_MASK")
#pragma pop_macro("DST_NSHIFT")
#pragma pop_macro("USE_OLDMAPPING")

#endif // _sun_util_calendar_ZoneInfoFile_h_