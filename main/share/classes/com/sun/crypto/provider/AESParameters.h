#ifndef _com_sun_crypto_provider_AESParameters_h_
#define _com_sun_crypto_provider_AESParameters_h_
//$ class com.sun.crypto.provider.AESParameters
//$ extends java.security.AlgorithmParametersSpi

#include <java/lang/Array.h>
#include <java/security/AlgorithmParametersSpi.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class BlockCipherParamsCore;
			}
		}
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

class $export AESParameters : public ::java::security::AlgorithmParametersSpi {
	$class(AESParameters, $NO_CLASS_INIT, ::java::security::AlgorithmParametersSpi)
public:
	AESParameters();
	void init$();
	virtual $bytes* engineGetEncoded() override;
	virtual $bytes* engineGetEncoded($String* encodingMethod) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* paramSpec) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) override;
	virtual void engineInit($bytes* encoded) override;
	virtual void engineInit($bytes* encoded, $String* decodingMethod) override;
	virtual $String* engineToString() override;
	::com::sun::crypto::provider::BlockCipherParamsCore* core = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_AESParameters_h_