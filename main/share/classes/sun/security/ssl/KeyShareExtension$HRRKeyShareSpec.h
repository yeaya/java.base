#ifndef _sun_security_ssl_KeyShareExtension$HRRKeyShareSpec_h_
#define _sun_security_ssl_KeyShareExtension$HRRKeyShareSpec_h_
//$ class sun.security.ssl.KeyShareExtension$HRRKeyShareSpec
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
			class NamedGroup;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class KeyShareExtension$HRRKeyShareSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(KeyShareExtension$HRRKeyShareSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	KeyShareExtension$HRRKeyShareSpec();
	void init$(::sun::security::ssl::NamedGroup* serverGroup);
	void init$(::sun::security::ssl::HandshakeContext* handshakeContext, ::java::nio::ByteBuffer* buffer);
	virtual $String* toString() override;
	int32_t selectedGroup = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$HRRKeyShareSpec_h_