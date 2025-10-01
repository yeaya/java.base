#ifndef _sun_security_ssl_SupportedVersionsExtension$SHSupportedVersionsProducer_h_
#define _sun_security_ssl_SupportedVersionsExtension$SHSupportedVersionsProducer_h_
//$ class sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsProducer
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

class SupportedVersionsExtension$SHSupportedVersionsProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(SupportedVersionsExtension$SHSupportedVersionsProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	SupportedVersionsExtension$SHSupportedVersionsProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedVersionsExtension$SHSupportedVersionsProducer_h_