#ifndef _java_security_spec_EdECPublicKeySpec_h_
#define _java_security_spec_EdECPublicKeySpec_h_
//$ class java.security.spec.EdECPublicKeySpec
//$ extends java.security.spec.KeySpec

#include <java/security/spec/KeySpec.h>

namespace java {
	namespace security {
		namespace spec {
			class EdECPoint;
			class NamedParameterSpec;
		}
	}
}

namespace java {
	namespace security {
		namespace spec {

class $import EdECPublicKeySpec : public ::java::security::spec::KeySpec {
	$class(EdECPublicKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	EdECPublicKeySpec();
	void init$(::java::security::spec::NamedParameterSpec* params, ::java::security::spec::EdECPoint* point);
	::java::security::spec::NamedParameterSpec* getParams();
	::java::security::spec::EdECPoint* getPoint();
	::java::security::spec::NamedParameterSpec* params = nullptr;
	::java::security::spec::EdECPoint* point = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_EdECPublicKeySpec_h_