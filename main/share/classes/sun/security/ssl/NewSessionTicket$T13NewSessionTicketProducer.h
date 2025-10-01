#ifndef _sun_security_ssl_NewSessionTicket$T13NewSessionTicketProducer_h_
#define _sun_security_ssl_NewSessionTicket$T13NewSessionTicketProducer_h_
//$ class sun.security.ssl.NewSessionTicket$T13NewSessionTicketProducer
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

class NewSessionTicket$T13NewSessionTicketProducer : public ::sun::security::ssl::SSLProducer {
	$class(NewSessionTicket$T13NewSessionTicketProducer, $NO_CLASS_INIT, ::sun::security::ssl::SSLProducer)
public:
	NewSessionTicket$T13NewSessionTicketProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_NewSessionTicket$T13NewSessionTicketProducer_h_