#ifndef _com_sun_crypto_provider_TlsPrfGenerator_h_
#define _com_sun_crypto_provider_TlsPrfGenerator_h_
//$ class com.sun.crypto.provider.TlsPrfGenerator
//$ extends javax.crypto.KeyGeneratorSpi

#include <java/lang/Array.h>
#include <javax/crypto/KeyGeneratorSpi.h>

#pragma push_macro("LABEL_CLIENT_WRITE_KEY")
#undef LABEL_CLIENT_WRITE_KEY
#pragma push_macro("LABEL_EXTENDED_MASTER_SECRET")
#undef LABEL_EXTENDED_MASTER_SECRET
#pragma push_macro("LABEL_IV_BLOCK")
#undef LABEL_IV_BLOCK
#pragma push_macro("LABEL_KEY_EXPANSION")
#undef LABEL_KEY_EXPANSION
#pragma push_macro("LABEL_MASTER_SECRET")
#undef LABEL_MASTER_SECRET
#pragma push_macro("LABEL_SERVER_WRITE_KEY")
#undef LABEL_SERVER_WRITE_KEY
#pragma push_macro("MSG")
#undef MSG
#pragma push_macro("SSL3_CONST")
#undef SSL3_CONST

namespace java {
	namespace security {
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
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace internal {
			namespace spec {
				class TlsPrfParameterSpec;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class TlsPrfGenerator : public ::javax::crypto::KeyGeneratorSpi {
	$class(TlsPrfGenerator, 0, ::javax::crypto::KeyGeneratorSpi)
public:
	TlsPrfGenerator();
	void init$();
	static $bytes* concat($bytes* b1, $bytes* b2);
	static $bytes* doTLS10PRF($bytes* secret, $bytes* labelBytes, $bytes* seed, int32_t outputLength);
	static $bytes* doTLS10PRF($bytes* secret, $bytes* labelBytes, $bytes* seed, int32_t outputLength, ::java::security::MessageDigest* md5, ::java::security::MessageDigest* sha);
	static $bytes* doTLS12PRF($bytes* secret, $bytes* labelBytes, $bytes* seed, int32_t outputLength, $String* prfHash, int32_t prfHashLength, int32_t prfBlockSize);
	static $bytes* doTLS12PRF($bytes* secret, $bytes* labelBytes, $bytes* seed, int32_t outputLength, ::java::security::MessageDigest* mdPRF, int32_t mdPRFLen, int32_t mdPRFBlockSize);
	virtual ::javax::crypto::SecretKey* engineGenerateKey0(bool tls12);
	virtual void engineInit(::java::security::SecureRandom* random) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t keysize, ::java::security::SecureRandom* random) override;
	static void expand(::java::security::MessageDigest* digest, int32_t hmacSize, $bytes* secret, int32_t secOff, int32_t secLen, $bytes* label, $bytes* seed, $bytes* output, $bytes* pad1, $bytes* pad2);
	static $Array<int8_t, 2>* genConst();
	static $bytes* genPad(int8_t b, int32_t count);
	static $bytes* B0;
	static $bytes* LABEL_MASTER_SECRET;
	static $bytes* LABEL_EXTENDED_MASTER_SECRET;
	static $bytes* LABEL_KEY_EXPANSION;
	static $bytes* LABEL_CLIENT_WRITE_KEY;
	static $bytes* LABEL_SERVER_WRITE_KEY;
	static $bytes* LABEL_IV_BLOCK;
	static $bytes* HMAC_ipad64;
	static $bytes* HMAC_ipad128;
	static $bytes* HMAC_opad64;
	static $bytes* HMAC_opad128;
	static $Array<int8_t, 2>* SSL3_CONST;
	static $String* MSG;
	::sun::security::internal::spec::TlsPrfParameterSpec* spec = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("LABEL_CLIENT_WRITE_KEY")
#pragma pop_macro("LABEL_EXTENDED_MASTER_SECRET")
#pragma pop_macro("LABEL_IV_BLOCK")
#pragma pop_macro("LABEL_KEY_EXPANSION")
#pragma pop_macro("LABEL_MASTER_SECRET")
#pragma pop_macro("LABEL_SERVER_WRITE_KEY")
#pragma pop_macro("MSG")
#pragma pop_macro("SSL3_CONST")

#endif // _com_sun_crypto_provider_TlsPrfGenerator_h_