#ifndef _com_sun_crypto_provider_JceKeyStore$TrustedCertEntry_h_
#define _com_sun_crypto_provider_JceKeyStore$TrustedCertEntry_h_
//$ class com.sun.crypto.provider.JceKeyStore$TrustedCertEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class JceKeyStore$TrustedCertEntry : public ::java::lang::Object {
	$class(JceKeyStore$TrustedCertEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JceKeyStore$TrustedCertEntry();
	void init$();
	::java::util::Date* date = nullptr;
	::java::security::cert::Certificate* cert = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_JceKeyStore$TrustedCertEntry_h_