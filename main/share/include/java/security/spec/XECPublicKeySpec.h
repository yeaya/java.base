#ifndef _java_security_spec_XECPublicKeySpec_h_
#define _java_security_spec_XECPublicKeySpec_h_
//$ class java.security.spec.XECPublicKeySpec
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
			class AlgorithmParameterSpec;
		}
	}
}

namespace java {
	namespace security {
		namespace spec {

class $import XECPublicKeySpec : public ::java::security::spec::KeySpec {
	$class(XECPublicKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	XECPublicKeySpec();
	void init$(::java::security::spec::AlgorithmParameterSpec* params, ::java::math::BigInteger* u);
	virtual ::java::security::spec::AlgorithmParameterSpec* getParams();
	virtual ::java::math::BigInteger* getU();
	::java::security::spec::AlgorithmParameterSpec* params = nullptr;
	::java::math::BigInteger* u = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_XECPublicKeySpec_h_