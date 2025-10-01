#ifndef _com_sun_crypto_provider_PKCS12PBECipherCore_h_
#define _com_sun_crypto_provider_PKCS12PBECipherCore_h_
//$ class com.sun.crypto.provider.PKCS12PBECipherCore
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CIPHER_IV")
#undef CIPHER_IV
#pragma push_macro("CIPHER_KEY")
#undef CIPHER_KEY
#pragma push_macro("MAC_KEY")
#undef MAC_KEY
#pragma push_macro("DEFAULT_SALT_LENGTH")
#undef DEFAULT_SALT_LENGTH
#pragma push_macro("DEFAULT_COUNT")
#undef DEFAULT_COUNT

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
namespace javax {
	namespace crypto {
		class CipherSpi;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PKCS12PBECipherCore : public ::java::lang::Object {
	$class(PKCS12PBECipherCore, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PKCS12PBECipherCore();
	void init$($String* symmCipherAlg, int32_t defKeySize);
	static void addOne(int32_t len, $bytes* b);
	static void addTwo(int32_t len, $bytes* src, $bytes* dst, int32_t offset);
	static void concat($bytes* src, $bytes* dst, int32_t start, int32_t len);
	static $bytes* derive($chars* chars, $bytes* salt, int32_t ic, int32_t n, int32_t type);
	static $bytes* derive($chars* chars, $bytes* salt, int32_t ic, int32_t n, int32_t type, $String* hashAlgo, int32_t blockLength);
	$bytes* implDoFinal($bytes* in, int32_t inOff, int32_t inLen);
	int32_t implDoFinal($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff);
	int32_t implGetBlockSize();
	$bytes* implGetIV();
	int32_t implGetKeySize(::java::security::Key* key);
	int32_t implGetOutputSize(int32_t inLen);
	::java::security::AlgorithmParameters* implGetParameters();
	void implInit(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	void implInit(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random, ::javax::crypto::CipherSpi* cipherImpl);
	void implInit(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random);
	void implInit(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random, ::javax::crypto::CipherSpi* cipherImpl);
	void implInit(int32_t opmode, ::java::security::Key* key, ::java::security::SecureRandom* random);
	void implInit(int32_t opmode, ::java::security::Key* key, ::java::security::SecureRandom* random, ::javax::crypto::CipherSpi* cipherImpl);
	void implSetMode($String* mode);
	void implSetPadding($String* padding);
	::java::security::Key* implUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType);
	$bytes* implUpdate($bytes* in, int32_t inOff, int32_t inLen);
	int32_t implUpdate($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff);
	$bytes* implWrap(::java::security::Key* key);
	static int32_t roundup(int32_t x, int32_t y);
	::com::sun::crypto::provider::CipherCore* cipher = nullptr;
	int32_t blockSize = 0;
	int32_t keySize = 0;
	int32_t keyLength = 0;
	$String* algo = nullptr;
	$String* pbeAlgo = nullptr;
	$bytes* salt = nullptr;
	int32_t iCount = 0;
	static const int32_t DEFAULT_SALT_LENGTH = 20;
	static const int32_t DEFAULT_COUNT = 1024;
	static const int32_t CIPHER_KEY = 1;
	static const int32_t CIPHER_IV = 2;
	static const int32_t MAC_KEY = 3;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("CIPHER_IV")
#pragma pop_macro("CIPHER_KEY")
#pragma pop_macro("MAC_KEY")
#pragma pop_macro("DEFAULT_SALT_LENGTH")
#pragma pop_macro("DEFAULT_COUNT")

#endif // _com_sun_crypto_provider_PKCS12PBECipherCore_h_