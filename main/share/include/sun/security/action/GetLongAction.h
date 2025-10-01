#ifndef _sun_security_action_GetLongAction_h_
#define _sun_security_action_GetLongAction_h_
//$ class sun.security.action.GetLongAction
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace action {

class $import GetLongAction : public ::java::security::PrivilegedAction {
	$class(GetLongAction, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	GetLongAction();
	void init$($String* theProp);
	void init$($String* theProp, int64_t defaultVal);
	virtual $Object* run() override;
	$String* theProp = nullptr;
	int64_t defaultVal = 0;
	bool defaultSet = false;
};

		} // action
	} // security
} // sun

#endif // _sun_security_action_GetLongAction_h_