#ifndef _sun_security_ssl_CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer_h_
#define _sun_security_ssl_CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer_h_
//$ class sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer
//$ extends sun.security.ssl.SSLStringizer

#include <sun/security/ssl/SSLStringizer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
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

class CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer_h_