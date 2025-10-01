#ifndef _sun_security_ssl_SSLAuthentication_h_
#define _sun_security_ssl_SSLAuthentication_h_
//$ interface sun.security.ssl.SSLAuthentication
//$ extends sun.security.ssl.SSLPossessionGenerator,sun.security.ssl.SSLHandshakeBinding

#include <sun/security/ssl/SSLHandshakeBinding.h>
#include <sun/security/ssl/SSLPossessionGenerator.h>

namespace sun {
	namespace security {
		namespace ssl {

class SSLAuthentication : public ::sun::security::ssl::SSLPossessionGenerator, public ::sun::security::ssl::SSLHandshakeBinding {
	$interface(SSLAuthentication, $NO_CLASS_INIT, ::sun::security::ssl::SSLPossessionGenerator, ::sun::security::ssl::SSLHandshakeBinding)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLAuthentication_h_