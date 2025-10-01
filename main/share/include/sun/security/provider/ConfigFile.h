#ifndef _sun_security_provider_ConfigFile_h_
#define _sun_security_provider_ConfigFile_h_
//$ class sun.security.provider.ConfigFile
//$ extends javax.security.auth.login.Configuration

#include <java/lang/Array.h>
#include <javax/security/auth/login/Configuration.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class AppConfigurationEntry;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class ConfigFile$Spi;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import ConfigFile : public ::javax::security::auth::login::Configuration {
	$class(ConfigFile, $NO_CLASS_INIT, ::javax::security::auth::login::Configuration)
public:
	ConfigFile();
	void init$();
	virtual $Array<::javax::security::auth::login::AppConfigurationEntry>* getAppConfigurationEntry($String* appName) override;
	virtual void refresh() override;
	::sun::security::provider::ConfigFile$Spi* spi = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_ConfigFile_h_