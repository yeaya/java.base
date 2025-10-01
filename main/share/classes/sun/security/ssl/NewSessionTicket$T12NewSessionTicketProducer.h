#ifndef _sun_security_ssl_NewSessionTicket$T12NewSessionTicketProducer_h_
#define _sun_security_ssl_NewSessionTicket$T12NewSessionTicketProducer_h_
//$ class sun.security.ssl.NewSessionTicket$T12NewSessionTicketProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class NewSessionTicket$T12NewSessionTicketProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(NewSessionTicket$T12NewSessionTicketProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	NewSessionTicket$T12NewSessionTicketProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_NewSessionTicket$T12NewSessionTicketProducer_h_