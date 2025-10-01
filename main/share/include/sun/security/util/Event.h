#ifndef _sun_security_util_Event_h_
#define _sun_security_util_Event_h_
//$ class sun.security.util.Event
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace util {
			class Event$Reporter;
			class Event$ReporterCategory;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import Event : public ::java::lang::Object {
	$class(Event, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Event();
	void init$();
	static void clearReportListener(::sun::security::util::Event$ReporterCategory* cat);
	static void report(::sun::security::util::Event$ReporterCategory* cat, $String* type, $ObjectArray* args);
	static void setReportListener(::sun::security::util::Event$ReporterCategory* cat, ::sun::security::util::Event$Reporter* re);
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_Event_h_