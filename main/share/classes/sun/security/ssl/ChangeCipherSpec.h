#ifndef _sun_security_ssl_ChangeCipherSpec_h_
#define _sun_security_ssl_ChangeCipherSpec_h_
//$ class sun.security.ssl.ChangeCipherSpec
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

class ChangeCipherSpec : public ::java::lang::Object {
	$class(ChangeCipherSpec, 0, ::java::lang::Object)
public:
	ChangeCipherSpec();
	void init$();
	static ::sun::security::ssl::SSLConsumer* t10Consumer;
	static ::sun::security::ssl::HandshakeProducer* t10Producer;
	static ::sun::security::ssl::SSLConsumer* t13Consumer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ChangeCipherSpec_h_