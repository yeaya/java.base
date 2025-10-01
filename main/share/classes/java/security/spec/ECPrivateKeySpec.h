#ifndef _java_security_spec_ECPrivateKeySpec_h_
#define _java_security_spec_ECPrivateKeySpec_h_
//$ class java.security.spec.ECPrivateKeySpec
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
			class ECParameterSpec;
		}
	}
}

namespace java {
	namespace security {
		namespace spec {

class $export ECPrivateKeySpec : public ::java::security::spec::KeySpec {
	$class(ECPrivateKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	ECPrivateKeySpec();
	void init$(::java::math::BigInteger* s, ::java::security::spec::ECParameterSpec* params);
	virtual ::java::security::spec::ECParameterSpec* getParams();
	virtual ::java::math::BigInteger* getS();
	::java::math::BigInteger* s = nullptr;
	::java::security::spec::ECParameterSpec* params = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_ECPrivateKeySpec_h_