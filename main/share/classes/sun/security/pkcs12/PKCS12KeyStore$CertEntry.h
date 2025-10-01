#ifndef _sun_security_pkcs12_PKCS12KeyStore$CertEntry_h_
#define _sun_security_pkcs12_PKCS12KeyStore$CertEntry_h_
//$ class sun.security.pkcs12.PKCS12KeyStore$CertEntry
//$ extends sun.security.pkcs12.PKCS12KeyStore$Entry

#include <java/lang/Array.h>
#include <sun/security/pkcs12/PKCS12KeyStore$Entry.h>

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs12 {

class PKCS12KeyStore$CertEntry : public ::sun::security::pkcs12::PKCS12KeyStore$Entry {
	$class(PKCS12KeyStore$CertEntry, $NO_CLASS_INIT, ::sun::security::pkcs12::PKCS12KeyStore$Entry)
public:
	PKCS12KeyStore$CertEntry();
	void init$(::java::security::cert::X509Certificate* cert, $bytes* keyId, $String* alias);
	void init$(::java::security::cert::X509Certificate* cert, $bytes* keyId, $String* alias, $Array<::sun::security::util::ObjectIdentifier>* trustedKeyUsage, ::java::util::Set* attributes);
	::java::security::cert::X509Certificate* cert = nullptr;
	$Array<::sun::security::util::ObjectIdentifier>* trustedKeyUsage = nullptr;
};

		} // pkcs12
	} // security
} // sun

#endif // _sun_security_pkcs12_PKCS12KeyStore$CertEntry_h_