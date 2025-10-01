#ifndef _sun_security_ssl_Authenticator$DTLSNullAuthenticator_h_
#define _sun_security_ssl_Authenticator$DTLSNullAuthenticator_h_
//$ class sun.security.ssl.Authenticator$DTLSNullAuthenticator
//$ extends sun.security.ssl.Authenticator$DTLSAuthenticator

#include <sun/security/ssl/Authenticator$DTLSAuthenticator.h>

namespace sun {
	namespace security {
		namespace ssl {

class Authenticator$DTLSNullAuthenticator : public ::sun::security::ssl::Authenticator$DTLSAuthenticator {
	$class(Authenticator$DTLSNullAuthenticator, $NO_CLASS_INIT, ::sun::security::ssl::Authenticator$DTLSAuthenticator)
public:
	Authenticator$DTLSNullAuthenticator();
	void init$();
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Authenticator$DTLSNullAuthenticator_h_