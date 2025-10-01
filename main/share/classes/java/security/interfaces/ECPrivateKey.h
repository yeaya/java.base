#ifndef _java_security_interfaces_ECPrivateKey_h_
#define _java_security_interfaces_ECPrivateKey_h_
//$ interface java.security.interfaces.ECPrivateKey
//$ extends java.security.PrivateKey,java.security.interfaces.ECKey

#include <java/security/PrivateKey.h>
#include <java/security/interfaces/ECKey.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $export ECPrivateKey : public ::java::security::PrivateKey, public ::java::security::interfaces::ECKey {
	$interface(ECPrivateKey, $NO_CLASS_INIT, ::java::security::PrivateKey, ::java::security::interfaces::ECKey)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::math::BigInteger* getS() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x926A5E9FA2435B20;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_ECPrivateKey_h_