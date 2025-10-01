#ifndef _com_sun_crypto_provider_TlsPrfGenerator$V10_h_
#define _com_sun_crypto_provider_TlsPrfGenerator$V10_h_
//$ class com.sun.crypto.provider.TlsPrfGenerator$V10
//$ extends com.sun.crypto.provider.TlsPrfGenerator

#include <com/sun/crypto/provider/TlsPrfGenerator.h>

namespace javax {
	namespace crypto {
		class SecretKey;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class TlsPrfGenerator$V10 : public ::com::sun::crypto::provider::TlsPrfGenerator {
	$class(TlsPrfGenerator$V10, $NO_CLASS_INIT, ::com::sun::crypto::provider::TlsPrfGenerator)
public:
	TlsPrfGenerator$V10();
	void init$();
	virtual ::javax::crypto::SecretKey* engineGenerateKey() override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_TlsPrfGenerator$V10_h_