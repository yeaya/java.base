#ifndef _test_java_time_MockSimplePeriod_h_
#define _test_java_time_MockSimplePeriod_h_
//$ class test.java.time.MockSimplePeriod
//$ extends java.time.temporal.TemporalAmount
//$ implements java.lang.Comparable

#include <java/lang/Comparable.h>
#include <java/time/temporal/TemporalAmount.h>

#pragma push_macro("ZERO_DAYS")
#undef ZERO_DAYS
#pragma push_macro("ZERO_SECONDS")
#undef ZERO_SECONDS

namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalUnit;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace test {
	namespace java {
		namespace time {

class $export MockSimplePeriod : public ::java::time::temporal::TemporalAmount, public ::java::lang::Comparable {
	$class(MockSimplePeriod, 0, ::java::time::temporal::TemporalAmount, ::java::lang::Comparable)
public:
	MockSimplePeriod();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int64_t amount, ::java::time::temporal::TemporalUnit* unit);
	virtual ::java::time::temporal::Temporal* addTo(::java::time::temporal::Temporal* temporal) override;
	int32_t compareTo(::test::java::time::MockSimplePeriod* otherPeriod);
	virtual int32_t compareTo(Object$* otherPeriod) override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t get(::java::time::temporal::TemporalUnit* unit) override;
	int64_t getAmount();
	::java::time::temporal::TemporalUnit* getUnit();
	virtual ::java::util::List* getUnits() override;
	virtual int32_t hashCode() override;
	static ::test::java::time::MockSimplePeriod* of(int64_t amount, ::java::time::temporal::TemporalUnit* unit);
	virtual ::java::time::temporal::Temporal* subtractFrom(::java::time::temporal::Temporal* temporal) override;
	virtual $String* toString() override;
	static ::test::java::time::MockSimplePeriod* ZERO_DAYS;
	static ::test::java::time::MockSimplePeriod* ZERO_SECONDS;
	int64_t amount = 0;
	::java::time::temporal::TemporalUnit* unit = nullptr;
};

		} // time
	} // java
} // test

#pragma pop_macro("ZERO_DAYS")
#pragma pop_macro("ZERO_SECONDS")

#endif // _test_java_time_MockSimplePeriod_h_