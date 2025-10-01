#ifndef _java_security_spec_RSAPrivateCrtKeySpec_h_
#define _java_security_spec_RSAPrivateCrtKeySpec_h_
//$ class java.security.spec.RSAPrivateCrtKeySpec
//$ extends java.security.spec.RSAPrivateKeySpec

#include <java/security/spec/RSAPrivateKeySpec.h>

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

class $export RSAPrivateCrtKeySpec : public ::java::security::spec::RSAPrivateKeySpec {
	$class(RSAPrivateCrtKeySpec, $NO_CLASS_INIT, ::java::security::spec::RSAPrivateKeySpec)
public:
	RSAPrivateCrtKeySpec();
	void init$(::java::math::BigInteger* modulus, ::java::math::BigInteger* publicExponent, ::java::math::BigInteger* privateExponent, ::java::math::BigInteger* primeP, ::java::math::BigInteger* primeQ, ::java::math::BigInteger* primeExponentP, ::java::math::BigInteger* primeExponentQ, ::java::math::BigInteger* crtCoefficient);
	void init$(::java::math::BigInteger* modulus, ::java::math::BigInteger* publicExponent, ::java::math::BigInteger* privateExponent, ::java::math::BigInteger* primeP, ::java::math::BigInteger* primeQ, ::java::math::BigInteger* primeExponentP, ::java::math::BigInteger* primeExponentQ, ::java::math::BigInteger* crtCoefficient, ::java::security::spec::AlgorithmParameterSpec* keyParams);
	virtual ::java::math::BigInteger* getCrtCoefficient();
	virtual ::java::math::BigInteger* getPrimeExponentP();
	virtual ::java::math::BigInteger* getPrimeExponentQ();
	virtual ::java::math::BigInteger* getPrimeP();
	virtual ::java::math::BigInteger* getPrimeQ();
	virtual ::java::math::BigInteger* getPublicExponent();
	::java::math::BigInteger* publicExponent = nullptr;
	::java::math::BigInteger* primeP = nullptr;
	::java::math::BigInteger* primeQ = nullptr;
	::java::math::BigInteger* primeExponentP = nullptr;
	::java::math::BigInteger* primeExponentQ = nullptr;
	::java::math::BigInteger* crtCoefficient = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_RSAPrivateCrtKeySpec_h_