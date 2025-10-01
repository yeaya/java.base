#ifndef _com_sun_crypto_provider_JceKeyStore$SecretKeyEntry_h_
#define _com_sun_crypto_provider_JceKeyStore$SecretKeyEntry_h_
//$ class com.sun.crypto.provider.JceKeyStore$SecretKeyEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Date;
	}
}
namespace javax {
	namespace crypto {
		class SealedObject;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class JceKeyStore$SecretKeyEntry : public ::java::lang::Object {
	$class(JceKeyStore$SecretKeyEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JceKeyStore$SecretKeyEntry();
	void init$();
	::java::util::Date* date = nullptr;
	::javax::crypto::SealedObject* sealedKey = nullptr;
	int32_t maxLength = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_JceKeyStore$SecretKeyEntry_h_