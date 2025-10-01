#ifndef _com_sun_crypto_provider_KeyWrapCipher$AES256_KW_PKCS5Padding_h_
#define _com_sun_crypto_provider_KeyWrapCipher$AES256_KW_PKCS5Padding_h_
//$ class com.sun.crypto.provider.KeyWrapCipher$AES256_KW_PKCS5Padding
//$ extends com.sun.crypto.provider.KeyWrapCipher

#include <com/sun/crypto/provider/KeyWrapCipher.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class KeyWrapCipher$AES256_KW_PKCS5Padding : public ::com::sun::crypto::provider::KeyWrapCipher {
	$class(KeyWrapCipher$AES256_KW_PKCS5Padding, $NO_CLASS_INIT, ::com::sun::crypto::provider::KeyWrapCipher)
public:
	KeyWrapCipher$AES256_KW_PKCS5Padding();
	using ::com::sun::crypto::provider::KeyWrapCipher::engineUpdate;
	using ::com::sun::crypto::provider::KeyWrapCipher::engineDoFinal;
	void init$();
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_KeyWrapCipher$AES256_KW_PKCS5Padding_h_