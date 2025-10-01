#ifndef _javax_crypto_spec_OAEPParameterSpec_h_
#define _javax_crypto_spec_OAEPParameterSpec_h_
//$ class javax.crypto.spec.OAEPParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT

namespace javax {
	namespace crypto {
		namespace spec {
			class PSource;
		}
	}
}

namespace javax {
	namespace crypto {
		namespace spec {

class $export OAEPParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(OAEPParameterSpec, 0, ::java::security::spec::AlgorithmParameterSpec)
public:
	OAEPParameterSpec();
	void init$();
	void init$($String* mdName, $String* mgfName, ::java::security::spec::AlgorithmParameterSpec* mgfSpec, ::javax::crypto::spec::PSource* pSrc);
	virtual $String* getDigestAlgorithm();
	virtual $String* getMGFAlgorithm();
	virtual ::java::security::spec::AlgorithmParameterSpec* getMGFParameters();
	virtual ::javax::crypto::spec::PSource* getPSource();
	$String* mdName = nullptr;
	$String* mgfName = nullptr;
	::java::security::spec::AlgorithmParameterSpec* mgfSpec = nullptr;
	::javax::crypto::spec::PSource* pSrc = nullptr;
	static ::javax::crypto::spec::OAEPParameterSpec* DEFAULT;
};

		} // spec
	} // crypto
} // javax

#pragma pop_macro("DEFAULT")

#endif // _javax_crypto_spec_OAEPParameterSpec_h_