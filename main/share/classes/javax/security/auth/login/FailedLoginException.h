#ifndef _javax_security_auth_login_FailedLoginException_h_
#define _javax_security_auth_login_FailedLoginException_h_
//$ class javax.security.auth.login.FailedLoginException
//$ extends javax.security.auth.login.LoginException

#include <javax/security/auth/login/LoginException.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $export FailedLoginException : public ::javax::security::auth::login::LoginException {
	$class(FailedLoginException, $NO_CLASS_INIT, ::javax::security::auth::login::LoginException)
public:
	FailedLoginException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x0b234144ccfa47de;
	FailedLoginException(const FailedLoginException& e);
	virtual void throw$() override;
	inline FailedLoginException* operator ->() const {
		return (FailedLoginException*)throwing$;
	}
	inline operator FailedLoginException*() const {
		return (FailedLoginException*)throwing$;
	}
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_FailedLoginException_h_