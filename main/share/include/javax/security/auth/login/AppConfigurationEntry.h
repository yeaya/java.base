#ifndef _javax_security_auth_login_AppConfigurationEntry_h_
#define _javax_security_auth_login_AppConfigurationEntry_h_
//$ class javax.security.auth.login.AppConfigurationEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class AppConfigurationEntry$LoginModuleControlFlag;
			}
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $import AppConfigurationEntry : public ::java::lang::Object {
	$class(AppConfigurationEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AppConfigurationEntry();
	void init$($String* loginModuleName, ::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag* controlFlag, ::java::util::Map* options);
	virtual ::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag* getControlFlag();
	virtual $String* getLoginModuleName();
	virtual ::java::util::Map* getOptions();
	$String* loginModuleName = nullptr;
	::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag* controlFlag = nullptr;
	::java::util::Map* options = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_AppConfigurationEntry_h_