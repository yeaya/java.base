#ifndef _java_time_format_DateTimePrintContext$1_h_
#define _java_time_format_DateTimePrintContext$1_h_
//$ class java.time.format.DateTimePrintContext$1
//$ extends java.time.temporal.TemporalAccessor

#include <java/time/temporal/TemporalAccessor.h>

namespace java {
	namespace time {
		class ZoneId;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class Chronology;
		}
	}
}
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
		namespace format {

class DateTimePrintContext$1 : public ::java::time::temporal::TemporalAccessor {
	$class(DateTimePrintContext$1, $NO_CLASS_INIT, ::java::time::temporal::TemporalAccessor)
public:
	DateTimePrintContext$1();
	void init$(::java::time::chrono::ChronoLocalDate* val$effectiveDate, ::java::time::temporal::TemporalAccessor* val$temporal, ::java::time::chrono::Chronology* val$effectiveChrono, ::java::time::ZoneId* val$effectiveZone);
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	virtual $String* toString() override;
	::java::time::ZoneId* val$effectiveZone = nullptr;
	::java::time::chrono::Chronology* val$effectiveChrono = nullptr;
	::java::time::temporal::TemporalAccessor* val$temporal = nullptr;
	::java::time::chrono::ChronoLocalDate* val$effectiveDate = nullptr;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimePrintContext$1_h_