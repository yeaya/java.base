#ifndef _com_sun_crypto_provider_RSACipher_h_
#define _com_sun_crypto_provider_RSACipher_h_
//$ class com.sun.crypto.provider.RSACipher
//$ extends javax.crypto.CipherSpi

#include <java/lang/Array.h>
#include <javax/crypto/CipherSpi.h>

#pragma push_macro("MODE_DECRYPT")
#undef MODE_DECRYPT
#pragma push_macro("MODE_ENCRYPT")
#undef MODE_ENCRYPT
#pragma push_macro("MODE_SIGN")
#undef MODE_SIGN
#pragma push_macro("MODE_VERIFY")
#undef MODE_VERIFY
#pragma push_macro("PAD_NONE")
#undef PAD_NONE
#pragma push_macro("PAD_OAEP_MGF1")
#undef PAD_OAEP_MGF1
#pragma push_macro("PAD_PKCS1")
#undef PAD_PKCS1

namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class RSAPrivateKey;
			class RSAPublicKey;
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
namespace sun {
	namespace security {
		namespace rsa {
			class RSAPadding;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $import RSACipher : public ::javax::crypto::CipherSpi {
	$class(RSACipher, 0, ::javax::crypto::CipherSpi)
public:
	RSACipher();
	using ::javax::crypto::CipherSpi::engineUpdate;
	using ::javax::crypto::CipherSpi::engineDoFinal;
	void init$();
	$bytes* doFinal();
	virtual $bytes* engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen) override;
	virtual int32_t engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t engineGetBlockSize() override;
	virtual $bytes* engineGetIV() override;
	virtual int32_t engineGetKeySize(::java::security::Key* key) override;
	virtual int32_t engineGetOutputSize(int32_t inputLen) override;
	virtual ::java::security::AlgorithmParameters* engineGetParameters() override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random) override;
	virtual void engineSetMode($String* mode) override;
	virtual void engineSetPadding($String* paddingName) override;
	virtual ::java::security::Key* engineUnwrap($bytes* wrappedKey, $String* algorithm, int32_t type) override;
	virtual $bytes* engineUpdate($bytes* in, int32_t inOfs, int32_t inLen) override;
	virtual int32_t engineUpdate($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual $bytes* engineWrap(::java::security::Key* key) override;
	void init(int32_t opmode, ::java::security::Key* key, ::java::security::SecureRandom* random, ::java::security::spec::AlgorithmParameterSpec* params);
	void update($bytes* in, int32_t inOfs, int32_t inLen);
	static $bytes* B0;
	static const int32_t MODE_ENCRYPT = 1;
	static const int32_t MODE_DECRYPT = 2;
	static const int32_t MODE_SIGN = 3;
	static const int32_t MODE_VERIFY = 4;
	static $String* PAD_NONE;
	static $String* PAD_PKCS1;
	static $String* PAD_OAEP_MGF1;
	int32_t mode = 0;
	$String* paddingType = nullptr;
	::sun::security::rsa::RSAPadding* padding = nullptr;
	::java::security::spec::AlgorithmParameterSpec* spec = nullptr;
	$bytes* buffer = nullptr;
	int32_t bufOfs = 0;
	int32_t outputSize = 0;
	::java::security::interfaces::RSAPublicKey* publicKey = nullptr;
	::java::security::interfaces::RSAPrivateKey* privateKey = nullptr;
	$String* oaepHashAlgorithm = nullptr;
	::java::security::SecureRandom* random = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("MODE_DECRYPT")
#pragma pop_macro("MODE_ENCRYPT")
#pragma pop_macro("MODE_SIGN")
#pragma pop_macro("MODE_VERIFY")
#pragma pop_macro("PAD_NONE")
#pragma pop_macro("PAD_OAEP_MGF1")
#pragma pop_macro("PAD_PKCS1")

#endif // _com_sun_crypto_provider_RSACipher_h_