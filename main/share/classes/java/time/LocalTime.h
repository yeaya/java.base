#ifndef _java_time_LocalTime_h_
#define _java_time_LocalTime_h_
//$ class java.time.LocalTime
//$ extends java.time.temporal.Temporal
//$ implements java.time.temporal.TemporalAdjuster,java.lang.Comparable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Comparable.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAdjuster.h>

#pragma push_macro("MINUTES_PER_DAY")
#undef MINUTES_PER_DAY
#pragma push_macro("SECONDS_PER_MINUTE")
#undef SECONDS_PER_MINUTE
#pragma push_macro("SECONDS_PER_DAY")
#undef SECONDS_PER_DAY
#pragma push_macro("NOON")
#undef NOON
#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("NANOS_PER_DAY")
#undef NANOS_PER_DAY
#pragma push_macro("MILLIS_PER_DAY")
#undef MILLIS_PER_DAY
#pragma push_macro("MIDNIGHT")
#undef MIDNIGHT
#pragma push_macro("HOURS_PER_DAY")
#undef HOURS_PER_DAY
#pragma push_macro("NANOS_PER_HOUR")
#undef NANOS_PER_HOUR
#pragma push_macro("SECONDS_PER_HOUR")
#undef SECONDS_PER_HOUR
#pragma push_macro("NANOS_PER_SECOND")
#undef NANOS_PER_SECOND
#pragma push_macro("MIN")
#undef MIN
#pragma push_macro("NANOS_PER_MINUTE")
#undef NANOS_PER_MINUTE
#pragma push_macro("HOURS")
#undef HOURS
#pragma push_macro("NANOS_PER_MILLI")
#undef NANOS_PER_MILLI
#pragma push_macro("MICROS_PER_DAY")
#undef MICROS_PER_DAY
#pragma push_macro("MINUTES_PER_HOUR")
#undef MINUTES_PER_HOUR

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
		class Instant;
		class LocalDate;
		class LocalDateTime;
		class OffsetTime;
		class ZoneId;
		class ZoneOffset;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatter;
		}
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

