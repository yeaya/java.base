#ifndef _sun_security_ssl_EncryptedExtensions_h_
#define _sun_security_ssl_EncryptedExtensions_h_
//$ class sun.security.ssl.EncryptedExtensions
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

class EncryptedExtensions : public ::java::lang::Object {
	$class(EncryptedExtensions, 0, ::java::lang::Object)
public:
	EncryptedExtensions();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* handshakeProducer;
	static ::sun::security::ssl::SSLConsumer* handshakeConsumer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_EncryptedExtensions_h_