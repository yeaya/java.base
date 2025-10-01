#ifndef _sun_security_provider_SeedGenerator$URLSeedGenerator$1_h_
#define _sun_security_provider_SeedGenerator$URLSeedGenerator$1_h_
//$ class sun.security.provider.SeedGenerator$URLSeedGenerator$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class SeedGenerator$URLSeedGenerator;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class SeedGenerator$URLSeedGenerator$1 : public ::java::security::PrivilegedExceptionAction {
	$class(SeedGenerator$URLSeedGenerator$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	SeedGenerator$URLSeedGenerator$1();
	void init$(::sun::security::provider::SeedGenerator$URLSeedGenerator* this$0, ::java::net::URL* val$device);
	virtual $Object* run() override;
	::sun::security::provider::SeedGenerator$URLSeedGenerator* this$0 = nullptr;
	::java::net::URL* val$device = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SeedGenerator$URLSeedGenerator$1_h_