#ifndef _javax_crypto_spec_IvParameterSpec_h_
#define _javax_crypto_spec_IvParameterSpec_h_
//$ class javax.crypto.spec.IvParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/lang/Array.h>
#include <java/security/spec/AlgorithmParameterSpec.h>

namespace javax {
	namespace crypto {
		namespace spec {

class $import IvParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(IvParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	IvParameterSpec();
	void init$($bytes* iv);
	void init$($bytes* iv, int32_t offset, int32_t len);
	virtual $bytes* getIV();
	$bytes* iv = nullptr;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_IvParameterSpec_h_