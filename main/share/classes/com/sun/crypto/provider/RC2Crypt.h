#ifndef _com_sun_crypto_provider_RC2Crypt_h_
#define _com_sun_crypto_provider_RC2Crypt_h_
//$ class com.sun.crypto.provider.RC2Crypt
//$ extends com.sun.crypto.provider.SymmetricCipher

#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>

#pragma push_macro("PI_TABLE")
#undef PI_TABLE

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class RC2Crypt : public ::com::sun::crypto::provider::SymmetricCipher {
	$class(RC2Crypt, 0, ::com::sun::crypto::provider::SymmetricCipher)
public:
	RC2Crypt();
	void init$();
	static void checkKey($String* algorithm, int32_t keyLength);
	virtual void decryptBlock($bytes* in, int32_t inOfs, $bytes* out, int32_t outOfs) override;
	virtual void encryptBlock($bytes* in, int32_t inOfs, $bytes* out, int32_t outOfs) override;
	virtual int32_t getBlockSize() override;
	int32_t getEffectiveKeyBits();
	virtual void init(bool decrypting, $String* algorithm, $bytes* key) override;
	void initEffectiveKeyBits(int32_t effectiveKeyBits);
	static $ints* PI_TABLE;
	$ints* expandedKey = nullptr;
	int32_t effectiveKeyBits = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("PI_TABLE")

#endif // _com_sun_crypto_provider_RC2Crypt_h_