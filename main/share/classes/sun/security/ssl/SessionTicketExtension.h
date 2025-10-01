#ifndef _sun_security_ssl_SessionTicketExtension_h_
#define _sun_security_ssl_SessionTicketExtension_h_
//$ class sun.security.ssl.SessionTicketExtension
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("TIMEOUT_DEFAULT")
#undef TIMEOUT_DEFAULT
#pragma push_macro("KEYLEN")
#undef KEYLEN

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeProducer;
			class SSLExtension$ExtensionConsumer;
			class SSLStringizer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SessionTicketExtension : public ::java::lang::Object {
	$class(SessionTicketExtension, 0, ::java::lang::Object)
public:
	SessionTicketExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeProducer* shNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* shOnLoadConsumer;
	static ::sun::security::ssl::SSLStringizer* steStringizer;
	static const int32_t TIMEOUT_DEFAULT = 3600000; // 3600 * 1000
	static int32_t keyTimeout;
	static int32_t currentKeyID;
	static const int32_t KEYLEN = 256;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("TIMEOUT_DEFAULT")
#pragma pop_macro("KEYLEN")

#endif // _sun_security_ssl_SessionTicketExtension_h_