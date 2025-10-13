#ifndef _com_sun_crypto_provider_AESKeyWrapPadded_h_
#define _com_sun_crypto_provider_AESKeyWrapPadded_h_
//$ class com.sun.crypto.provider.AESKeyWrapPadded
//$ extends com.sun.crypto.provider.FeedbackCipher

#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <java/lang/Array.h>

#pragma push_macro("ICV2")
#undef ICV2
#pragma push_macro("PAD_BLK")
#undef PAD_BLK

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class AESKeyWrapPadded : public ::com::sun::crypto::provider::FeedbackCipher {
	$class(AESKeyWrapPadded, 0, ::com::sun::crypto::provider::FeedbackCipher)
public:
	AESKeyWrapPadded();
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
	static void setIvAndLen($bytes* dest, $bytes* iv, int32_t inLen);
	static int32_t validateIV($bytes* ivAndLen, $bytes* iv);
	static bool $assertionsDisabled;
	static $bytes* ICV2;
	static $bytes* PAD_BLK;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("ICV2")
#pragma pop_macro("PAD_BLK")

#endif // _com_sun_crypto_provider_AESKeyWrapPadded_h_