#ifndef _com_sun_crypto_provider_DHParameters_h_
#define _com_sun_crypto_provider_DHParameters_h_
//$ class com.sun.crypto.provider.DHParameters
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

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $import DHParameters : public ::java::security::AlgorithmParametersSpi {
	$class(DHParameters, $NO_CLASS_INIT, ::java::security::AlgorithmParametersSpi)
public:
	DHParameters();
	void init$();
	virtual $bytes* engineGetEncoded() override;
	virtual $bytes* engineGetEncoded($String* encodingMethod) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* paramSpec) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) override;
	virtual void engineInit($bytes* params) override;
	virtual void engineInit($bytes* params, $String* decodingMethod) override;
	virtual $String* engineToString() override;
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* g = nullptr;
	int32_t l = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_DHParameters_h_