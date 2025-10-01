#ifndef _com_sun_crypto_provider_DESedeCrypt_h_
#define _com_sun_crypto_provider_DESedeCrypt_h_
//$ class com.sun.crypto.provider.DESedeCrypt
//$ extends com.sun.crypto.provider.DESCrypt

#include <com/sun/crypto/provider/DESCrypt.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class DESedeCrypt : public ::com::sun::crypto::provider::DESCrypt {
	$class(DESedeCrypt, $NO_CLASS_INIT, ::com::sun::crypto::provider::DESCrypt)
public:
	DESedeCrypt();
	void init$();
	virtual void decryptBlock($bytes* cipher, int32_t cipherOffset, $bytes* plain, int32_t plainOffset) override;
	virtual void encryptBlock($bytes* plain, int32_t plainOffset, $bytes* cipher, int32_t cipherOffset) override;
	virtual void init(bool decrypting, $String* algorithm, $bytes* keys) override;
	bool keyEquals($bytes* key1, int32_t off1, $bytes* key2, int32_t off2, int32_t len);
	$bytes* key1 = nullptr;
	$bytes* key2 = nullptr;
	$bytes* key3 = nullptr;
	$bytes* buf1 = nullptr;
	$bytes* buf2 = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_DESedeCrypt_h_