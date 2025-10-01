#ifndef _java_security_spec_ECPublicKeySpec_h_
#define _java_security_spec_ECPublicKeySpec_h_
//$ class java.security.spec.ECPublicKeySpec
//$ extends java.security.spec.KeySpec

#include <java/security/spec/KeySpec.h>

namespace java {
	namespace security {
		namespace spec {
			class ECParameterSpec;
			class ECPoint;
		}
	}
}

namespace java {
	namespace security {
		namespace spec {

class $import ECPublicKeySpec : public ::java::security::spec::KeySpec {
	$class(ECPublicKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	ECPublicKeySpec();
	void init$(::java::security::spec::ECPoint* w, ::java::security::spec::ECParameterSpec* params);
	virtual ::java::security::spec::ECParameterSpec* getParams();
	virtual ::java::security::spec::ECPoint* getW();
	::java::security::spec::ECPoint* w = nullptr;
	::java::security::spec::ECParameterSpec* params = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_ECPublicKeySpec_h_