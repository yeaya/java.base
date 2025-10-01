#ifndef _java_time_OffsetTime_h_
#define _java_time_OffsetTime_h_
//$ class java.time.OffsetTime
//$ extends java.time.temporal.Temporal
//$ implements java.time.temporal.TemporalAdjuster,java.lang.Comparable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAdjuster.h>

#pragma push_macro("MIN")
#undef MIN
#pragma push_macro("MAX")
#undef MAX

namespace java {
	namespace io {
		class ObjectInput;
		class ObjectInputStream;
		class ObjectOutput;
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
		class LocalTime;
		class OffsetDateTime;
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

class $export OffsetTime : public ::java::time::temporal::Temporal, public ::java::time::temporal::TemporalAdjuster, public ::java::lang::Comparable, public ::java::io::Serializable {
	$class(OffsetTime, 0, ::java::time::temporal::Temporal, ::java::time::temporal::TemporalAdjuster, ::java::lang::Comparable, ::java::io::Serializable)
public:
	OffsetTime();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::LocalTime* time, ::java::time::ZoneOffset* offset);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	::java::time::OffsetDateTime* atDate(::java::time::LocalDate* date);
	int32_t compareTo(::java::time::OffsetTime* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* obj) override;
	$String* format(::java::time::format::DateTimeFormatter* formatter);
	static ::java::time::OffsetTime* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	int32_t getHour();
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	int32_t getMinute();
	int32_t getNano();
	::java::time::ZoneOffset* getOffset();
	int32_t getSecond();
	virtual int32_t hashCode() override;
	bool isAfter(::java::time::OffsetTime* other);
	bool isBefore(::java::time::OffsetTime* other);
	bool isEqual(::java::time::OffsetTime* other);
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::OffsetTime* minus(::java::time::temporal::TemporalAmount* amountToSubtract) override;
	virtual ::java::time::OffsetTime* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::OffsetTime* minusHours(int64_t hours);
	::java::time::OffsetTime* minusMinutes(int64_t minutes);
	::java::time::OffsetTime* minusNanos(int64_t nanos);
	::java::time::OffsetTime* minusSeconds(int64_t seconds);
	static ::java::time::OffsetTime* now();
	static ::java::time::OffsetTime* now(::java::time::ZoneId* zone);
	static ::java::time::OffsetTime* now(::java::time::Clock* clock);
	static ::java::time::OffsetTime* of(::java::time::LocalTime* time, ::java::time::ZoneOffset* offset);
	static ::java::time::OffsetTime* of(int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond, ::java::time::ZoneOffset* offset);
	static ::java::time::OffsetTime* ofInstant(::java::time::Instant* instant, ::java::time::ZoneId* zone);
	static ::java::time::OffsetTime* parse(::java::lang::CharSequence* text);
	static ::java::time::OffsetTime* parse(::java::lang::CharSequence* text, ::java::time::format::DateTimeFormatter* formatter);
	virtual ::java::time::OffsetTime* plus(::java::time::temporal::TemporalAmount* amountToAdd) override;
	virtual ::java::time::OffsetTime* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::OffsetTime* plusHours(int64_t hours);
	::java::time::OffsetTime* plusMinutes(int64_t minutes);
	::java::time::OffsetTime* plusNanos(int64_t nanos);
	::java::time::OffsetTime* plusSeconds(int64_t seconds);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::OffsetTime* readExternal(::java::io::ObjectInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	int64_t toEpochNano();
	int64_t toEpochSecond(::java::time::LocalDate* date);
	::java::time::LocalTime* toLocalTime();
	virtual $String* toString() override;
	::java::time::OffsetTime* truncatedTo(::java::time::temporal::TemporalUnit* unit);
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::OffsetTime* with(::java::time::LocalTime* time, ::java::time::ZoneOffset* offset);
	virtual ::java::time::OffsetTime* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::OffsetTime* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	::java::time::OffsetTime* withHour(int32_t hour);
	::java::time::OffsetTime* withMinute(int32_t minute);
	::java::time::OffsetTime* withNano(int32_t nanoOfSecond);
	::java::time::OffsetTime* withOffsetSameInstant(::java::time::ZoneOffset* offset);
	::java::time::OffsetTime* withOffsetSameLocal(::java::time::ZoneOffset* offset);
	::java::time::OffsetTime* withSecond(int32_t second);
	void writeExternal(::java::io::ObjectOutput* out);
	$Object* writeReplace();
	static ::java::time::OffsetTime* MIN;
	static ::java::time::OffsetTime* MAX;
	static const int64_t serialVersionUID = (int64_t)0x64D0AFFDFEC1386C;
	::java::time::LocalTime* time = nullptr;
	::java::time::ZoneOffset* offset = nullptr;
};

	} // time
} // java

#pragma pop_macro("MIN")
#pragma pop_macro("MAX")

#endif // _java_time_OffsetTime_h_