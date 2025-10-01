#ifndef _java_security_spec_XECPrivateKeySpec_h_
#define _java_security_spec_XECPrivateKeySpec_h_
//$ class java.security.spec.XECPrivateKeySpec
//$ extends java.security.spec.KeySpec

#include <java/lang/Array.h>
#include <java/security/spec/KeySpec.h>

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

class $export XECPrivateKeySpec : public ::java::security::spec::KeySpec {
	$class(XECPrivateKeySpec, $NO_CLASS_INIT, ::java::security::spec::KeySpec)
public:
	XECPrivateKeySpec();
	void init$(::java::security::spec::AlgorithmParameterSpec* params, $bytes* scalar);
	virtual ::java::security::spec::AlgorithmParameterSpec* getParams();
	virtual $bytes* getScalar();
	::java::security::spec::AlgorithmParameterSpec* params = nullptr;
	$bytes* scalar = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_XECPrivateKeySpec_h_