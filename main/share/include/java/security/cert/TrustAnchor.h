#ifndef _java_security_cert_TrustAnchor_h_
#define _java_security_cert_TrustAnchor_h_
//$ class java.security.cert.TrustAnchor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class NameConstraintsExtension;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import TrustAnchor : public ::java::lang::Object {
	$class(TrustAnchor, 0, ::java::lang::Object)
public:
	TrustAnchor();
	void init$(::java::security::cert::X509Certificate* trustedCert, $bytes* nameConstraints);
	void init$(::javax::security::auth::x500::X500Principal* caPrincipal, ::java::security::PublicKey* pubKey, $bytes* nameConstraints);
	void init$($String* caName, ::java::security::PublicKey* pubKey, $bytes* nameConstraints);
	::javax::security::auth::x500::X500Principal* getCA();
	$String* getCAName();
	::java::security::PublicKey* getCAPublicKey();
	$bytes* getNameConstraints();
	::java::security::cert::X509Certificate* getTrustedCert();
	virtual bool isJdkCA();
	void setNameConstraints($bytes* bytes);
	virtual $String* toString() override;
	::java::security::PublicKey* pubKey = nullptr;
	$String* caName = nullptr;
	::javax::security::auth::x500::X500Principal* caPrincipal = nullptr;
	::java::security::cert::X509Certificate* trustedCert = nullptr;
	$bytes* ncBytes = nullptr;
	::sun::security::x509::NameConstraintsExtension* nc = nullptr;
	bool jdkCA = false;
	bool hasJdkCABeenChecked = false;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_TrustAnchor_h_