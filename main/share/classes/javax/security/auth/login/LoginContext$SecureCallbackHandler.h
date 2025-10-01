#ifndef _javax_security_auth_login_LoginContext$SecureCallbackHandler_h_
#define _javax_security_auth_login_LoginContext$SecureCallbackHandler_h_
//$ class javax.security.auth.login.LoginContext$SecureCallbackHandler
//$ extends javax.security.auth.callback.CallbackHandler

#include <java/lang/Array.h>
#include <javax/security/auth/callback/CallbackHandler.h>

namespace java {
	namespace security {
		class AccessControlContext;
	}
}
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

class LoginContext$SecureCallbackHandler : public ::javax::security::auth::callback::CallbackHandler {
	$class(LoginContext$SecureCallbackHandler, $NO_CLASS_INIT, ::javax::security::auth::callback::CallbackHandler)
public:
	LoginContext$SecureCallbackHandler();
	void init$(::java::security::AccessControlContext* acc, ::javax::security::auth::callback::CallbackHandler* ch);
	virtual void handle($Array<::javax::security::auth::callback::Callback>* callbacks) override;
	::java::security::AccessControlContext* acc = nullptr;
	::javax::security::auth::callback::CallbackHandler* ch = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_LoginContext$SecureCallbackHandler_h_