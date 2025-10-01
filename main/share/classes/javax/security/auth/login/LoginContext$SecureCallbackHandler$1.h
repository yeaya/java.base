#ifndef _javax_security_auth_login_LoginContext$SecureCallbackHandler$1_h_
#define _javax_security_auth_login_LoginContext$SecureCallbackHandler$1_h_
//$ class javax.security.auth.login.LoginContext$SecureCallbackHandler$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedExceptionAction.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {
				class Callback;
			}
		}
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class LoginContext$SecureCallbackHandler;
			}
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class LoginContext$SecureCallbackHandler$1 : public ::java::security::PrivilegedExceptionAction {
	$class(LoginContext$SecureCallbackHandler$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	LoginContext$SecureCallbackHandler$1();
	void init$(::javax::security::auth::login::LoginContext$SecureCallbackHandler* this$0, $Array<::javax::security::auth::callback::Callback>* val$callbacks);
	virtual $Object* run() override;
	::javax::security::auth::login::LoginContext$SecureCallbackHandler* this$0 = nullptr;
	$Array<::javax::security::auth::callback::Callback>* val$callbacks = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_LoginContext$SecureCallbackHandler$1_h_