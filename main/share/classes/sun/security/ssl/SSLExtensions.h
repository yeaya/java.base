#ifndef _sun_security_ssl_SSLExtensions_h_
#define _sun_security_ssl_SSLExtensions_h_
//$ class sun.security.ssl.SSLExtensions
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class HandshakeOutStream;
			class SSLExtension;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLExtensions : public ::java::lang::Object {
	$class(SSLExtensions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SSLExtensions();
	void init$(::sun::security::ssl::SSLHandshake$HandshakeMessage* handshakeMessage);
	void init$(::sun::security::ssl::SSLHandshake$HandshakeMessage* hm, ::java::nio::ByteBuffer* m, $Array<::sun::security::ssl::SSLExtension>* extensions);
	void consumeOnLoad(::sun::security::ssl::HandshakeContext* context, $Array<::sun::security::ssl::SSLExtension>* extensions);
	void consumeOnTrade(::sun::security::ssl::HandshakeContext* context, $Array<::sun::security::ssl::SSLExtension>* extensions);
	$bytes* get(::sun::security::ssl::SSLExtension* ext);
	int32_t length();
	void produce(::sun::security::ssl::HandshakeContext* context, $Array<::sun::security::ssl::SSLExtension>* extensions);
	void reproduce(::sun::security::ssl::HandshakeContext* context, $Array<::sun::security::ssl::SSLExtension>* extensions);
	void send(::sun::security::ssl::HandshakeOutStream* hos);
	virtual $String* toString() override;
	static $String* toString(int32_t extId, $bytes* extData);
	::sun::security::ssl::SSLHandshake$HandshakeMessage* handshakeMessage = nullptr;
	::java::util::Map* extMap = nullptr;
	int32_t encodedLength = 0;
	::java::util::Map* logMap = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLExtensions_h_