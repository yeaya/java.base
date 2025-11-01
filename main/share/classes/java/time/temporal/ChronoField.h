#ifndef _java_time_temporal_ChronoField_h_
#define _java_time_temporal_ChronoField_h_
//$ class java.time.temporal.ChronoField
//$ extends java.lang.Enum
//$ implements java.time.temporal.TemporalField

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/temporal/TemporalField.h>

#pragma push_macro("ALIGNED_DAY_OF_WEEK_IN_MONTH")
#undef ALIGNED_DAY_OF_WEEK_IN_MONTH
#pragma push_macro("ALIGNED_DAY_OF_WEEK_IN_YEAR")
#undef ALIGNED_DAY_OF_WEEK_IN_YEAR
#pragma push_macro("ALIGNED_WEEK_OF_MONTH")
#undef ALIGNED_WEEK_OF_MONTH
#pragma push_macro("ALIGNED_WEEK_OF_YEAR")
#undef ALIGNED_WEEK_OF_YEAR
#pragma push_macro("AMPM_OF_DAY")
#undef AMPM_OF_DAY
#pragma push_macro("CLOCK_HOUR_OF_AMPM")
#undef CLOCK_HOUR_OF_AMPM
#pragma push_macro("CLOCK_HOUR_OF_DAY")
#undef CLOCK_HOUR_OF_DAY
#pragma push_macro("DAY_OF_MONTH")
#undef DAY_OF_MONTH
#pragma push_macro("DAY_OF_WEEK")
#undef DAY_OF_WEEK
#pragma push_macro("DAY_OF_YEAR")
#undef DAY_OF_YEAR
#pragma push_macro("EPOCH_DAY")
#undef EPOCH_DAY
#pragma push_macro("ERA")
#undef ERA
#pragma push_macro("HOUR_OF_AMPM")
#undef HOUR_OF_AMPM
#pragma push_macro("HOUR_OF_DAY")
#undef HOUR_OF_DAY
#pragma push_macro("INSTANT_SECONDS")
#undef INSTANT_SECONDS
#pragma push_macro("MICRO_OF_DAY")
#undef MICRO_OF_DAY
#pragma push_macro("MICRO_OF_SECOND")
#undef MICRO_OF_SECOND
#pragma push_macro("MILLI_OF_DAY")
#undef MILLI_OF_DAY
#pragma push_macro("MILLI_OF_SECOND")
#undef MILLI_OF_SECOND
#pragma push_macro("MINUTE_OF_DAY")
#undef MINUTE_OF_DAY
#pragma push_macro("MINUTE_OF_HOUR")
#undef MINUTE_OF_HOUR
#pragma push_macro("MONTH_OF_YEAR")
#undef MONTH_OF_YEAR
#pragma push_macro("NANO_OF_DAY")
#undef NANO_OF_DAY
#pragma push_macro("NANO_OF_SECOND")
#undef NANO_OF_SECOND
#pragma push_macro("OFFSET_SECONDS")
#undef OFFSET_SECONDS
#pragma push_macro("PROLEPTIC_MONTH")
#undef PROLEPTIC_MONTH
#pragma push_macro("SECOND_OF_DAY")
#undef SECOND_OF_DAY
#pragma push_macro("SECOND_OF_MINUTE")
#undef SECOND_OF_MINUTE
#pragma push_macro("YEAR")
#undef YEAR
#pragma push_macro("YEAR_OF_ERA")
#undef YEAR_OF_ERA

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
namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $export ChronoField : public ::java::lang::Enum, public ::java::time::temporal::TemporalField {
	$class(ChronoField, 0, ::java::lang::Enum, ::java::time::temporal::TemporalField)
public:
	ChronoField();
	static $Array<::java::time::temporal::ChronoField>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, ::java::time::temporal::TemporalUnit* baseUnit, ::java::time::temporal::TemporalUnit* rangeUnit, ::java::time::temporal::ValueRange* range);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, ::java::time::temporal::TemporalUnit* baseUnit, ::java::time::temporal::TemporalUnit* rangeUnit, ::java::time::temporal::ValueRange* range, $String* displayNameKey);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal, int64_t newValue) override;
	virtual int32_t checkValidIntValue(int64_t value);
	virtual int64_t checkValidValue(int64_t value);
	virtual ::java::time::temporal::TemporalUnit* getBaseUnit() override;
	virtual $String* getDisplayName(::java::util::Locale* locale) override;
	virtual int64_t getFrom(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::temporal::TemporalUnit* getRangeUnit() override;
	virtual bool isDateBased() override;
	virtual bool isSupportedBy(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual bool isTimeBased() override;
	virtual ::java::time::temporal::ValueRange* range() override;
	virtual ::java::time::temporal::ValueRange* rangeRefinedBy(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual $String* toString() override;
	static ::java::time::temporal::ChronoField* valueOf($String* name);
	static $Array<::java::time::temporal::ChronoField>* values();
	static ::java::time::temporal::ChronoField* NANO_OF_SECOND;
	static ::java::time::temporal::ChronoField* NANO_OF_DAY;
	static ::java::time::temporal::ChronoField* MICRO_OF_SECOND;
	static ::java::time::temporal::ChronoField* MICRO_OF_DAY;
	static ::java::time::temporal::ChronoField* MILLI_OF_SECOND;
	static ::java::time::temporal::ChronoField* MILLI_OF_DAY;
	static ::java::time::temporal::ChronoField* SECOND_OF_MINUTE;
	static ::java::time::temporal::ChronoField* SECOND_OF_DAY;
	static ::java::time::temporal::ChronoField* MINUTE_OF_HOUR;
	static ::java::time::temporal::ChronoField* MINUTE_OF_DAY;
	static ::java::time::temporal::ChronoField* HOUR_OF_AMPM;
	static ::java::time::temporal::ChronoField* CLOCK_HOUR_OF_AMPM;
	static ::java::time::temporal::ChronoField* HOUR_OF_DAY;
	static ::java::time::temporal::ChronoField* CLOCK_HOUR_OF_DAY;
	static ::java::time::temporal::ChronoField* AMPM_OF_DAY;
	static ::java::time::temporal::ChronoField* DAY_OF_WEEK;
	static ::java::time::temporal::ChronoField* ALIGNED_DAY_OF_WEEK_IN_MONTH;
	static ::java::time::temporal::ChronoField* ALIGNED_DAY_OF_WEEK_IN_YEAR;
	static ::java::time::temporal::ChronoField* DAY_OF_MONTH;
	static ::java::time::temporal::ChronoField* DAY_OF_YEAR;
	static ::java::time::temporal::ChronoField* EPOCH_DAY;
	static ::java::time::temporal::ChronoField* ALIGNED_WEEK_OF_MONTH;
	static ::java::time::temporal::ChronoField* ALIGNED_WEEK_OF_YEAR;
	static ::java::time::temporal::ChronoField* MONTH_OF_YEAR;
	static ::java::time::temporal::ChronoField* PROLEPTIC_MONTH;
	static ::java::time::temporal::ChronoField* YEAR_OF_ERA;
	static ::java::time::temporal::ChronoField* YEAR;
	static ::java::time::temporal::ChronoField* ERA;
	static ::java::time::temporal::ChronoField* INSTANT_SECONDS;
	static ::java::time::temporal::ChronoField* OFFSET_SECONDS;
	static $Array<::java::time::temporal::ChronoField>* $VALUES;
	$String* name$ = nullptr;
	::java::time::temporal::TemporalUnit* baseUnit = nullptr;
	::java::time::temporal::TemporalUnit* rangeUnit = nullptr;
	::java::time::temporal::ValueRange* range$ = nullptr;
	$String* displayNameKey = nullptr;
};

		} // temporal
	} // time
} // java

