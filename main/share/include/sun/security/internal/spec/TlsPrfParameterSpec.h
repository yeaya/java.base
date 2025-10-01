#ifndef _sun_security_internal_spec_TlsPrfParameterSpec_h_
#define _sun_security_internal_spec_TlsPrfParameterSpec_h_
//$ class sun.security.internal.spec.TlsPrfParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/lang/Array.h>
#include <java/security/spec/AlgorithmParameterSpec.h>

namespace javax {
	namespace crypto {
		class SecretKey;
	}
}

namespace sun {
	namespace security {
		namespace internal {
			namespace spec {

class $import TlsPrfParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(TlsPrfParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	TlsPrfParameterSpec();
	void init$(::javax::crypto::SecretKey* secret, $String* label, $bytes* seed, int32_t outputLength, $String* prfHashAlg, int32_t prfHashLength, int32_t prfBlockSize);
	virtual $String* getLabel();
	virtual int32_t getOutputLength();
	virtual int32_t getPRFBlockSize();
	virtual $String* getPRFHashAlg();
	virtual int32_t getPRFHashLength();
	virtual ::javax::crypto::SecretKey* getSecret();
	virtual $bytes* getSeed();
	::javax::crypto::SecretKey* secret = nullptr;
	$String* label = nullptr;
	$bytes* seed = nullptr;
	int32_t outputLength = 0;
	$String* prfHashAlg = nullptr;
	int32_t prfHashLength = 0;
	int32_t prfBlockSize = 0;
};

			} // spec
		} // internal
	} // security
} // sun

#endif // _sun_security_internal_spec_TlsPrfParameterSpec_h_