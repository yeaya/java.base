#ifndef _java_security_interfaces_RSAPrivateKey_h_
#define _java_security_interfaces_RSAPrivateKey_h_
//$ interface java.security.interfaces.RSAPrivateKey
//$ extends java.security.PrivateKey,java.security.interfaces.RSAKey

#include <java/security/PrivateKey.h>
#include <java/security/interfaces/RSAKey.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $export RSAPrivateKey : public ::java::security::PrivateKey, public ::java::security::interfaces::RSAKey {
	$interface(RSAPrivateKey, $NO_CLASS_INIT, ::java::security::PrivateKey, ::java::security::interfaces::RSAKey)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::math::BigInteger* getPrivateExponent() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x47FC70B7A8C2364E;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_RSAPrivateKey_h_