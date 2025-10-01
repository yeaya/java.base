#ifndef _java_security_spec_RSAMultiPrimePrivateCrtKeySpec_h_
#define _java_security_spec_RSAMultiPrimePrivateCrtKeySpec_h_
//$ class java.security.spec.RSAMultiPrimePrivateCrtKeySpec
//$ extends java.security.spec.RSAPrivateKeySpec

#include <java/lang/Array.h>
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
			class RSAOtherPrimeInfo;
		}
	}
}

namespace java {
	namespace security {
		namespace spec {

class $export RSAMultiPrimePrivateCrtKeySpec : public ::java::security::spec::RSAPrivateKeySpec {
	$class(RSAMultiPrimePrivateCrtKeySpec, $NO_CLASS_INIT, ::java::security::spec::RSAPrivateKeySpec)
public:
	RSAMultiPrimePrivateCrtKeySpec();
	void init$(::java::math::BigInteger* modulus, ::java::math::BigInteger* publicExponent, ::java::math::BigInteger* privateExponent, ::java::math::BigInteger* primeP, ::java::math::BigInteger* primeQ, ::java::math::BigInteger* primeExponentP, ::java::math::BigInteger* primeExponentQ, ::java::math::BigInteger* crtCoefficient, $Array<::java::security::spec::RSAOtherPrimeInfo>* otherPrimeInfo);
	void init$(::java::math::BigInteger* modulus, ::java::math::BigInteger* publicExponent, ::java::math::BigInteger* privateExponent, ::java::math::BigInteger* primeP, ::java::math::BigInteger* primeQ, ::java::math::BigInteger* primeExponentP, ::java::math::BigInteger* primeExponentQ, ::java::math::BigInteger* crtCoefficient, $Array<::java::security::spec::RSAOtherPrimeInfo>* otherPrimeInfo, ::java::security::spec::AlgorithmParameterSpec* keyParams);
	virtual ::java::math::BigInteger* getCrtCoefficient();
	virtual $Array<::java::security::spec::RSAOtherPrimeInfo>* getOtherPrimeInfo();
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
	$Array<::java::security::spec::RSAOtherPrimeInfo>* otherPrimeInfo = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_RSAMultiPrimePrivateCrtKeySpec_h_