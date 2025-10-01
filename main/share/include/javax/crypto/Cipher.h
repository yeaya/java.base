#ifndef _javax_crypto_Cipher_h_
#define _javax_crypto_Cipher_h_
//$ class javax.crypto.Cipher
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("WRAP_MODE")
#undef WRAP_MODE
#pragma push_macro("S_MAYBE")
#undef S_MAYBE
#pragma push_macro("S_YES")
#undef S_YES
#pragma push_macro("I_PARAMSPEC")
#undef I_PARAMSPEC
#pragma push_macro("PUBLIC_KEY")
#undef PUBLIC_KEY
#pragma push_macro("PRIVATE_KEY")
#undef PRIVATE_KEY
#pragma push_macro("SECRET_KEY")
#undef SECRET_KEY
#pragma push_macro("S_NO")
#undef S_NO
#pragma push_macro("ATTR_MODE")
#undef ATTR_MODE
#pragma push_macro("UNWRAP_MODE")
#undef UNWRAP_MODE
#pragma push_macro("I_CERT")
#undef I_CERT
#pragma push_macro("ENCRYPT_MODE")
#undef ENCRYPT_MODE
#pragma push_macro("I_KEY")
#undef I_KEY
#pragma push_macro("ATTR_PAD")
#undef ATTR_PAD
#pragma push_macro("DECRYPT_MODE")
#undef DECRYPT_MODE
#pragma push_macro("I_PARAMS")
#undef I_PARAMS

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
		class Provider;
		class Provider$Service;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}
