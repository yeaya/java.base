#ifndef _com_sun_crypto_provider_RC2Parameters_h_
#define _com_sun_crypto_provider_RC2Parameters_h_
//$ class com.sun.crypto.provider.RC2Parameters
//$ extends java.security.AlgorithmParametersSpi

#include <java/lang/Array.h>
#include <java/security/AlgorithmParametersSpi.h>

#pragma push_macro("EKB_TABLE")
#undef EKB_TABLE

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

class $import RC2Parameters : public ::java::security::AlgorithmParametersSpi {
	$class(RC2Parameters, 0, ::java::security::AlgorithmParametersSpi)
public:
	RC2Parameters();
	void init$();
	virtual $bytes* engineGetEncoded() override;
	virtual $bytes* engineGetEncoded($String* encodingMethod) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* paramSpec) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) override;
	virtual void engineInit($bytes* encoded) override;
	virtual void engineInit($bytes* encoded, $String* decodingMethod) override;
	virtual $String* engineToString() override;
	static $ints* EKB_TABLE;
	$bytes* iv = nullptr;
	int32_t version = 0;
	int32_t effectiveKeySize = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("EKB_TABLE")

#endif // _com_sun_crypto_provider_RC2Parameters_h_