#ifndef _sun_security_ssl_ServerHello_h_
#define _sun_security_ssl_ServerHello_h_
//$ class sun.security.ssl.ServerHello
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeConsumer;
			class HandshakeContext;
			class HandshakeProducer;
			class SSLConsumer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ServerHello : public ::java::lang::Object {
	$class(ServerHello, 0, ::java::lang::Object)
public:
	ServerHello();
	void init$();
	static void setUpPskKD(::sun::security::ssl::HandshakeContext* hc, ::javax::crypto::SecretKey* psk);
	static ::sun::security::ssl::SSLConsumer* handshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* t12HandshakeProducer;
	static ::sun::security::ssl::HandshakeProducer* t13HandshakeProducer;
	static ::sun::security::ssl::HandshakeProducer* hrrHandshakeProducer;
	static ::sun::security::ssl::HandshakeProducer* hrrReproducer;
	static ::sun::security::ssl::HandshakeConsumer* t12HandshakeConsumer;
	static ::sun::security::ssl::HandshakeConsumer* t13HandshakeConsumer;
	static ::sun::security::ssl::HandshakeConsumer* d12HandshakeConsumer;
	static ::sun::security::ssl::HandshakeConsumer* d13HandshakeConsumer;
	static ::sun::security::ssl::HandshakeConsumer* t13HrrHandshakeConsumer;
	static ::sun::security::ssl::HandshakeConsumer* d13HrrHandshakeConsumer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerHello_h_