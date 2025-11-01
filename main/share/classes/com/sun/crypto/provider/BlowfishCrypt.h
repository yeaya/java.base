#ifndef _com_sun_crypto_provider_BlowfishCrypt_h_
#define _com_sun_crypto_provider_BlowfishCrypt_h_
//$ class com.sun.crypto.provider.BlowfishCrypt
//$ extends com.sun.crypto.provider.SymmetricCipher
//$ implements com.sun.crypto.provider.BlowfishConstants

#include <com/sun/crypto/provider/BlowfishConstants.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>

#pragma push_macro("F")
#undef F

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class BlowfishCrypt : public ::com::sun::crypto::provider::SymmetricCipher, public ::com::sun::crypto::provider::BlowfishConstants {
	$class(BlowfishCrypt, 0, ::com::sun::crypto::provider::SymmetricCipher, ::com::sun::crypto::provider::BlowfishConstants)
public:
	BlowfishCrypt();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	int32_t F(int32_t v);
	void cipherBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset);
	virtual void decryptBlock($bytes* cipher, int32_t cipherOffset, $bytes* plain, int32_t plainOffset) override;
	void decryptBlock($ints* value);
	virtual void encryptBlock($bytes* plain, int32_t plainOffset, $bytes* cipher, int32_t cipherOffset) override;
	void encryptBlock($ints* value);
	virtual int32_t getBlockSize() override;
	virtual void init(bool decrypting, $String* algorithm, $bytes* rawKey) override;
	virtual $String* toString() override;
	bool decrypting = false;
	$ints* p = nullptr;
	$ints* s0 = nullptr;
	$ints* s1 = nullptr;
	$ints* s2 = nullptr;
	$ints* s3 = nullptr;
	$ints* temp = nullptr;
	static $ints* pi;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("F")

#endif // _com_sun_crypto_provider_BlowfishCrypt_h_