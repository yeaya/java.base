#ifndef _javax_crypto_spec_DHPublicKeySpec_h_
#define _javax_crypto_spec_DHPublicKeySpec_h_
//$ class javax.crypto.spec.DHPublicKeySpec
//$ extends java.security.spec.KeySpec

#include <java/security/spec/KeySpec.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace javax {
	namespace crypto {
		namespace spec {

class $export DHPublicKeySpec : public ::java::security::spec::KeySpec {
	$class(DHPublicKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	DHPublicKeySpec();
	void init$(::java::math::BigInteger* y, ::java::math::BigInteger* p, ::java::math::BigInteger* g);
	virtual ::java::math::BigInteger* getG();
	virtual ::java::math::BigInteger* getP();
	virtual ::java::math::BigInteger* getY();
	::java::math::BigInteger* y = nullptr;
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* g = nullptr;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_DHPublicKeySpec_h_