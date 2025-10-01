#ifndef _java_security_spec_ECParameterSpec_h_
#define _java_security_spec_ECParameterSpec_h_
//$ class java.security.spec.ECParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class ECPoint;
			class EllipticCurve;
		}
	}
}

namespace java {
	namespace security {
		namespace spec {

class $export ECParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(ECParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	ECParameterSpec();
	void init$(::java::security::spec::EllipticCurve* curve, ::java::security::spec::ECPoint* g, ::java::math::BigInteger* n, int32_t h);
	virtual int32_t getCofactor();
	virtual ::java::security::spec::EllipticCurve* getCurve();
	virtual ::java::security::spec::ECPoint* getGenerator();
	virtual ::java::math::BigInteger* getOrder();
	::java::security::spec::EllipticCurve* curve = nullptr;
	::java::security::spec::ECPoint* g = nullptr;
	::java::math::BigInteger* n = nullptr;
	int32_t h = 0;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_ECParameterSpec_h_