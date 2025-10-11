#ifndef _java_security_spec_MGF1ParameterSpec_h_
#define _java_security_spec_MGF1ParameterSpec_h_
//$ class java.security.spec.MGF1ParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

#pragma push_macro("SHA1")
#undef SHA1

namespace java {
	namespace security {
		namespace spec {

class $export MGF1ParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(MGF1ParameterSpec, 0, ::java::security::spec::AlgorithmParameterSpec)
public:
	MGF1ParameterSpec();
	void init$($String* mdName);
	virtual $String* getDigestAlgorithm();
	virtual $String* toString() override;
	static ::java::security::spec::MGF1ParameterSpec* SHA1;
	static ::java::security::spec::MGF1ParameterSpec* SHA224;
	static ::java::security::spec::MGF1ParameterSpec* SHA256;
	static ::java::security::spec::MGF1ParameterSpec* SHA384;
	static ::java::security::spec::MGF1ParameterSpec* SHA512;
	static ::java::security::spec::MGF1ParameterSpec* SHA512_224;
	static ::java::security::spec::MGF1ParameterSpec* SHA512_256;
	static ::java::security::spec::MGF1ParameterSpec* SHA3_224;
	static ::java::security::spec::MGF1ParameterSpec* SHA3_256;
	static ::java::security::spec::MGF1ParameterSpec* SHA3_384;
	static ::java::security::spec::MGF1ParameterSpec* SHA3_512;
	$String* mdName = nullptr;
};

		} // spec
	} // security
} // java

#pragma pop_macro("SHA1")

#endif // _java_security_spec_MGF1ParameterSpec_h_