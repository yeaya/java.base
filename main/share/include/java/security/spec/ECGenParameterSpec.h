#ifndef _java_security_spec_ECGenParameterSpec_h_
#define _java_security_spec_ECGenParameterSpec_h_
//$ class java.security.spec.ECGenParameterSpec
//$ extends java.security.spec.NamedParameterSpec

#include <java/security/spec/NamedParameterSpec.h>

namespace java {
	namespace security {
		namespace spec {

class $import ECGenParameterSpec : public ::java::security::spec::NamedParameterSpec {
	$class(ECGenParameterSpec, $NO_CLASS_INIT, ::java::security::spec::NamedParameterSpec)
public:
	ECGenParameterSpec();
	void init$($String* stdName);
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_ECGenParameterSpec_h_