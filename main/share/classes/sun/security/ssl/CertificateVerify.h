#ifndef _sun_security_ssl_CertificateVerify_h_
#define _sun_security_ssl_CertificateVerify_h_
//$ class sun.security.ssl.CertificateVerify
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

class CertificateVerify : public ::java::lang::Object {
	$class(CertificateVerify, 0, ::java::lang::Object)
public:
	CertificateVerify();
	void init$();
	static ::sun::security::ssl::SSLConsumer* s30HandshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* s30HandshakeProducer;
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

#endif // _sun_security_ssl_CertificateVerify_h_