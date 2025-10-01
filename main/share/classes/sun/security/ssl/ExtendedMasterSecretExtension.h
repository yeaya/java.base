#ifndef _sun_security_ssl_ExtendedMasterSecretExtension_h_
#define _sun_security_ssl_ExtendedMasterSecretExtension_h_
//$ class sun.security.ssl.ExtendedMasterSecretExtension
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

class ExtendedMasterSecretExtension : public ::java::lang::Object {
	$class(ExtendedMasterSecretExtension, 0, ::java::lang::Object)
public:
	ExtendedMasterSecretExtension();
	void init$();
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* chOnLoadAbsence;
	static ::sun::security::ssl::HandshakeProducer* shNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* shOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* shOnLoadAbsence;
	static ::sun::security::ssl::SSLStringizer* emsStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ExtendedMasterSecretExtension_h_