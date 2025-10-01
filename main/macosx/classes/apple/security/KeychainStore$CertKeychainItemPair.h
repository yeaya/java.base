#ifndef _apple_security_KeychainStore$CertKeychainItemPair_h_
#define _apple_security_KeychainStore$CertKeychainItemPair_h_
//$ class apple.security.KeychainStore$CertKeychainItemPair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}

namespace apple {
	namespace security {

class KeychainStore$CertKeychainItemPair : public ::java::lang::Object {
	$class(KeychainStore$CertKeychainItemPair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeychainStore$CertKeychainItemPair();
	void init$(int64_t inCertRef, ::java::security::cert::Certificate* cert);
	int64_t mCertificateRef = 0;
	::java::security::cert::Certificate* mCert = nullptr;
};

	} // security
} // apple

#endif // _apple_security_KeychainStore$CertKeychainItemPair_h_