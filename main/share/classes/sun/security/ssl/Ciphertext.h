#ifndef _sun_security_ssl_Ciphertext_h_
#define _sun_security_ssl_Ciphertext_h_
//$ class sun.security.ssl.Ciphertext
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class Ciphertext : public ::java::lang::Object {
	$class(Ciphertext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Ciphertext();
	void init$();
	void init$(int8_t contentType, int8_t handshakeType, int64_t recordSN);
	int8_t contentType = 0;
	int8_t handshakeType = 0;
	int64_t recordSN = 0;
	::javax::net::ssl::SSLEngineResult$HandshakeStatus* handshakeStatus = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Ciphertext_h_