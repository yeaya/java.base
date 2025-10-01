#ifndef _java_time_temporal_IsoFields$Unit_h_
#define _java_time_temporal_IsoFields$Unit_h_
//$ class java.time.temporal.IsoFields$Unit
//$ extends java.lang.Enum
//$ implements java.time.temporal.TemporalUnit

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/temporal/TemporalUnit.h>

#pragma push_macro("QUARTER_YEARS")
#undef QUARTER_YEARS
#pragma push_macro("WEEK_BASED_YEARS")
#undef WEEK_BASED_YEARS

namespace java {
	namespace time {
		class Duration;
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
		}
	}
}

namespace java {
	namespace time {
		namespace temporal {

class IsoFields$Unit : public ::java::lang::Enum, public ::java::time::temporal::TemporalUnit {
	$class(IsoFields$Unit, 0, ::java::lang::Enum, ::java::time::temporal::TemporalUnit)
public:
	IsoFields$Unit();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::java::time::temporal::IsoFields$Unit>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, ::java::time::Duration* estimatedDuration);
	virtual ::java::time::temporal::Temporal* addTo(::java::time::temporal::Temporal* temporal, int64_t amount) override;
	virtual int64_t between(::java::time::temporal::Temporal* temporal1Inclusive, ::java::time::temporal::Temporal* temporal2Exclusive) override;
	virtual ::java::time::Duration* getDuration() override;
	virtual bool isDateBased() override;
	virtual bool isDurationEstimated() override;
	virtual bool isSupportedBy(::java::time::temporal::Temporal* temporal) override;
	virtual bool isTimeBased() override;
	virtual $String* toString() override;
	static ::java::time::temporal::IsoFields$Unit* valueOf($String* name);
	static $Array<::java::time::temporal::IsoFields$Unit>* values();
	static ::java::time::temporal::IsoFields$Unit* WEEK_BASED_YEARS;
	static ::java::time::temporal::IsoFields$Unit* QUARTER_YEARS;
	static $Array<::java::time::temporal::IsoFields$Unit>* $VALUES;
	$String* name$ = nullptr;
	::java::time::Duration* duration = nullptr;
};

		} // temporal
	} // time
} // java

#pragma pop_macro("QUARTER_YEARS")
#pragma pop_macro("WEEK_BASED_YEARS")

#endif // _java_time_temporal_IsoFields$Unit_h_