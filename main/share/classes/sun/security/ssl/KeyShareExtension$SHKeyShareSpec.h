#ifndef _sun_security_ssl_KeyShareExtension$SHKeyShareSpec_h_
#define _sun_security_ssl_KeyShareExtension$SHKeyShareSpec_h_
//$ class sun.security.ssl.KeyShareExtension$SHKeyShareSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class KeyShareExtension$KeyShareEntry;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class KeyShareExtension$SHKeyShareSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(KeyShareExtension$SHKeyShareSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	KeyShareExtension$SHKeyShareSpec();
	void init$(::sun::security::ssl::KeyShareExtension$KeyShareEntry* serverShare);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* buffer);
	virtual $String* toString() override;
	::sun::security::ssl::KeyShareExtension$KeyShareEntry* serverShare = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$SHKeyShareSpec_h_