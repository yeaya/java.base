#ifndef _sun_security_ssl_CertificateMessage$T13CertificateConsumer_h_
#define _sun_security_ssl_CertificateMessage$T13CertificateConsumer_h_
//$ class sun.security.ssl.CertificateMessage$T13CertificateConsumer
//$ extends sun.security.ssl.SSLConsumer

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLConsumer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertificateException;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Alert;
			class CertificateMessage$T13CertificateMessage;
			class ClientHandshakeContext;
			class ConnectionContext;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateMessage$T13CertificateConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(CertificateMessage$T13CertificateConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	CertificateMessage$T13CertificateConsumer();
	void init$();
	static $Array<::java::security::cert::X509Certificate>* checkClientCerts(::sun::security::ssl::ServerHandshakeContext* shc, ::java::util::List* certEntries);
	static $Array<::java::security::cert::X509Certificate>* checkServerCerts(::sun::security::ssl::ClientHandshakeContext* chc, ::java::util::List* certEntries);
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
	static ::sun::security::ssl::Alert* getCertificateAlert(::sun::security::ssl::ClientHandshakeContext* chc, ::java::security::cert::CertificateException* cexc);
	void onConsumeCertificate(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::CertificateMessage$T13CertificateMessage* certificateMessage);
	void onConsumeCertificate(::sun::security::ssl::ClientHandshakeContext* chc, ::sun::security::ssl::CertificateMessage$T13CertificateMessage* certificateMessage);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateMessage$T13CertificateConsumer_h_