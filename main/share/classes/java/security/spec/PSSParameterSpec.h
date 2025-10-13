#ifndef _java_security_spec_PSSParameterSpec_h_
#define _java_security_spec_PSSParameterSpec_h_
//$ class java.security.spec.PSSParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("TRAILER_FIELD_BC")
#undef TRAILER_FIELD_BC

namespace java {
	namespace security {
		namespace spec {

class $export PSSParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(PSSParameterSpec, 0, ::java::security::spec::AlgorithmParameterSpec)
public:
	PSSParameterSpec();
	void init$();
	void init$($String* mdName, $String* mgfName, ::java::security::spec::AlgorithmParameterSpec* mgfSpec, int32_t saltLen, int32_t trailerField);
	void init$(int32_t saltLen);
	virtual $String* getDigestAlgorithm();
	virtual $String* getMGFAlgorithm();
	virtual ::java::security::spec::AlgorithmParameterSpec* getMGFParameters();
	virtual int32_t getSaltLength();
	virtual int32_t getTrailerField();
	virtual $String* toString() override;
	$String* mdName = nullptr;
	$String* mgfName = nullptr;
	::java::security::spec::AlgorithmParameterSpec* mgfSpec = nullptr;
	int32_t saltLen = 0;
	int32_t trailerField = 0;
	static const int32_t TRAILER_FIELD_BC = 1;
	static ::java::security::spec::PSSParameterSpec* DEFAULT;
};

		} // spec
	} // security
} // java

#pragma pop_macro("DEFAULT")
#pragma pop_macro("TRAILER_FIELD_BC")

#endif // _java_security_spec_PSSParameterSpec_h_