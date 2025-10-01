#ifndef _javax_crypto_spec_RC2ParameterSpec_h_
#define _javax_crypto_spec_RC2ParameterSpec_h_
//$ class javax.crypto.spec.RC2ParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/lang/Array.h>
#include <java/security/spec/AlgorithmParameterSpec.h>

namespace javax {
	namespace crypto {
		namespace spec {

class $export RC2ParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(RC2ParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	RC2ParameterSpec();
	void init$(int32_t effectiveKeyBits);
	void init$(int32_t effectiveKeyBits, $bytes* iv);
	void init$(int32_t effectiveKeyBits, $bytes* iv, int32_t offset);
	virtual bool equals(Object$* obj) override;
	virtual int32_t getEffectiveKeyBits();
	virtual $bytes* getIV();
	virtual int32_t hashCode() override;
	$bytes* iv = nullptr;
	int32_t effectiveKeyBits = 0;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_RC2ParameterSpec_h_