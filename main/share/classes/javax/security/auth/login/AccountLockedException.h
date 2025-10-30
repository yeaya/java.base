#ifndef _javax_security_auth_login_AccountLockedException_h_
#define _javax_security_auth_login_AccountLockedException_h_
//$ class javax.security.auth.login.AccountLockedException
//$ extends javax.security.auth.login.AccountException

#include <javax/security/auth/login/AccountException.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $export AccountLockedException : public ::javax::security::auth::login::AccountException {
	$class(AccountLockedException, $NO_CLASS_INIT, ::javax::security::auth::login::AccountException)
public:
	AccountLockedException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x72E9B269047E569E;
	AccountLockedException(const AccountLockedException& e);
	virtual void throw$() override;
	inline AccountLockedException* operator ->() {
		return (AccountLockedException*)throwing$;
	}
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_AccountLockedException_h_