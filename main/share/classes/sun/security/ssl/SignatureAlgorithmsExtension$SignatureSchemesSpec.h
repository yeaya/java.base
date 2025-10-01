#ifndef _sun_security_ssl_SignatureAlgorithmsExtension$SignatureSchemesSpec_h_
#define _sun_security_ssl_SignatureAlgorithmsExtension$SignatureSchemesSpec_h_
//$ class sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesSpec
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

class SignatureAlgorithmsExtension$SignatureSchemesSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(SignatureAlgorithmsExtension$SignatureSchemesSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	SignatureAlgorithmsExtension$SignatureSchemesSpec();
	void init$(::java::util::List* schemes);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer);
	virtual $String* toString() override;
	$ints* signatureSchemes = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SignatureAlgorithmsExtension$SignatureSchemesSpec_h_