#ifndef _com_sun_crypto_provider_AESCipher$OidImpl_h_
#define _com_sun_crypto_provider_AESCipher$OidImpl_h_
//$ class com.sun.crypto.provider.AESCipher$OidImpl
//$ extends com.sun.crypto.provider.AESCipher

#include <com/sun/crypto/provider/AESCipher.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class AESCipher$OidImpl : public ::com::sun::crypto::provider::AESCipher {
	$class(AESCipher$OidImpl, $NO_CLASS_INIT, ::com::sun::crypto::provider::AESCipher)
public:
	AESCipher$OidImpl();
	using ::com::sun::crypto::provider::AESCipher::engineUpdate;
	void init$(int32_t keySize, $String* mode, $String* padding);
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_AESCipher$OidImpl_h_