#ifndef _java_time_chrono_MinguoDate_h_
#define _java_time_chrono_MinguoDate_h_
//$ class java.time.chrono.MinguoDate
//$ extends java.time.chrono.ChronoLocalDateImpl

#include <java/time/chrono/ChronoLocalDateImpl.h>

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		class Clock;
		class LocalDate;
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

class $export MinguoDate : public ::java::time::chrono::ChronoLocalDateImpl {
	$class(MinguoDate, $NO_CLASS_INIT, ::java::time::chrono::ChronoLocalDateImpl)
public:
	MinguoDate();
	void init$(::java::time::LocalDate* isoDate);
	virtual ::java::time::chrono::ChronoLocalDateTime* atTime(::java::time::LocalTime* localTime) override;
	virtual bool equals(Object$* obj) override;
	static ::java::time::chrono::MinguoDate* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual ::java::time::chrono::Chronology* getChronology() override;
	virtual ::java::time::chrono::Era* getEra() override;
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	int64_t getProlepticMonth();
	int32_t getProlepticYear();
	virtual int32_t hashCode() override;
	virtual int32_t lengthOfMonth() override;
	virtual ::java::time::chrono::MinguoDate* minus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::MinguoDate* minus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::MinguoDate* minusDays(int64_t daysToSubtract) override;
	virtual ::java::time::chrono::MinguoDate* minusMonths(int64_t monthsToSubtract) override;
	virtual ::java::time::chrono::MinguoDate* minusWeeks(int64_t weeksToSubtract) override;
	virtual ::java::time::chrono::MinguoDate* minusYears(int64_t yearsToSubtract) override;
	static ::java::time::chrono::MinguoDate* now();
	static ::java::time::chrono::MinguoDate* now(::java::time::ZoneId* zone);
	static ::java::time::chrono::MinguoDate* now(::java::time::Clock* clock);
	static ::java::time::chrono::MinguoDate* of(int32_t prolepticYear, int32_t month, int32_t dayOfMonth);
	virtual ::java::time::chrono::MinguoDate* plus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::MinguoDate* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::MinguoDate* plusDays(int64_t days) override;
	virtual ::java::time::chrono::MinguoDate* plusMonths(int64_t months) override;
	virtual ::java::time::chrono::MinguoDate* plusWeeks(int64_t weeksToAdd) override;
	virtual ::java::time::chrono::MinguoDate* plusYears(int64_t years) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::chrono::MinguoDate* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual int64_t toEpochDay() override;
	virtual $String* toString() override;
	virtual ::java::time::chrono::ChronoPeriod* until(::java::time::chrono::ChronoLocalDate* endDate) override;
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::MinguoDate* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	virtual ::java::time::chrono::MinguoDate* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	::java::time::chrono::MinguoDate* with(::java::time::LocalDate* newDate);
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x120BD9BE64A3DE1E;
	::java::time::LocalDate* isoDate = nullptr;
};

		} // chrono
	} // time
} // java

#endif // _java_time_chrono_MinguoDate_h_