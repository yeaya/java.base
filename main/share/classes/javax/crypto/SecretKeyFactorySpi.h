#ifndef _javax_crypto_SecretKeyFactorySpi_h_
#define _javax_crypto_SecretKeyFactorySpi_h_
//$ class javax.crypto.SecretKeyFactorySpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace spec {
			class KeySpec;
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

class $export SecretKeyFactorySpi : public ::java::lang::Object {
	$class(SecretKeyFactorySpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SecretKeyFactorySpi();
	void init$();
	virtual ::javax::crypto::SecretKey* engineGenerateSecret(::java::security::spec::KeySpec* keySpec) {return nullptr;}
	virtual ::java::security::spec::KeySpec* engineGetKeySpec(::javax::crypto::SecretKey* key, $Class* keySpec) {return nullptr;}
	virtual ::javax::crypto::SecretKey* engineTranslateKey(::javax::crypto::SecretKey* key) {return nullptr;}
};

	} // crypto
} // javax

#endif // _javax_crypto_SecretKeyFactorySpi_h_