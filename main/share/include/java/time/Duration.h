#ifndef _java_time_Duration_h_
#define _java_time_Duration_h_
//$ class java.time.Duration
//$ extends java.time.temporal.TemporalAmount
//$ implements java.lang.Comparable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/time/temporal/TemporalAmount.h>

#pragma push_macro("ZERO")
#undef ZERO
#pragma push_macro("BI_NANOS_PER_SECOND")
#undef BI_NANOS_PER_SECOND

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
	namespace math {
		class BigDecimal;
		class BigInteger;
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalUnit;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace time {

class $import Duration : public ::java::time::temporal::TemporalAmount, public ::java::lang::Comparable, public ::java::io::Serializable {
	$class(Duration, 0, ::java::time::temporal::TemporalAmount, ::java::lang::Comparable, ::java::io::Serializable)
public:
	Duration();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int64_t seconds, int32_t nanos);
	::java::time::Duration* abs();
	virtual ::java::time::temporal::Temporal* addTo(::java::time::temporal::Temporal* temporal) override;
	static ::java::time::Duration* between(::java::time::temporal::Temporal* startInclusive, ::java::time::temporal::Temporal* endExclusive);
	static bool charMatch(::java::lang::CharSequence* text, int32_t start, int32_t end, char16_t c);
	int32_t compareTo(::java::time::Duration* otherDuration);
	virtual int32_t compareTo(Object$* otherDuration) override;
	static ::java::time::Duration* create(bool negate, int64_t daysAsSecs, int64_t hoursAsSecs, int64_t minsAsSecs, int64_t secs, int32_t nanos);
	static ::java::time::Duration* create(int64_t seconds, int32_t nanoAdjustment);
	static ::java::time::Duration* create(::java::math::BigDecimal* seconds);
	::java::time::Duration* dividedBy(int64_t divisor);
	int64_t dividedBy(::java::time::Duration* divisor);
	virtual bool equals(Object$* other) override;
	static ::java::time::Duration* from(::java::time::temporal::TemporalAmount* amount);
	virtual int64_t get(::java::time::temporal::TemporalUnit* unit) override;
	int32_t getNano();
	int64_t getSeconds();
	virtual ::java::util::List* getUnits() override;
	virtual int32_t hashCode() override;
	bool isNegative();
	bool isZero();
	::java::time::Duration* minus(::java::time::Duration* duration);
	::java::time::Duration* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit);
	::java::time::Duration* minusDays(int64_t daysToSubtract);
	::java::time::Duration* minusHours(int64_t hoursToSubtract);
	::java::time::Duration* minusMillis(int64_t millisToSubtract);
	::java::time::Duration* minusMinutes(int64_t minutesToSubtract);
	::java::time::Duration* minusNanos(int64_t nanosToSubtract);
	::java::time::Duration* minusSeconds(int64_t secondsToSubtract);
	::java::time::Duration* multipliedBy(int64_t multiplicand);
	::java::time::Duration* negated();
	static ::java::time::Duration* of(int64_t amount, ::java::time::temporal::TemporalUnit* unit);
	static ::java::time::Duration* ofDays(int64_t days);
	static ::java::time::Duration* ofHours(int64_t hours);
	static ::java::time::Duration* ofMillis(int64_t millis);
	static ::java::time::Duration* ofMinutes(int64_t minutes);
	static ::java::time::Duration* ofNanos(int64_t nanos);
	static ::java::time::Duration* ofSeconds(int64_t seconds);
	static ::java::time::Duration* ofSeconds(int64_t seconds, int64_t nanoAdjustment);
	static ::java::time::Duration* parse(::java::lang::CharSequence* text);
	static int32_t parseFraction(::java::lang::CharSequence* text, int32_t start, int32_t end, int32_t negate);
	static int64_t parseNumber(::java::lang::CharSequence* text, int32_t start, int32_t end, int32_t multiplier, $String* errorText);
	::java::time::Duration* plus(::java::time::Duration* duration);
	::java::time::Duration* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit);
	::java::time::Duration* plus(int64_t secondsToAdd, int64_t nanosToAdd);
	::java::time::Duration* plusDays(int64_t daysToAdd);
	::java::time::Duration* plusHours(int64_t hoursToAdd);
	::java::time::Duration* plusMillis(int64_t millisToAdd);
	::java::time::Duration* plusMinutes(int64_t minutesToAdd);
	::java::time::Duration* plusNanos(int64_t nanosToAdd);
	::java::time::Duration* plusSeconds(int64_t secondsToAdd);
	static ::java::time::Duration* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::time::temporal::Temporal* subtractFrom(::java::time::temporal::Temporal* temporal) override;
	::java::math::BigDecimal* toBigDecimalSeconds();
	int64_t toDays();
	int64_t toDaysPart();
	int64_t toHours();
	int32_t toHoursPart();
	int64_t toMillis();
	int32_t toMillisPart();
	int64_t toMinutes();
	int32_t toMinutesPart();
	int64_t toNanos();
	int32_t toNanosPart();
	int64_t toSeconds();
	int32_t toSecondsPart();
	virtual $String* toString() override;
	::java::time::Duration* truncatedTo(::java::time::temporal::TemporalUnit* unit);
	::java::time::Duration* withNanos(int32_t nanoOfSecond);
	::java::time::Duration* withSeconds(int64_t seconds);
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static ::java::time::Duration* ZERO;
	static const int64_t serialVersionUID = (int64_t)0x2ABA9D02D1C4F832;
	static ::java::math::BigInteger* BI_NANOS_PER_SECOND;
	int64_t seconds = 0;
	int32_t nanos = 0;
};

	} // time
} // java

#pragma pop_macro("ZERO")
#pragma pop_macro("BI_NANOS_PER_SECOND")

#endif // _java_time_Duration_h_