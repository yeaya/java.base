#ifndef _sun_security_ssl_CertificateAuthoritiesExtension$CertificateAuthoritiesSpec_h_
#define _sun_security_ssl_CertificateAuthoritiesExtension$CertificateAuthoritiesSpec_h_
//$ class sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class List;
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
		namespace ssl {
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateAuthoritiesExtension$CertificateAuthoritiesSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	CertificateAuthoritiesExtension$CertificateAuthoritiesSpec();
	void init$(::java::util::List* authorities);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* m);
	$Array<::javax::security::auth::x500::X500Principal>* getAuthorities();
	static ::java::util::List* getEncodedAuthorities($Array<::java::security::cert::X509Certificate>* trustedCerts);
	virtual $String* toString() override;
	::java::util::List* authorities = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateAuthoritiesExtension$CertificateAuthoritiesSpec_h_