#ifndef _javax_crypto_KeyAgreementSpi_h_
#define _javax_crypto_KeyAgreementSpi_h_
//$ class javax.crypto.KeyAgreementSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

namespace javax {
	namespace crypto {

class $import KeyAgreementSpi : public ::java::lang::Object {
	$class(KeyAgreementSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyAgreementSpi();
	void init$();
	virtual ::java::security::Key* engineDoPhase(::java::security::Key* key, bool lastPhase) {return nullptr;}
	virtual $bytes* engineGenerateSecret() {return nullptr;}
	virtual int32_t engineGenerateSecret($bytes* sharedSecret, int32_t offset) {return 0;}
	virtual ::javax::crypto::SecretKey* engineGenerateSecret($String* algorithm) {return nullptr;}
	virtual void engineInit(::java::security::Key* key, ::java::security::SecureRandom* random) {}
	virtual void engineInit(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) {}
};

	} // crypto
} // javax

#endif // _javax_crypto_KeyAgreementSpi_h_