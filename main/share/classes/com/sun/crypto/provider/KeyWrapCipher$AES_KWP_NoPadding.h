#ifndef _com_sun_crypto_provider_KeyWrapCipher$AES_KWP_NoPadding_h_
#define _com_sun_crypto_provider_KeyWrapCipher$AES_KWP_NoPadding_h_
//$ class com.sun.crypto.provider.KeyWrapCipher$AES_KWP_NoPadding
//$ extends com.sun.crypto.provider.KeyWrapCipher

#include <com/sun/crypto/provider/KeyWrapCipher.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class KeyWrapCipher$AES_KWP_NoPadding : public ::com::sun::crypto::provider::KeyWrapCipher {
	$class(KeyWrapCipher$AES_KWP_NoPadding, $NO_CLASS_INIT, ::com::sun::crypto::provider::KeyWrapCipher)
public:
	KeyWrapCipher$AES_KWP_NoPadding();
	using ::com::sun::crypto::provider::KeyWrapCipher::engineUpdate;
	using ::com::sun::crypto::provider::KeyWrapCipher::engineDoFinal;
	void init$();
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_KeyWrapCipher$AES_KWP_NoPadding_h_