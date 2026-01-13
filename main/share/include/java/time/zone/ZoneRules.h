#ifndef _java_time_zone_ZoneRules_h_
#define _java_time_zone_ZoneRules_h_
//$ class java.time.zone.ZoneRules
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("DAYS_PER_CYCLE")
#undef DAYS_PER_CYCLE
#pragma push_macro("EMPTY_LASTRULES")
#undef EMPTY_LASTRULES
#pragma push_macro("EMPTY_LDT_ARRAY")
#undef EMPTY_LDT_ARRAY
#pragma push_macro("EMPTY_LONG_ARRAY")
#undef EMPTY_LONG_ARRAY
#pragma push_macro("LAST_CACHED_YEAR")
#undef LAST_CACHED_YEAR

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		class Duration;
		class Instant;
		class LocalDateTime;
		class ZoneOffset;
	}
}
namespace java {
	namespace time {
		namespace zone {
			class ZoneOffsetTransition;
			class ZoneOffsetTransitionRule;
		}
	}
}
namespace java {
	namespace util {
		class List;
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
	namespace time {
		namespace zone {

class $import ZoneRules : public ::java::io::Serializable {
	$class(ZoneRules, 0, ::java::io::Serializable)
public:
	ZoneRules();
	void init$(::java::time::ZoneOffset* baseStandardOffset, ::java::time::ZoneOffset* baseWallOffset, ::java::util::List* standardOffsetTransitionList, ::java::util::List* transitionList, ::java::util::List* lastRules);
	void init$($longs* standardTransitions, $Array<::java::time::ZoneOffset>* standardOffsets, $longs* savingsInstantTransitions, $Array<::java::time::ZoneOffset>* wallOffsets, $Array<::java::time::zone::ZoneOffsetTransitionRule>* lastRules);
	void init$(::java::time::ZoneOffset* offset);
	virtual bool equals(Object$* otherRules) override;
	$Object* findOffsetInfo(::java::time::LocalDateTime* dt, ::java::time::zone::ZoneOffsetTransition* trans);
	$Array<::java::time::zone::ZoneOffsetTransition>* findTransitionArray(int32_t year);
	int32_t findYear(int64_t epochSecond, ::java::time::ZoneOffset* offset);
	::java::time::Duration* getDaylightSavings(::java::time::Instant* instant);
	::java::time::ZoneOffset* getOffset(::java::time::Instant* instant);
	::java::time::ZoneOffset* getOffset(::java::time::LocalDateTime* localDateTime);
	$Object* getOffsetInfo(::java::time::LocalDateTime* dt);
	::java::time::ZoneOffset* getStandardOffset(::java::time::Instant* instant);
	::java::time::zone::ZoneOffsetTransition* getTransition(::java::time::LocalDateTime* localDateTime);
	::java::util::List* getTransitionRules();
	::java::util::List* getTransitions();
	::java::util::List* getValidOffsets(::java::time::LocalDateTime* localDateTime);
	virtual int32_t hashCode() override;
	bool isDaylightSavings(::java::time::Instant* instant);
	bool isFixedOffset();
	bool isValidOffset(::java::time::LocalDateTime* localDateTime, ::java::time::ZoneOffset* offset);
	::java::time::zone::ZoneOffsetTransition* nextTransition(::java::time::Instant* instant);
	static ::java::time::zone::ZoneRules* of(::java::time::ZoneOffset* baseStandardOffset, ::java::time::ZoneOffset* baseWallOffset, ::java::util::List* standardOffsetTransitionList, ::java::util::List* transitionList, ::java::util::List* lastRules);
	static ::java::time::zone::ZoneRules* of(::java::time::ZoneOffset* offset);
	::java::time::zone::ZoneOffsetTransition* previousTransition(::java::time::Instant* instant);
	static ::java::time::zone::ZoneRules* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x2A3F985312278703;
	static const int32_t LAST_CACHED_YEAR = 2100;
	$longs* standardTransitions = nullptr;
	$Array<::java::time::ZoneOffset>* standardOffsets = nullptr;
	$longs* savingsInstantTransitions = nullptr;
	$Array<::java::time::LocalDateTime>* savingsLocalTransitions = nullptr;
	$Array<::java::time::ZoneOffset>* wallOffsets = nullptr;
	$Array<::java::time::zone::ZoneOffsetTransitionRule>* lastRules = nullptr;
	::java::util::concurrent::ConcurrentMap* lastRulesCache = nullptr;
	static $longs* EMPTY_LONG_ARRAY;
	static $Array<::java::time::zone::ZoneOffsetTransitionRule>* EMPTY_LASTRULES;
	static $Array<::java::time::LocalDateTime>* EMPTY_LDT_ARRAY;
	static const int32_t DAYS_PER_CYCLE = 0x00023AB1;
	static const int64_t DAYS_0000_TO_1970 = 719528; // (DAYS_PER_CYCLE * 5L) - (30L * 365L + 7L)
};

		} // zone
	} // time
} // java

#pragma pop_macro("DAYS_PER_CYCLE")
#pragma pop_macro("EMPTY_LASTRULES")
#pragma pop_macro("EMPTY_LDT_ARRAY")
#pragma pop_macro("EMPTY_LONG_ARRAY")
#pragma pop_macro("LAST_CACHED_YEAR")

#endif // _java_time_zone_ZoneRules_h_