class $export LocalTime : public ::java::time::temporal::Temporal, public ::java::time::temporal::TemporalAdjuster, public ::java::lang::Comparable, public ::java::io::Serializable {
	$class(LocalTime, 0, ::java::time::temporal::Temporal, ::java::time::temporal::TemporalAdjuster, ::java::lang::Comparable, ::java::io::Serializable)
public:
	LocalTime();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	::java::time::LocalDateTime* atDate(::java::time::LocalDate* date);
	::java::time::OffsetTime* atOffset(::java::time::ZoneOffset* offset);
	int32_t compareTo(::java::time::LocalTime* other);
	virtual int32_t compareTo(Object$* other) override;
	static ::java::time::LocalTime* create(int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond);
	virtual bool equals(Object$* obj) override;
	$String* format(::java::time::format::DateTimeFormatter* formatter);
	static ::java::time::LocalTime* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	int32_t get0(::java::time::temporal::TemporalField* field);
	int32_t getHour();
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	int32_t getMinute();
	int32_t getNano();
	int32_t getSecond();
	virtual int32_t hashCode() override;
	bool isAfter(::java::time::LocalTime* other);
	bool isBefore(::java::time::LocalTime* other);
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::LocalTime* minus(::java::time::temporal::TemporalAmount* amountToSubtract) override;
	virtual ::java::time::LocalTime* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::LocalTime* minusHours(int64_t hoursToSubtract);
	::java::time::LocalTime* minusMinutes(int64_t minutesToSubtract);
	::java::time::LocalTime* minusNanos(int64_t nanosToSubtract);
	::java::time::LocalTime* minusSeconds(int64_t secondsToSubtract);
	static ::java::time::LocalTime* now();
	static ::java::time::LocalTime* now(::java::time::ZoneId* zone);
	static ::java::time::LocalTime* now(::java::time::Clock* clock);
	static ::java::time::LocalTime* of(int32_t hour, int32_t minute);
	static ::java::time::LocalTime* of(int32_t hour, int32_t minute, int32_t second);
	static ::java::time::LocalTime* of(int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond);
	static ::java::time::LocalTime* ofInstant(::java::time::Instant* instant, ::java::time::ZoneId* zone);
	static ::java::time::LocalTime* ofNanoOfDay(int64_t nanoOfDay);
	static ::java::time::LocalTime* ofSecondOfDay(int64_t secondOfDay);
	static ::java::time::LocalTime* parse(::java::lang::CharSequence* text);
	static ::java::time::LocalTime* parse(::java::lang::CharSequence* text, ::java::time::format::DateTimeFormatter* formatter);
	virtual ::java::time::LocalTime* plus(::java::time::temporal::TemporalAmount* amountToAdd) override;
	virtual ::java::time::LocalTime* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::LocalTime* plusHours(int64_t hoursToAdd);
	::java::time::LocalTime* plusMinutes(int64_t minutesToAdd);
	::java::time::LocalTime* plusNanos(int64_t nanosToAdd);
	::java::time::LocalTime* plusSeconds(int64_t secondstoAdd);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::LocalTime* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	int64_t toEpochSecond(::java::time::LocalDate* date, ::java::time::ZoneOffset* offset);
	int64_t toNanoOfDay();
	int32_t toSecondOfDay();
	virtual $String* toString() override;
	::java::time::LocalTime* truncatedTo(::java::time::temporal::TemporalUnit* unit);
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::LocalTime* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::LocalTime* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	::java::time::LocalTime* withHour(int32_t hour);
	::java::time::LocalTime* withMinute(int32_t minute);
	::java::time::LocalTime* withNano(int32_t nanoOfSecond);
	::java::time::LocalTime* withSecond(int32_t second);
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static ::java::time::LocalTime* MIN;
	static ::java::time::LocalTime* MAX;
	static ::java::time::LocalTime* MIDNIGHT;
	static ::java::time::LocalTime* NOON;
	static $Array<::java::time::LocalTime>* HOURS;
	static const int32_t HOURS_PER_DAY = 24;
	static const int32_t MINUTES_PER_HOUR = 60;
	static const int32_t MINUTES_PER_DAY = 1440; // MINUTES_PER_HOUR * HOURS_PER_DAY
	static const int32_t SECONDS_PER_MINUTE = 60;
	static const int32_t SECONDS_PER_HOUR = 3600; // SECONDS_PER_MINUTE * MINUTES_PER_HOUR
	static const int32_t SECONDS_PER_DAY = 86400; // SECONDS_PER_HOUR * HOURS_PER_DAY
	static const int64_t MILLIS_PER_DAY = 86400000; // SECONDS_PER_DAY * (int64_t)1000
	static const int64_t MICROS_PER_DAY = 86400000000; // SECONDS_PER_DAY * (int64_t)1000000
	static const int64_t NANOS_PER_MILLI = (int64_t)1000000;
	static const int64_t NANOS_PER_SECOND = (int64_t)1000000000;
	static const int64_t NANOS_PER_MINUTE = 60000000000; // NANOS_PER_SECOND * SECONDS_PER_MINUTE
	static const int64_t NANOS_PER_HOUR = 3600000000000; // NANOS_PER_MINUTE * MINUTES_PER_HOUR
	static const int64_t NANOS_PER_DAY = 86400000000000; // NANOS_PER_HOUR * HOURS_PER_DAY
	static const int64_t serialVersionUID = (int64_t)0x5904A8B626E1A4F1;
	int8_t hour = 0;
	int8_t minute = 0;
	int8_t second = 0;
	int32_t nano = 0;
};

	} // time
} // java

#pragma pop_macro("MINUTES_PER_DAY")
#pragma pop_macro("SECONDS_PER_MINUTE")
#pragma pop_macro("SECONDS_PER_DAY")
#pragma pop_macro("NOON")
#pragma pop_macro("MAX")
#pragma pop_macro("NANOS_PER_DAY")
#pragma pop_macro("MILLIS_PER_DAY")
#pragma pop_macro("MIDNIGHT")
#pragma pop_macro("HOURS_PER_DAY")
#pragma pop_macro("NANOS_PER_HOUR")
#pragma pop_macro("SECONDS_PER_HOUR")
#pragma pop_macro("NANOS_PER_SECOND")
#pragma pop_macro("MIN")
#pragma pop_macro("NANOS_PER_MINUTE")
#pragma pop_macro("HOURS")
#pragma pop_macro("NANOS_PER_MILLI")
#pragma pop_macro("MICROS_PER_DAY")
#pragma pop_macro("MINUTES_PER_HOUR")

#endif // _java_time_LocalTime_h_