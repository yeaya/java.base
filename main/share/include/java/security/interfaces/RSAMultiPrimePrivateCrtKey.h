#ifndef _java_security_interfaces_RSAMultiPrimePrivateCrtKey_h_
#define _java_security_interfaces_RSAMultiPrimePrivateCrtKey_h_
//$ interface java.security.interfaces.RSAMultiPrimePrivateCrtKey
//$ extends java.security.interfaces.RSAPrivateKey

#include <java/lang/Array.h>
#include <java/security/interfaces/RSAPrivateKey.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class RSAOtherPrimeInfo;
		}
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $import RSAMultiPrimePrivateCrtKey : public ::java::security::interfaces::RSAPrivateKey {
	$interface(RSAMultiPrimePrivateCrtKey, $NO_CLASS_INIT, ::java::security::interfaces::RSAPrivateKey)
public:
	virtual ::java::math::BigInteger* getCrtCoefficient() {return nullptr;}
	virtual $Array<::java::security::spec::RSAOtherPrimeInfo>* getOtherPrimeInfo() {return nullptr;}
	virtual ::java::math::BigInteger* getPrimeExponentP() {return nullptr;}
	virtual ::java::math::BigInteger* getPrimeExponentQ() {return nullptr;}
	virtual ::java::math::BigInteger* getPrimeP() {return nullptr;}
	virtual ::java::math::BigInteger* getPrimeQ() {return nullptr;}
	virtual ::java::math::BigInteger* getPublicExponent() {return nullptr;}
	static const int64_t serialVersionUID = (int64_t)0x0893C8F62DBAF8A8;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_RSAMultiPrimePrivateCrtKey_h_