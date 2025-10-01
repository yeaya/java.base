#ifndef _sun_security_ssl_Authenticator$SSLNullAuthenticator_h_
#define _sun_security_ssl_Authenticator$SSLNullAuthenticator_h_
//$ class sun.security.ssl.Authenticator$SSLNullAuthenticator
//$ extends sun.security.ssl.Authenticator$SSLAuthenticator

#include <sun/security/ssl/Authenticator$SSLAuthenticator.h>

namespace sun {
	namespace security {
		namespace ssl {

class Authenticator$SSLNullAuthenticator : public ::sun::security::ssl::Authenticator$SSLAuthenticator {
	$class(Authenticator$SSLNullAuthenticator, $NO_CLASS_INIT, ::sun::security::ssl::Authenticator$SSLAuthenticator)
public:
	Authenticator$SSLNullAuthenticator();
	void init$();
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Authenticator$SSLNullAuthenticator_h_