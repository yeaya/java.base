#ifndef _com_sun_crypto_provider_SymmetricCipher_h_
#define _com_sun_crypto_provider_SymmetricCipher_h_
//$ class com.sun.crypto.provider.SymmetricCipher
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class SymmetricCipher : public ::java::lang::Object {
	$class(SymmetricCipher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SymmetricCipher();
	void init$();
	virtual void decryptBlock($bytes* cipher, int32_t cipherOffset, $bytes* plain, int32_t plainOffset) {}
	virtual void encryptBlock($bytes* plain, int32_t plainOffset, $bytes* cipher, int32_t cipherOffset) {}
	virtual int32_t getBlockSize() {return 0;}
	virtual void init(bool decrypting, $String* algorithm, $bytes* key) {}
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_SymmetricCipher_h_