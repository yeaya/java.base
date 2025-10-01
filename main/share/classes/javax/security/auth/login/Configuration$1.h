#ifndef _javax_security_auth_login_Configuration$1_h_
#define _javax_security_auth_login_Configuration$1_h_
//$ class javax.security.auth.login.Configuration$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class Configuration$1 : public ::java::security::PrivilegedAction {
	$class(Configuration$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Configuration$1();
	void init$();
	virtual $Object* run() override;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_Configuration$1_h_