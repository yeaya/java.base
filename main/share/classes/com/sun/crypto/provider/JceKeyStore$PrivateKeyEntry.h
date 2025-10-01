#ifndef _com_sun_crypto_provider_JceKeyStore$PrivateKeyEntry_h_
#define _com_sun_crypto_provider_JceKeyStore$PrivateKeyEntry_h_
//$ class com.sun.crypto.provider.JceKeyStore$PrivateKeyEntry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Date;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class JceKeyStore$PrivateKeyEntry : public ::java::lang::Object {
	$class(JceKeyStore$PrivateKeyEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JceKeyStore$PrivateKeyEntry();
	void init$();
	::java::util::Date* date = nullptr;
	$bytes* protectedKey = nullptr;
	$Array<::java::security::cert::Certificate>* chain = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_JceKeyStore$PrivateKeyEntry_h_