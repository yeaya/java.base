#ifndef _sun_security_ssl_HelloRequest$HelloRequestKickstartProducer_h_
#define _sun_security_ssl_HelloRequest$HelloRequestKickstartProducer_h_
//$ class sun.security.ssl.HelloRequest$HelloRequestKickstartProducer
//$ extends sun.security.ssl.SSLProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLProducer.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HelloRequest$HelloRequestKickstartProducer : public ::sun::security::ssl::SSLProducer {
	$class(HelloRequest$HelloRequestKickstartProducer, $NO_CLASS_INIT, ::sun::security::ssl::SSLProducer)
public:
	HelloRequest$HelloRequestKickstartProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HelloRequest$HelloRequestKickstartProducer_h_