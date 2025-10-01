#ifndef _sun_security_ssl_CertificateStatus_h_
#define _sun_security_ssl_CertificateStatus_h_
//$ class sun.security.ssl.CertificateStatus
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeAbsence;
			class HandshakeProducer;
			class SSLConsumer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateStatus : public ::java::lang::Object {
	$class(CertificateStatus, 0, ::java::lang::Object)
public:
	CertificateStatus();
	void init$();
	static ::sun::security::ssl::SSLConsumer* handshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* handshakeProducer;
	static ::sun::security::ssl::HandshakeAbsence* handshakeAbsence;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateStatus_h_