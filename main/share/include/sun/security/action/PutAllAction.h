#ifndef _sun_security_action_PutAllAction_h_
#define _sun_security_action_PutAllAction_h_
//$ class sun.security.action.PutAllAction
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace security {
		namespace action {

class $import PutAllAction : public ::java::security::PrivilegedAction {
	$class(PutAllAction, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PutAllAction();
	void init$(::java::security::Provider* provider, ::java::util::Map* map);
	virtual $Object* run() override;
	::java::security::Provider* provider = nullptr;
	::java::util::Map* map = nullptr;
};

		} // action
	} // security
} // sun

#endif // _sun_security_action_PutAllAction_h_