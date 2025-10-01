#ifndef _javax_security_auth_login_Configuration$2_h_
#define _javax_security_auth_login_Configuration$2_h_
//$ class javax.security.auth.login.Configuration$2
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class Configuration$2 : public ::java::security::PrivilegedExceptionAction {
	$class(Configuration$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	Configuration$2();
	void init$($String* val$finalClass);
	virtual $Object* run() override;
	$String* val$finalClass = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_Configuration$2_h_