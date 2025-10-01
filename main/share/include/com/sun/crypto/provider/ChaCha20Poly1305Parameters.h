#ifndef _com_sun_crypto_provider_ChaCha20Poly1305Parameters_h_
#define _com_sun_crypto_provider_ChaCha20Poly1305Parameters_h_
//$ class com.sun.crypto.provider.ChaCha20Poly1305Parameters
//$ extends java.security.AlgorithmParametersSpi

#include <java/lang/Array.h>
#include <java/security/AlgorithmParametersSpi.h>

#pragma push_macro("DEFAULT_FMT")
#undef DEFAULT_FMT

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

class $import ChaCha20Poly1305Parameters : public ::java::security::AlgorithmParametersSpi {
	$class(ChaCha20Poly1305Parameters, 0, ::java::security::AlgorithmParametersSpi)
public:
	ChaCha20Poly1305Parameters();
	void init$();
	virtual $bytes* engineGetEncoded() override;
	virtual $bytes* engineGetEncoded($String* encodingMethod) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* paramSpec) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) override;
	virtual void engineInit($bytes* encoded) override;
	virtual void engineInit($bytes* encoded, $String* decodingMethod) override;
	virtual $String* engineToString() override;
	static $String* DEFAULT_FMT;
	$bytes* nonce = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("DEFAULT_FMT")

#endif // _com_sun_crypto_provider_ChaCha20Poly1305Parameters_h_