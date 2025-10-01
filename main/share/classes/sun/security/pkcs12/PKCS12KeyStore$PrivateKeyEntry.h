#ifndef _sun_security_pkcs12_PKCS12KeyStore$PrivateKeyEntry_h_
#define _sun_security_pkcs12_PKCS12KeyStore$PrivateKeyEntry_h_
//$ class sun.security.pkcs12.PKCS12KeyStore$PrivateKeyEntry
//$ extends sun.security.pkcs12.PKCS12KeyStore$KeyEntry

#include <java/lang/Array.h>
#include <sun/security/pkcs12/PKCS12KeyStore$KeyEntry.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs12 {

class PKCS12KeyStore$PrivateKeyEntry : public ::sun::security::pkcs12::PKCS12KeyStore$KeyEntry {
	$class(PKCS12KeyStore$PrivateKeyEntry, $NO_CLASS_INIT, ::sun::security::pkcs12::PKCS12KeyStore$KeyEntry)
public:
	PKCS12KeyStore$PrivateKeyEntry();
	void init$();
	$bytes* protectedPrivKey = nullptr;
	$Array<::java::security::cert::Certificate>* chain = nullptr;
};

		} // pkcs12
	} // security
} // sun

#endif // _sun_security_pkcs12_PKCS12KeyStore$PrivateKeyEntry_h_