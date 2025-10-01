#ifndef _java_time_temporal_IsoFields_h_
#define _java_time_temporal_IsoFields_h_
//$ class java.time.temporal.IsoFields
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("QUARTER_OF_YEAR")
#undef QUARTER_OF_YEAR
#pragma push_macro("QUARTER_YEARS")
#undef QUARTER_YEARS
#pragma push_macro("DAY_OF_QUARTER")
#undef DAY_OF_QUARTER
#pragma push_macro("WEEK_OF_WEEK_BASED_YEAR")
#undef WEEK_OF_WEEK_BASED_YEAR
#pragma push_macro("WEEK_BASED_YEAR")
#undef WEEK_BASED_YEAR
#pragma push_macro("WEEK_BASED_YEARS")
#undef WEEK_BASED_YEARS

namespace java {
	namespace time {
		namespace temporal {
			class TemporalAccessor;
			class TemporalField;
			class TemporalUnit;
		}
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $export IsoFields : public ::java::lang::Object {
	$class(IsoFields, 0, ::java::lang::Object)
public:
	IsoFields();
	void init$();
	static bool isIso(::java::time::temporal::TemporalAccessor* temporal);
	static ::java::time::temporal::TemporalField* DAY_OF_QUARTER;
	static ::java::time::temporal::TemporalField* QUARTER_OF_YEAR;
	static ::java::time::temporal::TemporalField* WEEK_OF_WEEK_BASED_YEAR;
	static ::java::time::temporal::TemporalField* WEEK_BASED_YEAR;
	static ::java::time::temporal::TemporalUnit* WEEK_BASED_YEARS;
	static ::java::time::temporal::TemporalUnit* QUARTER_YEARS;
};

		} // temporal
	} // time
} // java

#pragma pop_macro("QUARTER_OF_YEAR")
#pragma pop_macro("QUARTER_YEARS")
#pragma pop_macro("DAY_OF_QUARTER")
#pragma pop_macro("WEEK_OF_WEEK_BASED_YEAR")
#pragma pop_macro("WEEK_BASED_YEAR")
#pragma pop_macro("WEEK_BASED_YEARS")

#endif // _java_time_temporal_IsoFields_h_