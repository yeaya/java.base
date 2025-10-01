#ifndef _sun_security_action_GetIntegerAction_h_
#define _sun_security_action_GetIntegerAction_h_
//$ class sun.security.action.GetIntegerAction
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Integer;
	}
}

namespace sun {
	namespace security {
		namespace action {

class $export GetIntegerAction : public ::java::security::PrivilegedAction {
	$class(GetIntegerAction, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	GetIntegerAction();
	void init$($String* theProp);
	void init$($String* theProp, int32_t defaultVal);
	static ::java::lang::Integer* privilegedGetProperty($String* theProp);
	static ::java::lang::Integer* privilegedGetProperty($String* theProp, int32_t defaultVal);
	virtual $Object* run() override;
	$String* theProp = nullptr;
	int32_t defaultVal = 0;
	bool defaultSet = false;
};

		} // action
	} // security
} // sun

#endif // _sun_security_action_GetIntegerAction_h_