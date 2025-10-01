#ifndef _javax_crypto_spec_DHParameterSpec_h_
#define _javax_crypto_spec_DHParameterSpec_h_
//$ class javax.crypto.spec.DHParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace javax {
	namespace crypto {
		namespace spec {

class $import DHParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(DHParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	DHParameterSpec();
	void init$(::java::math::BigInteger* p, ::java::math::BigInteger* g);
	void init$(::java::math::BigInteger* p, ::java::math::BigInteger* g, int32_t l);
	virtual ::java::math::BigInteger* getG();
	virtual int32_t getL();
	virtual ::java::math::BigInteger* getP();
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* g = nullptr;
	int32_t l = 0;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_DHParameterSpec_h_