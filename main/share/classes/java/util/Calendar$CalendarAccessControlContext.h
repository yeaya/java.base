#ifndef _java_util_Calendar$CalendarAccessControlContext_h_
#define _java_util_Calendar$CalendarAccessControlContext_h_
//$ class java.util.Calendar$CalendarAccessControlContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace util {

class Calendar$CalendarAccessControlContext : public ::java::lang::Object {
	$class(Calendar$CalendarAccessControlContext, 0, ::java::lang::Object)
public:
	Calendar$CalendarAccessControlContext();
	void init$();
	static ::java::security::AccessControlContext* INSTANCE;
};

	} // util
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_util_Calendar$CalendarAccessControlContext_h_