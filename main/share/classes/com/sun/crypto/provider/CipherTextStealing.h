#ifndef _com_sun_crypto_provider_CipherTextStealing_h_
#define _com_sun_crypto_provider_CipherTextStealing_h_
//$ class com.sun.crypto.provider.CipherTextStealing
//$ extends com.sun.crypto.provider.CipherBlockChaining

#include <com/sun/crypto/provider/CipherBlockChaining.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class SymmetricCipher;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class CipherTextStealing : public ::com::sun::crypto::provider::CipherBlockChaining {
	$class(CipherTextStealing, $NO_CLASS_INIT, ::com::sun::crypto::provider::CipherBlockChaining)
public:
	CipherTextStealing();
	void init$(::com::sun::crypto::provider::SymmetricCipher* embeddedCipher);
	virtual int32_t decryptFinal($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) override;
	virtual int32_t encryptFinal($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) override;
	virtual $String* getFeedback() override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_CipherTextStealing_h_