#ifndef _javax_security_auth_login_LoginContext$3_h_
#define _javax_security_auth_login_LoginContext$3_h_
//$ class javax.security.auth.login.LoginContext$3
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
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

class LoginContext$3 : public ::java::security::PrivilegedExceptionAction {
	$class(LoginContext$3, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	LoginContext$3();
	void init$(::javax::security::auth::login::LoginContext* this$0, ::java::lang::ClassLoader* val$finalLoader);
	virtual $Object* run() override;
	::javax::security::auth::login::LoginContext* this$0 = nullptr;
	::java::lang::ClassLoader* val$finalLoader = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_LoginContext$3_h_