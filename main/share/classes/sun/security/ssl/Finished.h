#ifndef _sun_security_ssl_Finished_h_
#define _sun_security_ssl_Finished_h_
//$ class sun.security.ssl.Finished
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeProducer;
			class SSLConsumer;
			class SSLSessionImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Finished : public ::java::lang::Object {
	$class(Finished, 0, ::java::lang::Object)
public:
	Finished();
	void init$();
	static void recordEvent(::sun::security::ssl::SSLSessionImpl* session);
	static ::sun::security::ssl::SSLConsumer* t12HandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* t12HandshakeProducer;
	static ::sun::security::ssl::SSLConsumer* t13HandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* t13HandshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Finished_h_