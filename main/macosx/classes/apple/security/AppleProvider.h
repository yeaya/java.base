#ifndef _apple_security_AppleProvider_h_
#define _apple_security_AppleProvider_h_
//$ class apple.security.AppleProvider
//$ extends java.security.Provider

#include <java/security/Provider.h>

namespace java {
	namespace security {
		class Provider$Service;
	}
}

namespace apple {
	namespace security {

class AppleProvider : public ::java::security::Provider {
	$class(AppleProvider, 0, ::java::security::Provider)
public:
	AppleProvider();
	using ::java::security::Provider::getProperty;
	void init$();
	static void access$000(::apple::security::AppleProvider* x0, ::java::security::Provider$Service* x1);
	using ::java::security::Provider::load;
	static $String* info;
};

	} // security
} // apple

#endif // _apple_security_AppleProvider_h_