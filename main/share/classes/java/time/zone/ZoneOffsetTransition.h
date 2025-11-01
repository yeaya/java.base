#ifndef _java_time_zone_ZoneOffsetTransition_h_
#define _java_time_zone_ZoneOffsetTransition_h_
//$ class java.time.zone.ZoneOffsetTransition
//$ extends java.lang.Comparable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>

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
	namespace util {
		class List;
	}
}

namespace java {
	namespace time {
		namespace zone {

class $export ZoneOffsetTransition : public ::java::lang::Comparable, public ::java::io::Serializable {
	$class(ZoneOffsetTransition, 0, ::java::lang::Comparable, ::java::io::Serializable)
public:
	ZoneOffsetTransition();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::LocalDateTime* transition, ::java::time::ZoneOffset* offsetBefore, ::java::time::ZoneOffset* offsetAfter);
	void init$(int64_t epochSecond, ::java::time::ZoneOffset* offsetBefore, ::java::time::ZoneOffset* offsetAfter);
	int32_t compareTo(::java::time::zone::ZoneOffsetTransition* transition);
	virtual int32_t compareTo(Object$* transition) override;
	virtual bool equals(Object$* other) override;
	::java::time::LocalDateTime* getDateTimeAfter();
	::java::time::LocalDateTime* getDateTimeBefore();
	::java::time::Duration* getDuration();
	int32_t getDurationSeconds();
	::java::time::Instant* getInstant();
	::java::time::ZoneOffset* getOffsetAfter();
	::java::time::ZoneOffset* getOffsetBefore();
	::java::util::List* getValidOffsets();
	virtual int32_t hashCode() override;
	bool isGap();
	bool isOverlap();
	bool isValidOffset(::java::time::ZoneOffset* offset);
	static ::java::time::zone::ZoneOffsetTransition* of(::java::time::LocalDateTime* transition, ::java::time::ZoneOffset* offsetBefore, ::java::time::ZoneOffset* offsetAfter);
	static ::java::time::zone::ZoneOffsetTransition* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	int64_t toEpochSecond();
	virtual $String* toString() override;
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0x9F9AB17D4C397C9E;
	int64_t epochSecond = 0;
	::java::time::LocalDateTime* transition = nullptr;
	::java::time::ZoneOffset* offsetBefore = nullptr;
	::java::time::ZoneOffset* offsetAfter = nullptr;
};

		} // zone
	} // time
} // java

#endif // _java_time_zone_ZoneOffsetTransition_h_