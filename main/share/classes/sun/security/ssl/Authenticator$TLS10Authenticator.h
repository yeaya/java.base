#ifndef _sun_security_ssl_Authenticator$TLS10Authenticator_h_
#define _sun_security_ssl_Authenticator$TLS10Authenticator_h_
//$ class sun.security.ssl.Authenticator$TLS10Authenticator
//$ extends sun.security.ssl.Authenticator$SSLAuthenticator

#include <java/lang/Array.h>
#include <sun/security/ssl/Authenticator$SSLAuthenticator.h>

#pragma push_macro("BLOCK_SIZE")
#undef BLOCK_SIZE

namespace sun {
	namespace security {
		namespace ssl {
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Authenticator$TLS10Authenticator : public ::sun::security::ssl::Authenticator$SSLAuthenticator {
	$class(Authenticator$TLS10Authenticator, $NO_CLASS_INIT, ::sun::security::ssl::Authenticator$SSLAuthenticator)
public:
	Authenticator$TLS10Authenticator();
	void init$(::sun::security::ssl::ProtocolVersion* protocolVersion);
	virtual $bytes* acquireAuthenticationBytes(int8_t type, int32_t length, $bytes* sequence) override;
	static const int32_t BLOCK_SIZE = 13;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("BLOCK_SIZE")

#endif // _sun_security_ssl_Authenticator$TLS10Authenticator_h_