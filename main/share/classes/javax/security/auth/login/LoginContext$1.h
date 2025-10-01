#ifndef _javax_security_auth_login_LoginContext$1_h_
#define _javax_security_auth_login_LoginContext$1_h_
//$ class javax.security.auth.login.LoginContext$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class LoginContext;
			}
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class LoginContext$1 : public ::java::security::PrivilegedAction {
	$class(LoginContext$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	LoginContext$1();
	void init$(::javax::security::auth::login::LoginContext* this$0);
	virtual $Object* run() override;
	::javax::security::auth::login::LoginContext* this$0 = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_LoginContext$1_h_