#ifndef _sun_security_ssl_SSLServerSocketFactoryImpl_h_
#define _sun_security_ssl_SSLServerSocketFactoryImpl_h_
//$ class sun.security.ssl.SSLServerSocketFactoryImpl
//$ extends javax.net.ssl.SSLServerSocketFactory

#include <java/lang/Array.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>

#pragma push_macro("DEFAULT_BACKLOG")
#undef DEFAULT_BACKLOG

namespace java {
	namespace net {
		class InetAddress;
		class ServerSocket;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class SSLContextImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLServerSocketFactoryImpl : public ::javax::net::ssl::SSLServerSocketFactory {
	$class(SSLServerSocketFactoryImpl, $NO_CLASS_INIT, ::javax::net::ssl::SSLServerSocketFactory)
public:
	SSLServerSocketFactoryImpl();
	void init$();
	void init$(::sun::security::ssl::SSLContextImpl* context);
	virtual ::java::net::ServerSocket* createServerSocket() override;
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port) override;
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port, int32_t backlog) override;
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port, int32_t backlog, ::java::net::InetAddress* ifAddress) override;
	virtual $StringArray* getDefaultCipherSuites() override;
	virtual $StringArray* getSupportedCipherSuites() override;
	static const int32_t DEFAULT_BACKLOG = 50;
	::sun::security::ssl::SSLContextImpl* context = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DEFAULT_BACKLOG")

#endif // _sun_security_ssl_SSLServerSocketFactoryImpl_h_