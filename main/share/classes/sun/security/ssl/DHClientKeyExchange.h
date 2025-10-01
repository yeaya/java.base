#ifndef _sun_security_ssl_DHClientKeyExchange_h_
#define _sun_security_ssl_DHClientKeyExchange_h_
//$ class sun.security.ssl.DHClientKeyExchange
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class DHClientKeyExchange$DHClientKeyExchangeConsumer;
			class DHClientKeyExchange$DHClientKeyExchangeProducer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class DHClientKeyExchange : public ::java::lang::Object {
	$class(DHClientKeyExchange, 0, ::java::lang::Object)
public:
	DHClientKeyExchange();
	void init$();
	static ::sun::security::ssl::DHClientKeyExchange$DHClientKeyExchangeConsumer* dhHandshakeConsumer;
	static ::sun::security::ssl::DHClientKeyExchange$DHClientKeyExchangeProducer* dhHandshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DHClientKeyExchange_h_