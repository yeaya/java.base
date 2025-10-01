#ifndef _java_time_ZonedDateTime_h_
#define _java_time_ZonedDateTime_h_
//$ class java.time.ZonedDateTime
//$ extends java.time.chrono.ChronoZonedDateTime
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/ChronoZonedDateTime.h>

namespace java {
	namespace io {
		class DataOutput;
		class ObjectInput;
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
		class LocalDateTime;
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
			class ChronoLocalDateTime;
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

class $import ZonedDateTime : public ::java::time::chrono::ChronoZonedDateTime, public ::java::io::Serializable {
	$class(ZonedDateTime, $NO_CLASS_INIT, ::java::time::chrono::ChronoZonedDateTime, ::java::io::Serializable)
public:
	ZonedDateTime();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::time::chrono::ChronoZonedDateTime::compareTo;
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::LocalDateTime* dateTime, ::java::time::ZoneOffset* offset, ::java::time::ZoneId* zone);
	static ::java::time::ZonedDateTime* create(int64_t epochSecond, int32_t nanoOfSecond, ::java::time::ZoneId* zone);
	virtual bool equals(Object$* obj) override;
	virtual $String* format(::java::time::format::DateTimeFormatter* formatter) override;
	static ::java::time::ZonedDateTime* from(::java::time::temporal::TemporalAccessor* temporal);
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
	virtual ::java::time::ZoneOffset* getOffset() override;
	int32_t getSecond();
	int32_t getYear();
	virtual ::java::time::ZoneId* getZone() override;
	virtual int32_t hashCode() override;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::ZonedDateTime* minus(::java::time::temporal::TemporalAmount* amountToSubtract) override;
	virtual ::java::time::ZonedDateTime* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::ZonedDateTime* minusDays(int64_t days);
	::java::time::ZonedDateTime* minusHours(int64_t hours);
	::java::time::ZonedDateTime* minusMinutes(int64_t minutes);
	::java::time::ZonedDateTime* minusMonths(int64_t months);
	::java::time::ZonedDateTime* minusNanos(int64_t nanos);
	::java::time::ZonedDateTime* minusSeconds(int64_t seconds);
	::java::time::ZonedDateTime* minusWeeks(int64_t weeks);
	::java::time::ZonedDateTime* minusYears(int64_t years);
	static ::java::time::ZonedDateTime* now();
	static ::java::time::ZonedDateTime* now(::java::time::ZoneId* zone);
	static ::java::time::ZonedDateTime* now(::java::time::Clock* clock);
	static ::java::time::ZonedDateTime* of(::java::time::LocalDate* date, ::java::time::LocalTime* time, ::java::time::ZoneId* zone);
	static ::java::time::ZonedDateTime* of(::java::time::LocalDateTime* localDateTime, ::java::time::ZoneId* zone);
	static ::java::time::ZonedDateTime* of(int32_t year, int32_t month, int32_t dayOfMonth, int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond, ::java::time::ZoneId* zone);
	static ::java::time::ZonedDateTime* ofInstant(::java::time::Instant* instant, ::java::time::ZoneId* zone);
	static ::java::time::ZonedDateTime* ofInstant(::java::time::LocalDateTime* localDateTime, ::java::time::ZoneOffset* offset, ::java::time::ZoneId* zone);
	static ::java::time::ZonedDateTime* ofLenient(::java::time::LocalDateTime* localDateTime, ::java::time::ZoneOffset* offset, ::java::time::ZoneId* zone);
	static ::java::time::ZonedDateTime* ofLocal(::java::time::LocalDateTime* localDateTime, ::java::time::ZoneId* zone, ::java::time::ZoneOffset* preferredOffset);
	static ::java::time::ZonedDateTime* ofStrict(::java::time::LocalDateTime* localDateTime, ::java::time::ZoneOffset* offset, ::java::time::ZoneId* zone);
	static ::java::time::ZonedDateTime* parse(::java::lang::CharSequence* text);
	static ::java::time::ZonedDateTime* parse(::java::lang::CharSequence* text, ::java::time::format::DateTimeFormatter* formatter);
	virtual ::java::time::ZonedDateTime* plus(::java::time::temporal::TemporalAmount* amountToAdd) override;
	virtual ::java::time::ZonedDateTime* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::ZonedDateTime* plusDays(int64_t days);
	::java::time::ZonedDateTime* plusHours(int64_t hours);
	::java::time::ZonedDateTime* plusMinutes(int64_t minutes);
	::java::time::ZonedDateTime* plusMonths(int64_t months);
	::java::time::ZonedDateTime* plusNanos(int64_t nanos);
	::java::time::ZonedDateTime* plusSeconds(int64_t seconds);
	::java::time::ZonedDateTime* plusWeeks(int64_t weeks);
	::java::time::ZonedDateTime* plusYears(int64_t years);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::ZonedDateTime* readExternal(::java::io::ObjectInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	::java::time::ZonedDateTime* resolveInstant(::java::time::LocalDateTime* newDateTime);
	::java::time::ZonedDateTime* resolveLocal(::java::time::LocalDateTime* newDateTime);
	::java::time::ZonedDateTime* resolveOffset(::java::time::ZoneOffset* offset);
	virtual ::java::time::chrono::ChronoLocalDate* toLocalDate() override;
	virtual ::java::time::chrono::ChronoLocalDateTime* toLocalDateTime() override;
	virtual ::java::time::LocalTime* toLocalTime() override;
	::java::time::OffsetDateTime* toOffsetDateTime();
	virtual $String* toString() override;
	::java::time::ZonedDateTime* truncatedTo(::java::time::temporal::TemporalUnit* unit);
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::ZonedDateTime* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::ZonedDateTime* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	::java::time::ZonedDateTime* withDayOfMonth(int32_t dayOfMonth);
	::java::time::ZonedDateTime* withDayOfYear(int32_t dayOfYear);
	virtual ::java::time::ZonedDateTime* withEarlierOffsetAtOverlap() override;
	::java::time::ZonedDateTime* withFixedOffsetZone();
	::java::time::ZonedDateTime* withHour(int32_t hour);
	virtual ::java::time::ZonedDateTime* withLaterOffsetAtOverlap() override;
	::java::time::ZonedDateTime* withMinute(int32_t minute);
	::java::time::ZonedDateTime* withMonth(int32_t month);
	::java::time::ZonedDateTime* withNano(int32_t nanoOfSecond);
	::java::time::ZonedDateTime* withSecond(int32_t second);
	::java::time::ZonedDateTime* withYear(int32_t year);
	virtual ::java::time::ZonedDateTime* withZoneSameInstant(::java::time::ZoneId* zone) override;
	virtual ::java::time::ZonedDateTime* withZoneSameLocal(::java::time::ZoneId* zone) override;
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0xA91C85AB777AC83E;
	::java::time::LocalDateTime* dateTime = nullptr;
	::java::time::ZoneOffset* offset = nullptr;
	::java::time::ZoneId* zone = nullptr;
};

	} // time
} // java

#endif // _java_time_ZonedDateTime_h_