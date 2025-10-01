#ifndef _javax_net_ssl_SSLContextSpi_h_
#define _javax_net_ssl_SSLContextSpi_h_
//$ class javax.net.ssl.SSLContextSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class SecureRandom;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class KeyManager;
			class SSLEngine;
			class SSLParameters;
			class SSLServerSocketFactory;
			class SSLSessionContext;
			class SSLSocket;
			class SSLSocketFactory;
			class TrustManager;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import SSLContextSpi : public ::java::lang::Object {
	$class(SSLContextSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SSLContextSpi();
	void init$();
	virtual ::javax::net::ssl::SSLEngine* engineCreateSSLEngine() {return nullptr;}
	virtual ::javax::net::ssl::SSLEngine* engineCreateSSLEngine($String* host, int32_t port) {return nullptr;}
	virtual ::javax::net::ssl::SSLSessionContext* engineGetClientSessionContext() {return nullptr;}
	virtual ::javax::net::ssl::SSLParameters* engineGetDefaultSSLParameters();
	virtual ::javax::net::ssl::SSLSessionContext* engineGetServerSessionContext() {return nullptr;}
	virtual ::javax::net::ssl::SSLServerSocketFactory* engineGetServerSocketFactory() {return nullptr;}
	virtual ::javax::net::ssl::SSLSocketFactory* engineGetSocketFactory() {return nullptr;}
	virtual ::javax::net::ssl::SSLParameters* engineGetSupportedSSLParameters();
	virtual void engineInit($Array<::javax::net::ssl::KeyManager>* km, $Array<::javax::net::ssl::TrustManager>* tm, ::java::security::SecureRandom* sr) {}
	::javax::net::ssl::SSLSocket* getDefaultSocket();
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLContextSpi_h_