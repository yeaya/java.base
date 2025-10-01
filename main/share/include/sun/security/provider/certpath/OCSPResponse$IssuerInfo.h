#ifndef _sun_security_provider_certpath_OCSPResponse$IssuerInfo_h_
#define _sun_security_provider_certpath_OCSPResponse$IssuerInfo_h_
//$ class sun.security.provider.certpath.OCSPResponse$IssuerInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class TrustAnchor;
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
		namespace provider {
			namespace certpath {

class $import OCSPResponse$IssuerInfo : public ::java::lang::Object {
	$class(OCSPResponse$IssuerInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OCSPResponse$IssuerInfo();
	void init$(::java::security::cert::TrustAnchor* anchor);
	void init$(::java::security::cert::X509Certificate* issuerCert);
	void init$(::java::security::cert::TrustAnchor* anchor, ::java::security::cert::X509Certificate* issuerCert);
	::java::security::cert::TrustAnchor* getAnchor();
	::java::security::cert::X509Certificate* getCertificate();
	::javax::security::auth::x500::X500Principal* getName();
	::java::security::PublicKey* getPublicKey();
	virtual $String* toString() override;
	::java::security::cert::TrustAnchor* anchor = nullptr;
	::java::security::cert::X509Certificate* certificate = nullptr;
	::javax::security::auth::x500::X500Principal* name = nullptr;
	::java::security::PublicKey* pubKey = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_OCSPResponse$IssuerInfo_h_