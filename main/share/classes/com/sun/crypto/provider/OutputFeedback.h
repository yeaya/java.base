#ifndef _com_sun_crypto_provider_OutputFeedback_h_
#define _com_sun_crypto_provider_OutputFeedback_h_
//$ class com.sun.crypto.provider.OutputFeedback
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

class OutputFeedback : public ::com::sun::crypto::provider::FeedbackCipher {
	$class(OutputFeedback, $NO_CLASS_INIT, ::com::sun::crypto::provider::FeedbackCipher)
public:
	OutputFeedback();
	void init$(::com::sun::crypto::provider::SymmetricCipher* embeddedCipher, int32_t numBytes);
	virtual int32_t decrypt($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) override;
	virtual int32_t decryptFinal($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) override;
	virtual int32_t encrypt($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) override;
	virtual int32_t encryptFinal($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) override;
	virtual $String* getFeedback() override;
	virtual void init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) override;
	virtual void reset() override;
	virtual void restore() override;
	virtual void save() override;
	$bytes* k = nullptr;
	$bytes* register$ = nullptr;
	int32_t numBytes = 0;
	$bytes* registerSave = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_OutputFeedback_h_