#ifndef _javax_security_auth_login_LoginContext$4_h_
#define _javax_security_auth_login_LoginContext$4_h_
//$ class javax.security.auth.login.LoginContext$4
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

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

class LoginContext$4 : public ::java::security::PrivilegedExceptionAction {
	$class(LoginContext$4, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	LoginContext$4();
	void init$(::javax::security::auth::login::LoginContext* this$0, $String* val$methodName);
	virtual $Object* run() override;
	::javax::security::auth::login::LoginContext* this$0 = nullptr;
	$String* val$methodName = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_LoginContext$4_h_