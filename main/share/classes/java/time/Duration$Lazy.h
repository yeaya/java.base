#ifndef _java_time_Duration$Lazy_h_
#define _java_time_Duration$Lazy_h_
//$ class java.time.Duration$Lazy
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PATTERN")
#undef PATTERN

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace java {
	namespace time {

class Duration$Lazy : public ::java::lang::Object {
	$class(Duration$Lazy, 0, ::java::lang::Object)
public:
	Duration$Lazy();
	void init$();
	static ::java::util::regex::Pattern* PATTERN;
};

	} // time
} // java

#pragma pop_macro("PATTERN")

#endif // _java_time_Duration$Lazy_h_