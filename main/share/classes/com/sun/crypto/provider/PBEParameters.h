#ifndef _com_sun_crypto_provider_PBEParameters_h_
#define _com_sun_crypto_provider_PBEParameters_h_
//$ class com.sun.crypto.provider.PBEParameters
//$ extends java.security.AlgorithmParametersSpi

#include <java/lang/Array.h>
#include <java/security/AlgorithmParametersSpi.h>

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

class $export PBEParameters : public ::java::security::AlgorithmParametersSpi {
	$class(PBEParameters, $NO_CLASS_INIT, ::java::security::AlgorithmParametersSpi)
public:
	PBEParameters();
	void init$();
	virtual $bytes* engineGetEncoded() override;
	virtual $bytes* engineGetEncoded($String* encodingMethod) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* paramSpec) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) override;
	virtual void engineInit($bytes* encoded) override;
	virtual void engineInit($bytes* encoded, $String* decodingMethod) override;
	virtual $String* engineToString() override;
	$bytes* salt = nullptr;
	int32_t iCount = 0;
	::java::security::spec::AlgorithmParameterSpec* cipherParam = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBEParameters_h_