#ifndef _javax_net_ssl_DefaultSSLSocketFactory_h_
#define _javax_net_ssl_DefaultSSLSocketFactory_h_
//$ class javax.net.ssl.DefaultSSLSocketFactory
//$ extends javax.net.ssl.SSLSocketFactory

#include <java/lang/Array.h>
#include <javax/net/ssl/SSLSocketFactory.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class Socket;
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class DefaultSSLSocketFactory : public ::javax::net::ssl::SSLSocketFactory {
	$class(DefaultSSLSocketFactory, $NO_CLASS_INIT, ::javax::net::ssl::SSLSocketFactory)
public:
	DefaultSSLSocketFactory();
	using ::javax::net::ssl::SSLSocketFactory::createSocket;
	void init$(::java::lang::Exception* reason);
	virtual ::java::net::Socket* createSocket() override;
	virtual ::java::net::Socket* createSocket($String* host, int32_t port) override;
	virtual ::java::net::Socket* createSocket(::java::net::Socket* s, $String* host, int32_t port, bool autoClose) override;
	virtual ::java::net::Socket* createSocket(::java::net::InetAddress* address, int32_t port) override;
	virtual ::java::net::Socket* createSocket($String* host, int32_t port, ::java::net::InetAddress* clientAddress, int32_t clientPort) override;
	virtual ::java::net::Socket* createSocket(::java::net::InetAddress* address, int32_t port, ::java::net::InetAddress* clientAddress, int32_t clientPort) override;
	virtual $StringArray* getDefaultCipherSuites() override;
	virtual $StringArray* getSupportedCipherSuites() override;
	::java::net::Socket* throwException();
	::java::lang::Exception* reason = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_DefaultSSLSocketFactory_h_