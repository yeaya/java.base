#ifndef _java_time_temporal_TemporalAdjuster_h_
#define _java_time_temporal_TemporalAdjuster_h_
//$ interface java.time.temporal.TemporalAdjuster
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export TemporalAdjuster : public ::java::lang::Object {
	$interface(TemporalAdjuster, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) {return nullptr;}
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_TemporalAdjuster_h_