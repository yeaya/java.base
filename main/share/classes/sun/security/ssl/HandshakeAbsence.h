#ifndef _sun_security_ssl_HandshakeAbsence_h_
#define _sun_security_ssl_HandshakeAbsence_h_
//$ interface sun.security.ssl.HandshakeAbsence
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class HandshakeAbsence : public ::java::lang::Object {
	$interface(HandshakeAbsence, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) {}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeAbsence_h_