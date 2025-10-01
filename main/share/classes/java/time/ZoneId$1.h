#ifndef _java_time_ZoneId$1_h_
#define _java_time_ZoneId$1_h_
//$ class java.time.ZoneId$1
//$ extends java.time.temporal.TemporalAccessor

#include <java/time/temporal/TemporalAccessor.h>

namespace java {
	namespace time {
		class ZoneId;
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

class ZoneId$1 : public ::java::time::temporal::TemporalAccessor {
	$class(ZoneId$1, $NO_CLASS_INIT, ::java::time::temporal::TemporalAccessor)
public:
	ZoneId$1();
	void init$(::java::time::ZoneId* this$0);
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	::java::time::ZoneId* this$0 = nullptr;
};

	} // time
} // java

#endif // _java_time_ZoneId$1_h_