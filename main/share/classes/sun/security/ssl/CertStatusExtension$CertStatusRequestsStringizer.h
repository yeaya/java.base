#ifndef _sun_security_ssl_CertStatusExtension$CertStatusRequestsStringizer_h_
#define _sun_security_ssl_CertStatusExtension$CertStatusRequestsStringizer_h_
//$ class sun.security.ssl.CertStatusExtension$CertStatusRequestsStringizer
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

class CertStatusExtension$CertStatusRequestsStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(CertStatusExtension$CertStatusRequestsStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	CertStatusExtension$CertStatusRequestsStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertStatusExtension$CertStatusRequestsStringizer_h_