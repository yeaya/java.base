#ifndef _com_sun_crypto_provider_CipherForKeyProtector_h_
#define _com_sun_crypto_provider_CipherForKeyProtector_h_
//$ class com.sun.crypto.provider.CipherForKeyProtector
//$ extends javax.crypto.Cipher

#include <javax/crypto/Cipher.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace javax {
	namespace crypto {
		class CipherSpi;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class CipherForKeyProtector : public ::javax::crypto::Cipher {
	$class(CipherForKeyProtector, $NO_CLASS_INIT, ::javax::crypto::Cipher)
public:
	CipherForKeyProtector();
	void init$(::javax::crypto::CipherSpi* cipherSpi, ::java::security::Provider* provider, $String* transformation);
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_CipherForKeyProtector_h_