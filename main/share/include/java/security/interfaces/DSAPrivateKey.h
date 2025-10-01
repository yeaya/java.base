#ifndef _java_security_interfaces_DSAPrivateKey_h_
#define _java_security_interfaces_DSAPrivateKey_h_
//$ interface java.security.interfaces.DSAPrivateKey
//$ extends java.security.interfaces.DSAKey,java.security.PrivateKey

#include <java/security/PrivateKey.h>
#include <java/security/interfaces/DSAKey.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $import DSAPrivateKey : public ::java::security::interfaces::DSAKey, public ::java::security::PrivateKey {
	$interface(DSAPrivateKey, $NO_CLASS_INIT, ::java::security::interfaces::DSAKey, ::java::security::PrivateKey)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::math::BigInteger* getX() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x6BEBAB423B256247;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_DSAPrivateKey_h_