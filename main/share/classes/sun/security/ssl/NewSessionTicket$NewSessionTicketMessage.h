#ifndef _sun_security_ssl_NewSessionTicket$NewSessionTicketMessage_h_
#define _sun_security_ssl_NewSessionTicket$NewSessionTicketMessage_h_
//$ class sun.security.ssl.NewSessionTicket$NewSessionTicketMessage
//$ extends sun.security.ssl.SSLHandshake$HandshakeMessage

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class NewSessionTicket$NewSessionTicketMessage : public ::sun::security::ssl::SSLHandshake$HandshakeMessage {
	$class(NewSessionTicket$NewSessionTicketMessage, $NO_CLASS_INIT, ::sun::security::ssl::SSLHandshake$HandshakeMessage)
public:
	NewSessionTicket$NewSessionTicketMessage();
	void init$(::sun::security::ssl::HandshakeContext* context);
	virtual int32_t getTicketAgeAdd();
	virtual $bytes* getTicketNonce();
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual bool isValid();
	int32_t ticketLifetime = 0;
	$bytes* ticket = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_NewSessionTicket$NewSessionTicketMessage_h_