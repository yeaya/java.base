#ifndef _com_sun_crypto_provider_PKCS12PBECipherCore$PBEWithSHA1AndRC2_128_h_
#define _com_sun_crypto_provider_PKCS12PBECipherCore$PBEWithSHA1AndRC2_128_h_
//$ class com.sun.crypto.provider.PKCS12PBECipherCore$PBEWithSHA1AndRC2_128
//$ extends javax.crypto.CipherSpi

#include <java/lang/Array.h>
#include <javax/crypto/CipherSpi.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class PKCS12PBECipherCore;
			}
		}
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PKCS12PBECipherCore$PBEWithSHA1AndRC2_128 : public ::javax::crypto::CipherSpi {
	$class(PKCS12PBECipherCore$PBEWithSHA1AndRC2_128, $NO_CLASS_INIT, ::javax::crypto::CipherSpi)
public:
	PKCS12PBECipherCore$PBEWithSHA1AndRC2_128();
	using ::javax::crypto::CipherSpi::engineUpdate;
	using ::javax::crypto::CipherSpi::engineDoFinal;
	void init$();
	virtual $bytes* engineDoFinal($bytes* in, int32_t inOff, int32_t inLen) override;
	virtual int32_t engineDoFinal($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) override;
	virtual int32_t engineGetBlockSize() override;
	virtual $bytes* engineGetIV() override;
	virtual int32_t engineGetKeySize(::java::security::Key* key) override;
	virtual int32_t engineGetOutputSize(int32_t inLen) override;
	virtual ::java::security::AlgorithmParameters* engineGetParameters() override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::SecureRandom* random) override;
	virtual void engineSetMode($String* mode) override;
	virtual void engineSetPadding($String* paddingScheme) override;
	virtual ::java::security::Key* engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) override;
	virtual $bytes* engineUpdate($bytes* in, int32_t inOff, int32_t inLen) override;
	virtual int32_t engineUpdate($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) override;
	virtual $bytes* engineWrap(::java::security::Key* key) override;
	::com::sun::crypto::provider::PKCS12PBECipherCore* core = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PKCS12PBECipherCore$PBEWithSHA1AndRC2_128_h_