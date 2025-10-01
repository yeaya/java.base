#ifndef _sun_security_ssl_Authenticator$SSL30Authenticator_h_
#define _sun_security_ssl_Authenticator$SSL30Authenticator_h_
//$ class sun.security.ssl.Authenticator$SSL30Authenticator
//$ extends sun.security.ssl.Authenticator$SSLAuthenticator

#include <java/lang/Array.h>
#include <sun/security/ssl/Authenticator$SSLAuthenticator.h>

#pragma push_macro("BLOCK_SIZE")
#undef BLOCK_SIZE

namespace sun {
	namespace security {
		namespace ssl {

class Authenticator$SSL30Authenticator : public ::sun::security::ssl::Authenticator$SSLAuthenticator {
	$class(Authenticator$SSL30Authenticator, $NO_CLASS_INIT, ::sun::security::ssl::Authenticator$SSLAuthenticator)
public:
	Authenticator$SSL30Authenticator();
	void init$();
	virtual $bytes* acquireAuthenticationBytes(int8_t type, int32_t length, $bytes* sequence) override;
	static const int32_t BLOCK_SIZE = 11;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("BLOCK_SIZE")

#endif // _sun_security_ssl_Authenticator$SSL30Authenticator_h_