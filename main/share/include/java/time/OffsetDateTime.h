#ifndef _java_time_OffsetDateTime_h_
#define _java_time_OffsetDateTime_h_
//$ class java.time.OffsetDateTime
//$ extends java.time.temporal.Temporal
//$ implements java.time.temporal.TemporalAdjuster,java.lang.Comparable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAdjuster.h>

#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("MIN")
#undef MIN

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
		class DayOfWeek;
		class Instant;
		class LocalDate;
		class LocalDateTime;
		class LocalTime;
		class Month;
		class OffsetTime;
		class ZoneId;
		class ZoneOffset;
		class ZonedDateTime;
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
	namespace util {
		class Comparator;
	}
}

namespace java {
	namespace time {

class $import OffsetDateTime : public ::java::time::temporal::Temporal, public ::java::time::temporal::TemporalAdjuster, public ::java::lang::Comparable, public ::java::io::Serializable {
	$class(OffsetDateTime, 0, ::java::time::temporal::Temporal, ::java::time::temporal::TemporalAdjuster, ::java::lang::Comparable, ::java::io::Serializable)
public:
	OffsetDateTime();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::LocalDateTime* dateTime, ::java::time::ZoneOffset* offset);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	::java::time::ZonedDateTime* atZoneSameInstant(::java::time::ZoneId* zone);
	::java::time::ZonedDateTime* atZoneSimilarLocal(::java::time::ZoneId* zone);
	static int32_t compareInstant(::java::time::OffsetDateTime* datetime1, ::java::time::OffsetDateTime* datetime2);
	int32_t compareTo(::java::time::OffsetDateTime* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* obj) override;
	$String* format(::java::time::format::DateTimeFormatter* formatter);
	static ::java::time::OffsetDateTime* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	int32_t getDayOfMonth();
	::java::time::DayOfWeek* getDayOfWeek();
	int32_t getDayOfYear();
	int32_t getHour();
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	int32_t getMinute();
	::java::time::Month* getMonth();
	int32_t getMonthValue();
	int32_t getNano();
	::java::time::ZoneOffset* getOffset();
	int32_t getSecond();
	int32_t getYear();
	virtual int32_t hashCode() override;
	bool isAfter(::java::time::OffsetDateTime* other);
	bool isBefore(::java::time::OffsetDateTime* other);
	bool isEqual(::java::time::OffsetDateTime* other);
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::OffsetDateTime* minus(::java::time::temporal::TemporalAmount* amountToSubtract) override;
	virtual ::java::time::OffsetDateTime* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::OffsetDateTime* minusDays(int64_t days);
	::java::time::OffsetDateTime* minusHours(int64_t hours);
	::java::time::OffsetDateTime* minusMinutes(int64_t minutes);
	::java::time::OffsetDateTime* minusMonths(int64_t months);
	::java::time::OffsetDateTime* minusNanos(int64_t nanos);
	::java::time::OffsetDateTime* minusSeconds(int64_t seconds);
	::java::time::OffsetDateTime* minusWeeks(int64_t weeks);
	::java::time::OffsetDateTime* minusYears(int64_t years);
	static ::java::time::OffsetDateTime* now();
	static ::java::time::OffsetDateTime* now(::java::time::ZoneId* zone);
	static ::java::time::OffsetDateTime* now(::java::time::Clock* clock);
	static ::java::time::OffsetDateTime* of(::java::time::LocalDate* date, ::java::time::LocalTime* time, ::java::time::ZoneOffset* offset);
	static ::java::time::OffsetDateTime* of(::java::time::LocalDateTime* dateTime, ::java::time::ZoneOffset* offset);
	static ::java::time::OffsetDateTime* of(int32_t year, int32_t month, int32_t dayOfMonth, int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond, ::java::time::ZoneOffset* offset);
	static ::java::time::OffsetDateTime* ofInstant(::java::time::Instant* instant, ::java::time::ZoneId* zone);
	static ::java::time::OffsetDateTime* parse(::java::lang::CharSequence* text);
	static ::java::time::OffsetDateTime* parse(::java::lang::CharSequence* text, ::java::time::format::DateTimeFormatter* formatter);
	virtual ::java::time::OffsetDateTime* plus(::java::time::temporal::TemporalAmount* amountToAdd) override;
	virtual ::java::time::OffsetDateTime* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::OffsetDateTime* plusDays(int64_t days);
	::java::time::OffsetDateTime* plusHours(int64_t hours);
	::java::time::OffsetDateTime* plusMinutes(int64_t minutes);
	::java::time::OffsetDateTime* plusMonths(int64_t months);
	::java::time::OffsetDateTime* plusNanos(int64_t nanos);
	::java::time::OffsetDateTime* plusSeconds(int64_t seconds);
	::java::time::OffsetDateTime* plusWeeks(int64_t weeks);
	::java::time::OffsetDateTime* plusYears(int64_t years);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::OffsetDateTime* readExternal(::java::io::ObjectInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	static ::java::util::Comparator* timeLineOrder();
	int64_t toEpochSecond();
	::java::time::Instant* toInstant();
	::java::time::LocalDate* toLocalDate();
	::java::time::LocalDateTime* toLocalDateTime();
	::java::time::LocalTime* toLocalTime();
	::java::time::OffsetTime* toOffsetTime();
	virtual $String* toString() override;
	::java::time::ZonedDateTime* toZonedDateTime();
	::java::time::OffsetDateTime* truncatedTo(::java::time::temporal::TemporalUnit* unit);
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::OffsetDateTime* with(::java::time::LocalDateTime* dateTime, ::java::time::ZoneOffset* offset);
	virtual ::java::time::OffsetDateTime* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::OffsetDateTime* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	::java::time::OffsetDateTime* withDayOfMonth(int32_t dayOfMonth);
	::java::time::OffsetDateTime* withDayOfYear(int32_t dayOfYear);
	::java::time::OffsetDateTime* withHour(int32_t hour);
	::java::time::OffsetDateTime* withMinute(int32_t minute);
	::java::time::OffsetDateTime* withMonth(int32_t month);
	::java::time::OffsetDateTime* withNano(int32_t nanoOfSecond);
	::java::time::OffsetDateTime* withOffsetSameInstant(::java::time::ZoneOffset* offset);
	::java::time::OffsetDateTime* withOffsetSameLocal(::java::time::ZoneOffset* offset);
	::java::time::OffsetDateTime* withSecond(int32_t second);
	::java::time::OffsetDateTime* withYear(int32_t year);
	void writeExternal(::java::io::ObjectOutput* out);
	$Object* writeReplace();
	static ::java::time::OffsetDateTime* MIN;
	static ::java::time::OffsetDateTime* MAX;
	static const int64_t serialVersionUID = (int64_t)0x1FBFBC5D57D80062;
	::java::time::LocalDateTime* dateTime = nullptr;
	::java::time::ZoneOffset* offset = nullptr;
};

	} // time
} // java

#pragma pop_macro("MAX")
#pragma pop_macro("MIN")

#endif // _java_time_OffsetDateTime_h_