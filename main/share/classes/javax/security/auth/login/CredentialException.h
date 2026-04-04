#ifndef _javax_security_auth_login_CredentialException_h_
#define _javax_security_auth_login_CredentialException_h_
//$ class javax.security.auth.login.CredentialException
//$ extends javax.security.auth.login.LoginException

#include <javax/security/auth/login/LoginException.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $export CredentialException : public ::javax::security::auth::login::LoginException {
	$class(CredentialException, $NO_CLASS_INIT, ::javax::security::auth::login::LoginException)
public:
	CredentialException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xbdc3464e92112a7d;
	CredentialException(const CredentialException& e);
	virtual void throw$() override;
	inline CredentialException* operator ->() const {
		return (CredentialException*)throwing$;
	}
	inline operator CredentialException*() const {
		return (CredentialException*)throwing$;
	}
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_CredentialException_h_