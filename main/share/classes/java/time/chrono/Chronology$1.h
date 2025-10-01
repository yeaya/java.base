#ifndef _java_time_chrono_Chronology$1_h_
#define _java_time_chrono_Chronology$1_h_
//$ class java.time.chrono.Chronology$1
//$ extends java.time.temporal.TemporalAccessor

#include <java/time/temporal/TemporalAccessor.h>

namespace java {
	namespace time {
		namespace chrono {
			class Chronology;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalField;
			class TemporalQuery;
		}
	}
}

namespace java {
	namespace time {
		namespace chrono {

class Chronology$1 : public ::java::time::temporal::TemporalAccessor {
	$class(Chronology$1, $NO_CLASS_INIT, ::java::time::temporal::TemporalAccessor)
public:
	Chronology$1();
	void init$(::java::time::chrono::Chronology* this$0);
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	::java::time::chrono::Chronology* this$0 = nullptr;
};

		} // chrono
	} // time
} // java

#endif // _java_time_chrono_Chronology$1_h_