#ifndef _sun_security_ssl_SSLHandshakeBinding_h_
#define _sun_security_ssl_SSLHandshakeBinding_h_
//$ interface sun.security.ssl.SSLHandshakeBinding
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Map$Entry;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLHandshakeBinding : public ::java::lang::Object {
	$interface(SSLHandshakeBinding, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Array<::java::util::Map$Entry>* getHandshakeConsumers(::sun::security::ssl::HandshakeContext* handshakeContext);
	virtual $Array<::java::util::Map$Entry>* getHandshakeProducers(::sun::security::ssl::HandshakeContext* handshakeContext);
	virtual $Array<::sun::security::ssl::SSLHandshake>* getRelatedHandshakers(::sun::security::ssl::HandshakeContext* handshakeContext);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLHandshakeBinding_h_