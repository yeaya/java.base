#ifndef _java_time_Instant_h_
#define _java_time_Instant_h_
//$ class java.time.Instant
//$ extends java.time.temporal.Temporal
//$ implements java.time.temporal.TemporalAdjuster,java.lang.Comparable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAdjuster.h>

#pragma push_macro("MAX_SECOND")
#undef MAX_SECOND
#pragma push_macro("MIN")
#undef MIN
#pragma push_macro("MIN_SECOND")
#undef MIN_SECOND
#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("EPOCH")
#undef EPOCH

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace time {
		class Clock;
		class OffsetDateTime;
		class ZoneId;
		class ZoneOffset;
		class ZonedDateTime;
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalAccessor;
			class TemporalAmount;
			class TemporalField;
			class TemporalQuery;
			class TemporalUnit;
			class ValueRange;
		}
	}
}

namespace java {
	namespace time {

class $import Instant : public ::java::time::temporal::Temporal, public ::java::time::temporal::TemporalAdjuster, public ::java::lang::Comparable, public ::java::io::Serializable {
	$class(Instant, 0, ::java::time::temporal::Temporal, ::java::time::temporal::TemporalAdjuster, ::java::lang::Comparable, ::java::io::Serializable)
public:
	Instant();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int64_t epochSecond, int32_t nanos);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	::java::time::OffsetDateTime* atOffset(::java::time::ZoneOffset* offset);
	::java::time::ZonedDateTime* atZone(::java::time::ZoneId* zone);
	int32_t compareTo(::java::time::Instant* otherInstant);
	virtual int32_t compareTo(Object$* otherInstant) override;
	static ::java::time::Instant* create(int64_t seconds, int32_t nanoOfSecond);
	virtual bool equals(Object$* other) override;
	static ::java::time::Instant* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	int64_t getEpochSecond();
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	int32_t getNano();
	virtual int32_t hashCode() override;
	bool isAfter(::java::time::Instant* otherInstant);
	bool isBefore(::java::time::Instant* otherInstant);
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::Instant* minus(::java::time::temporal::TemporalAmount* amountToSubtract) override;
	virtual ::java::time::Instant* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::Instant* minusMillis(int64_t millisToSubtract);
	::java::time::Instant* minusNanos(int64_t nanosToSubtract);
	::java::time::Instant* minusSeconds(int64_t secondsToSubtract);
	int64_t nanosUntil(::java::time::Instant* end);
	static ::java::time::Instant* now();
	static ::java::time::Instant* now(::java::time::Clock* clock);
	static ::java::time::Instant* ofEpochMilli(int64_t epochMilli);
	static ::java::time::Instant* ofEpochSecond(int64_t epochSecond);
	static ::java::time::Instant* ofEpochSecond(int64_t epochSecond, int64_t nanoAdjustment);
	static ::java::time::Instant* parse(::java::lang::CharSequence* text);
	virtual ::java::time::Instant* plus(::java::time::temporal::TemporalAmount* amountToAdd) override;
	virtual ::java::time::Instant* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::Instant* plus(int64_t secondsToAdd, int64_t nanosToAdd);
	::java::time::Instant* plusMillis(int64_t millisToAdd);
	::java::time::Instant* plusNanos(int64_t nanosToAdd);
	::java::time::Instant* plusSeconds(int64_t secondsToAdd);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::Instant* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	int64_t secondsUntil(::java::time::Instant* end);
	int64_t toEpochMilli();
	virtual $String* toString() override;
	::java::time::Instant* truncatedTo(::java::time::temporal::TemporalUnit* unit);
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::Instant* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::Instant* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static ::java::time::Instant* EPOCH;
	static const int64_t MIN_SECOND = (int64_t)0xFF8FE31014641400;
	static const int64_t MAX_SECOND = (int64_t)0x00701CD2FA9578FF;
	static ::java::time::Instant* MIN;
	static ::java::time::Instant* MAX;
	static const int64_t serialVersionUID = (int64_t)0xF6C2E8F0233A231C;
	int64_t seconds = 0;
	int32_t nanos = 0;
};

	} // time
} // java

#pragma pop_macro("MAX_SECOND")
#pragma pop_macro("MIN")
#pragma pop_macro("MIN_SECOND")
#pragma pop_macro("MAX")
#pragma pop_macro("EPOCH")

#endif // _java_time_Instant_h_