#ifndef _sun_security_ssl_KeyShareExtension$CHKeyShareStringizer_h_
#define _sun_security_ssl_KeyShareExtension$CHKeyShareStringizer_h_
//$ class sun.security.ssl.KeyShareExtension$CHKeyShareStringizer
//$ extends sun.security.ssl.SSLStringizer

#include <sun/security/ssl/SSLStringizer.h>

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

class KeyShareExtension$CHKeyShareStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(KeyShareExtension$CHKeyShareStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	KeyShareExtension$CHKeyShareStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$CHKeyShareStringizer_h_