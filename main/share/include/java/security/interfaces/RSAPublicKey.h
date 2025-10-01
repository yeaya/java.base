#ifndef _java_security_interfaces_RSAPublicKey_h_
#define _java_security_interfaces_RSAPublicKey_h_
//$ interface java.security.interfaces.RSAPublicKey
//$ extends java.security.PublicKey,java.security.interfaces.RSAKey

#include <java/security/PublicKey.h>
#include <java/security/interfaces/RSAKey.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $import RSAPublicKey : public ::java::security::PublicKey, public ::java::security::interfaces::RSAKey {
	$interface(RSAPublicKey, $NO_CLASS_INIT, ::java::security::PublicKey, ::java::security::interfaces::RSAKey)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::math::BigInteger* getPublicExponent() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x86E1ECEDECEAB676;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_RSAPublicKey_h_