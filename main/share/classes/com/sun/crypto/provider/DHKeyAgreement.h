#ifndef _com_sun_crypto_provider_DHKeyAgreement_h_
#define _com_sun_crypto_provider_DHKeyAgreement_h_
//$ class com.sun.crypto.provider.DHKeyAgreement
//$ extends javax.crypto.KeyAgreementSpi

#include <java/lang/Array.h>
#include <javax/crypto/KeyAgreementSpi.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class Key;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $export DHKeyAgreement : public ::javax::crypto::KeyAgreementSpi {
	$class(DHKeyAgreement, $NO_CLASS_INIT, ::javax::crypto::KeyAgreementSpi)
public:
	DHKeyAgreement();
	void init$();
	virtual ::java::security::Key* engineDoPhase(::java::security::Key* key, bool lastPhase) override;
	virtual $bytes* engineGenerateSecret() override;
	virtual int32_t engineGenerateSecret($bytes* sharedSecret, int32_t offset) override;
	virtual ::javax::crypto::SecretKey* engineGenerateSecret($String* algorithm) override;
	virtual void engineInit(::java::security::Key* key, ::java::security::SecureRandom* random) override;
	virtual void engineInit(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	bool generateSecret = false;
	::java::math::BigInteger* init_p = nullptr;
	::java::math::BigInteger* init_g = nullptr;
	::java::math::BigInteger* x = nullptr;
	::java::math::BigInteger* y = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_DHKeyAgreement_h_