#ifndef _sun_security_ssl_KeyShareExtension$CHKeyShareSpec_h_
#define _sun_security_ssl_KeyShareExtension$CHKeyShareSpec_h_
//$ class sun.security.ssl.KeyShareExtension$CHKeyShareSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class List;
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

class KeyShareExtension$CHKeyShareSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(KeyShareExtension$CHKeyShareSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	KeyShareExtension$CHKeyShareSpec();
	void init$(::java::util::List* clientShares);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* buffer);
	virtual $String* toString() override;
	::java::util::List* clientShares = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$CHKeyShareSpec_h_