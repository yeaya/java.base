#ifndef _sun_security_ssl_ClientHandshakeContext_h_
#define _sun_security_ssl_ClientHandshakeContext_h_
//$ class sun.security.ssl.ClientHandshakeContext
//$ extends sun.security.ssl.HandshakeContext

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeContext.h>

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ClientHello$ClientHelloMessage;
			class SSLContextImpl;
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ClientHandshakeContext : public ::sun::security::ssl::HandshakeContext {
	$class(ClientHandshakeContext, 0, ::sun::security::ssl::HandshakeContext)
public:
	ClientHandshakeContext();
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::sun::security::ssl::TransportContext* conContext);
	virtual void kickstart() override;
	static bool allowUnsafeServerCertChange;
	$Array<::java::security::cert::X509Certificate>* reservedServerCerts = nullptr;
	$Array<::java::security::cert::X509Certificate>* deferredCerts = nullptr;
	::sun::security::ssl::ClientHello$ClientHelloMessage* initialClientHelloMsg = nullptr;
	$bytes* pskIdentity = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ClientHandshakeContext_h_