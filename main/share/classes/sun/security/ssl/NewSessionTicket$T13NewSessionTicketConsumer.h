#ifndef _sun_security_ssl_NewSessionTicket$T13NewSessionTicketConsumer_h_
#define _sun_security_ssl_NewSessionTicket$T13NewSessionTicketConsumer_h_
//$ class sun.security.ssl.NewSessionTicket$T13NewSessionTicketConsumer
//$ extends sun.security.ssl.SSLConsumer

#include <sun/security/ssl/SSLConsumer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
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

class NewSessionTicket$T13NewSessionTicketConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(NewSessionTicket$T13NewSessionTicketConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	NewSessionTicket$T13NewSessionTicketConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_NewSessionTicket$T13NewSessionTicketConsumer_h_