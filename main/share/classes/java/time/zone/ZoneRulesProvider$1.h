#ifndef _java_time_zone_ZoneRulesProvider$1_h_
#define _java_time_zone_ZoneRulesProvider$1_h_
//$ class java.time.zone.ZoneRulesProvider$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace time {
		namespace zone {

class ZoneRulesProvider$1 : public ::java::security::PrivilegedAction {
	$class(ZoneRulesProvider$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ZoneRulesProvider$1();
	void init$(::java::util::List* val$loaded);
	virtual $Object* run() override;
	::java::util::List* val$loaded = nullptr;
};

		} // zone
	} // time
} // java

#endif // _java_time_zone_ZoneRulesProvider$1_h_