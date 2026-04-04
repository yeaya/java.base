#ifndef _javax_security_auth_login_AccountExpiredException_h_
#define _javax_security_auth_login_AccountExpiredException_h_
//$ class javax.security.auth.login.AccountExpiredException
//$ extends javax.security.auth.login.AccountException

#include <javax/security/auth/login/AccountException.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $export AccountExpiredException : public ::javax::security::auth::login::AccountException {
	$class(AccountExpiredException, $NO_CLASS_INIT, ::javax::security::auth::login::AccountException)
public:
	AccountExpiredException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xabd81d1c76efb748;
	AccountExpiredException(const AccountExpiredException& e);
	virtual void throw$() override;
	inline AccountExpiredException* operator ->() const {
		return (AccountExpiredException*)throwing$;
	}
	inline operator AccountExpiredException*() const {
		return (AccountExpiredException*)throwing$;
	}
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_AccountExpiredException_h_