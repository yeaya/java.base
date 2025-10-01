#ifndef _javax_security_auth_login_Configuration$ConfigDelegate_h_
#define _javax_security_auth_login_Configuration$ConfigDelegate_h_
//$ class javax.security.auth.login.Configuration$ConfigDelegate
//$ extends javax.security.auth.login.Configuration

#include <java/lang/Array.h>
#include <javax/security/auth/login/Configuration.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class AppConfigurationEntry;
				class Configuration$Parameters;
				class ConfigurationSpi;
			}
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class Configuration$ConfigDelegate : public ::javax::security::auth::login::Configuration {
	$class(Configuration$ConfigDelegate, $NO_CLASS_INIT, ::javax::security::auth::login::Configuration)
public:
	Configuration$ConfigDelegate();
	void init$(::javax::security::auth::login::ConfigurationSpi* spi, ::java::security::Provider* p, $String* type, ::javax::security::auth::login::Configuration$Parameters* params);
	virtual $Array<::javax::security::auth::login::AppConfigurationEntry>* getAppConfigurationEntry($String* name) override;
	virtual ::javax::security::auth::login::Configuration$Parameters* getParameters() override;
	virtual ::java::security::Provider* getProvider() override;
	virtual $String* getType() override;
	virtual void refresh() override;
	::javax::security::auth::login::ConfigurationSpi* spi = nullptr;
	::java::security::Provider* p = nullptr;
	$String* type = nullptr;
	::javax::security::auth::login::Configuration$Parameters* params = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_Configuration$ConfigDelegate_h_