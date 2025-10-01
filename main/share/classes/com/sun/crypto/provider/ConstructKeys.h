#ifndef _com_sun_crypto_provider_ConstructKeys_h_
#define _com_sun_crypto_provider_ConstructKeys_h_
//$ class com.sun.crypto.provider.ConstructKeys
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class Key;
		class PrivateKey;
		class PublicKey;
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class ConstructKeys : public ::java::lang::Object {
	$class(ConstructKeys, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConstructKeys();
	void init$();
	static ::java::security::Key* constructKey($bytes* encoding, $String* keyAlgorithm, int32_t keyType);
	static ::java::security::Key* constructKey($bytes* encoding, int32_t ofs, int32_t len, $String* keyAlgorithm, int32_t keyType);
	static ::java::security::PrivateKey* constructPrivateKey($bytes* encodedKey, int32_t ofs, int32_t len, $String* encodedKeyAlgorithm);
	static ::java::security::PublicKey* constructPublicKey($bytes* encodedKey, int32_t ofs, int32_t len, $String* encodedKeyAlgorithm);
	static ::javax::crypto::SecretKey* constructSecretKey($bytes* encodedKey, int32_t ofs, int32_t len, $String* encodedKeyAlgorithm);
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_ConstructKeys_h_