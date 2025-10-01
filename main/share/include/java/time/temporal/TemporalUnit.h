#ifndef _java_time_temporal_TemporalUnit_h_
#define _java_time_temporal_TemporalUnit_h_
//$ interface java.time.temporal.TemporalUnit
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import TemporalUnit : public ::java::lang::Object {
	$interface(TemporalUnit, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::time::temporal::Temporal* addTo(::java::time::temporal::Temporal* temporal, int64_t amount) {return nullptr;}
	virtual int64_t between(::java::time::temporal::Temporal* temporal1Inclusive, ::java::time::temporal::Temporal* temporal2Exclusive) {return 0;}
	virtual ::java::time::Duration* getDuration() {return nullptr;}
	virtual bool isDateBased() {return false;}
	virtual bool isDurationEstimated() {return false;}
	virtual bool isSupportedBy(::java::time::temporal::Temporal* temporal);
	virtual bool isTimeBased() {return false;}
	virtual $String* toString() override;
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_TemporalUnit_h_