#ifndef _sun_security_ssl_RenegoInfoExtension$RenegotiationInfoStringizer_h_
#define _sun_security_ssl_RenegoInfoExtension$RenegotiationInfoStringizer_h_
//$ class sun.security.ssl.RenegoInfoExtension$RenegotiationInfoStringizer
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

class RenegoInfoExtension$RenegotiationInfoStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(RenegoInfoExtension$RenegotiationInfoStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	RenegoInfoExtension$RenegotiationInfoStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RenegoInfoExtension$RenegotiationInfoStringizer_h_