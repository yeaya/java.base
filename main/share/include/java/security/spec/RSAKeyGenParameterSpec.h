#ifndef _java_security_spec_RSAKeyGenParameterSpec_h_
#define _java_security_spec_RSAKeyGenParameterSpec_h_
//$ class java.security.spec.RSAKeyGenParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace spec {

class $import RSAKeyGenParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(RSAKeyGenParameterSpec, 0, ::java::security::spec::AlgorithmParameterSpec)
public:
	RSAKeyGenParameterSpec();
	void init$(int32_t keysize, ::java::math::BigInteger* publicExponent);
	void init$(int32_t keysize, ::java::math::BigInteger* publicExponent, ::java::security::spec::AlgorithmParameterSpec* keyParams);
	virtual ::java::security::spec::AlgorithmParameterSpec* getKeyParams();
	virtual int32_t getKeysize();
	virtual ::java::math::BigInteger* getPublicExponent();
	int32_t keysize = 0;
	::java::math::BigInteger* publicExponent = nullptr;
	::java::security::spec::AlgorithmParameterSpec* keyParams = nullptr;
	static ::java::math::BigInteger* F0;
	static ::java::math::BigInteger* F4;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_RSAKeyGenParameterSpec_h_