#ifndef _java_time_zone_ZoneOffsetTransitionRule$TimeDefinition_h_
#define _java_time_zone_ZoneOffsetTransitionRule$TimeDefinition_h_
//$ class java.time.zone.ZoneOffsetTransitionRule$TimeDefinition
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("STANDARD")
#undef STANDARD
#pragma push_macro("UTC")
#undef UTC
#pragma push_macro("WALL")
#undef WALL

namespace java {
	namespace time {
		class LocalDateTime;
		class ZoneOffset;
	}
}

namespace java {
	namespace time {
		namespace zone {

class $import ZoneOffsetTransitionRule$TimeDefinition : public ::java::lang::Enum {
	$class(ZoneOffsetTransitionRule$TimeDefinition, 0, ::java::lang::Enum)
public:
	ZoneOffsetTransitionRule$TimeDefinition();
	static $Array<::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::java::time::LocalDateTime* createDateTime(::java::time::LocalDateTime* dateTime, ::java::time::ZoneOffset* standardOffset, ::java::time::ZoneOffset* wallOffset);
	static ::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition* valueOf($String* name);
	static $Array<::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition>* values();
	static ::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition* UTC;
	static ::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition* WALL;
	static ::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition* STANDARD;
	static $Array<::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition>* $VALUES;
};

		} // zone
	} // time
} // java

#pragma pop_macro("STANDARD")
#pragma pop_macro("UTC")
#pragma pop_macro("WALL")

#endif // _java_time_zone_ZoneOffsetTransitionRule$TimeDefinition_h_