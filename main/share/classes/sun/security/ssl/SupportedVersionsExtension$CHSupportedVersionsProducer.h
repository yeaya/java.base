#ifndef _sun_security_ssl_SupportedVersionsExtension$CHSupportedVersionsProducer_h_
#define _sun_security_ssl_SupportedVersionsExtension$CHSupportedVersionsProducer_h_
//$ class sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SupportedVersionsExtension$CHSupportedVersionsProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(SupportedVersionsExtension$CHSupportedVersionsProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	SupportedVersionsExtension$CHSupportedVersionsProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedVersionsExtension$CHSupportedVersionsProducer_h_