#ifndef _com_sun_crypto_provider_KeyGeneratorCore_h_
#define _com_sun_crypto_provider_KeyGeneratorCore_h_
//$ class com.sun.crypto.provider.KeyGeneratorCore
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

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class KeyGeneratorCore : public ::java::lang::Object {
	$class(KeyGeneratorCore, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyGeneratorCore();
	void init$($String* name, int32_t defaultKeySize);
	::javax::crypto::SecretKey* implGenerateKey();
	void implInit(::java::security::SecureRandom* random);
	void implInit(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	void implInit(int32_t keysize, ::java::security::SecureRandom* random);
	$String* name = nullptr;
	int32_t defaultKeySize = 0;
	int32_t keySize = 0;
	::java::security::SecureRandom* random = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_KeyGeneratorCore_h_