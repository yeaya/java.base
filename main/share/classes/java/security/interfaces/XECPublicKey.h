#ifndef _java_security_interfaces_XECPublicKey_h_
#define _java_security_interfaces_XECPublicKey_h_
//$ interface java.security.interfaces.XECPublicKey
//$ extends java.security.interfaces.XECKey,java.security.PublicKey

#include <java/security/PublicKey.h>
#include <java/security/interfaces/XECKey.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $export XECPublicKey : public ::java::security::interfaces::XECKey, public ::java::security::PublicKey {
	$interface(XECPublicKey, $NO_CLASS_INIT, ::java::security::interfaces::XECKey, ::java::security::PublicKey)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::math::BigInteger* getU() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_XECPublicKey_h_