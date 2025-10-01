#ifndef _sun_util_calendar_ZoneInfoFile$1_h_
#define _sun_util_calendar_ZoneInfoFile$1_h_
//$ class sun.util.calendar.ZoneInfoFile$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace util {
		namespace calendar {

class $import ZoneInfoFile$1 : public ::java::security::PrivilegedAction {
	$class(ZoneInfoFile$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ZoneInfoFile$1();
	void init$();
	virtual $Object* run() override;
};

		} // calendar
	} // util
} // sun

#endif // _sun_util_calendar_ZoneInfoFile$1_h_