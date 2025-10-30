#ifndef _javax_security_auth_login_CredentialNotFoundException_h_
#define _javax_security_auth_login_CredentialNotFoundException_h_
//$ class javax.security.auth.login.CredentialNotFoundException
//$ extends javax.security.auth.login.CredentialException

#include <javax/security/auth/login/CredentialException.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $import CredentialNotFoundException : public ::javax::security::auth::login::CredentialException {
	$class(CredentialNotFoundException, $NO_CLASS_INIT, ::javax::security::auth::login::CredentialException)
public:
	CredentialNotFoundException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x94081ED269DF608D;
	CredentialNotFoundException(const CredentialNotFoundException& e);
	virtual void throw$() override;
	inline CredentialNotFoundException* operator ->() {
		return (CredentialNotFoundException*)throwing$;
	}
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_CredentialNotFoundException_h_