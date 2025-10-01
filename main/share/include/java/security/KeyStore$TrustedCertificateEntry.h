#ifndef _java_security_KeyStore$TrustedCertificateEntry_h_
#define _java_security_KeyStore$TrustedCertificateEntry_h_
//$ class java.security.KeyStore$TrustedCertificateEntry
//$ extends java.security.KeyStore$Entry

#include <java/security/KeyStore$Entry.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace security {

class $import KeyStore$TrustedCertificateEntry : public ::java::security::KeyStore$Entry {
	$class(KeyStore$TrustedCertificateEntry, $NO_CLASS_INIT, ::java::security::KeyStore$Entry)
public:
	KeyStore$TrustedCertificateEntry();
	void init$(::java::security::cert::Certificate* trustedCert);
	void init$(::java::security::cert::Certificate* trustedCert, ::java::util::Set* attributes);
	virtual ::java::util::Set* getAttributes() override;
	::java::security::cert::Certificate* getTrustedCertificate();
	virtual $String* toString() override;
	::java::security::cert::Certificate* cert = nullptr;
	::java::util::Set* attributes = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyStore$TrustedCertificateEntry_h_