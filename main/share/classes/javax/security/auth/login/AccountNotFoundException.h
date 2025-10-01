#ifndef _javax_security_auth_login_AccountNotFoundException_h_
#define _javax_security_auth_login_AccountNotFoundException_h_
//$ class javax.security.auth.login.AccountNotFoundException
//$ extends javax.security.auth.login.AccountException

#include <javax/security/auth/login/AccountException.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $export AccountNotFoundException : public ::javax::security::auth::login::AccountException {
	$class(AccountNotFoundException, $NO_CLASS_INIT, ::javax::security::auth::login::AccountException)
public:
	AccountNotFoundException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x14CB34FD629799D6;
	AccountNotFoundException(const AccountNotFoundException& e);
	AccountNotFoundException wrapper$();
	virtual void throwWrapper$() override;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_AccountNotFoundException_h_