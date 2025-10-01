#ifndef _java_security_spec_RSAPublicKeySpec_h_
#define _java_security_spec_RSAPublicKeySpec_h_
//$ class java.security.spec.RSAPublicKeySpec
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

class $export RSAPublicKeySpec : public ::java::security::spec::KeySpec {
	$class(RSAPublicKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	RSAPublicKeySpec();
	void init$(::java::math::BigInteger* modulus, ::java::math::BigInteger* publicExponent);
	void init$(::java::math::BigInteger* modulus, ::java::math::BigInteger* publicExponent, ::java::security::spec::AlgorithmParameterSpec* params);
	virtual ::java::math::BigInteger* getModulus();
	virtual ::java::security::spec::AlgorithmParameterSpec* getParams();
	virtual ::java::math::BigInteger* getPublicExponent();
	::java::math::BigInteger* modulus = nullptr;
	::java::math::BigInteger* publicExponent = nullptr;
	::java::security::spec::AlgorithmParameterSpec* params = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_RSAPublicKeySpec_h_