#ifndef _com_sun_crypto_provider_PBES2Core_h_
#define _com_sun_crypto_provider_PBES2Core_h_
//$ class com.sun.crypto.provider.PBES2Core
//$ extends javax.crypto.CipherSpi

#include <java/lang/Array.h>
#include <javax/crypto/CipherSpi.h>

#pragma push_macro("DEFAULT_SALT_LENGTH")
#undef DEFAULT_SALT_LENGTH
#pragma push_macro("DEFAULT_COUNT")
#undef DEFAULT_COUNT

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class CipherCore;
				class PBKDF2Core;
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
namespace javax {
	namespace crypto {
		namespace spec {
			class IvParameterSpec;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PBES2Core : public ::javax::crypto::CipherSpi {
	$class(PBES2Core, $NO_CLASS_INIT, ::javax::crypto::CipherSpi)
public:
	PBES2Core();
	using ::javax::crypto::CipherSpi::engineUpdate;
	using ::javax::crypto::CipherSpi::engineDoFinal;
	void init$($String* kdfAlgo, $String* cipherAlgo, int32_t keySize);
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
	static const int32_t DEFAULT_SALT_LENGTH = 20;
	static const int32_t DEFAULT_COUNT = 4096;
	::com::sun::crypto::provider::CipherCore* cipher = nullptr;
	int32_t keyLength = 0;
	int32_t blkSize = 0;
	::com::sun::crypto::provider::PBKDF2Core* kdf = nullptr;
	$String* pbeAlgo = nullptr;
	$String* cipherAlgo = nullptr;
	int32_t iCount = 0;
	$bytes* salt = nullptr;
	::javax::crypto::spec::IvParameterSpec* ivSpec = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("DEFAULT_SALT_LENGTH")
#pragma pop_macro("DEFAULT_COUNT")

#endif // _com_sun_crypto_provider_PBES2Core_h_