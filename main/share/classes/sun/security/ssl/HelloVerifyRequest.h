#ifndef _sun_security_ssl_HelloVerifyRequest_h_
#define _sun_security_ssl_HelloVerifyRequest_h_
//$ class sun.security.ssl.HelloVerifyRequest
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

class HelloVerifyRequest : public ::java::lang::Object {
	$class(HelloVerifyRequest, 0, ::java::lang::Object)
public:
	HelloVerifyRequest();
	void init$();
	static ::sun::security::ssl::SSLConsumer* handshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* handshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HelloVerifyRequest_h_