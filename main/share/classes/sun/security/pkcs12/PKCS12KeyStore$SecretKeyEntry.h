#ifndef _sun_security_pkcs12_PKCS12KeyStore$SecretKeyEntry_h_
#define _sun_security_pkcs12_PKCS12KeyStore$SecretKeyEntry_h_
//$ class sun.security.pkcs12.PKCS12KeyStore$SecretKeyEntry
//$ extends sun.security.pkcs12.PKCS12KeyStore$KeyEntry

#include <java/lang/Array.h>
#include <sun/security/pkcs12/PKCS12KeyStore$KeyEntry.h>

namespace sun {
	namespace security {
		namespace pkcs12 {

class PKCS12KeyStore$SecretKeyEntry : public ::sun::security::pkcs12::PKCS12KeyStore$KeyEntry {
	$class(PKCS12KeyStore$SecretKeyEntry, $NO_CLASS_INIT, ::sun::security::pkcs12::PKCS12KeyStore$KeyEntry)
public:
	PKCS12KeyStore$SecretKeyEntry();
	void init$();
	$bytes* protectedSecretKey = nullptr;
};

		} // pkcs12
	} // security
} // sun

#endif // _sun_security_pkcs12_PKCS12KeyStore$SecretKeyEntry_h_