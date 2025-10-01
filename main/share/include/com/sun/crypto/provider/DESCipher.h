#ifndef _com_sun_crypto_provider_DESCipher_h_
#define _com_sun_crypto_provider_DESCipher_h_
//$ class com.sun.crypto.provider.DESCipher
//$ extends javax.crypto.CipherSpi

#include <java/lang/Array.h>
#include <javax/crypto/CipherSpi.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class CipherCore;
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

class $import DESCipher : public ::javax::crypto::CipherSpi {
	$class(DESCipher, $NO_CLASS_INIT, ::javax::crypto::CipherSpi)
public:
	DESCipher();
	using ::javax::crypto::CipherSpi::engineUpdate;
	using ::javax::crypto::CipherSpi::engineDoFinal;
	void init$();
	virtual $bytes* engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen) override;
	virtual int32_t engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) override;
	virtual int32_t engineGetBlockSize() override;
	virtual $bytes* engineGetIV() override;
	virtual int32_t engineGetKeySize(::java::security::Key* key) override;
	virtual int32_t engineGetOutputSize(int32_t inputLen) override;
	virtual ::java::security::AlgorithmParameters* engineGetParameters() override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random) override;
	virtual void engineSetMode($String* mode) override;
	virtual void engineSetPadding($String* paddingScheme) override;
	virtual ::java::security::Key* engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) override;
	virtual $bytes* engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen) override;
	virtual int32_t engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) override;
	virtual $bytes* engineWrap(::java::security::Key* key) override;
	::com::sun::crypto::provider::CipherCore* core = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_DESCipher_h_