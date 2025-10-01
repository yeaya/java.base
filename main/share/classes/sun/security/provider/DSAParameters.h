#ifndef _sun_security_provider_DSAParameters_h_
#define _sun_security_provider_DSAParameters_h_
//$ class sun.security.provider.DSAParameters
//$ extends java.security.AlgorithmParametersSpi

#include <java/lang/Array.h>
#include <java/security/AlgorithmParametersSpi.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export DSAParameters : public ::java::security::AlgorithmParametersSpi {
	$class(DSAParameters, $NO_CLASS_INIT, ::java::security::AlgorithmParametersSpi)
public:
	DSAParameters();
	void init$();
	virtual $bytes* engineGetEncoded() override;
	virtual $bytes* engineGetEncoded($String* encodingMethod) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* paramSpec) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) override;
	virtual void engineInit($bytes* params) override;
	virtual void engineInit($bytes* params, $String* decodingMethod) override;
	virtual $String* engineToString() override;
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* q = nullptr;
	::java::math::BigInteger* g = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSAParameters_h_