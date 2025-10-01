#ifndef _sun_security_ssl_KeyUpdate_h_
#define _sun_security_ssl_KeyUpdate_h_
//$ class sun.security.ssl.KeyUpdate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeProducer;
			class SSLConsumer;
			class SSLProducer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class KeyUpdate : public ::java::lang::Object {
	$class(KeyUpdate, 0, ::java::lang::Object)
public:
	KeyUpdate();
	void init$();
	static ::sun::security::ssl::SSLProducer* kickstartProducer;
	static ::sun::security::ssl::SSLConsumer* handshakeConsumer;
	static ::sun::security::ssl::HandshakeProducer* handshakeProducer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyUpdate_h_