#ifndef _java_time_temporal_TemporalAccessor_h_
#define _java_time_temporal_TemporalAccessor_h_
//$ interface java.time.temporal.TemporalAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace time {
		namespace temporal {
			class TemporalField;
			class TemporalQuery;
			class ValueRange;
		}
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $export TemporalAccessor : public ::java::lang::Object {
	$interface(TemporalAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t get(::java::time::temporal::TemporalField* field);
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) {return 0;}
	virtual bool isSupported(::java::time::temporal::TemporalField* field) {return false;}
	virtual $Object* query(::java::time::temporal::TemporalQuery* query);
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field);
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_TemporalAccessor_h_