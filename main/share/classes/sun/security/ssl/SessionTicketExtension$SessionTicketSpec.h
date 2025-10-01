#ifndef _sun_security_ssl_SessionTicketExtension$SessionTicketSpec_h_
#define _sun_security_ssl_SessionTicketExtension$SessionTicketSpec_h_
//$ class sun.security.ssl.SessionTicketExtension$SessionTicketSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

#pragma push_macro("GCM_TAG_LEN")
#undef GCM_TAG_LEN

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class SSLSessionImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SessionTicketExtension$SessionTicketSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(SessionTicketExtension$SessionTicketSpec, 0, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	SessionTicketExtension$SessionTicketSpec();
	void init$();
	void init$(::sun::security::ssl::HandshakeContext* hc, $bytes* b);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buf);
	::java::nio::ByteBuffer* decrypt(::sun::security::ssl::HandshakeContext* hc);
	$bytes* encrypt(::sun::security::ssl::HandshakeContext* hc, ::sun::security::ssl::SSLSessionImpl* session);
	$bytes* getEncoded();
	virtual $String* toString() override;
	static const int32_t GCM_TAG_LEN = 128;
	::java::nio::ByteBuffer* data = nullptr;
	static ::java::nio::ByteBuffer* zero;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("GCM_TAG_LEN")

#endif // _sun_security_ssl_SessionTicketExtension$SessionTicketSpec_h_