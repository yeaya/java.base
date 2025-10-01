#ifndef _SetTimesNanos_h_
#define _SetTimesNanos_h_
//$ class SetTimesNanos
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("IS_WINDOWS")
#undef IS_WINDOWS

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class $export SetTimesNanos : public ::java::lang::Object {
	$class(SetTimesNanos, 0, ::java::lang::Object)
public:
	SetTimesNanos();
	void init$();
	static void main($StringArray* args);
	static void testNanos(::java::nio::file::Path* path);
	static bool IS_WINDOWS;
};

#pragma pop_macro("IS_WINDOWS")

#endif // _SetTimesNanos_h_