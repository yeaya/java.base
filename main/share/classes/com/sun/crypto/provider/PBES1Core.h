#ifndef _com_sun_crypto_provider_PBES1Core_h_
#define _com_sun_crypto_provider_PBES1Core_h_
//$ class com.sun.crypto.provider.PBES1Core
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
		class MessageDigest;
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

class PBES1Core : public ::java::lang::Object {
	$class(PBES1Core, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PBES1Core();
	void init$($String* cipherAlg);
	$bytes* deriveCipherKey($bytes* passwdBytes);
	$bytes* doFinal($bytes* input, int32_t inputOffset, int32_t inputLen);
	int32_t doFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset);
	int32_t getBlockSize();
	$bytes* getIV();
	int32_t getOutputSize(int32_t inputLen);
	::java::security::AlgorithmParameters* getParameters();
	void init(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	void init(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random);
	void setMode($String* mode);
	void setPadding($String* paddingScheme);
	::java::security::Key* unwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType);
	$bytes* update($bytes* input, int32_t inputOffset, int32_t inputLen);
	int32_t update($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset);
	$bytes* wrap(::java::security::Key* key);
	::com::sun::crypto::provider::CipherCore* cipher = nullptr;
	::java::security::MessageDigest* md = nullptr;
	int32_t blkSize = 0;
	$String* algo = nullptr;
	$bytes* salt = nullptr;
	int32_t iCount = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBES1Core_h_