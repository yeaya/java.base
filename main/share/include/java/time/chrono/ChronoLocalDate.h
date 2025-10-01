#ifndef _java_time_chrono_ChronoLocalDate_h_
#define _java_time_chrono_ChronoLocalDate_h_
//$ interface java.time.chrono.ChronoLocalDate
//$ extends java.time.temporal.Temporal,java.time.temporal.TemporalAdjuster,java.lang.Comparable

#include <java/lang/Comparable.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAdjuster.h>

namespace java {
	namespace lang {
		namespace invoke {
			class SerializedLambda;
		}
	}
}
namespace java {
	namespace time {
		class LocalTime;
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
			class TemporalAccessor;
			class TemporalAmount;
			class TemporalField;
			class TemporalQuery;
			class TemporalUnit;
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
		namespace chrono {

class $import ChronoLocalDate : public ::java::time::temporal::Temporal, public ::java::time::temporal::TemporalAdjuster, public ::java::lang::Comparable {
	$interface(ChronoLocalDate, $NO_CLASS_INIT, ::java::time::temporal::Temporal, ::java::time::temporal::TemporalAdjuster, ::java::lang::Comparable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Object* $deserializeLambda$(::java::lang::invoke::SerializedLambda* lambda);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	virtual ::java::time::chrono::ChronoLocalDateTime* atTime(::java::time::LocalTime* localTime);
	virtual $Object* clone() override;
	virtual int32_t compareTo(::java::time::chrono::ChronoLocalDate* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $String* format(::java::time::format::DateTimeFormatter* formatter);
	static ::java::time::chrono::ChronoLocalDate* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual ::java::time::chrono::Chronology* getChronology() {return nullptr;}
	virtual ::java::time::chrono::Era* getEra();
	virtual int32_t hashCode() override;
	virtual bool isAfter(::java::time::chrono::ChronoLocalDate* other);
	virtual bool isBefore(::java::time::chrono::ChronoLocalDate* other);
	virtual bool isEqual(::java::time::chrono::ChronoLocalDate* other);
	virtual bool isLeapYear();
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	static int32_t lambda$timeLineOrder$493d4938$1(::java::time::chrono::ChronoLocalDate* date1, ::java::time::chrono::ChronoLocalDate* date2);
	virtual int32_t lengthOfMonth() {return 0;}
	virtual int32_t lengthOfYear();
	virtual ::java::time::chrono::ChronoLocalDate* minus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::ChronoLocalDate* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::ChronoLocalDate* plus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::ChronoLocalDate* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	static ::java::util::Comparator* timeLineOrder();
	virtual int64_t toEpochDay();
	virtual $String* toString() override;
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override {return 0;}
	virtual ::java::time::chrono::ChronoPeriod* until(::java::time::chrono::ChronoLocalDate* endDateExclusive) {return nullptr;}
	virtual ::java::time::chrono::ChronoLocalDate* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::chrono::ChronoLocalDate* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
};

		} // chrono
	} // time
} // java

#endif // _java_time_chrono_ChronoLocalDate_h_