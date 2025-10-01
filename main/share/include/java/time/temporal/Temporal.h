#ifndef _java_time_temporal_Temporal_h_
#define _java_time_temporal_Temporal_h_
//$ interface java.time.temporal.Temporal
//$ extends java.time.temporal.TemporalAccessor

#include <java/time/temporal/TemporalAccessor.h>

namespace java {
	namespace time {
		namespace temporal {
			class TemporalAdjuster;
			class TemporalAmount;
			class TemporalField;
			class TemporalUnit;
		}
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $import Temporal : public ::java::time::temporal::TemporalAccessor {
	$interface(Temporal, $NO_CLASS_INIT, ::java::time::temporal::TemporalAccessor)
public:
	using ::java::time::temporal::TemporalAccessor::isSupported;
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) {return false;}
	virtual ::java::time::temporal::Temporal* minus(::java::time::temporal::TemporalAmount* amount);
	virtual ::java::time::temporal::Temporal* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit);
	virtual ::java::time::temporal::Temporal* plus(::java::time::temporal::TemporalAmount* amount);
	virtual ::java::time::temporal::Temporal* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) {return nullptr;}
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) {return 0;}
	virtual ::java::time::temporal::Temporal* with(::java::time::temporal::TemporalAdjuster* adjuster);
	virtual ::java::time::temporal::Temporal* with(::java::time::temporal::TemporalField* field, int64_t newValue) {return nullptr;}
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_Temporal_h_