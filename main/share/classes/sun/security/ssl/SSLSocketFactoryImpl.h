#ifndef _sun_security_ssl_SSLSocketFactoryImpl_h_
#define _sun_security_ssl_SSLSocketFactoryImpl_h_
//$ class sun.security.ssl.SSLSocketFactoryImpl
//$ extends javax.net.ssl.SSLSocketFactory

#include <java/lang/Array.h>
#include <javax/net/ssl/SSLSocketFactory.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class Socket;
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

class SSLSocketFactoryImpl : public ::javax::net::ssl::SSLSocketFactory {
	$class(SSLSocketFactoryImpl, $NO_CLASS_INIT, ::javax::net::ssl::SSLSocketFactory)
public:
	SSLSocketFactoryImpl();
	void init$();
	void init$(::sun::security::ssl::SSLContextImpl* context);
	virtual ::java::net::Socket* createSocket() override;
	virtual ::java::net::Socket* createSocket($String* host, int32_t port) override;
	virtual ::java::net::Socket* createSocket(::java::net::Socket* s, $String* host, int32_t port, bool autoClose) override;
	virtual ::java::net::Socket* createSocket(::java::net::Socket* s, ::java::io::InputStream* consumed, bool autoClose) override;
	virtual ::java::net::Socket* createSocket(::java::net::InetAddress* address, int32_t port) override;
	virtual ::java::net::Socket* createSocket($String* host, int32_t port, ::java::net::InetAddress* clientAddress, int32_t clientPort) override;
	virtual ::java::net::Socket* createSocket(::java::net::InetAddress* address, int32_t port, ::java::net::InetAddress* clientAddress, int32_t clientPort) override;
	virtual $StringArray* getDefaultCipherSuites() override;
	virtual $StringArray* getSupportedCipherSuites() override;
	::sun::security::ssl::SSLContextImpl* context = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLSocketFactoryImpl_h_