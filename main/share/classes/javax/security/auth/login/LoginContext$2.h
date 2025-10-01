#ifndef _javax_security_auth_login_LoginContext$2_h_
#define _javax_security_auth_login_LoginContext$2_h_
//$ class javax.security.auth.login.LoginContext$2
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

class LoginContext$2 : public ::java::security::PrivilegedAction {
	$class(LoginContext$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	LoginContext$2();
	void init$(::javax::security::auth::login::LoginContext* this$0);
	virtual $Object* run() override;
	::javax::security::auth::login::LoginContext* this$0 = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_LoginContext$2_h_