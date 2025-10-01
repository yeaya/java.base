#ifndef _sun_security_ssl_Plaintext_h_
#define _sun_security_ssl_Plaintext_h_
//$ class sun.security.ssl.Plaintext
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PLAINTEXT_NULL")
#undef PLAINTEXT_NULL

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLEngineResult$HandshakeStatus;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Plaintext : public ::java::lang::Object {
	$class(Plaintext, 0, ::java::lang::Object)
public:
	Plaintext();
	void init$();
	void init$(int8_t contentType, int8_t majorVersion, int8_t minorVersion, int32_t recordEpoch, int64_t recordSN, ::java::nio::ByteBuffer* fragment);
	virtual $String* toString() override;
	static ::sun::security::ssl::Plaintext* PLAINTEXT_NULL;
	int8_t contentType = 0;
	int8_t majorVersion = 0;
	int8_t minorVersion = 0;
	int32_t recordEpoch = 0;
	int64_t recordSN = 0;
	::java::nio::ByteBuffer* fragment = nullptr;
	::javax::net::ssl::SSLEngineResult$HandshakeStatus* handshakeStatus = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("PLAINTEXT_NULL")

#endif // _sun_security_ssl_Plaintext_h_