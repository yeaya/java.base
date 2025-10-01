#ifndef _sun_security_ssl_SSLHandshake$HandshakeMessage_h_
#define _sun_security_ssl_SSLHandshake$HandshakeMessage_h_
//$ class sun.security.ssl.SSLHandshake$HandshakeMessage
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class HandshakeOutStream;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLHandshake$HandshakeMessage : public ::java::lang::Object {
	$class(SSLHandshake$HandshakeMessage, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SSLHandshake$HandshakeMessage();
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext);
	virtual ::sun::security::ssl::SSLHandshake* handshakeType() {return nullptr;}
	virtual int32_t messageLength() {return 0;}
	virtual void send(::sun::security::ssl::HandshakeOutStream* hos) {}
	virtual void write(::sun::security::ssl::HandshakeOutStream* hos);
	::sun::security::ssl::HandshakeContext* handshakeContext = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLHandshake$HandshakeMessage_h_