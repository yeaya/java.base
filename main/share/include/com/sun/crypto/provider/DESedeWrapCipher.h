#ifndef _com_sun_crypto_provider_DESedeWrapCipher_h_
#define _com_sun_crypto_provider_DESedeWrapCipher_h_
//$ class com.sun.crypto.provider.DESedeWrapCipher
//$ extends javax.crypto.CipherSpi

#include <java/lang/Array.h>
#include <javax/crypto/CipherSpi.h>

#pragma push_macro("CHECKSUM_LEN")
#undef CHECKSUM_LEN
#pragma push_macro("IV2")
#undef IV2
#pragma push_macro("IV_LEN")
#undef IV_LEN

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class FeedbackCipher;
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

class $import DESedeWrapCipher : public ::javax::crypto::CipherSpi {
	$class(DESedeWrapCipher, 0, ::javax::crypto::CipherSpi)
public:
	DESedeWrapCipher();
	using ::javax::crypto::CipherSpi::engineUpdate;
	using ::javax::crypto::CipherSpi::engineDoFinal;
	void init$();
	virtual $bytes* engineDoFinal($bytes* in, int32_t inOffset, int32_t inLen) override;
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
	virtual void engineSetPadding($String* padding) override;
	virtual ::java::security::Key* engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) override;
	virtual $bytes* engineUpdate($bytes* in, int32_t inOffset, int32_t inLen) override;
	virtual int32_t engineUpdate($bytes* in, int32_t inOffset, int32_t inLen, $bytes* out, int32_t outOffset) override;
	virtual $bytes* engineWrap(::java::security::Key* key) override;
	static $bytes* getChecksum($bytes* in);
	static $bytes* getChecksum($bytes* in, int32_t offset, int32_t len);
	static $bytes* IV2;
	static const int32_t CHECKSUM_LEN = 8;
	static const int32_t IV_LEN = 8;
	::com::sun::crypto::provider::FeedbackCipher* cipher = nullptr;
	$bytes* iv = nullptr;
	::java::security::Key* cipherKey = nullptr;
	bool decrypting = false;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("CHECKSUM_LEN")
#pragma pop_macro("IV2")
#pragma pop_macro("IV_LEN")

#endif // _com_sun_crypto_provider_DESedeWrapCipher_h_