#ifndef _javax_security_auth_login_LoginContext$ModuleInfo_h_
#define _javax_security_auth_login_LoginContext$ModuleInfo_h_
//$ class javax.security.auth.login.LoginContext$ModuleInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class AppConfigurationEntry;
			}
		}
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace spi {
				class LoginModule;
			}
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class LoginContext$ModuleInfo : public ::java::lang::Object {
	$class(LoginContext$ModuleInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LoginContext$ModuleInfo();
	void init$(::javax::security::auth::login::AppConfigurationEntry* newEntry, ::javax::security::auth::spi::LoginModule* newModule);
	::javax::security::auth::login::AppConfigurationEntry* entry = nullptr;
	::javax::security::auth::spi::LoginModule* module = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_LoginContext$ModuleInfo_h_