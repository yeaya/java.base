#ifndef _javax_crypto_spec_GCMParameterSpec_h_
#define _javax_crypto_spec_GCMParameterSpec_h_
//$ class javax.crypto.spec.GCMParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/lang/Array.h>
#include <java/security/spec/AlgorithmParameterSpec.h>

namespace javax {
	namespace crypto {
		namespace spec {

class $import GCMParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(GCMParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	GCMParameterSpec();
	void init$(int32_t tLen, $bytes* src);
	void init$(int32_t tLen, $bytes* src, int32_t offset, int32_t len);
	virtual $bytes* getIV();
	virtual int32_t getTLen();
	void init(int32_t tLen, $bytes* src, int32_t offset, int32_t len);
	$bytes* iv = nullptr;
	int32_t tLen = 0;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_GCMParameterSpec_h_