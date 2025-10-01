#ifndef _java_security_interfaces_DSAPublicKey_h_
#define _java_security_interfaces_DSAPublicKey_h_
//$ interface java.security.interfaces.DSAPublicKey
//$ extends java.security.interfaces.DSAKey,java.security.PublicKey

#include <java/security/PublicKey.h>
#include <java/security/interfaces/DSAKey.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $import DSAPublicKey : public ::java::security::interfaces::DSAKey, public ::java::security::PublicKey {
	$interface(DSAPublicKey, $NO_CLASS_INIT, ::java::security::interfaces::DSAKey, ::java::security::PublicKey)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::math::BigInteger* getY() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x1121EB28AB28C7FC;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_DSAPublicKey_h_