#ifndef _java_security_spec_RSAPrivateKeySpec_h_
#define _java_security_spec_RSAPrivateKeySpec_h_
//$ class java.security.spec.RSAPrivateKeySpec
//$ extends java.security.spec.KeySpec

#include <java/security/spec/KeySpec.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace java {
	namespace security {
		namespace spec {

class $import RSAPrivateKeySpec : public ::java::security::spec::KeySpec {
	$class(RSAPrivateKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	RSAPrivateKeySpec();
	void init$(::java::math::BigInteger* modulus, ::java::math::BigInteger* privateExponent);
	void init$(::java::math::BigInteger* modulus, ::java::math::BigInteger* privateExponent, ::java::security::spec::AlgorithmParameterSpec* params);
	virtual ::java::math::BigInteger* getModulus();
	virtual ::java::security::spec::AlgorithmParameterSpec* getParams();
	virtual ::java::math::BigInteger* getPrivateExponent();
	::java::math::BigInteger* modulus = nullptr;
	::java::math::BigInteger* privateExponent = nullptr;
	::java::security::spec::AlgorithmParameterSpec* params = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_RSAPrivateKeySpec_h_