#ifndef _com_sun_crypto_provider_AESCipher$AES128_CBC_NoPadding_h_
#define _com_sun_crypto_provider_AESCipher$AES128_CBC_NoPadding_h_
//$ class com.sun.crypto.provider.AESCipher$AES128_CBC_NoPadding
//$ extends com.sun.crypto.provider.AESCipher$OidImpl

#include <com/sun/crypto/provider/AESCipher$OidImpl.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class AESCipher$AES128_CBC_NoPadding : public ::com::sun::crypto::provider::AESCipher$OidImpl {
	$class(AESCipher$AES128_CBC_NoPadding, $NO_CLASS_INIT, ::com::sun::crypto::provider::AESCipher$OidImpl)
public:
	AESCipher$AES128_CBC_NoPadding();
	using ::com::sun::crypto::provider::AESCipher$OidImpl::engineUpdate;
	void init$();
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_AESCipher$AES128_CBC_NoPadding_h_