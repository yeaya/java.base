#ifndef _sun_security_ssl_CertificateRequest_h_
#define _sun_security_ssl_CertificateRequest_h_
//$ class sun.security.ssl.CertificateRequest
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

class CertificateRequest : public ::java::lang::Object {
	$class(CertificateRequest, 0, ::java::lang::Object)
public:
	CertificateRequest();
	void init$();
	static ::sun::security::ssl::SSLConsumer* t10HandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* t10HandshakeProducer;
	static ::sun::security::ssl::SSLConsumer* t12HandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* t12HandshakeProducer;
	static ::sun::security::ssl::SSLConsumer* t13HandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* t13HandshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateRequest_h_