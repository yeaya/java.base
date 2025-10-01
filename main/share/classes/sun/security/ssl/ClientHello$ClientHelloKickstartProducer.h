#ifndef _sun_security_ssl_ClientHello$ClientHelloKickstartProducer_h_
#define _sun_security_ssl_ClientHello$ClientHelloKickstartProducer_h_
//$ class sun.security.ssl.ClientHello$ClientHelloKickstartProducer
//$ extends sun.security.ssl.SSLProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLProducer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ClientHello$ClientHelloKickstartProducer : public ::sun::security::ssl::SSLProducer {
	$class(ClientHello$ClientHelloKickstartProducer, $NO_CLASS_INIT, ::sun::security::ssl::SSLProducer)
public:
	ClientHello$ClientHelloKickstartProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ClientHello$ClientHelloKickstartProducer_h_