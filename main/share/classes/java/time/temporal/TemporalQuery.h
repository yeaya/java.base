#ifndef _java_time_temporal_TemporalQuery_h_
#define _java_time_temporal_TemporalQuery_h_
//$ interface java.time.temporal.TemporalQuery
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace time {
		namespace temporal {
			class TemporalAccessor;
		}
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $export TemporalQuery : public ::java::lang::Object {
	$interface(TemporalQuery, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* queryFrom(::java::time::temporal::TemporalAccessor* temporal) {return nullptr;}
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_TemporalQuery_h_