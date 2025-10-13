#ifndef _javax_security_auth_login_AppConfigurationEntry$LoginModuleControlFlag_h_
#define _javax_security_auth_login_AppConfigurationEntry$LoginModuleControlFlag_h_
//$ class javax.security.auth.login.AppConfigurationEntry$LoginModuleControlFlag
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("OPTIONAL")
#undef OPTIONAL
#pragma push_macro("REQUIRED")
#undef REQUIRED
#pragma push_macro("REQUISITE")
#undef REQUISITE
#pragma push_macro("SUFFICIENT")
#undef SUFFICIENT

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $import AppConfigurationEntry$LoginModuleControlFlag : public ::java::lang::Object {
	$class(AppConfigurationEntry$LoginModuleControlFlag, 0, ::java::lang::Object)
public:
	AppConfigurationEntry$LoginModuleControlFlag();
	void init$($String* controlFlag);
	virtual $String* toString() override;
	$String* controlFlag = nullptr;
	static ::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag* REQUIRED;
	static ::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag* REQUISITE;
	static ::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag* SUFFICIENT;
	static ::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag* OPTIONAL;
};

			} // login
		} // auth
	} // security
} // javax

#pragma pop_macro("OPTIONAL")
#pragma pop_macro("REQUIRED")
#pragma pop_macro("REQUISITE")
#pragma pop_macro("SUFFICIENT")

#endif // _javax_security_auth_login_AppConfigurationEntry$LoginModuleControlFlag_h_