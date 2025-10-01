#ifndef _java_time_Duration$DurationUnits_h_
#define _java_time_Duration$DurationUnits_h_
//$ class java.time.Duration$DurationUnits
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("UNITS")
#undef UNITS

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace time {

class Duration$DurationUnits : public ::java::lang::Object {
	$class(Duration$DurationUnits, 0, ::java::lang::Object)
public:
	Duration$DurationUnits();
	void init$();
	static ::java::util::List* UNITS;
};

	} // time
} // java

#pragma pop_macro("UNITS")

#endif // _java_time_Duration$DurationUnits_h_