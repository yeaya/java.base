#ifndef _java_time_temporal_TemporalQueries$5_h_
#define _java_time_temporal_TemporalQueries$5_h_
//$ class java.time.temporal.TemporalQueries$5
//$ extends java.time.temporal.TemporalQuery

#include <java/time/temporal/TemporalQuery.h>

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

class TemporalQueries$5 : public ::java::time::temporal::TemporalQuery {
	$class(TemporalQueries$5, $NO_CLASS_INIT, ::java::time::temporal::TemporalQuery)
public:
	TemporalQueries$5();
	void init$();
	virtual $Object* queryFrom(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual $String* toString() override;
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_TemporalQueries$5_h_