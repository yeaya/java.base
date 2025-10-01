#ifndef _sun_security_ssl_SupportedGroupsExtension_h_
#define _sun_security_ssl_SupportedGroupsExtension_h_
//$ class sun.security.ssl.SupportedGroupsExtension
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeAbsence;
			class HandshakeProducer;
			class SSLExtension$ExtensionConsumer;
			class SSLStringizer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SupportedGroupsExtension : public ::java::lang::Object {
	$class(SupportedGroupsExtension, 0, ::java::lang::Object)
public:
	SupportedGroupsExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* chOnTradAbsence;
	static ::sun::security::ssl::SSLStringizer* sgsStringizer;
	static ::sun::security::ssl::HandshakeProducer* eeNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* eeOnLoadConsumer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedGroupsExtension_h_