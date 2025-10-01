#ifndef _javax_crypto_KeyGeneratorSpi_h_
#define _javax_crypto_KeyGeneratorSpi_h_
//$ class javax.crypto.KeyGeneratorSpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
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

class $export KeyGeneratorSpi : public ::java::lang::Object {
	$class(KeyGeneratorSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyGeneratorSpi();
	void init$();
	virtual ::javax::crypto::SecretKey* engineGenerateKey() {return nullptr;}
	virtual void engineInit(::java::security::SecureRandom* random) {}
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) {}
	virtual void engineInit(int32_t keysize, ::java::security::SecureRandom* random) {}
};

	} // crypto
} // javax

#endif // _javax_crypto_KeyGeneratorSpi_h_