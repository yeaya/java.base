#ifndef _sun_security_ssl_CertSignAlgsExtension$CertSignatureSchemesStringizer_h_
#define _sun_security_ssl_CertSignAlgsExtension$CertSignatureSchemesStringizer_h_
//$ class sun.security.ssl.CertSignAlgsExtension$CertSignatureSchemesStringizer
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

class CertSignAlgsExtension$CertSignatureSchemesStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(CertSignAlgsExtension$CertSignatureSchemesStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	CertSignAlgsExtension$CertSignatureSchemesStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertSignAlgsExtension$CertSignatureSchemesStringizer_h_