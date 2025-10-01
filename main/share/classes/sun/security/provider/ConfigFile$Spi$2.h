#ifndef _sun_security_provider_ConfigFile$Spi$2_h_
#define _sun_security_provider_ConfigFile$Spi$2_h_
//$ class sun.security.provider.ConfigFile$Spi$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

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

class ConfigFile$Spi$2 : public ::java::security::PrivilegedAction {
	$class(ConfigFile$Spi$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ConfigFile$Spi$2();
	void init$(::sun::security::provider::ConfigFile$Spi* this$0);
	virtual $Object* run() override;
	::sun::security::provider::ConfigFile$Spi* this$0 = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_ConfigFile$Spi$2_h_