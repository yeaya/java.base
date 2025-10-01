#ifndef _java_time_temporal_TemporalQueries_h_
#define _java_time_temporal_TemporalQueries_h_
//$ class java.time.temporal.TemporalQueries
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOCAL_TIME")
#undef LOCAL_TIME
#pragma push_macro("CHRONO")
#undef CHRONO
#pragma push_macro("ZONE_ID")
#undef ZONE_ID
#pragma push_macro("ZONE")
#undef ZONE
#pragma push_macro("LOCAL_DATE")
#undef LOCAL_DATE
#pragma push_macro("OFFSET")
#undef OFFSET
#pragma push_macro("PRECISION")
#undef PRECISION

namespace java {
	namespace time {
		namespace temporal {
			class TemporalQuery;
		}
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $export TemporalQueries : public ::java::lang::Object {
	$class(TemporalQueries, 0, ::java::lang::Object)
public:
	TemporalQueries();
	void init$();
	static ::java::time::temporal::TemporalQuery* chronology();
	static ::java::time::temporal::TemporalQuery* localDate();
	static ::java::time::temporal::TemporalQuery* localTime();
	static ::java::time::temporal::TemporalQuery* offset();
	static ::java::time::temporal::TemporalQuery* precision();
	static ::java::time::temporal::TemporalQuery* zone();
	static ::java::time::temporal::TemporalQuery* zoneId();
	static ::java::time::temporal::TemporalQuery* ZONE_ID;
	static ::java::time::temporal::TemporalQuery* CHRONO;
	static ::java::time::temporal::TemporalQuery* PRECISION;
	static ::java::time::temporal::TemporalQuery* OFFSET;
	static ::java::time::temporal::TemporalQuery* ZONE;
	static ::java::time::temporal::TemporalQuery* LOCAL_DATE;
	static ::java::time::temporal::TemporalQuery* LOCAL_TIME;
};

		} // temporal
	} // time
} // java

#pragma pop_macro("LOCAL_TIME")
#pragma pop_macro("CHRONO")
#pragma pop_macro("ZONE_ID")
#pragma pop_macro("ZONE")
#pragma pop_macro("LOCAL_DATE")
#pragma pop_macro("OFFSET")
#pragma pop_macro("PRECISION")

#endif // _java_time_temporal_TemporalQueries_h_