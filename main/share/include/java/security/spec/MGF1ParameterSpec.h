#ifndef _java_security_spec_MGF1ParameterSpec_h_
#define _java_security_spec_MGF1ParameterSpec_h_
//$ class java.security.spec.MGF1ParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

#pragma push_macro("SHA256")
#undef SHA256
#pragma push_macro("SHA512_224")
#undef SHA512_224
#pragma push_macro("SHA3_384")
#undef SHA3_384
#pragma push_macro("SHA512_256")
#undef SHA512_256
#pragma push_macro("SHA1")
#undef SHA1
#pragma push_macro("SHA384")
#undef SHA384
#pragma push_macro("SHA3_512")
#undef SHA3_512
#pragma push_macro("SHA3_224")
#undef SHA3_224
#pragma push_macro("SHA3_256")
#undef SHA3_256
#pragma push_macro("SHA512")
#undef SHA512
#pragma push_macro("SHA224")
#undef SHA224

namespace java {
	namespace security {
		namespace spec {

class $import MGF1ParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
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

#pragma pop_macro("SHA256")
#pragma pop_macro("SHA512_224")
#pragma pop_macro("SHA3_384")
#pragma pop_macro("SHA512_256")
#pragma pop_macro("SHA1")
#pragma pop_macro("SHA384")
#pragma pop_macro("SHA3_512")
#pragma pop_macro("SHA3_224")
#pragma pop_macro("SHA3_256")
#pragma pop_macro("SHA512")
#pragma pop_macro("SHA224")

#endif // _java_security_spec_MGF1ParameterSpec_h_