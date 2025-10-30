#ifndef _javax_security_auth_login_CredentialException_h_
#define _javax_security_auth_login_CredentialException_h_
//$ class javax.security.auth.login.CredentialException
//$ extends javax.security.auth.login.LoginException

#include <javax/security/auth/login/LoginException.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $import CredentialException : public ::javax::security::auth::login::LoginException {
	$class(CredentialException, $NO_CLASS_INIT, ::javax::security::auth::login::LoginException)
public:
	CredentialException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xBDC3464E92112A7D;
	CredentialException(const CredentialException& e);
	virtual void throw$() override;
	inline CredentialException* operator ->() {
		return (CredentialException*)throwing$;
	}
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_CredentialException_h_