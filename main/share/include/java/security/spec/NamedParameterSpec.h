#ifndef _java_security_spec_NamedParameterSpec_h_
#define _java_security_spec_NamedParameterSpec_h_
//$ class java.security.spec.NamedParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

#pragma push_macro("X25519")
#undef X25519
#pragma push_macro("ED448")
#undef ED448
#pragma push_macro("X448")
#undef X448
#pragma push_macro("ED25519")
#undef ED25519

namespace java {
	namespace security {
		namespace spec {

class $import NamedParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(NamedParameterSpec, 0, ::java::security::spec::AlgorithmParameterSpec)
public:
	NamedParameterSpec();
	void init$($String* stdName);
	virtual $String* getName();
	static ::java::security::spec::NamedParameterSpec* X25519;
	static ::java::security::spec::NamedParameterSpec* X448;
	static ::java::security::spec::NamedParameterSpec* ED25519;
	static ::java::security::spec::NamedParameterSpec* ED448;
	$String* name = nullptr;
};

		} // spec
	} // security
} // java

#pragma pop_macro("X25519")
#pragma pop_macro("ED448")
#pragma pop_macro("X448")
#pragma pop_macro("ED25519")

#endif // _java_security_spec_NamedParameterSpec_h_