#ifndef _javax_crypto_interfaces_PBEKey_h_
#define _javax_crypto_interfaces_PBEKey_h_
//$ interface javax.crypto.interfaces.PBEKey
//$ extends javax.crypto.SecretKey

#include <java/lang/Array.h>
#include <javax/crypto/SecretKey.h>

namespace javax {
	namespace crypto {
		namespace interfaces {

class $export PBEKey : public ::javax::crypto::SecretKey {
	$interface(PBEKey, $NO_CLASS_INIT, ::javax::crypto::SecretKey)
public:
	virtual int32_t getIterationCount() {return 0;}
	virtual $chars* getPassword() {return nullptr;}
	virtual $bytes* getSalt() {return nullptr;}
	static const int64_t serialVersionUID = (int64_t)0xEC279007D7F7C19F;
};

		} // interfaces
	} // crypto
} // javax

#endif // _javax_crypto_interfaces_PBEKey_h_