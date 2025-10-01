#ifndef _java_time_temporal_TemporalAmount_h_
#define _java_time_temporal_TemporalAmount_h_
//$ interface java.time.temporal.TemporalAmount
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalUnit;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $import TemporalAmount : public ::java::lang::Object {
	$interface(TemporalAmount, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::time::temporal::Temporal* addTo(::java::time::temporal::Temporal* temporal) {return nullptr;}
	virtual int64_t get(::java::time::temporal::TemporalUnit* unit) {return 0;}
	virtual ::java::util::List* getUnits() {return nullptr;}
	virtual ::java::time::temporal::Temporal* subtractFrom(::java::time::temporal::Temporal* temporal) {return nullptr;}
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_TemporalAmount_h_