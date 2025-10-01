#ifndef _javax_crypto_NullCipher_h_
#define _javax_crypto_NullCipher_h_
//$ class javax.crypto.NullCipher
//$ extends javax.crypto.Cipher

#include <javax/crypto/Cipher.h>

namespace javax {
	namespace crypto {

class $import NullCipher : public ::javax::crypto::Cipher {
	$class(NullCipher, $NO_CLASS_INIT, ::javax::crypto::Cipher)
public:
	NullCipher();
	void init$();
};

	} // crypto
} // javax

#endif // _javax_crypto_NullCipher_h_