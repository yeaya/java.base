#ifndef _javax_crypto_interfaces_DHPrivateKey_h_
#define _javax_crypto_interfaces_DHPrivateKey_h_
//$ interface javax.crypto.interfaces.DHPrivateKey
//$ extends javax.crypto.interfaces.DHKey,java.security.PrivateKey

#include <java/security/PrivateKey.h>
#include <javax/crypto/interfaces/DHKey.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace javax {
	namespace crypto {
		namespace interfaces {

class $import DHPrivateKey : public ::javax::crypto::interfaces::DHKey, public ::java::security::PrivateKey {
	$interface(DHPrivateKey, $NO_CLASS_INIT, ::javax::crypto::interfaces::DHKey, ::java::security::PrivateKey)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::math::BigInteger* getX() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x1EB1DC4C8E677E09;
};

		} // interfaces
	} // crypto
} // javax

#endif // _javax_crypto_interfaces_DHPrivateKey_h_