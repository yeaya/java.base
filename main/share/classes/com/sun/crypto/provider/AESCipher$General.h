#ifndef _com_sun_crypto_provider_AESCipher$General_h_
#define _com_sun_crypto_provider_AESCipher$General_h_
//$ class com.sun.crypto.provider.AESCipher$General
//$ extends com.sun.crypto.provider.AESCipher

#include <com/sun/crypto/provider/AESCipher.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class AESCipher$General : public ::com::sun::crypto::provider::AESCipher {
	$class(AESCipher$General, $NO_CLASS_INIT, ::com::sun::crypto::provider::AESCipher)
public:
	AESCipher$General();
	using ::com::sun::crypto::provider::AESCipher::engineUpdate;
	void init$();
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_AESCipher$General_h_