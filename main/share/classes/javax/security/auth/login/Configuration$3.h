#ifndef _javax_security_auth_login_Configuration$3_h_
#define _javax_security_auth_login_Configuration$3_h_
//$ class javax.security.auth.login.Configuration$3
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class Configuration;
			}
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class Configuration$3 : public ::java::security::PrivilegedExceptionAction {
	$class(Configuration$3, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	Configuration$3();
	void init$(::javax::security::auth::login::Configuration* val$untrustedImpl);
	virtual $Object* run() override;
	::javax::security::auth::login::Configuration* val$untrustedImpl = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_Configuration$3_h_