#ifndef _java_security_interfaces_RSAPrivateCrtKey_h_
#define _java_security_interfaces_RSAPrivateCrtKey_h_
//$ interface java.security.interfaces.RSAPrivateCrtKey
//$ extends java.security.interfaces.RSAPrivateKey

#include <java/security/interfaces/RSAPrivateKey.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $import RSAPrivateCrtKey : public ::java::security::interfaces::RSAPrivateKey {
	$interface(RSAPrivateCrtKey, $NO_CLASS_INIT, ::java::security::interfaces::RSAPrivateKey)
public:
	virtual ::java::math::BigInteger* getCrtCoefficient() {return nullptr;}
	virtual ::java::math::BigInteger* getPrimeExponentP() {return nullptr;}
	virtual ::java::math::BigInteger* getPrimeExponentQ() {return nullptr;}
	virtual ::java::math::BigInteger* getPrimeP() {return nullptr;}
	virtual ::java::math::BigInteger* getPrimeQ() {return nullptr;}
	virtual ::java::math::BigInteger* getPublicExponent() {return nullptr;}
	static const int64_t serialVersionUID = (int64_t)0xB124B83DF8D1EC70;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_RSAPrivateCrtKey_h_