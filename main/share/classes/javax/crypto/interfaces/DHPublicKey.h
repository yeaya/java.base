#ifndef _javax_crypto_interfaces_DHPublicKey_h_
#define _javax_crypto_interfaces_DHPublicKey_h_
//$ interface javax.crypto.interfaces.DHPublicKey
//$ extends javax.crypto.interfaces.DHKey,java.security.PublicKey

#include <java/security/PublicKey.h>
#include <javax/crypto/interfaces/DHKey.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace javax {
	namespace crypto {
		namespace interfaces {

class $export DHPublicKey : public ::javax::crypto::interfaces::DHKey, public ::java::security::PublicKey {
	$interface(DHPublicKey, $NO_CLASS_INIT, ::javax::crypto::interfaces::DHKey, ::java::security::PublicKey)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::math::BigInteger* getY() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xA4043EED23DF4DE7;
};

		} // interfaces
	} // crypto
} // javax

#endif // _javax_crypto_interfaces_DHPublicKey_h_