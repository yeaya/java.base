#ifndef _sun_security_ssl_SSLProducer_h_
#define _sun_security_ssl_SSLProducer_h_
//$ interface sun.security.ssl.SSLProducer
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class SSLProducer : public ::java::lang::Object {
	$interface(SSLProducer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context) {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLProducer_h_