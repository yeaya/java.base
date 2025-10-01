#ifndef _sun_security_ssl_RenegoInfoExtension$RenegotiationInfoSpec_h_
#define _sun_security_ssl_RenegoInfoExtension$RenegotiationInfoSpec_h_
//$ class sun.security.ssl.RenegoInfoExtension$RenegotiationInfoSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

#pragma push_macro("NOMINAL")
#undef NOMINAL

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

class RenegoInfoExtension$RenegotiationInfoSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(RenegoInfoExtension$RenegotiationInfoSpec, 0, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	RenegoInfoExtension$RenegotiationInfoSpec();
	void init$($bytes* renegotiatedConnection);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* m);
	virtual $String* toString() override;
	static ::sun::security::ssl::RenegoInfoExtension$RenegotiationInfoSpec* NOMINAL;
	$bytes* renegotiatedConnection = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("NOMINAL")

#endif // _sun_security_ssl_RenegoInfoExtension$RenegotiationInfoSpec_h_