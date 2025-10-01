#ifndef _sun_security_ssl_PostHandshakeContext_h_
#define _sun_security_ssl_PostHandshakeContext_h_
//$ class sun.security.ssl.PostHandshakeContext
//$ extends sun.security.ssl.HandshakeContext

#include <sun/security/ssl/HandshakeContext.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class PostHandshakeContext : public ::sun::security::ssl::HandshakeContext {
	$class(PostHandshakeContext, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeContext)
public:
	PostHandshakeContext();
	using ::sun::security::ssl::HandshakeContext::dispatch;
	void init$(::sun::security::ssl::TransportContext* context);
	virtual void dispatch(int8_t handshakeType, ::java::nio::ByteBuffer* fragment) override;
	static bool isConsumable(::sun::security::ssl::TransportContext* context, int8_t handshakeType);
	virtual void kickstart() override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PostHandshakeContext_h_