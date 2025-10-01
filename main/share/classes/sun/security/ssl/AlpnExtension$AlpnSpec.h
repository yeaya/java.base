#ifndef _sun_security_ssl_AlpnExtension$AlpnSpec_h_
#define _sun_security_ssl_AlpnExtension$AlpnSpec_h_
//$ class sun.security.ssl.AlpnExtension$AlpnSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <java/lang/Array.h>
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

class AlpnExtension$AlpnSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(AlpnExtension$AlpnSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	AlpnExtension$AlpnSpec();
	void init$($StringArray* applicationProtocols);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer);
	virtual $String* toString() override;
	::java::util::List* applicationProtocols = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_AlpnExtension$AlpnSpec_h_