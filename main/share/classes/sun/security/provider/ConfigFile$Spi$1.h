#ifndef _sun_security_provider_ConfigFile$Spi$1_h_
#define _sun_security_provider_ConfigFile$Spi$1_h_
//$ class sun.security.provider.ConfigFile$Spi$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class Configuration$Parameters;
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

class ConfigFile$Spi$1 : public ::java::security::PrivilegedExceptionAction {
	$class(ConfigFile$Spi$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ConfigFile$Spi$1();
	void init$(::sun::security::provider::ConfigFile$Spi* this$0, ::javax::security::auth::login::Configuration$Parameters* val$params);
	virtual $Object* run() override;
	::sun::security::provider::ConfigFile$Spi* this$0 = nullptr;
	::javax::security::auth::login::Configuration$Parameters* val$params = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_ConfigFile$Spi$1_h_