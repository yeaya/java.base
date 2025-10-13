#ifndef _java_time_temporal_IsoFields$Field_h_
#define _java_time_temporal_IsoFields$Field_h_
//$ class java.time.temporal.IsoFields$Field
//$ extends java.lang.Enum
//$ implements java.time.temporal.TemporalField

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/temporal/TemporalField.h>

#pragma push_macro("DAY_OF_QUARTER")
#undef DAY_OF_QUARTER
#pragma push_macro("QUARTER_DAYS")
#undef QUARTER_DAYS
#pragma push_macro("QUARTER_OF_YEAR")
#undef QUARTER_OF_YEAR
#pragma push_macro("WEEK_BASED_YEAR")
#undef WEEK_BASED_YEAR
#pragma push_macro("WEEK_OF_WEEK_BASED_YEAR")
#undef WEEK_OF_WEEK_BASED_YEAR

namespace java {
	namespace time {
		class LocalDate;
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalAccessor;
			class ValueRange;
		}
	}
}

namespace java {
	namespace time {
		namespace temporal {

class IsoFields$Field : public ::java::lang::Enum, public ::java::time::temporal::TemporalField {
	$class(IsoFields$Field, 0, ::java::lang::Enum, ::java::time::temporal::TemporalField)
public:
	IsoFields$Field();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::java::time::temporal::IsoFields$Field>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static void ensureIso(::java::time::temporal::TemporalAccessor* temporal);
	static int32_t getWeek(::java::time::LocalDate* date);
	static int32_t getWeekBasedYear(::java::time::LocalDate* date);
	static ::java::time::temporal::ValueRange* getWeekRange(::java::time::LocalDate* date);
	static int32_t getWeekRange(int32_t wby);
	virtual bool isDateBased() override;
	virtual bool isTimeBased() override;
	virtual ::java::time::temporal::ValueRange* rangeRefinedBy(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual $String* toString() override;
	static ::java::time::temporal::IsoFields$Field* valueOf($String* name);
	static $Array<::java::time::temporal::IsoFields$Field>* values();
	static ::java::time::temporal::IsoFields$Field* DAY_OF_QUARTER;
	static ::java::time::temporal::IsoFields$Field* QUARTER_OF_YEAR;
	static ::java::time::temporal::IsoFields$Field* WEEK_OF_WEEK_BASED_YEAR;
	static ::java::time::temporal::IsoFields$Field* WEEK_BASED_YEAR;
	static $Array<::java::time::temporal::IsoFields$Field>* $VALUES;
	static $ints* QUARTER_DAYS;
};

		} // temporal
	} // time
} // java

#pragma pop_macro("DAY_OF_QUARTER")
#pragma pop_macro("QUARTER_DAYS")
#pragma pop_macro("QUARTER_OF_YEAR")
#pragma pop_macro("WEEK_BASED_YEAR")
#pragma pop_macro("WEEK_OF_WEEK_BASED_YEAR")

#endif // _java_time_temporal_IsoFields$Field_h_