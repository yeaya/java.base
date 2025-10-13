#ifndef _sun_security_ssl_AlpnExtension$CHAlpnProducer_h_
#define _sun_security_ssl_AlpnExtension$CHAlpnProducer_h_
//$ class sun.security.ssl.AlpnExtension$CHAlpnProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

#pragma push_macro("MAX_AP_LENGTH")
#undef MAX_AP_LENGTH
#pragma push_macro("MAX_AP_LIST_LENGTH")
#undef MAX_AP_LIST_LENGTH

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

class AlpnExtension$CHAlpnProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(AlpnExtension$CHAlpnProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	AlpnExtension$CHAlpnProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
	static const int32_t MAX_AP_LENGTH = 255;
	static const int32_t MAX_AP_LIST_LENGTH = 0x0000FFFF;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("MAX_AP_LENGTH")
#pragma pop_macro("MAX_AP_LIST_LENGTH")

#endif // _sun_security_ssl_AlpnExtension$CHAlpnProducer_h_