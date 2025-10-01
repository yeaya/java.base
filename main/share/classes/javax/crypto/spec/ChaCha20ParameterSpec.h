#ifndef _javax_crypto_spec_ChaCha20ParameterSpec_h_
#define _javax_crypto_spec_ChaCha20ParameterSpec_h_
//$ class javax.crypto.spec.ChaCha20ParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/lang/Array.h>
#include <java/security/spec/AlgorithmParameterSpec.h>

#pragma push_macro("NONCE_LENGTH")
#undef NONCE_LENGTH

namespace javax {
	namespace crypto {
		namespace spec {

class $export ChaCha20ParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(ChaCha20ParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	ChaCha20ParameterSpec();
	void init$($bytes* nonce, int32_t counter);
	int32_t getCounter();
	$bytes* getNonce();
	static const int32_t NONCE_LENGTH = 12;
	$bytes* nonce = nullptr;
	int32_t counter = 0;
};

		} // spec
	} // crypto
} // javax

#pragma pop_macro("NONCE_LENGTH")

#endif // _javax_crypto_spec_ChaCha20ParameterSpec_h_