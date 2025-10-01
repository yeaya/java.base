#ifndef _apple_security_AppleProvider$ProviderService_h_
#define _apple_security_AppleProvider$ProviderService_h_
//$ class apple.security.AppleProvider$ProviderService
//$ extends java.security.Provider$Service

#include <java/security/Provider$Service.h>

namespace java {
	namespace security {
		class Provider;
	}
}

namespace apple {
	namespace security {

class AppleProvider$ProviderService : public ::java::security::Provider$Service {
	$class(AppleProvider$ProviderService, $NO_CLASS_INIT, ::java::security::Provider$Service)
public:
	AppleProvider$ProviderService();
	void init$(::java::security::Provider* p, $String* type, $String* algo, $String* cn);
	virtual $Object* newInstance(Object$* ctrParamObj) override;
};

	} // security
} // apple

#endif // _apple_security_AppleProvider$ProviderService_h_