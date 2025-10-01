#ifndef _javax_crypto_SecretKeyFactory_h_
#define _javax_crypto_SecretKeyFactory_h_
//$ class javax.crypto.SecretKeyFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class KeySpec;
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
		class SecretKey;
		class SecretKeyFactorySpi;
	}
}

namespace javax {
	namespace crypto {

class $export SecretKeyFactory : public ::java::lang::Object {
	$class(SecretKeyFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SecretKeyFactory();
	void init$(::javax::crypto::SecretKeyFactorySpi* keyFacSpi, ::java::security::Provider* provider, $String* algorithm);
	void init$($String* algorithm);
	::javax::crypto::SecretKey* generateSecret(::java::security::spec::KeySpec* keySpec);
	$String* getAlgorithm();
	static ::javax::crypto::SecretKeyFactory* getInstance($String* algorithm);
	static ::javax::crypto::SecretKeyFactory* getInstance($String* algorithm, $String* provider);
	static ::javax::crypto::SecretKeyFactory* getInstance($String* algorithm, ::java::security::Provider* provider);
	::java::security::spec::KeySpec* getKeySpec(::javax::crypto::SecretKey* key, $Class* keySpec);
	::java::security::Provider* getProvider();
	::javax::crypto::SecretKeyFactorySpi* nextSpi(::javax::crypto::SecretKeyFactorySpi* oldSpi);
	::javax::crypto::SecretKey* translateKey(::javax::crypto::SecretKey* key);
	::java::security::Provider* provider = nullptr;
	$String* algorithm = nullptr;
	$volatile(::javax::crypto::SecretKeyFactorySpi*) spi = nullptr;
	$Object* lock = nullptr;
	::java::util::Iterator* serviceIterator = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_SecretKeyFactory_h_