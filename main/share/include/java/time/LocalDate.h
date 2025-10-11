#ifndef _java_time_LocalDate_h_
#define _java_time_LocalDate_h_
//$ class java.time.LocalDate
//$ extends java.time.chrono.ChronoLocalDate
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/ChronoLocalDate.h>

#pragma push_macro("MIN")
#undef MIN
#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("EPOCH")
#undef EPOCH
#pragma push_macro("DAYS_PER_CYCLE")
#undef DAYS_PER_CYCLE

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
		class LocalDateTime;
		class LocalTime;
		class Month;
		class OffsetDateTime;
		class OffsetTime;
		class Period;
		class ZoneId;
		class ZoneOffset;
		class ZonedDateTime;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDateTime;
			class ChronoPeriod;
			class Chronology;
			class Era;
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
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace time {

class $import LocalDate : public ::java::time::chrono::ChronoLocalDate, public ::java::io::Serializable {
	$class(LocalDate, 0, ::java::time::chrono::ChronoLocalDate, ::java::io::Serializable)
public:
	LocalDate();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t year, int32_t month, int32_t dayOfMonth);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	::java::time::LocalDateTime* atStartOfDay();
	::java::time::ZonedDateTime* atStartOfDay(::java::time::ZoneId* zone);
	virtual ::java::time::chrono::ChronoLocalDateTime* atTime(::java::time::LocalTime* time) override;
	::java::time::LocalDateTime* atTime(int32_t hour, int32_t minute);
	::java::time::LocalDateTime* atTime(int32_t hour, int32_t minute, int32_t second);
	::java::time::LocalDateTime* atTime(int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond);
	::java::time::OffsetDateTime* atTime(::java::time::OffsetTime* time);
	virtual int32_t compareTo(::java::time::chrono::ChronoLocalDate* other) override;
	virtual int32_t compareTo(Object$* other) override;
	int32_t compareTo0(::java::time::LocalDate* otherDate);
	static ::java::time::LocalDate* create(int32_t year, int32_t month, int32_t dayOfMonth);
	::java::util::stream::Stream* datesUntil(::java::time::LocalDate* endExclusive);
	::java::util::stream::Stream* datesUntil(::java::time::LocalDate* endExclusive, ::java::time::Period* step);
	int64_t daysUntil(::java::time::LocalDate* end);
	virtual bool equals(Object$* obj) override;
	virtual $String* format(::java::time::format::DateTimeFormatter* formatter) override;
	static ::java::time::LocalDate* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	int32_t get0(::java::time::temporal::TemporalField* field);
	virtual ::java::time::chrono::Chronology* getChronology() override;
	int32_t getDayOfMonth();
	::java::time::DayOfWeek* getDayOfWeek();
	int32_t getDayOfYear();
	virtual ::java::time::chrono::Era* getEra() override;
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	::java::time::Month* getMonth();
	int32_t getMonthValue();
	int64_t getProlepticMonth();
	int32_t getYear();
	virtual int32_t hashCode() override;
	virtual bool isAfter(::java::time::chrono::ChronoLocalDate* other) override;
	virtual bool isBefore(::java::time::chrono::ChronoLocalDate* other) override;
	virtual bool isEqual(::java::time::chrono::ChronoLocalDate* other) override;
	virtual bool isLeapYear() override;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	static ::java::time::LocalDate* lambda$datesUntil$0(int64_t start, int64_t days, int64_t n);
	::java::time::LocalDate* lambda$datesUntil$1(int64_t months, int64_t days, int64_t n);
	virtual int32_t lengthOfMonth() override;
	virtual int32_t lengthOfYear() override;
	virtual ::java::time::LocalDate* minus(::java::time::temporal::TemporalAmount* amountToSubtract) override;
	virtual ::java::time::LocalDate* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::LocalDate* minusDays(int64_t daysToSubtract);
	::java::time::LocalDate* minusMonths(int64_t monthsToSubtract);
	::java::time::LocalDate* minusWeeks(int64_t weeksToSubtract);
	::java::time::LocalDate* minusYears(int64_t yearsToSubtract);
	int64_t monthsUntil(::java::time::LocalDate* end);
	static ::java::time::LocalDate* now();
	static ::java::time::LocalDate* now(::java::time::ZoneId* zone);
	static ::java::time::LocalDate* now(::java::time::Clock* clock);
	static ::java::time::LocalDate* of(int32_t year, ::java::time::Month* month, int32_t dayOfMonth);
	static ::java::time::LocalDate* of(int32_t year, int32_t month, int32_t dayOfMonth);
	static ::java::time::LocalDate* ofEpochDay(int64_t epochDay);
	static ::java::time::LocalDate* ofInstant(::java::time::Instant* instant, ::java::time::ZoneId* zone);
	static ::java::time::LocalDate* ofYearDay(int32_t year, int32_t dayOfYear);
	static ::java::time::LocalDate* parse(::java::lang::CharSequence* text);
	static ::java::time::LocalDate* parse(::java::lang::CharSequence* text, ::java::time::format::DateTimeFormatter* formatter);
	virtual ::java::time::LocalDate* plus(::java::time::temporal::TemporalAmount* amountToAdd) override;
	virtual ::java::time::LocalDate* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::LocalDate* plusDays(int64_t daysToAdd);
	::java::time::LocalDate* plusMonths(int64_t monthsToAdd);
	::java::time::LocalDate* plusWeeks(int64_t weeksToAdd);
	::java::time::LocalDate* plusYears(int64_t yearsToAdd);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::LocalDate* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	static ::java::time::LocalDate* resolvePreviousValid(int32_t year, int32_t month, int32_t day);
	virtual int64_t toEpochDay() override;
	int64_t toEpochSecond(::java::time::LocalTime* time, ::java::time::ZoneOffset* offset);
	virtual $String* toString() override;
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::ChronoPeriod* until(::java::time::chrono::ChronoLocalDate* endDateExclusive) override;
	virtual ::java::time::LocalDate* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::LocalDate* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	::java::time::LocalDate* withDayOfMonth(int32_t dayOfMonth);
	::java::time::LocalDate* withDayOfYear(int32_t dayOfYear);
	::java::time::LocalDate* withMonth(int32_t month);
	::java::time::LocalDate* withYear(int32_t year);
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static ::java::time::LocalDate* MIN;
	static ::java::time::LocalDate* MAX;
	static ::java::time::LocalDate* EPOCH;
	static const int64_t serialVersionUID = (int64_t)0x28D617B1D8F33F1E;
	static const int32_t DAYS_PER_CYCLE = 0x00023AB1;
	static const int64_t DAYS_0000_TO_1970 = 719528; // (DAYS_PER_CYCLE * (int64_t)5) - ((int64_t)30 * (int64_t)365 + (int64_t)7)
	int32_t year = 0;
	int16_t month = 0;
	int16_t day = 0;
};

	} // time
} // java

#pragma pop_macro("MIN")
#pragma pop_macro("MAX")
#pragma pop_macro("EPOCH")
#pragma pop_macro("DAYS_PER_CYCLE")

#endif // _java_time_LocalDate_h_