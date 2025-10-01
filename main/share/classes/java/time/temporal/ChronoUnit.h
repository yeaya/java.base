#ifndef _java_time_temporal_ChronoUnit_h_
#define _java_time_temporal_ChronoUnit_h_
//$ class java.time.temporal.ChronoUnit
//$ extends java.lang.Enum
//$ implements java.time.temporal.TemporalUnit

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/temporal/TemporalUnit.h>

#pragma push_macro("FOREVER")
#undef FOREVER
#pragma push_macro("MICROS")
#undef MICROS
#pragma push_macro("SECONDS")
#undef SECONDS
#pragma push_macro("DECADES")
#undef DECADES
#pragma push_macro("MILLENNIA")
#undef MILLENNIA
#pragma push_macro("DAYS")
#undef DAYS
#pragma push_macro("MILLIS")
#undef MILLIS
#pragma push_macro("HALF_DAYS")
#undef HALF_DAYS
#pragma push_macro("MONTHS")
#undef MONTHS
#pragma push_macro("YEARS")
#undef YEARS
#pragma push_macro("HOURS")
#undef HOURS
#pragma push_macro("WEEKS")
#undef WEEKS
#pragma push_macro("NANOS")
#undef NANOS
#pragma push_macro("CENTURIES")
#undef CENTURIES
#pragma push_macro("MINUTES")
#undef MINUTES
#pragma push_macro("ERAS")
#undef ERAS

namespace java {
	namespace time {
		class Duration;
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
		}
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $export ChronoUnit : public ::java::lang::Enum, public ::java::time::temporal::TemporalUnit {
	$class(ChronoUnit, 0, ::java::lang::Enum, ::java::time::temporal::TemporalUnit)
public:
	ChronoUnit();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::java::time::temporal::ChronoUnit>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, ::java::time::Duration* estimatedDuration);
	virtual ::java::time::temporal::Temporal* addTo(::java::time::temporal::Temporal* temporal, int64_t amount) override;
	virtual int64_t between(::java::time::temporal::Temporal* temporal1Inclusive, ::java::time::temporal::Temporal* temporal2Exclusive) override;
	virtual ::java::time::Duration* getDuration() override;
	virtual bool isDateBased() override;
	virtual bool isDurationEstimated() override;
	virtual bool isSupportedBy(::java::time::temporal::Temporal* temporal) override;
	virtual bool isTimeBased() override;
	virtual $String* toString() override;
	static ::java::time::temporal::ChronoUnit* valueOf($String* name);
	static $Array<::java::time::temporal::ChronoUnit>* values();
	static ::java::time::temporal::ChronoUnit* NANOS;
	static ::java::time::temporal::ChronoUnit* MICROS;
	static ::java::time::temporal::ChronoUnit* MILLIS;
	static ::java::time::temporal::ChronoUnit* SECONDS;
	static ::java::time::temporal::ChronoUnit* MINUTES;
	static ::java::time::temporal::ChronoUnit* HOURS;
	static ::java::time::temporal::ChronoUnit* HALF_DAYS;
	static ::java::time::temporal::ChronoUnit* DAYS;
	static ::java::time::temporal::ChronoUnit* WEEKS;
	static ::java::time::temporal::ChronoUnit* MONTHS;
	static ::java::time::temporal::ChronoUnit* YEARS;
	static ::java::time::temporal::ChronoUnit* DECADES;
	static ::java::time::temporal::ChronoUnit* CENTURIES;
	static ::java::time::temporal::ChronoUnit* MILLENNIA;
	static ::java::time::temporal::ChronoUnit* ERAS;
	static ::java::time::temporal::ChronoUnit* FOREVER;
	static $Array<::java::time::temporal::ChronoUnit>* $VALUES;
	$String* name$ = nullptr;
	::java::time::Duration* duration = nullptr;
};

		} // temporal
	} // time
} // java

#pragma pop_macro("FOREVER")
#pragma pop_macro("MICROS")
#pragma pop_macro("SECONDS")
#pragma pop_macro("DECADES")
#pragma pop_macro("MILLENNIA")
#pragma pop_macro("DAYS")
#pragma pop_macro("MILLIS")
#pragma pop_macro("HALF_DAYS")
#pragma pop_macro("MONTHS")
#pragma pop_macro("YEARS")
#pragma pop_macro("HOURS")
#pragma pop_macro("WEEKS")
#pragma pop_macro("NANOS")
#pragma pop_macro("CENTURIES")
#pragma pop_macro("MINUTES")
#pragma pop_macro("ERAS")

#endif // _java_time_temporal_ChronoUnit_h_