#ifndef _java_security_spec_NamedParameterSpec_h_
#define _java_security_spec_NamedParameterSpec_h_
//$ class java.security.spec.NamedParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

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

#endif // _java_security_spec_NamedParameterSpec_h_