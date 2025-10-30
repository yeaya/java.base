#ifndef _javax_security_auth_login_CredentialExpiredException_h_
#define _javax_security_auth_login_CredentialExpiredException_h_
//$ class javax.security.auth.login.CredentialExpiredException
//$ extends javax.security.auth.login.CredentialException

#include <javax/security/auth/login/CredentialException.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $import CredentialExpiredException : public ::javax::security::auth::login::CredentialException {
	$class(CredentialExpiredException, $NO_CLASS_INIT, ::javax::security::auth::login::CredentialException)
public:
	CredentialExpiredException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xB5D3ABA8330656AF;
	CredentialExpiredException(const CredentialExpiredException& e);
	virtual void throw$() override;
	inline CredentialExpiredException* operator ->() {
		return (CredentialExpiredException*)throwing$;
	}
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_CredentialExpiredException_h_