#ifndef _sun_security_action_GetPropertyAction_h_
#define _sun_security_action_GetPropertyAction_h_
//$ class sun.security.action.GetPropertyAction
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Properties;
	}
}

namespace sun {
	namespace security {
		namespace action {

class $export GetPropertyAction : public ::java::security::PrivilegedAction {
	$class(GetPropertyAction, $PRELOAD | $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	GetPropertyAction();
	void init$($String* theProp);
	void init$($String* theProp, $String* defaultVal);
	static ::java::util::Properties* privilegedGetProperties();
	static $String* privilegedGetProperty($String* theProp);
	static $String* privilegedGetProperty($String* theProp, $String* defaultVal);
	virtual $Object* run() override;
	$String* theProp = nullptr;
	$String* defaultVal = nullptr;
};

		} // action
	} // security
} // sun

#endif // _sun_security_action_GetPropertyAction_h_