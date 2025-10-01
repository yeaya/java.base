#ifndef _java_time_LocalDateTime_h_
#define _java_time_LocalDateTime_h_
//$ class java.time.LocalDateTime
//$ extends java.time.chrono.ChronoLocalDateTime
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/ChronoLocalDateTime.h>

#pragma push_macro("MIN")
#undef MIN
#pragma push_macro("MAX")
#undef MAX

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
		class DayOfWeek;
		class Instant;
		class LocalDate;
		class LocalTime;
		class Month;
		class OffsetDateTime;
		class ZoneId;
		class ZoneOffset;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class ChronoZonedDateTime;
		}
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
			class Temporal;
			class TemporalAccessor;
			class TemporalAdjuster;
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

class $export LocalDateTime : public ::java::time::chrono::ChronoLocalDateTime, public ::java::io::Serializable {
	$class(LocalDateTime, 0, ::java::time::chrono::ChronoLocalDateTime, ::java::io::Serializable)
public:
	LocalDateTime();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::LocalDate* date, ::java::time::LocalTime* time);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	::java::time::OffsetDateTime* atOffset(::java::time::ZoneOffset* offset);
	virtual ::java::time::chrono::ChronoZonedDateTime* atZone(::java::time::ZoneId* zone) override;
	virtual int32_t compareTo(::java::time::chrono::ChronoLocalDateTime* other) override;
	virtual int32_t compareTo(Object$* other) override;
	int32_t compareTo0(::java::time::LocalDateTime* other);
	virtual bool equals(Object$* obj) override;
	virtual $String* format(::java::time::format::DateTimeFormatter* formatter) override;
	static ::java::time::LocalDateTime* from(::java::time::temporal::TemporalAccessor* temporal);
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
	int32_t getSecond();
	int32_t getYear();
	virtual int32_t hashCode() override;
	virtual bool isAfter(::java::time::chrono::ChronoLocalDateTime* other) override;
	virtual bool isBefore(::java::time::chrono::ChronoLocalDateTime* other) override;
	virtual bool isEqual(::java::time::chrono::ChronoLocalDateTime* other) override;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::LocalDateTime* minus(::java::time::temporal::TemporalAmount* amountToSubtract) override;
	virtual ::java::time::LocalDateTime* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::LocalDateTime* minusDays(int64_t days);
	::java::time::LocalDateTime* minusHours(int64_t hours);
	::java::time::LocalDateTime* minusMinutes(int64_t minutes);
	::java::time::LocalDateTime* minusMonths(int64_t months);
	::java::time::LocalDateTime* minusNanos(int64_t nanos);
	::java::time::LocalDateTime* minusSeconds(int64_t seconds);
	::java::time::LocalDateTime* minusWeeks(int64_t weeks);
	::java::time::LocalDateTime* minusYears(int64_t years);
	static ::java::time::LocalDateTime* now();
	static ::java::time::LocalDateTime* now(::java::time::ZoneId* zone);
	static ::java::time::LocalDateTime* now(::java::time::Clock* clock);
	static ::java::time::LocalDateTime* of(int32_t year, ::java::time::Month* month, int32_t dayOfMonth, int32_t hour, int32_t minute);
	static ::java::time::LocalDateTime* of(int32_t year, ::java::time::Month* month, int32_t dayOfMonth, int32_t hour, int32_t minute, int32_t second);
	static ::java::time::LocalDateTime* of(int32_t year, ::java::time::Month* month, int32_t dayOfMonth, int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond);
	static ::java::time::LocalDateTime* of(int32_t year, int32_t month, int32_t dayOfMonth, int32_t hour, int32_t minute);
	static ::java::time::LocalDateTime* of(int32_t year, int32_t month, int32_t dayOfMonth, int32_t hour, int32_t minute, int32_t second);
	static ::java::time::LocalDateTime* of(int32_t year, int32_t month, int32_t dayOfMonth, int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond);
	static ::java::time::LocalDateTime* of(::java::time::LocalDate* date, ::java::time::LocalTime* time);
	static ::java::time::LocalDateTime* ofEpochSecond(int64_t epochSecond, int32_t nanoOfSecond, ::java::time::ZoneOffset* offset);
	static ::java::time::LocalDateTime* ofInstant(::java::time::Instant* instant, ::java::time::ZoneId* zone);
	static ::java::time::LocalDateTime* parse(::java::lang::CharSequence* text);
	static ::java::time::LocalDateTime* parse(::java::lang::CharSequence* text, ::java::time::format::DateTimeFormatter* formatter);
	virtual ::java::time::LocalDateTime* plus(::java::time::temporal::TemporalAmount* amountToAdd) override;
	virtual ::java::time::LocalDateTime* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::LocalDateTime* plusDays(int64_t days);
	::java::time::LocalDateTime* plusHours(int64_t hours);
	::java::time::LocalDateTime* plusMinutes(int64_t minutes);
	::java::time::LocalDateTime* plusMonths(int64_t months);
	::java::time::LocalDateTime* plusNanos(int64_t nanos);
	::java::time::LocalDateTime* plusSeconds(int64_t seconds);
	::java::time::LocalDateTime* plusWeeks(int64_t weeks);
	::java::time::LocalDateTime* plusWithOverflow(::java::time::LocalDate* newDate, int64_t hours, int64_t minutes, int64_t seconds, int64_t nanos, int32_t sign);
	::java::time::LocalDateTime* plusYears(int64_t years);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::LocalDateTime* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::time::chrono::ChronoLocalDate* toLocalDate() override;
	virtual ::java::time::LocalTime* toLocalTime() override;
	virtual $String* toString() override;
	::java::time::LocalDateTime* truncatedTo(::java::time::temporal::TemporalUnit* unit);
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::LocalDateTime* with(::java::time::LocalDate* newDate, ::java::time::LocalTime* newTime);
	virtual ::java::time::LocalDateTime* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::LocalDateTime* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	::java::time::LocalDateTime* withDayOfMonth(int32_t dayOfMonth);
	::java::time::LocalDateTime* withDayOfYear(int32_t dayOfYear);
	::java::time::LocalDateTime* withHour(int32_t hour);
	::java::time::LocalDateTime* withMinute(int32_t minute);
	::java::time::LocalDateTime* withMonth(int32_t month);
	::java::time::LocalDateTime* withNano(int32_t nanoOfSecond);
	::java::time::LocalDateTime* withSecond(int32_t second);
	::java::time::LocalDateTime* withYear(int32_t year);
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static ::java::time::LocalDateTime* MIN;
	static ::java::time::LocalDateTime* MAX;
	static const int64_t serialVersionUID = (int64_t)0x56266AA6A95FFF2E;
	::java::time::LocalDate* date = nullptr;
	::java::time::LocalTime* time = nullptr;
};

	} // time
} // java

#pragma pop_macro("MIN")
#pragma pop_macro("MAX")

#endif // _java_time_LocalDateTime_h_