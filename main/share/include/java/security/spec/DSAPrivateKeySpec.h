#ifndef _java_security_spec_DSAPrivateKeySpec_h_
#define _java_security_spec_DSAPrivateKeySpec_h_
//$ class java.security.spec.DSAPrivateKeySpec
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

class $import DSAPrivateKeySpec : public ::java::security::spec::KeySpec {
	$class(DSAPrivateKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	DSAPrivateKeySpec();
	void init$(::java::math::BigInteger* x, ::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* g);
	virtual ::java::math::BigInteger* getG();
	virtual ::java::math::BigInteger* getP();
	virtual ::java::math::BigInteger* getQ();
	virtual ::java::math::BigInteger* getX();
	::java::math::BigInteger* x = nullptr;
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* q = nullptr;
	::java::math::BigInteger* g = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_DSAPrivateKeySpec_h_