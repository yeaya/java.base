#ifndef _sun_security_ssl_CertStatusExtension_h_
#define _sun_security_ssl_CertStatusExtension_h_
//$ class sun.security.ssl.CertStatusExtension
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class CertStatusExtension : public ::java::lang::Object {
	$class(CertStatusExtension, 0, ::java::lang::Object)
public:
	CertStatusExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeProducer* shNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* shOnLoadConsumer;
	static ::sun::security::ssl::HandshakeProducer* ctNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* ctOnLoadConsumer;
	static ::sun::security::ssl::SSLStringizer* certStatusReqStringizer;
	static ::sun::security::ssl::HandshakeProducer* chV2NetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chV2OnLoadConsumer;
	static ::sun::security::ssl::HandshakeProducer* shV2NetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* shV2OnLoadConsumer;
	static ::sun::security::ssl::SSLStringizer* certStatusReqV2Stringizer;
	static ::sun::security::ssl::SSLStringizer* certStatusRespStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertStatusExtension_h_