#ifndef _javax_net_ssl_SSLContext_h_
#define _javax_net_ssl_SSLContext_h_
//$ class javax.net.ssl.SSLContext
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("VH_DEFAULT_CONTEXT")
#undef VH_DEFAULT_CONTEXT

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace security {
		class Provider;
		class SecureRandom;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class KeyManager;
			class SSLContextSpi;
			class SSLEngine;
			class SSLParameters;
			class SSLServerSocketFactory;
			class SSLSessionContext;
			class SSLSocketFactory;
			class TrustManager;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $export SSLContext : public ::java::lang::Object {
	$class(SSLContext, 0, ::java::lang::Object)
public:
	SSLContext();
	void init$(::javax::net::ssl::SSLContextSpi* contextSpi, ::java::security::Provider* provider, $String* protocol);
	::javax::net::ssl::SSLEngine* createSSLEngine();
	::javax::net::ssl::SSLEngine* createSSLEngine($String* peerHost, int32_t peerPort);
	::javax::net::ssl::SSLSessionContext* getClientSessionContext();
	static ::javax::net::ssl::SSLContext* getDefault();
	::javax::net::ssl::SSLParameters* getDefaultSSLParameters();
	static ::javax::net::ssl::SSLContext* getInstance($String* protocol);
	static ::javax::net::ssl::SSLContext* getInstance($String* protocol, $String* provider);
	static ::javax::net::ssl::SSLContext* getInstance($String* protocol, ::java::security::Provider* provider);
	$String* getProtocol();
	::java::security::Provider* getProvider();
	::javax::net::ssl::SSLSessionContext* getServerSessionContext();
	::javax::net::ssl::SSLServerSocketFactory* getServerSocketFactory();
	::javax::net::ssl::SSLSocketFactory* getSocketFactory();
	::javax::net::ssl::SSLParameters* getSupportedSSLParameters();
	void init($Array<::javax::net::ssl::KeyManager>* km, $Array<::javax::net::ssl::TrustManager>* tm, ::java::security::SecureRandom* random);
	static void setDefault(::javax::net::ssl::SSLContext* context);
	::java::security::Provider* provider = nullptr;
	::javax::net::ssl::SSLContextSpi* contextSpi = nullptr;
	$String* protocol = nullptr;
	static $volatile(::javax::net::ssl::SSLContext*) defaultContext;
	static ::java::lang::invoke::VarHandle* VH_DEFAULT_CONTEXT;
};

		} // ssl
	} // net
} // javax

#pragma pop_macro("VH_DEFAULT_CONTEXT")

#endif // _javax_net_ssl_SSLContext_h_