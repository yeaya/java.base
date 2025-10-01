#ifndef _sun_security_ssl_Authenticator$DTLSAuthenticator_h_
#define _sun_security_ssl_Authenticator$DTLSAuthenticator_h_
//$ class sun.security.ssl.Authenticator$DTLSAuthenticator
//$ extends sun.security.ssl.Authenticator

#include <java/lang/Array.h>
#include <sun/security/ssl/Authenticator.h>

namespace sun {
	namespace security {
		namespace ssl {

class Authenticator$DTLSAuthenticator : public ::sun::security::ssl::Authenticator {
	$class(Authenticator$DTLSAuthenticator, $NO_CLASS_INIT, ::sun::security::ssl::Authenticator)
public:
	Authenticator$DTLSAuthenticator();
	void init$($bytes* block);
	virtual bool seqNumIsHuge() override;
	virtual bool seqNumOverflow() override;
	virtual void setEpochNumber(int32_t epoch) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Authenticator$DTLSAuthenticator_h_