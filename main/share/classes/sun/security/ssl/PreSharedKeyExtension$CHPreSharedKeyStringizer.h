#ifndef _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeyStringizer_h_
#define _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeyStringizer_h_
//$ class sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyStringizer
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

class PreSharedKeyExtension$CHPreSharedKeyStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(PreSharedKeyExtension$CHPreSharedKeyStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	PreSharedKeyExtension$CHPreSharedKeyStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeyStringizer_h_