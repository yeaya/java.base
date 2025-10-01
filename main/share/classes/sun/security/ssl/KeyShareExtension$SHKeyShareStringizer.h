#ifndef _sun_security_ssl_KeyShareExtension$SHKeyShareStringizer_h_
#define _sun_security_ssl_KeyShareExtension$SHKeyShareStringizer_h_
//$ class sun.security.ssl.KeyShareExtension$SHKeyShareStringizer
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

class KeyShareExtension$SHKeyShareStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(KeyShareExtension$SHKeyShareStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	KeyShareExtension$SHKeyShareStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$SHKeyShareStringizer_h_