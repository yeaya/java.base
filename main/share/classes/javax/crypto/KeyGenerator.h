#ifndef _javax_crypto_KeyGenerator_h_
#define _javax_crypto_KeyGenerator_h_
//$ class javax.crypto.KeyGenerator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("I_RANDOM")
#undef I_RANDOM
#pragma push_macro("I_SIZE")
#undef I_SIZE
#pragma push_macro("I_NONE")
#undef I_NONE
#pragma push_macro("I_PARAMS")
#undef I_PARAMS

namespace java {
	namespace security {
		class Provider;
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
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace crypto {
		class KeyGeneratorSpi;
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace javax {
	namespace crypto {

class $export KeyGenerator : public ::java::lang::Object {
	$class(KeyGenerator, 0, ::java::lang::Object)
public:
	KeyGenerator();
	void init$(::javax::crypto::KeyGeneratorSpi* keyGenSpi, ::java::security::Provider* provider, $String* algorithm);
	void init$($String* algorithm);
	virtual void disableFailover();
	::javax::crypto::SecretKey* generateKey();
	$String* getAlgorithm();
	static ::javax::crypto::KeyGenerator* getInstance($String* algorithm);
	static ::javax::crypto::KeyGenerator* getInstance($String* algorithm, $String* provider);
	static ::javax::crypto::KeyGenerator* getInstance($String* algorithm, ::java::security::Provider* provider);
	::java::security::Provider* getProvider();
	$String* getProviderName();
	void init(::java::security::SecureRandom* random);
	void init(::java::security::spec::AlgorithmParameterSpec* params);
	void init(::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	void init(int32_t keysize);
	void init(int32_t keysize, ::java::security::SecureRandom* random);
	::javax::crypto::KeyGeneratorSpi* nextSpi(::javax::crypto::KeyGeneratorSpi* oldSpi, bool reinit);
	static ::sun::security::util::Debug* pdebug;
	static bool skipDebug;
	static const int32_t I_NONE = 1;
	static const int32_t I_RANDOM = 2;
	static const int32_t I_PARAMS = 3;
	static const int32_t I_SIZE = 4;
	::java::security::Provider* provider = nullptr;
	$volatile(::javax::crypto::KeyGeneratorSpi*) spi = nullptr;
	$String* algorithm = nullptr;
	$Object* lock = nullptr;
	::java::util::Iterator* serviceIterator = nullptr;
	int32_t initType = 0;
	int32_t initKeySize = 0;
	::java::security::spec::AlgorithmParameterSpec* initParams = nullptr;
	::java::security::SecureRandom* initRandom = nullptr;
};

	} // crypto
} // javax

#pragma pop_macro("I_RANDOM")
#pragma pop_macro("I_SIZE")
#pragma pop_macro("I_NONE")
#pragma pop_macro("I_PARAMS")

#endif // _javax_crypto_KeyGenerator_h_