#ifndef _sun_security_internal_spec_TlsKeyMaterialParameterSpec_h_
#define _sun_security_internal_spec_TlsKeyMaterialParameterSpec_h_
//$ class sun.security.internal.spec.TlsKeyMaterialParameterSpec
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

class $import TlsKeyMaterialParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(TlsKeyMaterialParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	TlsKeyMaterialParameterSpec();
	void init$(::javax::crypto::SecretKey* masterSecret, int32_t majorVersion, int32_t minorVersion, $bytes* clientRandom, $bytes* serverRandom, $String* cipherAlgorithm, int32_t cipherKeyLength, int32_t expandedCipherKeyLength, int32_t ivLength, int32_t macKeyLength, $String* prfHashAlg, int32_t prfHashLength, int32_t prfBlockSize);
	static int32_t checkSign(int32_t k);
	virtual $String* getCipherAlgorithm();
	virtual int32_t getCipherKeyLength();
	virtual $bytes* getClientRandom();
	virtual int32_t getExpandedCipherKeyLength();
	virtual int32_t getIvLength();
	virtual int32_t getMacKeyLength();
	virtual int32_t getMajorVersion();
	virtual ::javax::crypto::SecretKey* getMasterSecret();
	virtual int32_t getMinorVersion();
	virtual int32_t getPRFBlockSize();
	virtual $String* getPRFHashAlg();
	virtual int32_t getPRFHashLength();
	virtual $bytes* getServerRandom();
	::javax::crypto::SecretKey* masterSecret = nullptr;
	int32_t majorVersion = 0;
	int32_t minorVersion = 0;
	$bytes* clientRandom = nullptr;
	$bytes* serverRandom = nullptr;
	$String* cipherAlgorithm = nullptr;
	int32_t cipherKeyLength = 0;
	int32_t ivLength = 0;
	int32_t macKeyLength = 0;
	int32_t expandedCipherKeyLength = 0;
	$String* prfHashAlg = nullptr;
	int32_t prfHashLength = 0;
	int32_t prfBlockSize = 0;
};

			} // spec
		} // internal
	} // security
} // sun

#endif // _sun_security_internal_spec_TlsKeyMaterialParameterSpec_h_