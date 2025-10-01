#ifndef _com_sun_crypto_provider_AESKeyWrap_h_
#define _com_sun_crypto_provider_AESKeyWrap_h_
//$ class com.sun.crypto.provider.AESKeyWrap
//$ extends com.sun.crypto.provider.FeedbackCipher

#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <java/lang/Array.h>

#pragma push_macro("ICV1")
#undef ICV1

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class AESKeyWrap : public ::com::sun::crypto::provider::FeedbackCipher {
	$class(AESKeyWrap, 0, ::com::sun::crypto::provider::FeedbackCipher)
public:
	AESKeyWrap();
	void init$();
	virtual int32_t decrypt($bytes* ct, int32_t ctOfs, int32_t ctLen, $bytes* pt, int32_t ptOfs) override;
	virtual int32_t decryptFinal($bytes* ct, int32_t dummy1, int32_t ctLen, $bytes* dummy2, int32_t dummy3) override;
	virtual int32_t encrypt($bytes* pt, int32_t ptOfs, int32_t ptLen, $bytes* ct, int32_t ctOfs) override;
	virtual int32_t encryptFinal($bytes* pt, int32_t dummy1, int32_t ptLen, $bytes* dummy2, int32_t dummy3) override;
	virtual $String* getFeedback() override;
	virtual void init(bool decrypting, $String* algorithm, $bytes* key, $bytes* iv) override;
	virtual void reset() override;
	virtual void restore() override;
	virtual void save() override;
	static $bytes* ICV1;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("ICV1")

#endif // _com_sun_crypto_provider_AESKeyWrap_h_