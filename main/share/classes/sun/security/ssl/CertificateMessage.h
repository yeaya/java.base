#ifndef _sun_security_ssl_CertificateMessage_h_
#define _sun_security_ssl_CertificateMessage_h_
//$ class sun.security.ssl.CertificateMessage
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

class CertificateMessage : public ::java::lang::Object {
	$class(CertificateMessage, 0, ::java::lang::Object)
public:
	CertificateMessage();
	void init$();
	static ::sun::security::ssl::SSLConsumer* t12HandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* t12HandshakeProducer;
	static ::sun::security::ssl::SSLConsumer* t13HandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* t13HandshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateMessage_h_