#ifndef _com_sun_crypto_provider_FeedbackCipher_h_
#define _com_sun_crypto_provider_FeedbackCipher_h_
//$ class com.sun.crypto.provider.FeedbackCipher
//$ extends java.lang.Object

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

class FeedbackCipher : public ::java::lang::Object {
	$class(FeedbackCipher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FeedbackCipher();
	void init$(::com::sun::crypto::provider::SymmetricCipher* embeddedCipher);
	virtual int32_t decrypt($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset) {return 0;}
	virtual int32_t decryptFinal($bytes* cipher, int32_t cipherOffset, int32_t cipherLen, $bytes* plain, int32_t plainOffset);
	virtual int32_t encrypt($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset) {return 0;}
	virtual int32_t encryptFinal($bytes* plain, int32_t plainOffset, int32_t plainLen, $bytes* cipher, int32_t cipherOffset);
	int32_t getBlockSize();
	::com::sun::crypto::provider::SymmetricCipher* getEmbeddedCipher();
	virtual $String* getFeedback() {return nullptr;}
	$bytes* getIV();
	virtual void init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) {}
	virtual void reset() {}
	virtual void restore() {}
	virtual void save() {}
	::com::sun::crypto::provider::SymmetricCipher* embeddedCipher = nullptr;
	int32_t blockSize = 0;
	$bytes* iv = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_FeedbackCipher_h_