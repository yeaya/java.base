#ifndef _test_java_time_temporal_MockFieldValue_h_
#define _test_java_time_temporal_MockFieldValue_h_
//$ class test.java.time.temporal.MockFieldValue
//$ extends java.time.temporal.TemporalAccessor

#include <java/time/temporal/TemporalAccessor.h>

namespace java {
	namespace time {
		namespace temporal {
			class TemporalField;
			class ValueRange;
		}
	}
}

namespace test {
	namespace java {
		namespace time {
			namespace temporal {

class $export MockFieldValue : public ::java::time::temporal::TemporalAccessor {
	$class(MockFieldValue, $NO_CLASS_INIT, ::java::time::temporal::TemporalAccessor)
public:
	MockFieldValue();
	void init$(::java::time::temporal::TemporalField* field, int64_t value);
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	::java::time::temporal::TemporalField* field = nullptr;
	int64_t value = 0;
};

			} // temporal
		} // time
	} // java
} // test

#endif // _test_java_time_temporal_MockFieldValue_h_