#ifndef _javax_crypto_spec_DHPrivateKeySpec_h_
#define _javax_crypto_spec_DHPrivateKeySpec_h_
//$ class javax.crypto.spec.DHPrivateKeySpec
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

class $export DHPrivateKeySpec : public ::java::security::spec::KeySpec {
	$class(DHPrivateKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	DHPrivateKeySpec();
	void init$(::java::math::BigInteger* x, ::java::math::BigInteger* p, ::java::math::BigInteger* g);
	virtual ::java::math::BigInteger* getG();
	virtual ::java::math::BigInteger* getP();
	virtual ::java::math::BigInteger* getX();
	::java::math::BigInteger* x = nullptr;
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* g = nullptr;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_DHPrivateKeySpec_h_