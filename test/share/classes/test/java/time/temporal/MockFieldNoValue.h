#ifndef _test_java_time_temporal_MockFieldNoValue_h_
#define _test_java_time_temporal_MockFieldNoValue_h_
//$ class test.java.time.temporal.MockFieldNoValue
//$ extends java.lang.Enum
//$ implements java.time.temporal.TemporalField

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/temporal/TemporalField.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalAccessor;
			class TemporalUnit;
			class ValueRange;
		}
	}
}

namespace test {
	namespace java {
		namespace time {
			namespace temporal {

class $export MockFieldNoValue : public ::java::lang::Enum, public ::java::time::temporal::TemporalField {
	$class(MockFieldNoValue, 0, ::java::lang::Enum, ::java::time::temporal::TemporalField)
public:
	MockFieldNoValue();
	static $Array<::test::java::time::temporal::MockFieldNoValue>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal, int64_t newValue) override;
	virtual ::java::time::temporal::TemporalUnit* getBaseUnit() override;
	virtual int64_t getFrom(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::temporal::TemporalUnit* getRangeUnit() override;
	virtual bool isDateBased() override;
	virtual bool isSupportedBy(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual bool isTimeBased() override;
	virtual ::java::time::temporal::ValueRange* range() override;
	virtual ::java::time::temporal::ValueRange* rangeRefinedBy(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual $String* toString() override;
	static ::test::java::time::temporal::MockFieldNoValue* valueOf($String* name);
	static $Array<::test::java::time::temporal::MockFieldNoValue>* values();
	static ::test::java::time::temporal::MockFieldNoValue* INSTANCE;
	static $Array<::test::java::time::temporal::MockFieldNoValue>* $VALUES;
};

			} // temporal
		} // time
	} // java
} // test

#pragma pop_macro("INSTANCE")

#endif // _test_java_time_temporal_MockFieldNoValue_h_