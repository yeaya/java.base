#ifndef _sun_security_provider_SecureRandom$SeederHolder_h_
#define _sun_security_provider_SecureRandom$SeederHolder_h_
//$ class sun.security.provider.SecureRandom$SeederHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace provider {
			class SecureRandom;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class SecureRandom$SeederHolder : public ::java::lang::Object {
	$class(SecureRandom$SeederHolder, 0, ::java::lang::Object)
public:
	SecureRandom$SeederHolder();
	void init$();
	static ::sun::security::provider::SecureRandom* seeder;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SecureRandom$SeederHolder_h_