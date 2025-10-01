#ifndef _java_security_spec_EdDSAParameterSpec_h_
#define _java_security_spec_EdDSAParameterSpec_h_
//$ class java.security.spec.EdDSAParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/lang/Array.h>
#include <java/security/spec/AlgorithmParameterSpec.h>

namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace security {
		namespace spec {

class $export EdDSAParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(EdDSAParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	EdDSAParameterSpec();
	void init$(bool prehash);
	void init$(bool prehash, $bytes* context);
	virtual ::java::util::Optional* getContext();
	virtual bool isPrehash();
	bool prehash = false;
	$bytes* context = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_EdDSAParameterSpec_h_