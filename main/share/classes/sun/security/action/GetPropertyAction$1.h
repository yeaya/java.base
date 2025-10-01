#ifndef _sun_security_action_GetPropertyAction$1_h_
#define _sun_security_action_GetPropertyAction$1_h_
//$ class sun.security.action.GetPropertyAction$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace action {

class GetPropertyAction$1 : public ::java::security::PrivilegedAction {
	$class(GetPropertyAction$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	GetPropertyAction$1();
	void init$();
	virtual $Object* run() override;
};

		} // action
	} // security
} // sun

#endif // _sun_security_action_GetPropertyAction$1_h_