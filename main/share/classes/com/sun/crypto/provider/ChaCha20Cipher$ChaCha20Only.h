#ifndef _com_sun_crypto_provider_ChaCha20Cipher$ChaCha20Only_h_
#define _com_sun_crypto_provider_ChaCha20Cipher$ChaCha20Only_h_
//$ class com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Only
//$ extends com.sun.crypto.provider.ChaCha20Cipher

#include <com/sun/crypto/provider/ChaCha20Cipher.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class ChaCha20Cipher$ChaCha20Only : public ::com::sun::crypto::provider::ChaCha20Cipher {
	$class(ChaCha20Cipher$ChaCha20Only, $NO_CLASS_INIT, ::com::sun::crypto::provider::ChaCha20Cipher)
public:
	ChaCha20Cipher$ChaCha20Only();
	using ::com::sun::crypto::provider::ChaCha20Cipher::engineUpdate;
	using ::com::sun::crypto::provider::ChaCha20Cipher::engineDoFinal;
	void init$();
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_ChaCha20Cipher$ChaCha20Only_h_