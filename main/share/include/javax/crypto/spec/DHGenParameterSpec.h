#ifndef _javax_crypto_spec_DHGenParameterSpec_h_
#define _javax_crypto_spec_DHGenParameterSpec_h_
//$ class javax.crypto.spec.DHGenParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

namespace javax {
	namespace crypto {
		namespace spec {

class $import DHGenParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(DHGenParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	DHGenParameterSpec();
	void init$(int32_t primeSize, int32_t exponentSize);
	virtual int32_t getExponentSize();
	virtual int32_t getPrimeSize();
	int32_t primeSize = 0;
	int32_t exponentSize = 0;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_DHGenParameterSpec_h_