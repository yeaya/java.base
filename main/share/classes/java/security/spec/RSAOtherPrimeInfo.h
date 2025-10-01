#ifndef _java_security_spec_RSAOtherPrimeInfo_h_
#define _java_security_spec_RSAOtherPrimeInfo_h_
//$ class java.security.spec.RSAOtherPrimeInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace spec {

class $export RSAOtherPrimeInfo : public ::java::lang::Object {
	$class(RSAOtherPrimeInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RSAOtherPrimeInfo();
	void init$(::java::math::BigInteger* prime, ::java::math::BigInteger* primeExponent, ::java::math::BigInteger* crtCoefficient);
	::java::math::BigInteger* getCrtCoefficient();
	::java::math::BigInteger* getExponent();
	::java::math::BigInteger* getPrime();
	::java::math::BigInteger* prime = nullptr;
	::java::math::BigInteger* primeExponent = nullptr;
	::java::math::BigInteger* crtCoefficient = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_RSAOtherPrimeInfo_h_