#ifndef _sun_security_ssl_NewSessionTicket$T12NewSessionTicketMessage_h_
#define _sun_security_ssl_NewSessionTicket$T12NewSessionTicketMessage_h_
//$ class sun.security.ssl.NewSessionTicket$T12NewSessionTicketMessage
//$ extends sun.security.ssl.NewSessionTicket$NewSessionTicketMessage

#include <java/lang/Array.h>
#include <sun/security/ssl/NewSessionTicket$NewSessionTicketMessage.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class HandshakeOutStream;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class NewSessionTicket$T12NewSessionTicketMessage : public ::sun::security::ssl::NewSessionTicket$NewSessionTicketMessage {
	$class(NewSessionTicket$T12NewSessionTicketMessage, $NO_CLASS_INIT, ::sun::security::ssl::NewSessionTicket$NewSessionTicketMessage)
public:
	NewSessionTicket$T12NewSessionTicketMessage();
	void init$(::sun::security::ssl::HandshakeContext* context, int32_t ticketLifetime, $bytes* ticket);
	void init$(::sun::security::ssl::HandshakeContext* context, ::java::nio::ByteBuffer* m);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_NewSessionTicket$T12NewSessionTicketMessage_h_