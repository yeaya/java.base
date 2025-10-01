#ifndef _sun_security_ssl_SSLStringizer_h_
#define _sun_security_ssl_SSLStringizer_h_
//$ interface sun.security.ssl.SSLStringizer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLStringizer : public ::java::lang::Object {
	$interface(SSLStringizer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	using ::java::lang::Object::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* buffer) {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLStringizer_h_