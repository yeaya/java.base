#ifndef _sun_security_ssl_CertificateMessage$T12CertificateConsumer_h_
#define _sun_security_ssl_CertificateMessage$T12CertificateConsumer_h_
//$ class sun.security.ssl.CertificateMessage$T12CertificateConsumer
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
		class Collection;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Alert;
			class CertificateMessage$T12CertificateMessage;
			class ClientHandshakeContext;
			class ConnectionContext;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateMessage$T12CertificateConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(CertificateMessage$T12CertificateConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	CertificateMessage$T12CertificateConsumer();
	void init$();
	static void checkClientCerts(::sun::security::ssl::ServerHandshakeContext* shc, $Array<::java::security::cert::X509Certificate>* certs);
	static void checkServerCerts(::sun::security::ssl::ClientHandshakeContext* chc, $Array<::java::security::cert::X509Certificate>* certs);
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
	static ::sun::security::ssl::Alert* getCertificateAlert(::sun::security::ssl::ClientHandshakeContext* chc, ::java::security::cert::CertificateException* cexc);
	static ::java::util::Collection* getSubjectAltNames(::java::util::Collection* subjectAltNames, int32_t type);
	static bool isEquivalent(::java::util::Collection* thisSubAltNames, ::java::util::Collection* prevSubAltNames);
	static bool isIdentityEquivalent(::java::security::cert::X509Certificate* thisCert, ::java::security::cert::X509Certificate* prevCert);
	void onCertificate(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::CertificateMessage$T12CertificateMessage* certificateMessage);
	void onCertificate(::sun::security::ssl::ClientHandshakeContext* chc, ::sun::security::ssl::CertificateMessage$T12CertificateMessage* certificateMessage);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateMessage$T12CertificateConsumer_h_