namespace javax {
	namespace crypto {
		class Cipher$Transform;
		class CipherSpi;
		class CryptoPermission;
		class ExemptionMechanism;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace javax {
	namespace crypto {

class $import Cipher : public ::java::lang::Object {
	$class(Cipher, 0, ::java::lang::Object)
public:
	Cipher();
	void init$(::javax::crypto::CipherSpi* cipherSpi, ::java::security::Provider* provider, $String* transformation);
	void init$(::javax::crypto::CipherSpi* cipherSpi, $String* transformation);
	void init$(::javax::crypto::CipherSpi* firstSpi, ::java::security::Provider$Service* firstService, ::java::util::Iterator* serviceIterator, $String* transformation, ::java::util::List* transforms);
	void checkCipherState();
	void checkCryptoPerm(::javax::crypto::CipherSpi* checkSpi, ::java::security::Key* key);
	void checkCryptoPerm(::javax::crypto::CipherSpi* checkSpi, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params);
	void checkCryptoPerm(::javax::crypto::CipherSpi* checkSpi, ::java::security::Key* key, ::java::security::AlgorithmParameters* params);
	static void checkOpmode(int32_t opmode);
	virtual void chooseFirstProvider();
	void chooseProvider(int32_t initType, int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* paramSpec, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random);
	$bytes* doFinal();
	int32_t doFinal($bytes* output, int32_t outputOffset);
	$bytes* doFinal($bytes* input);
	$bytes* doFinal($bytes* input, int32_t inputOffset, int32_t inputLen);
	int32_t doFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output);
	int32_t doFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset);
	int32_t doFinal(::java::nio::ByteBuffer* input, ::java::nio::ByteBuffer* output);
	$String* getAlgorithm();
	::java::security::spec::AlgorithmParameterSpec* getAlgorithmParameterSpec(::java::security::AlgorithmParameters* params);
	int32_t getBlockSize();
	static ::javax::crypto::CryptoPermission* getConfiguredPermission($String* transformation);
	::javax::crypto::ExemptionMechanism* getExemptionMechanism();
	$bytes* getIV();
	static ::javax::crypto::Cipher* getInstance($String* transformation);
	static ::javax::crypto::Cipher* getInstance($String* transformation, $String* provider);
	static ::javax::crypto::Cipher* getInstance($String* transformation, ::java::security::Provider* provider);
	static int32_t getMaxAllowedKeyLength($String* transformation);
	static ::java::security::spec::AlgorithmParameterSpec* getMaxAllowedParameterSpec($String* transformation);
	int32_t getOutputSize(int32_t inputLen);
	::java::security::AlgorithmParameters* getParameters();
	::java::security::Provider* getProvider();
	$String* getProviderName();
	static ::javax::crypto::Cipher$Transform* getTransform(::java::security::Provider$Service* s, ::java::util::List* transforms);
	static ::java::util::List* getTransforms($String* transformation);
	void implInit(::javax::crypto::CipherSpi* thisSpi, int32_t type, int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* paramSpec, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random);
	void init(int32_t opmode, ::java::security::Key* key);
	void init(int32_t opmode, ::java::security::Key* key, ::java::security::SecureRandom* random);
	void init(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params);
	void init(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	void init(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params);
	void init(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random);
	void init(int32_t opmode, ::java::security::cert::Certificate* certificate);
	void init(int32_t opmode, ::java::security::cert::Certificate* certificate, ::java::security::SecureRandom* random);
	void initCryptoPermission();
	bool passCryptoPermCheck(::javax::crypto::CipherSpi* checkSpi, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params);
	virtual $String* toString() override;
	static $StringArray* tokenizeTransformation($String* transformation);
	::java::security::Key* unwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType);
	$bytes* update($bytes* input);
	$bytes* update($bytes* input, int32_t inputOffset, int32_t inputLen);
	int32_t update($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output);
	int32_t update($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset);
	int32_t update(::java::nio::ByteBuffer* input, ::java::nio::ByteBuffer* output);
	void updateAAD($bytes* src);
	void updateAAD($bytes* src, int32_t offset, int32_t len);
	void updateAAD(::java::nio::ByteBuffer* src);
	$bytes* wrap(::java::security::Key* key);
	static ::sun::security::util::Debug* debug;
	static ::sun::security::util::Debug* pdebug;
	static bool skipDebug;
	static const int32_t ENCRYPT_MODE = 1;
	static const int32_t DECRYPT_MODE = 2;
	static const int32_t WRAP_MODE = 3;
	static const int32_t UNWRAP_MODE = 4;
	static const int32_t PUBLIC_KEY = 1;
	static const int32_t PRIVATE_KEY = 2;
	static const int32_t SECRET_KEY = 3;
	::java::security::Provider* provider = nullptr;
	::javax::crypto::CipherSpi* spi = nullptr;
	$String* transformation = nullptr;
	::javax::crypto::CryptoPermission* cryptoPerm = nullptr;
	::javax::crypto::ExemptionMechanism* exmech = nullptr;
	bool initialized = false;
	int32_t opmode = 0;
	::javax::crypto::CipherSpi* firstSpi = nullptr;
	::java::security::Provider$Service* firstService = nullptr;
	::java::util::Iterator* serviceIterator = nullptr;
	::java::util::List* transforms = nullptr;
	$Object* lock = nullptr;
	static $String* ATTR_MODE;
	static $String* ATTR_PAD;
	static const int32_t S_NO = 0;
	static const int32_t S_MAYBE = 1;
	static const int32_t S_YES = 2;
	static int32_t warnCount;
	static const int32_t I_KEY = 1;
	static const int32_t I_PARAMSPEC = 2;
	static const int32_t I_PARAMS = 3;
	static const int32_t I_CERT = 4;
};

	} // crypto
} // javax

#pragma pop_macro("WRAP_MODE")
#pragma pop_macro("S_MAYBE")
#pragma pop_macro("S_YES")
#pragma pop_macro("I_PARAMSPEC")
#pragma pop_macro("PUBLIC_KEY")
#pragma pop_macro("PRIVATE_KEY")
#pragma pop_macro("SECRET_KEY")
#pragma pop_macro("S_NO")
#pragma pop_macro("ATTR_MODE")
#pragma pop_macro("UNWRAP_MODE")
#pragma pop_macro("I_CERT")
#pragma pop_macro("ENCRYPT_MODE")
#pragma pop_macro("I_KEY")
#pragma pop_macro("ATTR_PAD")
#pragma pop_macro("DECRYPT_MODE")
#pragma pop_macro("I_PARAMS")

#endif // _javax_crypto_Cipher_h_