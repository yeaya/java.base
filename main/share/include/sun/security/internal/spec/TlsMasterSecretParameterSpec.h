#ifndef _sun_security_internal_spec_TlsMasterSecretParameterSpec_h_
#define _sun_security_internal_spec_TlsMasterSecretParameterSpec_h_
//$ class sun.security.internal.spec.TlsMasterSecretParameterSpec
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

class $import TlsMasterSecretParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(TlsMasterSecretParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	TlsMasterSecretParameterSpec();
	void init$(::javax::crypto::SecretKey* premasterSecret, int32_t majorVersion, int32_t minorVersion, $bytes* clientRandom, $bytes* serverRandom, $String* prfHashAlg, int32_t prfHashLength, int32_t prfBlockSize);
	void init$(::javax::crypto::SecretKey* premasterSecret, int32_t majorVersion, int32_t minorVersion, $bytes* extendedMasterSecretSessionHash, $String* prfHashAlg, int32_t prfHashLength, int32_t prfBlockSize);
	void init$(::javax::crypto::SecretKey* premasterSecret, int32_t majorVersion, int32_t minorVersion, $bytes* clientRandom, $bytes* serverRandom, $bytes* extendedMasterSecretSessionHash, $String* prfHashAlg, int32_t prfHashLength, int32_t prfBlockSize);
	static int32_t checkVersion(int32_t version);
	virtual $bytes* getClientRandom();
	virtual $bytes* getExtendedMasterSecretSessionHash();
	virtual int32_t getMajorVersion();
	virtual int32_t getMinorVersion();
	virtual int32_t getPRFBlockSize();
	virtual $String* getPRFHashAlg();
	virtual int32_t getPRFHashLength();
	virtual ::javax::crypto::SecretKey* getPremasterSecret();
	virtual $bytes* getServerRandom();
	::javax::crypto::SecretKey* premasterSecret = nullptr;
	int32_t majorVersion = 0;
	int32_t minorVersion = 0;
	$bytes* clientRandom = nullptr;
	$bytes* serverRandom = nullptr;
	$bytes* extendedMasterSecretSessionHash = nullptr;
	$String* prfHashAlg = nullptr;
	int32_t prfHashLength = 0;
	int32_t prfBlockSize = 0;
};

			} // spec
		} // internal
	} // security
} // sun

#endif // _sun_security_internal_spec_TlsMasterSecretParameterSpec_h_