#ifndef _javax_crypto_spec_RC5ParameterSpec_h_
#define _javax_crypto_spec_RC5ParameterSpec_h_
//$ class javax.crypto.spec.RC5ParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/lang/Array.h>
#include <java/security/spec/AlgorithmParameterSpec.h>

namespace javax {
	namespace crypto {
		namespace spec {

class $import RC5ParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(RC5ParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	RC5ParameterSpec();
	void init$(int32_t version, int32_t rounds, int32_t wordSize);
	void init$(int32_t version, int32_t rounds, int32_t wordSize, $bytes* iv);
	void init$(int32_t version, int32_t rounds, int32_t wordSize, $bytes* iv, int32_t offset);
	virtual bool equals(Object$* obj) override;
	virtual $bytes* getIV();
	virtual int32_t getRounds();
	virtual int32_t getVersion();
	virtual int32_t getWordSize();
	virtual int32_t hashCode() override;
	$bytes* iv = nullptr;
	int32_t version = 0;
	int32_t rounds = 0;
	int32_t wordSize = 0;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_RC5ParameterSpec_h_