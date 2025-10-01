#ifndef _sun_security_ssl_Authenticator$SSLAuthenticator_h_
#define _sun_security_ssl_Authenticator$SSLAuthenticator_h_
//$ class sun.security.ssl.Authenticator$SSLAuthenticator
//$ extends sun.security.ssl.Authenticator

#include <java/lang/Array.h>
#include <sun/security/ssl/Authenticator.h>

namespace sun {
	namespace security {
		namespace ssl {

class Authenticator$SSLAuthenticator : public ::sun::security::ssl::Authenticator {
	$class(Authenticator$SSLAuthenticator, $NO_CLASS_INIT, ::sun::security::ssl::Authenticator)
public:
	Authenticator$SSLAuthenticator();
	void init$($bytes* block);
	virtual bool seqNumIsHuge() override;
	virtual bool seqNumOverflow() override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Authenticator$SSLAuthenticator_h_