#ifndef _sun_security_ssl_SSLCipher_h_
#define _sun_security_ssl_SSLCipher_h_
//$ class sun.security.ssl.SSLCipher
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("B_RC4_40")
#undef B_RC4_40
#pragma push_macro("B_AES_256")
#undef B_AES_256
#pragma push_macro("B_RC2_40")
#undef B_RC2_40
#pragma push_macro("B_AES_256_GCM")
#undef B_AES_256_GCM
#pragma push_macro("B_IDEA")
#undef B_IDEA
#pragma push_macro("B_AES_128_GCM")
#undef B_AES_128_GCM
#pragma push_macro("B_AES_128_GCM_IV")
#undef B_AES_128_GCM_IV
#pragma push_macro("B_RC4_128")
#undef B_RC4_128
#pragma push_macro("B_3DES")
#undef B_3DES
#pragma push_macro("B_AES_128")
#undef B_AES_128
#pragma push_macro("B_AES_256_GCM_IV")
#undef B_AES_256_GCM_IV
#pragma push_macro("B_NULL")
#undef B_NULL
#pragma push_macro("B_DES")
#undef B_DES
#pragma push_macro("B_DES_40")
#undef B_DES_40
#pragma push_macro("B_CC20_P1305")
#undef B_CC20_P1305

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class SecureRandom;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Map$Entry;
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace javax {
	namespace crypto {
		namespace spec {
			class IvParameterSpec;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Authenticator;
			class Authenticator$MAC;
			class CipherType;
			class ProtocolVersion;
			class SSLCipher$SSLReadCipher;
			class SSLCipher$SSLWriteCipher;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLCipher : public ::java::lang::Enum {
	$class(SSLCipher, 0, ::java::lang::Enum)
public:
	SSLCipher();
	static $Array<::sun::security::ssl::SSLCipher>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* transformation, ::sun::security::ssl::CipherType* cipherType, int32_t keySize, int32_t expandedKeySize, int32_t ivSize, int32_t fixedIvSize, bool allowed, bool exportable, $Array<::java::util::Map$Entry>* readCipherGenerators, $Array<::java::util::Map$Entry>* writeCipherGenerators);
	static void addMac(::sun::security::ssl::Authenticator$MAC* signer, ::java::nio::ByteBuffer* destination, int8_t contentType);
	static int32_t addPadding(::java::nio::ByteBuffer* bb, int32_t blockSize);
	static int32_t calculateRemainingLen(::sun::security::ssl::Authenticator$MAC* signer, int32_t fullLen, int32_t usedLen);
	static void checkCBCMac(::sun::security::ssl::Authenticator$MAC* signer, ::java::nio::ByteBuffer* bb, int8_t contentType, int32_t cipheredLength, $bytes* sequence);
	static bool checkMacTags(int8_t contentType, ::java::nio::ByteBuffer* bb, ::sun::security::ssl::Authenticator$MAC* signer, $bytes* sequence, bool isSimulated);
	static $ints* checkPadding(::java::nio::ByteBuffer* bb, int8_t pad);
	static void checkStreamMac(::sun::security::ssl::Authenticator$MAC* signer, ::java::nio::ByteBuffer* bb, int8_t contentType, $bytes* sequence);
	static $ints* compareMacTags(::java::nio::ByteBuffer* bb, $bytes* tag);
	virtual ::sun::security::ssl::SSLCipher$SSLReadCipher* createReadCipher(::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion, ::javax::crypto::SecretKey* key, ::javax::crypto::spec::IvParameterSpec* iv, ::java::security::SecureRandom* random);
	virtual ::sun::security::ssl::SSLCipher$SSLWriteCipher* createWriteCipher(::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion, ::javax::crypto::SecretKey* key, ::javax::crypto::spec::IvParameterSpec* iv, ::java::security::SecureRandom* random);
	virtual bool isAvailable();
	static bool isTransformationAvailable($String* transformation);
	static bool isUnlimited(int32_t keySize, $String* transformation);
	static int32_t removePadding(::java::nio::ByteBuffer* bb, int32_t tagLen, int32_t blockSize, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	virtual $String* toString() override;
	static ::sun::security::ssl::SSLCipher* valueOf($String* name);
	static $Array<::sun::security::ssl::SSLCipher>* values();
	static ::sun::security::ssl::SSLCipher* B_NULL;
	static ::sun::security::ssl::SSLCipher* B_RC4_40;
	static ::sun::security::ssl::SSLCipher* B_RC2_40;
	static ::sun::security::ssl::SSLCipher* B_DES_40;
	static ::sun::security::ssl::SSLCipher* B_RC4_128;
	static ::sun::security::ssl::SSLCipher* B_DES;
	static ::sun::security::ssl::SSLCipher* B_3DES;
	static ::sun::security::ssl::SSLCipher* B_IDEA;
	static ::sun::security::ssl::SSLCipher* B_AES_128;
	static ::sun::security::ssl::SSLCipher* B_AES_256;
	static ::sun::security::ssl::SSLCipher* B_AES_128_GCM;
	static ::sun::security::ssl::SSLCipher* B_AES_256_GCM;
	static ::sun::security::ssl::SSLCipher* B_AES_128_GCM_IV;
	static ::sun::security::ssl::SSLCipher* B_AES_256_GCM_IV;
	static ::sun::security::ssl::SSLCipher* B_CC20_P1305;
	static $Array<::sun::security::ssl::SSLCipher>* $VALUES;
	$String* description = nullptr;
	$String* transformation = nullptr;
	$String* algorithm = nullptr;
	bool allowed = false;
	int32_t keySize = 0;
	int32_t expandedKeySize = 0;
	int32_t ivSize = 0;
	int32_t fixedIvSize = 0;
	bool exportable = false;
	::sun::security::ssl::CipherType* cipherType = nullptr;
	static const int32_t tagSize = 16;
	bool isAvailable$ = false;
	$Array<::java::util::Map$Entry>* readCipherGenerators = nullptr;
	$Array<::java::util::Map$Entry>* writeCipherGenerators = nullptr;
	static ::java::util::HashMap* cipherLimits;
	static $StringArray* tag;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("B_RC4_40")
#pragma pop_macro("B_AES_256")
#pragma pop_macro("B_RC2_40")
#pragma pop_macro("B_AES_256_GCM")
#pragma pop_macro("B_IDEA")
#pragma pop_macro("B_AES_128_GCM")
#pragma pop_macro("B_AES_128_GCM_IV")
#pragma pop_macro("B_RC4_128")
#pragma pop_macro("B_3DES")
#pragma pop_macro("B_AES_128")
#pragma pop_macro("B_AES_256_GCM_IV")
#pragma pop_macro("B_NULL")
#pragma pop_macro("B_DES")
#pragma pop_macro("B_DES_40")
#pragma pop_macro("B_CC20_P1305")

#endif // _sun_security_ssl_SSLCipher_h_