#ifndef _java_time_temporal_JulianFields_h_
#define _java_time_temporal_JulianFields_h_
//$ class java.time.temporal.JulianFields
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("JULIAN_DAY")
#undef JULIAN_DAY
#pragma push_macro("JULIAN_DAY_OFFSET")
#undef JULIAN_DAY_OFFSET
#pragma push_macro("MODIFIED_JULIAN_DAY")
#undef MODIFIED_JULIAN_DAY
#pragma push_macro("RATA_DIE")
#undef RATA_DIE

namespace java {
	namespace time {
		namespace temporal {
			class TemporalField;
		}
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $export JulianFields : public ::java::lang::Object {
	$class(JulianFields, 0, ::java::lang::Object)
public:
	JulianFields();
	void init$();
	static const int64_t JULIAN_DAY_OFFSET = (int64_t)2440588;
	static ::java::time::temporal::TemporalField* JULIAN_DAY;
	static ::java::time::temporal::TemporalField* MODIFIED_JULIAN_DAY;
	static ::java::time::temporal::TemporalField* RATA_DIE;
};

		} // temporal
	} // time
} // java

#pragma pop_macro("JULIAN_DAY")
#pragma pop_macro("JULIAN_DAY_OFFSET")
#pragma pop_macro("MODIFIED_JULIAN_DAY")
#pragma pop_macro("RATA_DIE")

#endif // _java_time_temporal_JulianFields_h_