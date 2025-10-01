#ifndef _sun_security_ssl_SignatureAlgorithmsExtension$SignatureSchemesStringizer_h_
#define _sun_security_ssl_SignatureAlgorithmsExtension$SignatureSchemesStringizer_h_
//$ class sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesStringizer
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

class SignatureAlgorithmsExtension$SignatureSchemesStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(SignatureAlgorithmsExtension$SignatureSchemesStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	SignatureAlgorithmsExtension$SignatureSchemesStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SignatureAlgorithmsExtension$SignatureSchemesStringizer_h_