#ifndef _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer_h_
#define _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer_h_
//$ class sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer
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

class PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer_h_