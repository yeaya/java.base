#ifndef _javax_crypto_KeyAgreement_h_
#define _javax_crypto_KeyAgreement_h_
//$ class javax.crypto.KeyAgreement
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("I_NO_PARAMS")
#undef I_NO_PARAMS
#pragma push_macro("I_PARAMS")
#undef I_PARAMS

namespace java {
	namespace security {
		class Key;
		class Provider;
		class Provider$Service;
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
		class KeyAgreementSpi;
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

class $export KeyAgreement : public ::java::lang::Object {
	$class(KeyAgreement, 0, ::java::lang::Object)
public:
	KeyAgreement();
	void init$(::javax::crypto::KeyAgreementSpi* keyAgreeSpi, ::java::security::Provider* provider, $String* algorithm);
	void init$(::java::security::Provider$Service* s, ::java::util::Iterator* t, $String* algorithm);
	virtual void chooseFirstProvider();
	void chooseProvider(int32_t initType, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	::java::security::Key* doPhase(::java::security::Key* key, bool lastPhase);
	$bytes* generateSecret();
	int32_t generateSecret($bytes* sharedSecret, int32_t offset);
	::javax::crypto::SecretKey* generateSecret($String* algorithm);
	$String* getAlgorithm();
	static ::javax::crypto::KeyAgreement* getInstance($String* algorithm);
	static ::javax::crypto::KeyAgreement* getInstance($String* algorithm, $String* provider);
	static ::javax::crypto::KeyAgreement* getInstance($String* algorithm, ::java::security::Provider* provider);
	::java::security::Provider* getProvider();
	$String* getProviderName();
	void implInit(::javax::crypto::KeyAgreementSpi* spi, int32_t type, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	void init(::java::security::Key* key);
	void init(::java::security::Key* key, ::java::security::SecureRandom* random);
	void init(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params);
	void init(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	static ::sun::security::util::Debug* debug;
	static ::sun::security::util::Debug* pdebug;
	static bool skipDebug;
	::java::security::Provider* provider = nullptr;
	::javax::crypto::KeyAgreementSpi* spi = nullptr;
	$String* algorithm = nullptr;
	::java::security::Provider$Service* firstService = nullptr;
	::java::util::Iterator* serviceIterator = nullptr;
	$Object* lock = nullptr;
	static int32_t warnCount;
	static const int32_t I_NO_PARAMS = 1;
	static const int32_t I_PARAMS = 2;
};

	} // crypto
} // javax

#pragma pop_macro("I_NO_PARAMS")
#pragma pop_macro("I_PARAMS")

#endif // _javax_crypto_KeyAgreement_h_