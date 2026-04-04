#ifndef _javax_security_auth_login_LoginException_h_
#define _javax_security_auth_login_LoginException_h_
//$ class javax.security.auth.login.LoginException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $import LoginException : public ::java::security::GeneralSecurityException {
	$class(LoginException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	LoginException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xbf1086f575dfd518;
	LoginException(const LoginException& e);
	virtual void throw$() override;
	inline LoginException* operator ->() const {
		return (LoginException*)throwing$;
	}
	inline operator LoginException*() const {
		return (LoginException*)throwing$;
	}
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_LoginException_h_