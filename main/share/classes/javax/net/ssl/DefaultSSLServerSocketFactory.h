#ifndef _javax_net_ssl_DefaultSSLServerSocketFactory_h_
#define _javax_net_ssl_DefaultSSLServerSocketFactory_h_
//$ class javax.net.ssl.DefaultSSLServerSocketFactory
//$ extends javax.net.ssl.SSLServerSocketFactory

#include <java/lang/Array.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class ServerSocket;
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class DefaultSSLServerSocketFactory : public ::javax::net::ssl::SSLServerSocketFactory {
	$class(DefaultSSLServerSocketFactory, $NO_CLASS_INIT, ::javax::net::ssl::SSLServerSocketFactory)
public:
	DefaultSSLServerSocketFactory();
	void init$(::java::lang::Exception* reason);
	virtual ::java::net::ServerSocket* createServerSocket() override;
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port) override;
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port, int32_t backlog) override;
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port, int32_t backlog, ::java::net::InetAddress* ifAddress) override;
	virtual $StringArray* getDefaultCipherSuites() override;
	virtual $StringArray* getSupportedCipherSuites() override;
	::java::net::ServerSocket* throwException();
	::java::lang::Exception* reason = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_DefaultSSLServerSocketFactory_h_