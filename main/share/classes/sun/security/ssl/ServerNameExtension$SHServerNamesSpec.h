#ifndef _sun_security_ssl_ServerNameExtension$SHServerNamesSpec_h_
#define _sun_security_ssl_ServerNameExtension$SHServerNamesSpec_h_
//$ class sun.security.ssl.ServerNameExtension$SHServerNamesSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT

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

class ServerNameExtension$SHServerNamesSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(ServerNameExtension$SHServerNamesSpec, 0, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	ServerNameExtension$SHServerNamesSpec();
	void init$();
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer);
	virtual $String* toString() override;
	static ::sun::security::ssl::ServerNameExtension$SHServerNamesSpec* DEFAULT;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DEFAULT")

#endif // _sun_security_ssl_ServerNameExtension$SHServerNamesSpec_h_