#ifndef _java_security_spec_EdECPrivateKeySpec_h_
#define _java_security_spec_EdECPrivateKeySpec_h_
//$ class java.security.spec.EdECPrivateKeySpec
//$ extends java.security.spec.KeySpec

#include <java/lang/Array.h>
#include <java/security/spec/KeySpec.h>

namespace java {
	namespace security {
		namespace spec {
			class NamedParameterSpec;
		}
	}
}

namespace java {
	namespace security {
		namespace spec {

class $import EdECPrivateKeySpec : public ::java::security::spec::KeySpec {
	$class(EdECPrivateKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	EdECPrivateKeySpec();
	void init$(::java::security::spec::NamedParameterSpec* params, $bytes* bytes);
	$bytes* getBytes();
	::java::security::spec::NamedParameterSpec* getParams();
	::java::security::spec::NamedParameterSpec* params = nullptr;
	$bytes* bytes = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_EdECPrivateKeySpec_h_