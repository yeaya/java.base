#ifndef _sun_security_ssl_SessionTicketExtension$SessionTicketStringizer_h_
#define _sun_security_ssl_SessionTicketExtension$SessionTicketStringizer_h_
//$ class sun.security.ssl.SessionTicketExtension$SessionTicketStringizer
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

class SessionTicketExtension$SessionTicketStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(SessionTicketExtension$SessionTicketStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	SessionTicketExtension$SessionTicketStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SessionTicketExtension$SessionTicketStringizer_h_