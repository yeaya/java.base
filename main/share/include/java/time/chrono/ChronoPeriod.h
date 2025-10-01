#ifndef _java_time_chrono_ChronoPeriod_h_
#define _java_time_chrono_ChronoPeriod_h_
//$ interface java.time.chrono.ChronoPeriod
//$ extends java.time.temporal.TemporalAmount

#include <java/time/temporal/TemporalAmount.h>

namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class Chronology;
		}
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $import ChronoPeriod : public ::java::time::temporal::TemporalAmount {
	$interface(ChronoPeriod, $NO_CLASS_INIT, ::java::time::temporal::TemporalAmount)
public:
	virtual ::java::time::temporal::Temporal* addTo(::java::time::temporal::Temporal* temporal) override {return nullptr;}
	static ::java::time::chrono::ChronoPeriod* between(::java::time::chrono::ChronoLocalDate* startDateInclusive, ::java::time::chrono::ChronoLocalDate* endDateExclusive);
	virtual bool equals(Object$* obj) override;
	virtual int64_t get(::java::time::temporal::TemporalUnit* unit) override {return 0;}
	virtual ::java::time::chrono::Chronology* getChronology() {return nullptr;}
	virtual ::java::util::List* getUnits() override {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isNegative();
	virtual bool isZero();
	virtual ::java::time::chrono::ChronoPeriod* minus(::java::time::temporal::TemporalAmount* amountToSubtract) {return nullptr;}
	virtual ::java::time::chrono::ChronoPeriod* multipliedBy(int32_t scalar) {return nullptr;}
	virtual ::java::time::chrono::ChronoPeriod* negated();
	virtual ::java::time::chrono::ChronoPeriod* normalized() {return nullptr;}
	virtual ::java::time::chrono::ChronoPeriod* plus(::java::time::temporal::TemporalAmount* amountToAdd) {return nullptr;}
	virtual ::java::time::temporal::Temporal* subtractFrom(::java::time::temporal::Temporal* temporal) override {return nullptr;}
	virtual $String* toString() override;
};

		} // chrono
	} // time
} // java

#endif // _java_time_chrono_ChronoPeriod_h_