#ifndef _javax_security_auth_login_AccountException_h_
#define _javax_security_auth_login_AccountException_h_
//$ class javax.security.auth.login.AccountException
//$ extends javax.security.auth.login.LoginException

#include <javax/security/auth/login/LoginException.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $export AccountException : public ::javax::security::auth::login::LoginException {
	$class(AccountException, $NO_CLASS_INIT, ::javax::security::auth::login::LoginException)
public:
	AccountException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xE2AD8C08F4CCB2B5;
	AccountException(const AccountException& e);
	virtual void throw$() override;
	inline AccountException* operator ->() {
		return (AccountException*)throwing$;
	}
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_AccountException_h_