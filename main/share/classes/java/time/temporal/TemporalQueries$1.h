#ifndef _java_time_temporal_TemporalQueries$1_h_
#define _java_time_temporal_TemporalQueries$1_h_
//$ class java.time.temporal.TemporalQueries$1
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

class TemporalQueries$1 : public ::java::time::temporal::TemporalQuery {
	$class(TemporalQueries$1, $NO_CLASS_INIT, ::java::time::temporal::TemporalQuery)
public:
	TemporalQueries$1();
	void init$();
	virtual $Object* queryFrom(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual $String* toString() override;
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_TemporalQueries$1_h_