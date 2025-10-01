#ifndef _javax_security_auth_login_ConfigurationSpi_h_
#define _javax_security_auth_login_ConfigurationSpi_h_
//$ class javax.security.auth.login.ConfigurationSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
			namespace login {

class $import ConfigurationSpi : public ::java::lang::Object {
	$class(ConfigurationSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConfigurationSpi();
	void init$();
	virtual $Array<::javax::security::auth::login::AppConfigurationEntry>* engineGetAppConfigurationEntry($String* name) {return nullptr;}
	virtual void engineRefresh();
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_ConfigurationSpi_h_