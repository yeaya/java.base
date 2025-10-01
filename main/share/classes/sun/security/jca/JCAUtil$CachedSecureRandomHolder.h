#ifndef _sun_security_jca_JCAUtil$CachedSecureRandomHolder_h_
#define _sun_security_jca_JCAUtil$CachedSecureRandomHolder_h_
//$ class sun.security.jca.JCAUtil$CachedSecureRandomHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class SecureRandom;
	}
}

namespace sun {
	namespace security {
		namespace jca {

class JCAUtil$CachedSecureRandomHolder : public ::java::lang::Object {
	$class(JCAUtil$CachedSecureRandomHolder, 0, ::java::lang::Object)
public:
	JCAUtil$CachedSecureRandomHolder();
	void init$();
	static ::java::security::SecureRandom* instance;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_JCAUtil$CachedSecureRandomHolder_h_