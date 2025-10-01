#ifndef _sun_security_ssl_MaxFragExtension$MaxFragLenStringizer_h_
#define _sun_security_ssl_MaxFragExtension$MaxFragLenStringizer_h_
//$ class sun.security.ssl.MaxFragExtension$MaxFragLenStringizer
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

class MaxFragExtension$MaxFragLenStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(MaxFragExtension$MaxFragLenStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	MaxFragExtension$MaxFragLenStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_MaxFragExtension$MaxFragLenStringizer_h_