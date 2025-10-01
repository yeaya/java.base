#ifndef _sun_security_pkcs_PKCS7$SecureRandomHolder_h_
#define _sun_security_pkcs_PKCS7$SecureRandomHolder_h_
//$ class sun.security.pkcs.PKCS7$SecureRandomHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("RANDOM")
#undef RANDOM

namespace java {
	namespace security {
		class SecureRandom;
	}
}

namespace sun {
	namespace security {
		namespace pkcs {

class PKCS7$SecureRandomHolder : public ::java::lang::Object {
	$class(PKCS7$SecureRandomHolder, 0, ::java::lang::Object)
public:
	PKCS7$SecureRandomHolder();
	void init$();
	static ::java::security::SecureRandom* RANDOM;
};

		} // pkcs
	} // security
} // sun

#pragma pop_macro("RANDOM")

#endif // _sun_security_pkcs_PKCS7$SecureRandomHolder_h_