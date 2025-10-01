#ifndef _sun_security_ssl_ServerHelloDone_h_
#define _sun_security_ssl_ServerHelloDone_h_
//$ class sun.security.ssl.ServerHelloDone
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeProducer;
			class SSLConsumer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ServerHelloDone : public ::java::lang::Object {
	$class(ServerHelloDone, 0, ::java::lang::Object)
public:
	ServerHelloDone();
	void init$();
	static ::sun::security::ssl::SSLConsumer* handshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* handshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerHelloDone_h_