#pragma pop_macro("ALIGNED_DAY_OF_WEEK_IN_MONTH")
#pragma pop_macro("ALIGNED_DAY_OF_WEEK_IN_YEAR")
#pragma pop_macro("ALIGNED_WEEK_OF_MONTH")
#pragma pop_macro("ALIGNED_WEEK_OF_YEAR")
#pragma pop_macro("AMPM_OF_DAY")
#pragma pop_macro("CLOCK_HOUR_OF_AMPM")
#pragma pop_macro("CLOCK_HOUR_OF_DAY")
#pragma pop_macro("DAY_OF_MONTH")
#pragma pop_macro("DAY_OF_WEEK")
#pragma pop_macro("DAY_OF_YEAR")
#pragma pop_macro("EPOCH_DAY")
#pragma pop_macro("ERA")
#pragma pop_macro("HOUR_OF_AMPM")
#pragma pop_macro("HOUR_OF_DAY")
#pragma pop_macro("INSTANT_SECONDS")
#pragma pop_macro("MICRO_OF_DAY")
#pragma pop_macro("MICRO_OF_SECOND")
#pragma pop_macro("MILLI_OF_DAY")
#pragma pop_macro("MILLI_OF_SECOND")
#pragma pop_macro("MINUTE_OF_DAY")
#pragma pop_macro("MINUTE_OF_HOUR")
#pragma pop_macro("MONTH_OF_YEAR")
#pragma pop_macro("NANO_OF_DAY")
#pragma pop_macro("NANO_OF_SECOND")
#pragma pop_macro("OFFSET_SECONDS")
#pragma pop_macro("PROLEPTIC_MONTH")
#pragma pop_macro("SECOND_OF_DAY")
#pragma pop_macro("SECOND_OF_MINUTE")
#pragma pop_macro("YEAR")
#pragma pop_macro("YEAR_OF_ERA")

#endif // _java_time_temporal_ChronoField_h_