#ifndef _sun_security_provider_SeedGenerator$1_h_
#define _sun_security_provider_SeedGenerator$1_h_
//$ class sun.security.provider.SeedGenerator$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class MessageDigest;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class SeedGenerator$1 : public ::java::security::PrivilegedAction {
	$class(SeedGenerator$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SeedGenerator$1();
	void init$(::java::security::MessageDigest* val$md);
	virtual $Object* run() override;
	::java::security::MessageDigest* val$md = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SeedGenerator$1_h_