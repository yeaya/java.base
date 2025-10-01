#ifndef _com_sun_crypto_provider_AESCipher_h_
#define _com_sun_crypto_provider_AESCipher_h_
//$ class com.sun.crypto.provider.AESCipher
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
	namespace nio {
		class ByteBuffer;
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

class AESCipher : public ::javax::crypto::CipherSpi {
	$class(AESCipher, $NO_CLASS_INIT, ::javax::crypto::CipherSpi)
public:
	AESCipher();
	using ::javax::crypto::CipherSpi::engineUpdate;
	void init$(int32_t keySize);
	static void checkKeySize(::java::security::Key* key, int32_t fixedKeySize);
	virtual $bytes* engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen) override;
	virtual int32_t engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) override;
	virtual int32_t engineDoFinal(::java::nio::ByteBuffer* input, ::java::nio::ByteBuffer* output) override;
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
	int32_t fixedKeySize = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_AESCipher_h_