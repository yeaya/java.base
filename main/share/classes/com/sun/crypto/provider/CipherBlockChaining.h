#ifndef _com_sun_crypto_provider_CipherBlockChaining_h_
#define _com_sun_crypto_provider_CipherBlockChaining_h_
//$ class com.sun.crypto.provider.CipherBlockChaining
//$ extends com.sun.crypto.provider.FeedbackCipher

#include <com/sun/crypto/provider/FeedbackCipher.h>
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

class CipherBlockChaining : public ::com::sun::crypto::provider::FeedbackCipher {
	$class(CipherBlockChaining, $NO_CLASS_INIT, ::com::sun::crypto::provider::FeedbackCipher)
public:
	CipherBlockChaining();
	void init$(::com::sun::crypto::provider::SymmetricCipher* embeddedCipher);
	virtual int32_t decrypt($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) override;
	virtual int32_t encrypt($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) override;
	virtual $String* getFeedback() override;
	int32_t implDecrypt($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset);
	int32_t implEncrypt($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset);
	virtual void init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) override;
	virtual void reset() override;
	virtual void restore() override;
	virtual void save() override;
	$bytes* r = nullptr;
	$bytes* k = nullptr;
	$bytes* rSave = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_CipherBlockChaining_h_