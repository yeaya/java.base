#ifndef _sun_security_ssl_KeyShareExtension$HRRKeyShareStringizer_h_
#define _sun_security_ssl_KeyShareExtension$HRRKeyShareStringizer_h_
//$ class sun.security.ssl.KeyShareExtension$HRRKeyShareStringizer
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

class KeyShareExtension$HRRKeyShareStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(KeyShareExtension$HRRKeyShareStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	KeyShareExtension$HRRKeyShareStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$HRRKeyShareStringizer_h_