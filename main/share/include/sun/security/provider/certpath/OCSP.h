#ifndef _sun_security_provider_certpath_OCSP_h_
#define _sun_security_provider_certpath_OCSP_h_
//$ class sun.security.provider.certpath.OCSP
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_CONNECT_TIMEOUT")
#undef DEFAULT_CONNECT_TIMEOUT
#pragma push_macro("CONNECT_TIMEOUT")
#undef CONNECT_TIMEOUT

namespace java {
	namespace net {
		class URI;
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
namespace java {
	namespace util {
		class Date;
		class List;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class OCSP$RevocationStatus;
				class OCSPResponse;
				class OCSPResponse$IssuerInfo;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class X509CertImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import OCSP : public ::java::lang::Object {
	$class(OCSP, 0, ::java::lang::Object)
public:
	OCSP();
	void init$();
	static ::sun::security::provider::certpath::OCSP$RevocationStatus* check(::java::security::cert::X509Certificate* cert, ::java::security::cert::X509Certificate* issuerCert, ::java::net::URI* responderURI, ::java::security::cert::X509Certificate* responderCert, ::java::util::Date* date);
	static ::sun::security::provider::certpath::OCSP$RevocationStatus* check(::java::security::cert::X509Certificate* cert, ::java::security::cert::X509Certificate* issuerCert, ::java::net::URI* responderURI, ::java::security::cert::X509Certificate* responderCert, ::java::util::Date* date, ::java::util::List* extensions, $String* variant);
	static ::sun::security::provider::certpath::OCSP$RevocationStatus* check(::java::security::cert::X509Certificate* cert, ::java::net::URI* responderURI, ::java::security::cert::TrustAnchor* anchor, ::java::security::cert::X509Certificate* issuerCert, ::java::security::cert::X509Certificate* responderCert, ::java::util::Date* date, ::java::util::List* extensions, $String* variant);
	static ::sun::security::provider::certpath::OCSPResponse* check(::java::util::List* certIds, ::java::net::URI* responderURI, ::sun::security::provider::certpath::OCSPResponse$IssuerInfo* issuerInfo, ::java::security::cert::X509Certificate* responderCert, ::java::util::Date* date, ::java::util::List* extensions, $String* variant);
	static $bytes* getOCSPBytes(::java::util::List* certIds, ::java::net::URI* responderURI, ::java::util::List* extensions);
	static ::java::net::URI* getResponderURI(::java::security::cert::X509Certificate* cert);
	static ::java::net::URI* getResponderURI(::sun::security::x509::X509CertImpl* certImpl);
	static int32_t initializeTimeout();
	static ::sun::security::util::Debug* debug;
	static const int32_t DEFAULT_CONNECT_TIMEOUT = 15000;
	static int32_t CONNECT_TIMEOUT;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("DEFAULT_CONNECT_TIMEOUT")
#pragma pop_macro("CONNECT_TIMEOUT")

#endif // _sun_security_provider_certpath_OCSP_h_