#ifndef _javax_crypto_spec_PBEParameterSpec_h_
#define _javax_crypto_spec_PBEParameterSpec_h_
//$ class javax.crypto.spec.PBEParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/lang/Array.h>
#include <java/security/spec/AlgorithmParameterSpec.h>

namespace javax {
	namespace crypto {
		namespace spec {

class $export PBEParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(PBEParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	PBEParameterSpec();
	void init$($bytes* salt, int32_t iterationCount);
	void init$($bytes* salt, int32_t iterationCount, ::java::security::spec::AlgorithmParameterSpec* paramSpec);
	virtual int32_t getIterationCount();
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec();
	virtual $bytes* getSalt();
	$bytes* salt = nullptr;
	int32_t iterationCount = 0;
	::java::security::spec::AlgorithmParameterSpec* paramSpec = nullptr;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_PBEParameterSpec_h_