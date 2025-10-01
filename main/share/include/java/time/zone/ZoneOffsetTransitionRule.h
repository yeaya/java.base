#ifndef _java_time_zone_ZoneOffsetTransitionRule_h_
#define _java_time_zone_ZoneOffsetTransitionRule_h_
//$ class java.time.zone.ZoneOffsetTransitionRule
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		class DayOfWeek;
		class LocalTime;
		class Month;
		class ZoneOffset;
	}
}
namespace java {
	namespace time {
		namespace zone {
			class ZoneOffsetTransition;
			class ZoneOffsetTransitionRule$TimeDefinition;
		}
	}
}

namespace java {
	namespace time {
		namespace zone {

class $import ZoneOffsetTransitionRule : public ::java::io::Serializable {
	$class(ZoneOffsetTransitionRule, 0, ::java::io::Serializable)
public:
	ZoneOffsetTransitionRule();
	void init$(::java::time::Month* month, int32_t dayOfMonthIndicator, ::java::time::DayOfWeek* dayOfWeek, ::java::time::LocalTime* time, bool timeEndOfDay, ::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition* timeDefinition, ::java::time::ZoneOffset* standardOffset, ::java::time::ZoneOffset* offsetBefore, ::java::time::ZoneOffset* offsetAfter);
	::java::time::zone::ZoneOffsetTransition* createTransition(int32_t year);
	virtual bool equals(Object$* otherRule) override;
	int32_t getDayOfMonthIndicator();
	::java::time::DayOfWeek* getDayOfWeek();
	::java::time::LocalTime* getLocalTime();
	::java::time::Month* getMonth();
	::java::time::ZoneOffset* getOffsetAfter();
	::java::time::ZoneOffset* getOffsetBefore();
	::java::time::ZoneOffset* getStandardOffset();
	::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition* getTimeDefinition();
	virtual int32_t hashCode() override;
	bool isMidnightEndOfDay();
	static ::java::time::zone::ZoneOffsetTransitionRule* of(::java::time::Month* month, int32_t dayOfMonthIndicator, ::java::time::DayOfWeek* dayOfWeek, ::java::time::LocalTime* time, bool timeEndOfDay, ::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition* timeDefinition, ::java::time::ZoneOffset* standardOffset, ::java::time::ZoneOffset* offsetBefore, ::java::time::ZoneOffset* offsetAfter);
	static ::java::time::zone::ZoneOffsetTransitionRule* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0x5F9ACF201199524B;
	::java::time::Month* month = nullptr;
	int8_t dom = 0;
	::java::time::DayOfWeek* dow = nullptr;
	::java::time::LocalTime* time = nullptr;
	bool timeEndOfDay = false;
	::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition* timeDefinition = nullptr;
	::java::time::ZoneOffset* standardOffset = nullptr;
	::java::time::ZoneOffset* offsetBefore = nullptr;
	::java::time::ZoneOffset* offsetAfter = nullptr;
};

		} // zone
	} // time
} // java

#endif // _java_time_zone_ZoneOffsetTransitionRule_h_