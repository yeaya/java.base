#ifndef _sun_security_ssl_NewSessionTicket$T13NewSessionTicketMessage_h_
#define _sun_security_ssl_NewSessionTicket$T13NewSessionTicketMessage_h_
//$ class sun.security.ssl.NewSessionTicket$T13NewSessionTicketMessage
//$ extends sun.security.ssl.NewSessionTicket$NewSessionTicketMessage

#include <java/lang/Array.h>
#include <sun/security/ssl/NewSessionTicket$NewSessionTicketMessage.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class SecureRandom;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class HandshakeOutStream;
			class SSLExtensions;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class NewSessionTicket$T13NewSessionTicketMessage : public ::sun::security::ssl::NewSessionTicket$NewSessionTicketMessage {
	$class(NewSessionTicket$T13NewSessionTicketMessage, $NO_CLASS_INIT, ::sun::security::ssl::NewSessionTicket$NewSessionTicketMessage)
public:
	NewSessionTicket$T13NewSessionTicketMessage();
	void init$(::sun::security::ssl::HandshakeContext* context, int32_t ticketLifetime, ::java::security::SecureRandom* generator, $bytes* ticketNonce, $bytes* ticket);
	void init$(::sun::security::ssl::HandshakeContext* context, ::java::nio::ByteBuffer* m);
	virtual int32_t getTicketAgeAdd() override;
	virtual $bytes* getTicketNonce() override;
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() override;
	virtual int32_t messageLength() override;
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) override;
	virtual $String* toString() override;
	int32_t ticketAgeAdd = 0;
	$bytes* ticketNonce = nullptr;
	::sun::security::ssl::SSLExtensions* extensions = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_NewSessionTicket$T13NewSessionTicketMessage_h_