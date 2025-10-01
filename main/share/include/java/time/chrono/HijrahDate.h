#ifndef _java_time_chrono_HijrahDate_h_
#define _java_time_chrono_HijrahDate_h_
//$ class java.time.chrono.HijrahDate
//$ extends java.time.chrono.ChronoLocalDateImpl

#include <java/time/chrono/ChronoLocalDateImpl.h>

namespace java {
	namespace io {
		class ObjectInput;
		class ObjectInputStream;
		class ObjectOutput;
	}
}
namespace java {
	namespace time {
		class Clock;
		class LocalTime;
		class ZoneId;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class ChronoLocalDateTime;
			class ChronoPeriod;
			class Chronology;
			class Era;
			class HijrahChronology;
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
			class TemporalUnit;
			class ValueRange;
		}
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $import HijrahDate : public ::java::time::chrono::ChronoLocalDateImpl {
	$class(HijrahDate, $NO_CLASS_INIT, ::java::time::chrono::ChronoLocalDateImpl)
public:
	HijrahDate();
	void init$(::java::time::chrono::HijrahChronology* chrono, int32_t prolepticYear, int32_t monthOfYear, int32_t dayOfMonth);
	void init$(::java::time::chrono::HijrahChronology* chrono, int64_t epochDay);
	virtual ::java::time::chrono::ChronoLocalDateTime* atTime(::java::time::LocalTime* localTime) override;
	virtual bool equals(Object$* obj) override;
	static ::java::time::chrono::HijrahDate* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual ::java::time::chrono::Chronology* getChronology() override;
	int32_t getDayOfWeek();
	int32_t getDayOfYear();
	virtual ::java::time::chrono::Era* getEra() override;
	int32_t getEraValue();
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	int64_t getProlepticMonth();
	virtual int32_t hashCode() override;
	virtual bool isLeapYear() override;
	virtual int32_t lengthOfMonth() override;
	virtual int32_t lengthOfYear() override;
	virtual ::java::time::chrono::HijrahDate* minus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::HijrahDate* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::HijrahDate* minusDays(int64_t daysToSubtract) override;
	virtual ::java::time::chrono::HijrahDate* minusMonths(int64_t monthsToSubtract) override;
	virtual ::java::time::chrono::HijrahDate* minusWeeks(int64_t weeksToSubtract) override;
	virtual ::java::time::chrono::HijrahDate* minusYears(int64_t yearsToSubtract) override;
	static ::java::time::chrono::HijrahDate* now();
	static ::java::time::chrono::HijrahDate* now(::java::time::ZoneId* zone);
	static ::java::time::chrono::HijrahDate* now(::java::time::Clock* clock);
	static ::java::time::chrono::HijrahDate* of(::java::time::chrono::HijrahChronology* chrono, int32_t prolepticYear, int32_t monthOfYear, int32_t dayOfMonth);
	static ::java::time::chrono::HijrahDate* of(int32_t prolepticYear, int32_t month, int32_t dayOfMonth);
	static ::java::time::chrono::HijrahDate* ofEpochDay(::java::time::chrono::HijrahChronology* chrono, int64_t epochDay);
	virtual ::java::time::chrono::HijrahDate* plus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::HijrahDate* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::HijrahDate* plusDays(int64_t days) override;
	virtual ::java::time::chrono::HijrahDate* plusMonths(int64_t monthsToAdd) override;
	virtual ::java::time::chrono::HijrahDate* plusWeeks(int64_t weeksToAdd) override;
	virtual ::java::time::chrono::HijrahDate* plusYears(int64_t years) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::chrono::HijrahDate* readExternal(::java::io::ObjectInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	::java::time::chrono::HijrahDate* resolvePreviousValid(int32_t prolepticYear, int32_t month, int32_t day);
	virtual int64_t toEpochDay() override;
	virtual $String* toString() override;
	virtual ::java::time::chrono::ChronoPeriod* until(::java::time::chrono::ChronoLocalDate* endDate) override;
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::HijrahDate* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	virtual ::java::time::chrono::HijrahDate* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	::java::time::chrono::HijrahDate* withVariant(::java::time::chrono::HijrahChronology* chronology);
	void writeExternal(::java::io::ObjectOutput* out);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0xB7B9FCCB9E5A1B1C;
	::java::time::chrono::HijrahChronology* chrono = nullptr;
	int32_t prolepticYear = 0;
	int32_t monthOfYear = 0;
	int32_t dayOfMonth = 0;
};

		} // chrono
	} // time
} // java

#endif // _java_time_chrono_HijrahDate_h_