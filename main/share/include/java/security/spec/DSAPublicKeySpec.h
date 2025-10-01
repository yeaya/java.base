#ifndef _java_security_spec_DSAPublicKeySpec_h_
#define _java_security_spec_DSAPublicKeySpec_h_
//$ class java.security.spec.DSAPublicKeySpec
//$ extends java.security.spec.KeySpec

#include <java/security/spec/KeySpec.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace java {
	namespace security {
		namespace spec {

class $import DSAPublicKeySpec : public ::java::security::spec::KeySpec {
	$class(DSAPublicKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	DSAPublicKeySpec();
	void init$(::java::math::BigInteger* y, ::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* g);
	virtual ::java::math::BigInteger* getG();
	virtual ::java::math::BigInteger* getP();
	virtual ::java::math::BigInteger* getQ();
	virtual ::java::math::BigInteger* getY();
	::java::math::BigInteger* y = nullptr;
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* q = nullptr;
	::java::math::BigInteger* g = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_DSAPublicKeySpec_h_