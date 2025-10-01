#ifndef _com_sun_crypto_provider_KeyWrapCipher_h_
#define _com_sun_crypto_provider_KeyWrapCipher_h_
//$ class com.sun.crypto.provider.KeyWrapCipher
//$ extends javax.crypto.CipherSpi

#include <java/lang/Array.h>
#include <javax/crypto/CipherSpi.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class FeedbackCipher;
				class Padding;
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

class KeyWrapCipher : public ::javax::crypto::CipherSpi {
	$class(KeyWrapCipher, $NO_CLASS_INIT, ::javax::crypto::CipherSpi)
public:
	KeyWrapCipher();
	using ::javax::crypto::CipherSpi::engineUpdate;
	using ::javax::crypto::CipherSpi::engineDoFinal;
	void init$(::com::sun::crypto::provider::FeedbackCipher* cipher, ::com::sun::crypto::provider::Padding* padding, int32_t keySize);
	virtual $bytes* engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen) override;
	virtual int32_t engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t engineGetBlockSize() override;
	virtual $bytes* engineGetIV() override;
	virtual int32_t engineGetKeySize(::java::security::Key* key) override;
	virtual int32_t engineGetOutputSize(int32_t inLen) override;
	virtual ::java::security::AlgorithmParameters* engineGetParameters() override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random) override;
	virtual void engineSetMode($String* mode) override;
	virtual void engineSetPadding($String* padding) override;
	virtual ::java::security::Key* engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) override;
	virtual $bytes* engineUpdate($bytes* in, int32_t inOffset, int32_t inLen) override;
	virtual int32_t engineUpdate($bytes* in, int32_t inOffset, int32_t inLen, $bytes* out, int32_t outOffset) override;
	virtual $bytes* engineWrap(::java::security::Key* key) override;
	int32_t helperDecrypt($bytes* inBuf, int32_t inLen);
	int32_t helperEncrypt($bytes* inBuf, int32_t inLen);
	int32_t implDoFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out);
	void implInit(int32_t opmode, ::java::security::Key* key, $bytes* iv, ::java::security::SecureRandom* random);
	void implUpdate($bytes* in, int32_t inOfs, int32_t inLen);
	void store($bytes* in, int32_t inOfs, int32_t inLen);
	::com::sun::crypto::provider::FeedbackCipher* cipher = nullptr;
	::com::sun::crypto::provider::Padding* padding = nullptr;
	int32_t opmode = 0;
	int32_t fixedKeySize = 0;
	$bytes* dataBuf = nullptr;
	int32_t dataIdx = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_KeyWrapCipher_h_