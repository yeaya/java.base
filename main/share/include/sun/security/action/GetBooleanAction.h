#ifndef _sun_security_action_GetBooleanAction_h_
#define _sun_security_action_GetBooleanAction_h_
//$ class sun.security.action.GetBooleanAction
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace action {

class $import GetBooleanAction : public ::java::security::PrivilegedAction {
	$class(GetBooleanAction, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	GetBooleanAction();
	void init$($String* theProp);
	static bool privilegedGetProperty($String* theProp);
	virtual $Object* run() override;
	$String* theProp = nullptr;
};

		} // action
	} // security
} // sun

#endif // _sun_security_action_GetBooleanAction_h_