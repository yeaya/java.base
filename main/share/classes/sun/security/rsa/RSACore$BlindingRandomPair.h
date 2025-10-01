#ifndef _sun_security_rsa_RSACore$BlindingRandomPair_h_
#define _sun_security_rsa_RSACore$BlindingRandomPair_h_
//$ class sun.security.rsa.RSACore$BlindingRandomPair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class RSACore$BlindingRandomPair : public ::java::lang::Object {
	$class(RSACore$BlindingRandomPair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RSACore$BlindingRandomPair();
	void init$(::java::math::BigInteger* u, ::java::math::BigInteger* v);
	::java::math::BigInteger* u = nullptr;
	::java::math::BigInteger* v = nullptr;
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_RSACore$BlindingRandomPair_h_