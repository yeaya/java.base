#ifndef _sun_security_ssl_ServerHello$T12ServerHelloProducer$KeyExchangeProperties_h_
#define _sun_security_ssl_ServerHello$T12ServerHelloProducer$KeyExchangeProperties_h_
//$ class sun.security.ssl.ServerHello$T12ServerHelloProducer$KeyExchangeProperties
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite;
			class SSLKeyExchange;
			class SSLPossession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ServerHello$T12ServerHelloProducer$KeyExchangeProperties : public ::java::lang::Object {
	$class(ServerHello$T12ServerHelloProducer$KeyExchangeProperties, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ServerHello$T12ServerHelloProducer$KeyExchangeProperties();
	void init$(::sun::security::ssl::CipherSuite* cipherSuite, ::sun::security::ssl::SSLKeyExchange* keyExchange, $Array<::sun::security::ssl::SSLPossession>* possessions);
	::sun::security::ssl::CipherSuite* cipherSuite = nullptr;
	::sun::security::ssl::SSLKeyExchange* keyExchange = nullptr;
	$Array<::sun::security::ssl::SSLPossession>* possessions = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerHello$T12ServerHelloProducer$KeyExchangeProperties_h_